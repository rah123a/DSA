#include<iostream>
using namespace std;
template<typename T>
class darray{
	private;
	T *data;
	int capacity;
	int size;
	public:
	darray()
	{   
		data=new T(1);
		capacity=1;
		size=0;
	}
	void pushback(int d)
	{
	 if(size==capacity)
	 {
	 	T* newdata=new T[2*capacity];
	 	for(int i=0;i<d.size;i++)
	 	{
	 		newdata[i]=data[i];
		 }
		 delete []data;
		 data=newdata;
		 capacity=2*capacity;
	 }
	 data[size++]=d;
	 
	}
};
