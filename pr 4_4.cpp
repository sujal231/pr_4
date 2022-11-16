#include<iostream>
using namespace std;
class school{
	
	private:
		int id;
		char name[100];
		int roll;
		static int standard;
		int age;
		int contact;
		char institute_name[100];
		char address[100];
    public:
    	
	void setter();
	void getter();
	
};

class college{
	
	private:
		int id;
		char name[100];
		int roll;
		int standard;
		int age;
		int contact;
		static char institute_name[100];
		char address[100];
    public:
    	
	void setter();
	void getter();
	
};

int school::standard=12;
char college::institute_name[100]= "RNW";

void school::setter()
{
		cout<<"+++++++++ SCHOOL +++++++++"<<endl;
		cout<<"Enter id:-";
		cin>>id;
		cout<<"Enter name:-";
		cin>>name;
		cout<<"Enter roll:-";
		cin>>roll;
		cout<<"Enter age:-";
		cin>>age;
		cout<<"Enter contact:-";
		cin>>contact;
		cout<<"Enter address:-";
		cin>>address;
}
void school::getter()
{
		cout<<endl<<"+++++++++ SCHOOL +++++++++"<<endl;
		cout<<"id:-";
		cout<<id<<endl;
		cout<<"name:-";
		cout<<name<<endl;
		cout<<"roll:-";
		cout<<roll<<endl;
		cout<<"standard:-";
		cout<<school::standard<<endl;
		cout<<"age:-";
		cout<<age<<endl;
		cout<<"contact:-";
		cout<<contact<<endl;
		cout<<"address:-";
		cout<<address<<endl;
}

void college::setter()
{
		cout<<endl<<"+++++++++ COLLEGE +++++++++"<<endl;
		cout<<"Enter id:-";
		cin>>id;
		cout<<"Enter name:-";
		cin>>name;
		cout<<"Enter roll:-";
		cin>>roll;
		cout<<"Enter age:-";
		cin>>age;
		cout<<"Enter contact:-";
		cin>>contact;
		cout<<"Enter address:-";
		cin>>address;
}
void college::getter()
{
	
		cout<<endl<<"+++++++++ COLLEGE +++++++++"<<endl;
		cout<<endl<<"id:-";
		cout<<id<<endl;
		cout<<"name:-";
		cout<<name<<endl;
		cout<<"roll:-";
		cout<<roll<<endl;
		cout<<"age:-";
		cout<<age<<endl;
		cout<<"contact:-";
		cout<<contact<<endl;
		cout<<"institute_name:-";
		cout<<college::institute_name<<endl;
		cout<<"address:-";
		cout<<address<<endl<<endl;
}

main()
{
	school obj;

		obj.setter();
		obj.getter();
	
	college obj1;
		obj1.setter();
		obj1.getter();
		
}

