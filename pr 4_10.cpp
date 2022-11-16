#include<iostream>
using namespace std;
class student {
	private:
		int id;
		char name;
		int roll_number;
		char address[100];
		int contact;
		char school[100];
		int age;
	
	public:
		student()
		{
			
		cout<<"Enter id:-";
		cin>>id;
		cout<<"Enter name:-";
		cin>>name;
		cout<<"Enter roll_number:-";
		cin>>roll_number;
		cout<<"Enter address:-";
		cin>>address;
		cout<<"Enter contact:-";
		cin>>contact;
		cout<<"Enter school:-";
		cin>>school;
		cout<<"Enter age:-";
		cin>>age;

		cout<<"id:-";
		cout<<id<<endl;
		cout<<"name:-";
		cout<<name<<endl;
		cout<<"roll_number:-";
		cout<<roll_number<<endl;
		cout<<"address:-";
		cout<<address<<endl;
		cout<<"contact:-";
		cout<<contact<<endl;
		cout<<"school:-";
		cout<<school<<endl;
		cout<<"age:-";
		cout<<age<<endl;


		}
		
	
};
main()
{
	int n;
	cout<<"Enter the size:-";
	cin>>n;
	student obj[n];
}
