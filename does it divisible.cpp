#include <iostream>
using namespace std;
int main() {
	int num;
	cin >> num;    //Reading input from STDIN
	cout << "Input number is " << num << endl;
	int count=0	;
	if(num!=0)
	{
	
	int n= num%10;
	int m= num/10;
	int x=m%10;
	int y=m/10;
	
	if(n+x+y==n*x*y)
	{
		cout<<"divisible";
	}
	else
	cout<<"not";
	
	
}
}
