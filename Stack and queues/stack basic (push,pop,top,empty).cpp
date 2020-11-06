#include<iostream>
#include<climits>
using namespace std;
class stack
{
	int *data;
	int nextindex;
	int capacity;

public:
stack(int totalsize)
{
	data=new int[totalsize];
	nextindex=0;
	capacity=totalsize;
}
bool isempty()
{
	if(nextindex==0)
	{
		return true;
	}
	else {
		return false;
	}
	
}
int size(){
	return nextindex;
}
void push(int element)
{
	if(nextindex==capacity)
	{
		cout<<"stack is full"<<endl;
		return ;
	}
	data[nextindex]=element;
	nextindex++;
	
}
int pop(){
	if(isempty())
	{
		cout<<"stack is empty"<<endl;
		return INT_MIN;
	}
	nextindex--;
	return data[nextindex];
	
}
int top(){
	if(isempty())
	{
		cout<<"stack is empty"<<endl;
		return INT_MIN;
	}
	return data[nextindex-1];
}
};
using namespace std;
int main()
{
	stack s(3);
	s.push(10);
	s.push(30);
	cout<<s.top()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.top()<<endl;
}
