#include<iostream>
#include<algorithm>
using namespace std;
class ComplexNumbers {
   
   private:
   	int real;
   	int complex;
   	public:
    ComplexNumbers(int real,int complex)
    {
    	 this->real=real;
    	 this->complex=complex;
	}
	ComplexNumbers operator+(ComplexNumbers const &c2)
	{
		 int r=real+c2.real;
		 int c=complex+c2.complex;
		 this->real=r;
		 this->complex=c;
		 ComplexNumbers New(real,complex);
		 return New;
	}
	ComplexNumbers operator*(ComplexNumbers const &c2)
	{ 
	   int r=real*c2.real-(complex*c2.complex);
	   int c=real*c2.complex+complex*c2.real;
	   this->real=r;
	   this->complex=c;
	}
	void print()
	{ 
	   cout<<this->real<<" "<<"+"<<" "<<this->complex<<"i";
	}
    
};
int main() {
    int real1, imaginary1, real2, imaginary2;
    
    cin >> real1 >> imaginary1;
    cin >> real2 >> imaginary2;
    
    ComplexNumbers c1(real1, imaginary1);
    ComplexNumbers c2(real2, imaginary2);
    
    int choice;
    cin >> choice;
    
    if(choice == 1) {
        ComplexNumbers c3=c1+c2;
        c3.print();
    }
    else if(choice == 2) {
         ComplexNumbers c3=c1*c2;
        c3.print();
    }
    else {
        return 0;
		}
	}
