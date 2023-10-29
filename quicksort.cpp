#include<iostream>
using namespace std;
 
 int quicksort(int arr[], int low,int high)
 {
 	int pivot = arr[high];
 	int i = (low-1);
 	
 	
 	for(int j=low;j<=high-1;j++)
 	{
 		if(arr[j]>pivot)
 		{
 			i++;
 			swap(arr[i],arr[j]);
		 } 
	 }
	 swap(arr[i+1],arr[high]);
	 return (i+1);
	 
 }
 void quickSrt(int arr[], int low,int high)
 {
 	if(low<high)
 	{
	 
 	int qi=quicksort(arr,low,high);
 	
 	quickSrt(arr,low,qi-1);
 	quickSrt(arr,qi+1,high);
 	
 }
 }
 
 int main()
 {
 	int arr[] = { 10, 7, 8, 9, 1, 5 };
    int N = sizeof(arr) / sizeof(arr[0]);
    quickSrt(arr, 0, N - 1);
    cout << "Sorted array: " << endl;
    for (int i = 0; i < N; i++)
        cout << arr[i] << " ";
    return 0;
 }
