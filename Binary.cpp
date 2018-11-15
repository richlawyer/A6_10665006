#include <iostream>
using namespace std;


int main(int argc, char** argv) {
	
	int numbers[] = {2,4,6,8,10,12,14,16,18,20,22,24,28,30};
	int first = 0;
	int last = 13;
	int mid = 0;
	bool found = false;
	int figure;
	
	
	cout << "Enter the number you would like to search for: ";
	cin >> figure; 
	
	
	while (first <=last && !found)
	{
		mid = (first + last) / 2;
		if (figure > numbers[mid])
		{
			first = mid + 1;
		}
		else if (figure < numbers[mid])
		{
			last = mid - 1;
		}
		else
		{
			cout << " The value " << figure << " was found in position " << mid <<endl; 
			found = true;
		}
	}
	return 0;
}
