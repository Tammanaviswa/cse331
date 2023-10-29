#include <bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int l, int x)
{
	for(int i=0;i<l;i++)
	{
		if(arr[i]==x)
		return i;
		
		return -1;
	}
}
int main(void)
{
	int n;
	cout<<"Enter the no of elements of the array"<<endl;
	cin>>n;
	int arr[n];
	
	cout<<"Enter the "<< n<<" elements of the array" <<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
		int x ;
		cout<<"Enter the elements to find "<< endl;
	cin>>x;

	int l = sizeof(arr) / sizeof(arr[0]);
	int result = linearSearch(arr, l , x);
        (result == -1)
	     ? cout << "Element is present at index " << result
		: cout << "Element is not present in array";
		
	return 0;
}

