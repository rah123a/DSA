#include<iostream>
#include<vector>
using namespace std;
template<typename T>
class node{
	public:
	int data;
	vector<node<T>*> children;
	node(int data)
	{
		this->data=data;
	}
};
node<int>* takeinput()
{
	int data;
	cout<<"enter root data"<<endl;
	cin>>data;
	node<int>* root = new node<int>(data);
	int n;
	cout<<"enter the number of children of the root"<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		node<int>* child=takeinput();
		root->children.push_back(child);
	}
	return root;
}
void printtree(node<int>* root)
{
	if(root==NULL)
	{
		return;
	}
	cout<<root->data<<":";
	for(int i=0;i<root->children.size();i++)
	{
		cout<<root->children[i]->data<<", ";
	}
	cout<<endl;
	for(int i=0;i<root->children.size();i++)
	{
		printtree(root->children[i]);
	}
	cout<<endl;
}
int main()
{
	node<int>* root = takeinput();
	printtree(root);
}
