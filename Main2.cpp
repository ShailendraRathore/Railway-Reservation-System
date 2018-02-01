#include<iostream>
#include<time.h>
#include<string>
#include<fstream>
#include<cstdlib>

using namespace std;
//Methods Declarations
void login_menu();
void access_menu();
void loginf();
void createuser();


string get_date();
string username,usr,name;
string password,passw;
int tid,a;
char ch;
//Classes
class ticket
{
	string destination;
	string source;
	string date,time1;
	int r;
	public:
		ticket()
		{
          r=rand() % 9000 + 1000;
		}
	int TicketID();
	void book_ticket();
	void Cancel_ticket();
	void booking_log(string, string);
	string current_time();
}t;

//MAIN PROGRAM
int main()
{
	//DECLARATIONS
	

	login_menu();
	return 0;
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
		case 1: loginf();
			
			
			
				break;
		
		case 2: createuser();
			  
		 
		 	  	break;
		 
		 		
		
		default:
				
				cout<<"Invalid Option"; 		
	}
}

void loginf()
{
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


void createuser()
{
	               ofstream outFile;
		           outFile.open("Data.txt",ios::out|ios::app);

		       
		          cout<<"\nEnter username:";
		          cin>>usr;
		          outFile<<usr<<endl;

                          cout<<"\nEnter password:";
		          cin>>passw;
		          outFile<<passw<<endl;

		          outFile.close();
}
//Main Menu
void access_menu()
{	
    do
    {
	
	int opt;
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
			
			t.book_ticket();
				break;
		
		case 2:
		 
		 		break;
				 
		case 3:
		        	
			t.Cancel_ticket();
		    
				break;
		
		case 4:
		
				break;
				
		case 5:
				
		default:
				cout<<"Invalid Option"<<endl;				 				
	}
	cout<<"\nDo you want to continue:";
	cin>>ch;
   }while(ch=='y'||ch=='Y');
	
}

//Book Ticket
void ticket::book_ticket()
{
	
	
	cout<<"Enter Source"<<endl;
	cin>>source;
	
	cout<<"Enter Destination"<<endl;
	cin>>destination;
	
//	date = get_date();
	
	booking_log(source,destination);
}
void ticket::Cancel_ticket()

	 {
			       ifstream inFile("bookinglog.txt",ios::in);
		            ofstream onFile("temp.txt",ios::out);

		            cout<<"\nTicket ID:";
		            cin>>tid;

		           while(!inFile.eof())
		           {
		           inFile.read((char*)&t,sizeof(t));
                   int i=TicketID();

                   if(i!=tid)  
                   onFile.write((char*)&t,sizeof(t));
                   
		           }
                           cout<<"Ticket cancelled successfully!";
                           inFile.close();
                           onFile.close();
                           remove("bookinglog.txt");
                           rename("temp.txt","bookinglog.txt");
       }        
//Get Date
/*string get_date()
	{
	string s;
	cout<<"Enter journey date in format: dd/mm/yyyy"<<endl;
	scanf("%s",&s);
	printf("%s",s.c_str());
	return s;
	}*/
	
//Current Time
string ticket::current_time()
	{
		time_t _tm =time(NULL);
		struct tm * curtime = localtime ( &_tm );
		return asctime(curtime);
	}
	
//Booking Log
void ticket::booking_log(string source, string destination)
{
	fstream fout;
	fout.open("bookinglog.txt",ios::in|ios::app|ios::out);
	fout<<r<<" ";
	time1=current_time();
	fout<<source +" - "+ destination + " @ " +  " " +time1+ "\n";
}

int ticket::TicketID()
{
	return r;
}
