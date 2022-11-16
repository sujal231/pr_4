#include<iostream>

using namespace std;

class read{
	
	public:
		int id;
		int roll_no;
		char name[100];
		int maths_marks;
		int english_marks;
		int science_marks;
		int marks;
		int total_marks=300;
		void setter()
		{
			cout<<"Enetr id:-";
			cin>>id;
			cout<<"Enetr roll no:-";
			cin>>roll_no;
			cout<<"Enetr name:-";
			cin>>name;
			cout<<"Enetr maths_marks";
			cin>>maths_marks;
			cout<<"english_marks";
			cin>>english_marks;
			cout<<"science_marks";
			cin>>science_marks;

		}	
};

class print {

	read obj1;
	
	public:
		void getter()
		{
			obj1.setter();
			cout<<"Id:-"<<obj1.id<<endl;
			cout<<"Roll no:-"<<obj1.roll_no<<endl;
			cout<<"name:-"<<obj1.name<<endl;
			cout<<"maths_marks:-"<<obj1.maths_marks<<endl;
			cout<<"english_marks:-"<<obj1.english_marks<<endl;
			cout<<"science_marks:-"<<obj1.science_marks<<endl;
			
			obj1.marks=obj1.maths_marks+obj1.english_marks+obj1.science_marks;
			cout<<"marks:-"<<obj1.marks<<endl;			
			cout<<"total_marks:-"<<obj1.total_marks<<endl;
				
		
		}
};


main()
{
	print obj1;
	obj1.getter();
	
}
