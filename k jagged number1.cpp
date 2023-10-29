#include<iostream>
using namespace std;
int jaggednumbers(int a,int b)
{
	if(a%2==0)
	{
		return 2;
	}
	for(int i=3;i<=a;i=i+2)
	{
		if(a%i==0)
		{
			return i;
		}
	}
}
main()
{
	int a,b;
	cin>>a;
	cin>>b;
	int c=jaggednumbers(a,b);
	if(c>=b){
		cout<<a<<" "<<b<<"-rough number";
		
	}
	else{
		cout<<a<<" "<<b<<"-not rough number";
	}
}
