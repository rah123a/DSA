#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
 int t;
 cin>>t;
 while(t--)
 {
 	long long int ar,b,c;
cin>>ar>>b>>c;
long long int a[3];
a[0]=ar;
a[1]=b;
a[2]=c;
sort(a,a+3);

if(a[0]==a[1]&&a[0]==a[2]&&a[1]==a[2])
{
                 cout<<"0"<<endl;
}
else if(a[0]==a[1]&&a[0]<a[2])
{
         if(abs(a[2]-a[1])==1)
	{
		cout<<0<<endl;
	}
		else{
		 a[0]++;
         a[1]++;
         a[2]--;
         cout<<abs(2*(a[2]-a[1]));}
          
}
else if(a[1]==a[2]&&a[0]<a[2])
{
	if(abs(a[2]-a[0])==1)
	{
		cout<<0<<endl;
	}
	else{
	
         a[0]++;
         a[1]--;
         a[2]--;
         cout<<abs(2*(a[2]-a[0]));
     }
}
else{
                 a[0]++;
                 a[1]--;
                 a[2]--;
                 cout<<abs(a[2]-a[0])+abs(a[2]-a[1])+abs(a[1]-a[0])<<endl;
}

}
}

