#include<iostream>
using namespace std;
class Train{
	public:
		int train_number;
		char train_name[100];
		char source[100];
		char destination[100];
		int train_time;	
		
	void setter()
	{
		cout<<"Enter train number:- ";
		cin>>train_number;
		cout<<"Enter train name:- ";
		cin>>train_name;
		cout<<"Enter train source:- ";
		cin>>source;
		cout<<"Enter train destination:- ";
		cin>>destination;
		cout<<"Enter train time:- ";
		cin>>train_time;
	}
};

void searchdata(Train train[] , int a)
{
	int i;
	for(i=0; i<=2;i++)
	{
		if(a == train[i].train_number)
		{
			cout<<"train number:- ";
			cout<<train[i].train_number<<endl;
			cout<<"train name:- ";
			cout<<train[i].train_name<<endl;
			cout<<"train source:- ";
			cout<<train[i].source<<endl;
			cout<<"train destination:- ";
			cout<<train[i].destination<<endl;
			cout<<"train time:- ";
			cout<<train[i].train_time<<endl;

		}
	}
}

main()
{
	Train train[3];
	
	int i;
	for(i=0; i<=2 ;i++)
	{
		train[i].setter();
	}
	int search;
	cout<<"Enter train number:-";
	cin>>search;
	searchdata(train,search);
}


