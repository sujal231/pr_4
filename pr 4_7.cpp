#include<iostream>
using namespace std;
class maths{
	
	private:
		int a,b,c;
		

	public :
				
	maths(int a1,int b1,int c1)
	{
		a=a1;
		b=b1;
		c=c1;
	}
	
	int geta()
	{
		return a;
	}
	int getb()
	{
		return b;
	}
	int getc()
	{
		return c;
	}
};

main()
{
	maths s(10,20,30);
	cout<<s.geta()<<endl;
	cout<<s.getb()<<endl;
	cout<<s.getc()<<endl;

}

