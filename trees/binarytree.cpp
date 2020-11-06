#include<iostream>
using namespace std;
template<typename T>
class binarytree{
	int data;
	binarytree<T>* left;
	binarytree<T>* right;
	binarytree(T data)
	{
		this->data=data;
	}
};
