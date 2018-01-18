#include<iostream>
#include<time.h>
#include<string>

using namespace std;
//Methods Declarations
void login_main();
void access_menu();

//Classes
class ticket
{
	void book_ticket();
}

class date
{
	string get_date()
	{
	string s;
	cout<<"Enter journey date in format: dd/mm/yyyy"<<endl;
	getline(cin,s);
	printf("%s",s.c_str());
	return s;
	}
	string current_time()
	{
		time_t _tm =time(NULL );
		struct tm * curtime = localtime ( &_tm );
		return asctime(curtime);
	}
}

//MAIN PROGRAM
int main()
{
	//DECLARATIONS
	

	login_menu();
	access_menu();
	
}

//Login Menu Method
void login_menu()
{	
	int opt;
	cout<<"********\WELCOME TO IRCTC/********"<<endl;
	cout<<"Choose Your Option:"<<endl;
	cout<<"1. Login"<<endl;
	cout<<"2. Create User"<<endl;
	cin>>opt;
	
	switch(opt)
	{
		case 1:
			
				break;
		
		case 2:
		 
		 		break;
		
		default:
				
				cout<<"Invalid Option"; 		
	}
}

//Main Menu
void access_menu()
{	int opt;
	cout<<"Choose Your Option:"<<endl;
	cout<<"1. Book Ticket"<<endl;
	cout<<"2. Current Log"<<endl;
	cout<<"3. Cancel Ticket "<<endl;
	cout<<"4. Total Log"<<endl;
	cout<<"5. Sign Out"<<endl;
	cin>>opt;
	switch(opt)
	{
		case 1:
			
				break;
		
		case 2:
		 
		 		break;
				 
		case 3:
		    
				break;
		
		case 4:
		
				break;
				
		case 5:
				
		default:
				cout<<"Invalid Option"<<endl;				 				
	}
	
}

//Book Ticket
ticket::void book_ticket()
{
	sring destination;
	string source;
	string date;
	
	cout<<"Enter Source"<<endl;
	cin>>source;
	
	cout<<"Enter Destination"<<endl;
	cin>>destination;
	
	date = get_date();
	
	
}
