#include<iostream>
using namespace std;
int main()
{
	int max1=0,max2=0;
int a[5] = {2, 6, 4, 7, 8};
int min1=a[0],min2=a[1];
	for(int i=0;i<5;i++)
	{ 
	if(i%2==0){
		if(a[i]>max1)
		{
			max2=max1;
			max1=a[i];
		}
		else if(a[i]>max2&&a[i]<max1)
		{
			max2=a[i];
		}
	}}
	for(int i=2;i<5;i++)
	{ 
	if(i%2!=0){
		if(a[i]<min1)
		{
			min2=min1;
			min1=a[i];
		}
		else if(a[i]<min2&&a[i]>min1)
		{
			min2=a[i];
		}
		
	}
}
cout<<max2+min2<<endl;

}
