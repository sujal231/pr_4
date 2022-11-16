#include<iostream>
using namespace std;
class bank{
	
	public:
		char n;
		char s;
		
	void bank1()
	{
		cout<<"             -: BANK MANAGMENT SYSTEM :-             "<<endl;
		cout<<"----------------------------------------------------"<<endl;
		cout<<"           -: designed N  Ptogramed By :-          "<<endl;
		cout<<"----------------------------------------------------"<<endl;
		cout<<"                 SUJAL KOTADIYA"<<endl<<endl;
		cout<<"	          -:Trainer:-                      "<<endl;
		cout<<"----------------------------------------------------"<<endl;
		cout<<"		 SHIVAM JADHAV                      "<<endl;
		cout<<"      Press Any Key N Enter To Continue....."<<endl<<endl;
		cin>>n;
		
		switch(n){
			
			case 'a'...'z' :
				cout<<"------------------------------------------------------------"<<endl;
				cout<<"-: Press A To Log In As Administor Or S To Login As Staff :-"<<endl;
				cout<<"------------------------------------------------------------"<<endl<<endl;
				break;
				
			case 'A'...'Z':
				cout<<"------------------------------------------------------------"<<endl;
				cout<<"-: Press A To Log In As Administor Or S To Login As Staff :-"<<endl;
				cout<<"------------------------------------------------------------"<<endl<<endl;
				break;	
				
			default :
				cout<<"Error!";
		}
		
		cin>>s;
		
		switch(s){
			
			case 'a':
				cout<<"Aministrator";
				break;
			
			case 's':
				cout<<"------------------------------------------------------------"<<endl;
				cout<<"                    -:Welcome as STAFF:-"<<endl;
				cout<<"------------------------------------------------------------"<<endl;
				break;
				
				default :
				cout<<"Error!";	
		}
	}
	
	void setter();
	void money();
};

void bank::setter()
{
		
	char name[100];
	int account_number,phone_number;
	char email[100];
	cout<<"Enter The Name Of staff:-";
	cin>>name;
	cout<<"Enter The account number Of staff:-";
	cin>>account_number;
	cout<<"Enter The phone number Of staff:-";
	cin>>phone_number;
	cout<<"Enter The Email Of staff:-";
	cin>>email;
	
	cout<<endl<<endl<<"------------------------------------------------------------"<<endl;
	cout<<"The Name Of staff:-";
	cout<<name<<endl;
	cout<<"The account number Of staff:-";
	cout<<account_number<<endl;
	cout<<"The phone number Of staff:-";
	cout<<phone_number<<endl;
	cout<<"The Email Of staff:-";
	cout<<email<<endl;
	cout<<"------------------------------------------------------------"<<endl;
}

void bank::money()
{
	int s1,s2,s3,s,z1;
	
	cout<<"Press [1] to Deposite The money";
	cin>>s1;
	cout<<"Press [2] to Transfer The money";
	cin>>s2;
	cout<<"Press [3] to Withdraw The monney";
	cin>>s3;
	
	cout<<"------------------------------------------------------------"<<endl;

	cin>>s;
	
	switch (s)
	{
		case 1:
			{
					cout<<" _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _"<<endl;
   					cout<<"Your Ammount Is : "<<s1<<endl;
   					cout<<" will successfully deposited on your account"<<endl;
   					cout<<"Total Amount In Your Account : "<<s1-200<<endl;
   					cout<<" _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _"<<endl;
   					break;
			}
		
		case 2:
			{
					cout<<" _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _"<<endl;
				  	cout<<"Your Actual Ammount Is : "<<s2<<endl;
					cout<<"Your Ammount Will Successfully Transfered..."<<endl;
					cout<<"Total Amount In Your Account :  "<<s2<<endl;
					cout<<" _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _"<<endl;
					break;
			}
		case 3:
			{
					cout<<" _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _"<<endl;
 				  	cout<<"Your Actual Ammount Is : "<<s3<<endl;
				   	cout<<"Congrets Your Ammount Has  Withdraw Successfully....."<<endl;
				   	cout<<"Your Account Balance Is :"<<s3/2<<endl;
				   	cout<<" _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _"<<endl;
				   	break;
			}
	}
	
}



main()
{
	
	bank sz;
	sz.bank1();
	sz.setter();
	sz.money();



}
