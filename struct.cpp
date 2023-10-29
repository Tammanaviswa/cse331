#include<iostream>
using namespace std;
struct employee
{
	int id;
	string name;
	bool status;
	
};
int main()
{

 employee *p,emp;
	 p = &emp;
	
	cout<<"enter the id ";
	cin>>(*p).id;
	cout<<"enter the name ";
	cin>>(*p).name;
	cout<<"enter the status ";
	cin>>(*p).status;
}
