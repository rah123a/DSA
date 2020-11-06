#include<iostream>
#include<climits>
using namespace std;
template<typename T>
class node
{
	public:
	T data;
	node<T>* next;     
	node(T data)
	{
		this->data=data;
		this->next=NULL;
	}
};
template<typename T>
class stack
{
	node<T> *head;
	int size;

public:
stack()
{
	this->head=NULL;
	size=0;
}
bool isEmpty()
{
	if(head==NULL)
	return true;
	else{
		return false;
	}
	
}
int rsize(){
	return size;
}
void push(T element)
{
    node<T>* newnode=new node<T>(element);
    newnode->next=head;
    head=newnode;
    size++;
    	
}
int pop(){
	if(isEmpty())
	{
		cout<<"stack is empty"<<endl;
		return 0;
	}
	node<T>* ans=head;
	node<T>* temp=head;
	delete temp;
	head=head->next;
	size--;
	return (ans->data);
	
}
int top(){
	if(isEmpty())
	{
		cout<<"stack is empty"<<endl;
		return INT_MIN;
	}
	return (head->data);
}
};
using namespace std;
int main()
{
	stack<int> s;
	s.push(10);
	s.push(30);
	cout<<s.top()<<endl;
	cout<<s.rsize()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.top()<<endl;
}
