#include <iostream>
using namespace std;

int main()
{
	
	int size, a, b, temp, arr[50];
	
	cout << "Selection Sorting..." << endl;
	cout << "Enter array size: ";
	cin >> size;
	cout << "Enter the " << size << " elements: \n";
	
	for(a = 0; a < size; a++)
	{
		cin >> arr[a];
	}

	for(a = 0; a < size; a++)
	{
		for(b = a + 1; b < size; b++)
		{
			if(arr[a] > arr[b])
			{
				temp = arr[a];
				arr[a] = arr[b];
				arr[b] = temp;
			}
		}
	}
	
	cout << "\nAfter using selection sort...\n" << endl;
	cout << "Sorted data: ";
	for(a = 0; a < size; a++)
	{
		cout << arr[a] << " ";
	}
	
	return 0;
	
}
