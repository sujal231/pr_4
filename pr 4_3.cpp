#include<iostream>
using namespace std;
class hotal{
	private:
	int id;
	string name;
	string type;
	int staff_size;
	int  room_size;
	int establish_year;
	string address;
	string rating_type;
	string website;
	public:
		void setter(int,string,string,int,int,int,string,string,string);
		void getter();
};
void hotal::setter(int id,string name,string type,int staff_size,int  room_size,int establish_year,string address,string rating_type,string website)
{
	this->id=id;
	this->name=name;
	this->type=type;
	this->staff_size=staff_size;
	this->room_size=room_size;
	this->establish_year=establish_year;
	this->address=address;
	this->rating_type=rating_type;
	this->website=website;

}
void hotal::getter()
{
	cout<<"id:-";
	cout<<id<<endl;
	cout<<"name:-";
	cout<<name<<endl;
	cout<<"type:-";
	cout<<type<<endl;
	cout<<"staff_size:-";
	cout<<staff_size<<endl;
	cout<<"room_size:-";
	cout<<room_size<<endl;
	cout<<"establish_year:-";
    cout<<establish_year<<endl;
    cout<<"address:-";
	cout<<address<<endl;
	cout<<"reting type:-";
    cout<<rating_type<<endl;
    cout<<"website:-";
	cout<<website<<endl;
}
main()
{
	hotal obj;
	obj.setter(2,"mahadhev","s",1000,300,2,"surat","5 str","www.mahahev");
	obj.getter();
}
	
