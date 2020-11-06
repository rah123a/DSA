#include<iostream>
#include<climits>
using namespace std;
template<typename T>
class queue
{
	T *data;
	int nextindex;
	int frontindex;
	int size;
	int capacity;

public:
queue(int totalsize)
{
	data=new T[totalsize];
	nextindex=0;
	size=0;
	frontindex=-1;
	capacity=totalsize;
}
bool isempty()
{
	if(size==0)
	{
		return true;
	}
	else {
		return false;
	}
	
}
int rsize(){
	return size;
}
void push(T element)
{
	if(size==capacity)
	{
		cout<<"queue is full"<<endl;
		return ;
	}
	if(frontindex=-1)
	{
		frontindex=0;
	}
	data[nextindex]=element;
	nextindex=(nextindex+1)%capacity;
	size++;
	
}
T pop(){
	if(isempty())
	{
		cout<<"queue is empty"<<endl;
		return INT_MIN;
	}
	T ans=data[frontindex];
	size--;
	frontindex=(frontindex+1)%capacity;	
	return ans;
}
T top()
{
	if(isempty())
	{
		cout<<"queue is empty"<<endl;
		return INT_MIN;
	}
	return data[frontindex];
}
};
using namespace std;
int main()
{
	queue<float> s(3);
	s.push(10.3);
	s.push(30);
	cout<<s.top()<<endl;
	cout<<s.rsize()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.top()<<endl;
	cout<<s.rsize()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.pop()<<endl;
}
