#include<iostream>
using namespace std;
int main()
{
int a,b,x,y;
cout<<"enter a value of a:";
cin>>a;
cout<<"enter a value of b:";
cin>>b;
cout<<"enter a value of x:";
cin>>x;
cout<<"enter a value of y:";
cin>>y;


cout<<"By Using Prefix:"<<endl;
b=a++;
	cout<<"a= "<<a<<endl;
		cout<<"b= "<<b<<endl;
			cout<<"By Using Postfix:"<<endl;
			y=++x;
			cout<<"x= "<<x<<endl;
				cout<<"y= "<<y<<endl;
	
	
	
	return 0;
}
