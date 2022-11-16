#include<iostream>
using namespace std;
class web{
	public:
		
		int a;
		char b[100];
		
		web()
		{
			cout<<"Enter a=";
			cin>>a;
			cout<<"Enter b=";
			cin>>b;
			
		}
		~web()
		{
			cout<<a<<endl;
			cout<<b;
		}

};
main()
{
	web obj;
}
