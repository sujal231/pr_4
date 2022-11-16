#include<iostream>
using namespace std;


class market {
	
	private:
		int number;
		char item_name; 
		char quantity;
		int tax; 
		int discount;
		
	public:
		
		void setter();
		void getter();
};


class verify{
	public:
	void verf();
};

void verify::verf()
{
	char emali[100]= "sujal";
	char password[100]="123";
	char verify_emali[100],verify_password[100];
	
	cout<<"Enter verify emali:-";
	cin>>verify_emali;
	cout<<"Enter verify password:-";
	cin>>verify_password;
	
		
	if(  verify_emali[100] == emali[100] || verify_password[100] == password[100] )
	{
		cout<<"true"<<endl;
	}
	else
	{
		cout<<"false"<<endl;
	}
} 

void market::setter()
{
	cout<<endl<<"Enter number:-";
	cin>>number;
	cout<<"Enter item_name:-";
	cin>>item_name;
	cout<<"Enter quantity:-";
	cin>>quantity;
	cout<<"Enter tax:-";
	cin>>tax;
	cout<<"Enter discount:-";
	cin>>discount;
}

void market::getter()
{
	cout<<endl<<"number:-";
	cout<<number<<endl;
	cout<<"item_name:-";
	cout<<item_name<<endl;
	cout<<"quantity:-";
	cout<<quantity<<endl;
	cout<<"tax:-";
	cout<<tax<<endl;
	cout<<"discount:-";
	cout<<discount<<endl<<endl;
}
main()
{
	verify obj2;
	obj2.verf();
	int n,i;
	cout<<"enter the size";
	cin>>n;
	market obj[n];
	for(i=0;i<n;i++)
	{
	obj[i].setter();
    }
	for(i=0;i<n;i++)
	{
	obj[i].getter();
    }
}

