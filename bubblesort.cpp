#include <bits/stdc++.h>
using namespace std;


void bubbleSort(int arr[], int n)
{
	int i, j;
	bool swapped;
	for (i = 0; i < n - 1; i++) {
		swapped = false;
		for (j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
				swapped = true;
			}
		}

		
		if (swapped == false)
			break;
	}
}


void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		cout << " " << arr[i];
}


int main()
{
	int n;
	cout<<"Enter the no of elements of the array"<<endl;
	cin>>n;
	int arr[n];
	
	cout<<"Enter the "<< n<<" elements of the array" <<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int N = sizeof(arr) / sizeof(arr[0]);
	bubbleSort(arr, N);
	cout << "Sorted array: \n";
	printArray(arr, N);
	return 0;
}

