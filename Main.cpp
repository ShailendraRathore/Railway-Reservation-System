#include<iostream>
#include<time.h>

using namespace std;
//Methods Declarations
void login_main();
void access_menu();

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
