#include<iostream>
using namespace std;
class maths2;
class maths1{
	private:
	float num1,num2;
	friend void print(maths1,maths2);
	  
};

class maths2{
	private:
	float cube1,cube2,sum;
	friend void print(maths1,maths2);
};

void print(maths1 a,maths2 b)
{
	cout<<"Enter num1:-";
	cin>>a.num1;	
	cout<<"Enter num2:-";
	cin>>a.num2;
	b.cube1=a.num1*a.num1*a.num1;
	b.cube2=a.num2*a.num2*a.num2;
	b.sum=b.cube1+b.cube2;
	cout<<"cube1:-"<<b.cube1<<endl;
	cout<<"Cube2:-"<<b.cube2<<endl;
	cout<<"sum:-"<<b.sum;
}
main()
{
	maths1 obj1;
	maths2 obj2;
	
	print(obj1,obj2);
}
 
