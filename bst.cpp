#include<iostream>
using namespace std;

class node{
	public:
		int data;
		node*left;
		node*right;
		node*root;
		
		node(int d){
			this->data=d;
			this->root=NULL;
			this->left=NULL;
			this->right=NULL; 
		}
		
};
node*binarytree(node*root)
{
	cout<<"Enter the data: "<<endl;
	int data;
	cin>>data;
	root=new node(data);
	if(data<root->data)
	{
		data = root->left->data;
	cout<<"Enter the data in the left node"<< endl;
		
	}
	if(data>root->data)
	{
		data=root->right->data;
		cout<<"Enter the data in the left node"<< endl;
	}

	}
	int main()
	{
		int data;
		node*root;
	cout<<"Enter the data"<<endl;
	cin >>data;
	cout<<"Enter the data \n"<<data<<endl;
	for(data=-1;data>100;data++){
		if(data<root->data){
	
	cout<<"Enter data for insertion in the left"<<data<<endl;
}

else
cout<<"Enter data for insertion in the right"<<data<<endl;
}
}
	
