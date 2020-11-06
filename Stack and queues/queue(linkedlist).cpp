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
class queue
{
	node<T> *head;
	node<T> *tail;
	int size;

public:
queue()
{
	this->head=NULL;
	this->tail=NULL;
	size=0;
}
bool isEmpty()
{
	if(size==0)
	return true;
	else{
		return false;
	}
	
}
int getSize(){
	return size;
}
void enqueue(T element)
{
    node<T>* newnode=new node<T>(element);
    if(head==NULL)
    {
    head=newnode;
    tail=newnode;
	}
	else{
   
    tail->next=newnode;
    tail=newnode;
}
size++;
    	
}
T dequeue(){
	if(isEmpty())
	{
	
		return 0;
	}
	T ans=head->data;
	node<T>* temp=head;
	head=head->next;
	delete temp;
	size--;
	return (ans);
	
}
T front(){
	if(isEmpty())
	{
		return INT_MIN;
	}
	return (head->data);
}
};
using namespace std;
int main()
{
	queue<int> s;
	s.enqueue(10);
	s.enqueue(30);
	cout<<s.front()<<endl;
	cout<<s.getSize()<<endl;
	cout<<s.dequeue()<<endl;
	cout<<s.dequeue()<<endl;
}
