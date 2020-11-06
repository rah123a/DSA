#include <climits>

#include<bits/stdc++.h>
using namespace std;

class Stack{
	public:
		int *data;
		int nextindex;
		int capacity;
		
		Stack(){
			this->data=new int[4];
			capacity=1;
			nextindex=0;
		}
		
		void push(int x){
			if(nextindex==capacity){
				int *newdata=new int[capacity*2];
				for(int i=0;i<capacity;i++){
					newdata[i]=data[i];
				}
				delete data;
				data=newdata;
				data[nextindex++]=x;
			}
			else{
				data[nextindex++]=x;
			}
		}
		bool isempty(){
			return nextindex==0;
		}
		int size(){
			return nextindex;
		}
		void pop(){
			if(isempty()){
				cout<<"stack is empty\n";
				return;
			}
			nextindex--;
		}
		int top(){
			return data[nextindex-1];
		}
		
		
};

int main(){
	
	Stack s1;
	s1.push(4);
	cout<<s1.top()<<endl;
	s1.push(1);
	cout<<s1.top()<<endl;
	s1.push(2);
	s1.pop();
	cout<<s1.top()<<endl;
}

