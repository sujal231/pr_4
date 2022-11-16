#include<iostream>
using namespace std;
class india{
	public:
		char states_name[100];
		int city;
		int airport;
		static char electoraln_party[100];
		static char language[100];
		static char costume[100];
		static char food[100];
		int national_highway_no;
		
		static void getdata()
		{

			cout<<"electoraln_party:-";
			cout<<electoraln_party<<endl;
			cout<<"language:-";
			cout<<language<<endl;
			cout<<"costume:-";
			cout<<costume<<endl;
			cout<<"food:-";
			cout<<food<<endl;
		}
		void setter();
		void getter();
};

char india::electoraln_party[100]="bhajap";
char india::language[100]="hindi";
char india::costume[100]="pents shat";
char india::food[100]="rotali";

void india::setter()
{
	cout<<endl<<"states_name:-";
	cin>>states_name;
	cout<<"city:-";
	cin>>city;
	cout<<"airport:-";
	cin>>airport;
	cout<<"national_highway_no:-";
	cin>>national_highway_no;
}
void india::getter()
{
		cout<<endl<<"states_name:-";
		cout<<states_name<<endl;
		cout<<"city:-";
		cout<<city<<endl;
		cout<<"airport:-";
		cout<<airport<<endl;
		cout<<"national_highway_no:-";
		cout<<national_highway_no<<endl;
}
main()
{
	int i,n;
	cout<<"Enter sizez:-";
	cin>>n;
	
	india obj[n];
	for(i=0;i<n;i++)
	{
		obj[i].setter();
	}
	
	for(i=0;i<n;i++)
	{
		obj[i].getter();
		obj[i].getdata();
	}
	
}
	
