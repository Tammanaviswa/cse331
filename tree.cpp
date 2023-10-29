#include<iostream>
#include<queue>
using namespace std;

class node{
	public:
		int data;
		node*left;
		node*right;
		
		node(int d){
			this->data=d;
			this->left=NULL;
			this->right=NULL; 
		}
		
};

node*buildtree(node*root)
{
	cout<<"Enter the data: "<<endl;
	int data;
	cin>>data;
	root=new node(data);
	
	if(data == -1){
		return NULL;
	}
	}
int main()
{
	int data;
	cout<<"Enter the data"<<endl;
	cin >>data;
	cout<<"Enter the data \n"<<data<<endl;
	for(data=-1;data<100;data){
	
	if(data != -1){
	
	cout<<"Enter data for insertion in the left"<<data<<endl;
}


 else
cout<<"Enter data for insertion in the right"<<data<<endl;
}

}
