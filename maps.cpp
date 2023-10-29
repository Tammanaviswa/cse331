#include<iostream>
#include<map>
using namespace std;

main()
{
	map<char,int>m;
	m.insert(pair<char,int>('A',100));
	m.insert(pair<char,int>('B',80));
	m.insert(pair<char,int>('C',60));
	m.insert(pair<char,int>('D',90));
	
	
	//map<char,int>m2;
	map<char,int>m2(m.begin(),m.end());//Insert the element from map m to map m1
	
	map<char,int>::iterator itr1;
	for(itr1=m.begin();itr1!=m.end();itr1++)
	{
		cout<<itr1->first<<"\t"<<itr1->second<<endl;
	}
	m2.erase(m2.begin(),m2.find('C'));// remove all the elements upto the element with specific key
	// remove the element with specific key
	m2.erase('D');   
	map<char,int>::iterator itr;
	for(itr=m2.begin();itr!=m2.end();itr++)
	{
		cout<<itr->first<<"\t"<<itr->second<<endl;
	}
	// remove the element with specific key
	m2.erase('D');
	
	
}

