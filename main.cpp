#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;        

void mainMenu();             // main menu declaration

class TicketBooking{         // Ticket booking class
    public:
      
     TicketBooking(){        // default constructor
         mainMenu();
     }

};

class CustomerDetails{                      // for customer details
    public:
        static string name, gender;
        static int cID;                // properties/ attributes                    
        int phoneNo;
        int age;
        string add;
        char arr[100];
        // setter function
        void setDeatils(){                                // Setter methods             
            cout<<"\n Please enter your customer ID:";
            cin>>cID;
            cout<<"\n Please enter your name :";
            cin.ignore();               // clears input buffer
            getline(cin,name);           
            cin.ignore();
            cout<<"\n Please enter your age:";
            cin>>age;
            cout<<"\n Please enter your address:";
            cin>>add;
            cout<<"\n Gender :";
            cin>>gender;
            cout<<"Your details are saved with us...\n"<<endl;
        }

};
int CustomerDetails::cID;                          // static member declaration   :     
string CustomerDetails::name;
string CustomerDetails::gender;

class booking{                            // class for movie ticket
    public:
        static char choice;                     // attributes
        char choice1;                           // for specific movie show
        char back;
        static float charges;
        void movieShows(){
            string theatres[]={"Cinepolis", "PVR", "iNOX", "AU", "Mirage Cinemas"};  
            for(int i=0;i<5;i++){                                       // for printing options
                cout<<(i+1)<<". Show at "<<theatres[i]<<endl;
            }
            cout<<"\nWelcome to the Movie Ticket System!"<<endl;
            cout<<"Press the number of the theatre at which you want to book the show: ";
            cin>>choice;                       // static
            switch(choice){
                case '1':{
                    cout<<"___________Welcome to Cinepolis_________\n"<<endl;
                    cout<<"Your comfort is our priority. Enjoy the Show!"<<endl;
                    cout<<"Following are the Shows\n"<<endl;
                    cout<<"1. CNP - 100"<< endl;
                    cout<<"\t01-01-2023  1:00PM 2.5hrs Rs.280"<<endl;
                    cout<<"2. CNP - 600"<< endl;
                    cout<<"\t01-01-2023  6:00PM 2.5hrs Rs.350"<<endl;
                    cout<<"3. CNP - 930"<< endl;
                    cout<<"\t01-01-2023  9:30PM 2.5hrs Rs.380"<<endl;

                    cout<<"Select the show you want to book: "<<endl;
                    cin>>choice1;
                    if(choice1=='1'){
                        charges=280;
                        cout<<"You have successfully booked the show CNP - 100"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;
                    }
                    else if(choice1=='2'){
                        charges=350;
                        cout<<"You have successfully booked the show CNP - 600"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;
                    }
                    else if(choice1=='3'){
                        charges=380;
                        cout<<"You have successfully booked the show CNP - 930"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;
                    }
                    else{
                        cout<<"Invalid input, shifting to the previous menu"<<endl;
                        movieShows();
                    }
                    cout<<"Press any key to go back to main menu "<<endl;       
                    cin>>back;
                    break;
                }
                case '2':{
                     cout<<"___________Welcome to PVR Cinemas_________\n"<<endl;
                    cout<<"Your comfort is our priority. Enjoy the show!"<<endl;
                    cout<<"Following are the shows\n"<<endl;
                    cout<<"1. PVR - 1200"<< endl;
                    cout<<"\t01-01-2023  12:00PM 3hrs Rs.210"<<endl;
                    cout<<"2. PVR - 400"<< endl;
                    cout<<"\t01-01-2023  4:00AM 3hrs Rs.280"<<endl;
                    cout<<"3. PVR - 900"<< endl;
                    cout<<"\t01-01-2023  9:00PM 3hrs Rs.400"<<endl;

                    cout<<"Select the show you want to book: "<<endl;
                    cin>>choice1;
                    if(choice1=='1'){
                        charges=210;
                        cout<<"You have successfully booked the show PVR - 1200"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;
                    }
                    else if(choice1=='2'){
                        charges=280;
                        cout<<"You have successfully booked the show PVR - 400"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;
                    }
                    else if(choice1=='3'){
                        charges=400;
                        cout<<"You have successfully booked the show PVR - 900"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;
                    }
                    else{
                        cout<<"Invalid input, shifting to the previous menu"<<endl;
                        movieShows();
                    }
                    cout<<"Press any key to go back to main menu "<<endl;
                    cin>>back;
                    break;

                }
                case '3':{
                     cout<<"___________Welcome to iNOX_________\n"<<endl;
                    cout<<"Your comfort is our priority. Enjoy the show!"<<endl;
                    cout<<"Following are the shows\n"<<endl;
                    cout<<"1. INX - 1100"<< endl;
                    cout<<"\t01-01-2023  11:00AM 2.5hrs Rs.180"<<endl;
                    cout<<"2. INX - 500"<< endl;
                    cout<<"\t01-01-2023  5:00PM 2.5hrs Rs.220"<<endl;
                    cout<<"3. INX - 800"<< endl;
                    cout<<"\t01-01-2023  8:00PM 2.5hrs Rs.240"<<endl;

                    cout<<"Select the show you want to book: "<<endl;
                    cin>>choice1;
                    if(choice1=='1'){
                        charges=180;
                        cout<<"You have successfully booked the show INX - 1100"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;
                    }
                    else if(choice1=='2'){
                        charges=220;
                        cout<<"You have successfully booked the show INX - 500"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;
                    }
                    else if(choice1=='3'){
                        charges=240;
                        cout<<"You have successfully booked the show INX - 800"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;
                    }
                    else{
                        cout<<"Invalid input, shifting to the previous menu"<<endl;
                        movieShows();
                    }
                    cout<<"Press any key to go back to main menu "<<endl;
                    cin>>back;
                    break;

                }
                case '4':{
                     cout<<"___________Welcome to AU Cinemas_________\n"<<endl;
                    cout<<"Your comfort is our priority. Enjoy the show!"<<endl;
                    cout<<"Following are the shows\n"<<endl;
                    cout<<"1. AUC - 200"<< endl;
                    cout<<"\t01-01-2023  2:00PM 2.5hrs Rs.160"<<endl;
                    cout<<"2. AUC - 530"<< endl;
                    cout<<"\t01-01-2023  5:30PM 2.5hrs Rs.190"<<endl;
                    cout<<"3. AUC - 700"<< endl;
                    cout<<"\t01-01-2023  7:00PM 2.5hrs Rs.220"<<endl;

                    cout<<"Select the show you want to book: "<<endl;
                    cin>>choice1;
                    if(choice1=='1'){
                        charges=160;
                        cout<<"You have successfully booked the show AUC - 200"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;
                    }
                    else if(choice1=='2'){
                        charges=190;
                        cout<<"You have successfully booked the show AUC - 530"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;
                    }
                    else if(choice1=='3'){
                        charges=220;
                        cout<<"You have successfully booked the show AUC - 700"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;
                    }
                    else{
                        cout<<"Invalid input, shifting to the previous menu"<<endl;
                        movieShows();
                    }
                    cout<<"Press any key to go back to main menu "<<endl;
                    cin>>back;
                    break;

                }
                case '5':{
                     cout<<"___________Welcome to Mirage Cinemas_________\n"<<endl;
                    cout<<"Your comfort is our priority. Enjoy the show!"<<endl;
                    cout<<"Following are the shows\n"<<endl;
                    cout<<"1. MGC - 100"<< endl;
                    cout<<"\t01-01-2023  1:00PM 3hrs Rs.200"<<endl;
                    cout<<"2. MGC - 400"<< endl;
                    cout<<"\t01-01-2023  4:00PM 3hrs Rs.220"<<endl;
                    cout<<"3. MGC - 900"<< endl;
                    cout<<"\t01-01-2023  9:00PM 3hrs Rs.240"<<endl;

                    cout<<"Select the show you want to book: "<<endl;
                    cin>>choice1;
                    if(choice1=='1'){
                        charges=200;
                        cout<<"You have successfully booked the show MGC - 100"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;
                    }
                    else if(choice1=='2'){
                        charges=220;
                        cout<<"You have successfully booked the show MGC - 400"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;
                    }
                    else if(choice1=='3'){
                        charges=240;
                        cout<<"You have successfully booked the show MGC - 900"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;
                    }
                    else{
                        cout<<"Invalid input, shifting to the previous menu"<<endl;
                        movieShows();
                    }
                    cout<<"Press any key to go back to main menu "<<endl;
                    cin>>back;
                    break;

                }
                
                default :{
                    cout<<"Invalid Input, shifting to the main menu !"<<endl;
                    mainMenu();
                    break;
                }
            }
            mainMenu();
        }

};


float booking::charges;                       // static member declaration
char booking::choice;


class ticket: public booking, CustomerDetails{               // inherited classs  ,,,, dCustomerDetails:customer          ,,, booking:movie show
    public:

    // function to save ticket in txt file
      void Bill(){                                         // to create a bill
          string cinema="";
          ofstream outf("records.txt");                    // output to txt file:   writing in txt file:  ofstream:class    outf:object
          outf<<"_______Movie Ticket Booking________"<<endl;     // >> stream insertion op,,,,,,,,, << stream extraction op
          outf<<"_____________Ticket________________"<<endl;
          outf<<"___________________________________"<<endl;
          outf<<"Customer ID: "<<CustomerDetails::cID<<endl;              // syntax for using static members ,, for customer details
          outf<<"Customer Name: "<<CustomerDetails::name<<endl;
          outf<<"Customer Gender: "<<CustomerDetails::gender<<endl;
          outf<<"\tDescription "<<endl<<endl;

          if(booking::choice=='1'){
              cinema="Cinepolis";
          }
          else if(booking::choice=='2'){
              cinema="PVR";
          }
          else if(booking::choice=='3'){
              cinema="iNOX";
          }
          else if(booking::choice=='4'){
              cinema="AU Cinemas";
          }
          else if(booking::choice=='5'){
              cinema="Mirage Cinemas";
          }
          
              outf<<"Cinema\t\t"<<cinema<<endl;        // static members for show details
              outf<<"Ticket cost: \t\t"<<booking::charges<<endl;
          
          outf.close();     // to close the file


      }

      // function to print ticket in console
      void dispBill()                      
      {
          ifstream ifs("records.txt");        // ifstream: input from txt file, reading from txt file,,,, ifstream:class,,,ifs:object
          {
              if(!ifs){                                  
                  cout<<"File error!"<<endl;
              }
              while(!ifs.eof()){
                  ifs.getline(arr, 100);
                  cout<<arr<<endl;
              }
          }
          ifs.close();        // for closing the file
      }
};

void mainMenu(){                             // global function
    char lchoice;
   // int schoice;
    char back;

    cout<<"\t            Movie Ticketing System\n      "<<endl;
    cout<<"\t___________________Main Menu_________________"<<endl;


    cout<<"\t_____________________________________________"<<endl;
    cout<<"\t|\t\t\t\t\t\t|"<<endl;
    cout<<"\t|\t Press 1 to Add Customer Details          \t"<<endl;
    cout<<"\t|\t Press 2 for Ticket Booking          \t"<<endl;
    cout<<"\t|\t Press 3 for Ticket and Charges           \t"<<endl;
    cout<<"\t|\t Press 4 to Exit                          \t"<<endl;
    cout<<"\t_____________________________________________"<<endl;

    cout<<"Enter the coice : ";
    cin>>lchoice;


    CustomerDetails d;
    booking b;
    ticket t;

    switch (lchoice)
    {
     case '1':{
          cout<<"__________Customers__________\n"<<endl;
         d.setDeatils();       // setter function
         cout<<"Press any key to go back to Main Menu  ";
         cin>>back;
         if(back){
            mainMenu();
            }
          else{
            mainMenu();
          } break;
       }
          case '2':{
               cout<<"_________Book a ticket using this system_____\n"<<endl;
               b.movieShows();
               break;
        
        }   
                case '3':{
                cout<<"___________GET YOUR TICKET______\n"<<endl;
                t.Bill();       // setter function : to save tckt in txt file
                cout<<" Your ticket is printed, you can collect it \n"<<endl;
                cout<<"Press any key to display your ticket ";
                cin>>back;
                if(back)
                {
                    t.dispBill();                // getter function: gets tckt from txt file
                    cout<<"Press any key to go back to main menu: ";
                    cin>>back;
                    if(back){
                        
                     mainMenu();
                      }
                     else{
                    mainMenu();
                      }
                }
                else{
                    mainMenu();
                }
                break;
         }
          case '4':{
              cout<<"\n\n\t_________Thank-You__________"<<endl;
              break;
          }
          default :{
              cout<<"Invalid input, Please try again!\n"<<endl;
              mainMenu();
              break;
          }
    }


}

int main(){

    TicketBooking obj;
    return 0;
}