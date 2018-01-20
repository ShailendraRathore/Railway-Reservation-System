#include<iostream>
#include<time.h>
#include<string>
#include<fstream>


using namespace std;

string username,usr,name,t;
string password,passw,tid;


void login_menu();
void access_menu();
int main()
{
	//DECLARATIONS
	

	login_menu();
	
	
}

//Login Menu Method
void login_menu()
{	
	int opt;
	cout<<"********|WELCOME TO IRCTC|********"<<endl;
	cout<<"Choose Your Option:"<<endl;
	cout<<"1. Login"<<endl;
	cout<<"2. Create User"<<endl;
	cin>>opt;
	
	switch(opt)
	{
		case 1:{
			   ifstream inFile;
		       inFile.open("Data.txt",ios::in);
		       cout<<"\nEnter username:";
		       cin>>username;
		      

               cout<<"\nEnter password:";
		       cin>>password;
		      
               while(!inFile.eof())
               {

               	inFile>>usr;
               	inFile>>passw;         

               	if(usr==username&&passw==password)
               	access_menu();
               }

                inFile.close();
			}
				break;
		
		case 2:{
			   ofstream outFile;
		       outFile.open("Data.txt",ios::out|ios::app);

		       
		 cout<<"\nEnter username:";
		       cin>>usr;
		       outFile<<usr<<endl;

               cout<<"\nEnter password:";
		       cin>>passw;
		       outFile<<passw<<endl;

		       outFile.close();
		 
		 	  }	break;
		
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
				 
		case 3: {
			    ifstream inFile("bookinglog.txt",ios::in);
		        ofstream onFile("temp.txt",ios::out);

		       cout<<"\nTicket ID:";
		       cin>>tid;

		      while(getline(inFile,t))
		      {
		      	if(tid!=t)
		      		onFile<<t<<endl;
		      }
               cout<<"Ticket cancelled successfully!";
               inFile.close();
               onFile.close();
               remove("bookinglog.txt");
               rename("temp.txt","bookinglog.txt");
		        }
			   break;
		
		case 4:
		
				break;
				
		case 5:
				
		default:
				cout<<"Invalid Option"<<endl;				 				
	}
	
}
