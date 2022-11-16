#include<iostream>
using namespace std;

class employee{
	
	public :
	int id;
	char name[100];
	char role[100];
	int salary;
	int experience;
	char address[100];
	char email[100];
	int contact;
	
	void setter();
	void getter();	
};

void employee::setter()
{
	cout<<"Enter id:-";
	cin>>id;
	cout<<"Enter name:-";
	cin>>name;
	cout<<"Enter role:-";
	cin>>role;
	cout<<"Enter salary:-";
	cin>>salary;
	cout<<"Enter experience:-";
	cin>>experience;
	cout<<"Enter address:-";
	cin>>address;
	cout<<"Enter email:-";
	cin>>email;
	cout<<"Enter contact:-";
	cin>>contact;
	
}

void employee::getter()
{
	cout<<"id:-";
	cout<<id<<endl;
	cout<<"name:-";
	cout<<name<<endl;
	cout<<"role:-";
	cout<<role<<endl;
	cout<<"salary:-";
	cout<<salary<<endl;
	cout<<"experience:-";
	cout<<experience<<endl;
	cout<<"address:-";
	cout<<address<<endl;
	cout<<"email:-";
	cout<<email<<endl;
	cout<<"contact:-";
	cout<<contact<<endl;
	
}
	
main()
{
	int n;
	int i;
	cout<<"Enter employee number :-";
	cin>>n;
	employee obj[10];
	for(i=0;i<n;i++)
	{
		obj[i].setter();
	}
	
	for(i=0;i<n;i++)
	{
		obj[i].getter();
	}
	
}

