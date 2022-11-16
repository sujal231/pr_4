#include<iostream>
using namespace std;
class building{
	public :
	int a;
	char b[100];
	
	building()
	{
		cout<<"Enter a=";
		cin>>a;
		cout<<"Enter b=";
		cin>>b;
		
		cout<<a<<endl;
		cout<<b;
	}
};
main()
{
	building obj;
	
}
