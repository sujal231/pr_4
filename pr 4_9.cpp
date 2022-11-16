#include<iostream>
using namespace std;
class maths{
	
	
		double a,b,c;
		double  multiple ,addition, division,miuns;
		double  all_multiple ,all_addition, all_division,all_miuns;

	public :
				
	maths(double a1,double b1, double c1)
	{
	
		a=a1;
		b=b1;
		c=c1;
	
	}
	
	void maths1()
	{
	
		addition=a+b+c;
		miuns=a-b-c;
		multiple=a*b*c;
		division=a/b/c;
		
		cout<<endl<<endl<<"addition="<<addition<<endl<<"miuns="<<miuns<<endl<<"multiple="<<multiple<<endl<<"division="<<division<<endl<<endl;
		
		all_addition=multiple+addition+division+miuns;
		all_miuns=multiple-addition-division-miuns;
		all_multiple=multiple*addition*division*miuns;
		all_division=multiple/addition/division/miuns;
		
		
		cout<<"All addition="<<all_addition<<endl<<"All miuns="<<all_miuns<<endl<<"All multiple="<<all_multiple<<endl<<"All division="<<all_division;
	}
	
};

main()
{
	maths s(2.31,2,100);
	s.maths1();
}

