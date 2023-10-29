#include <bits/stdc++.h>
using namespace std;
struct Node
{
int info;
Node *left,*right;
};
Node *newNode(int item)
{
Node *nptr=new Node;
nptr->info=item;
nptr->left=NULL;
nptr->right=NULL;
return nptr;
}
Node *insert(Node *root,int info)
{
Node *nptr=newNode(50);
Node*ptr=root;
Node*pptr=NULL;
while(ptr!=NULL)
{
pptr=ptr;
if(info<ptr->info)
ptr=ptr->left;
else
ptr=ptr->right;
}
if(pptr==NULL)
pptr=nptr;
else if(info<pptr->info)
pptr->left=nptr;
else
pptr->right=nptr;
return pptr;
}




main()
{
Node *root=NULL;
root=insert(root,50);
insert(root,30);
insert(root,20);
insert(root,40);
insert(root,70);
insert(root,60);
insert(root,80);
}

void inorder(Node* root)
{
	if (root == NULL)
		return;

	inorder(root->left);
	display << root->info << " ";
	inorder(root->right);
}
