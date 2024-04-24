#include <iostream>
#include<string>
#include<fstream>
#include <queue>

using namespace std;
class events
{
    private:

            string name;
            string place; 
            string time;
            string date; 
            int ticketsNumber;
    public:
             events ()
             {

             }
             events( string Name, string Place, string Time,string Date, int TicketsNumber)
            {
                
                place=Place;
                ticketsNumber=TicketsNumber;
                name=Name;
                date=Date;
                time=Time;
            }

             void setname(string name1)
            {
                name=name1; 

            }
             void setplace(string place1)
            {
                place=place1;
            }   
             void settime(string time1)
            {
                time=time1;
            }
             void setdate(string date1)
            {
                date=date1;
            }
            void setticketsNumber(int ticketsNumber1)
            {
                 ticketsNumber=ticketsNumber1;
            }

            string getname()
            {
                return name;
            }
             string getplace()
            {
                return place;
            }
             string gettime()
            {
                return time;
            }  
             string getdate()
            {
                return date;
            }
            int getticketsnumber()
            {
                return ticketsNumber;
            }   
           
             
            void display_Event()
            {
                cout<<"the event name is :\n"<<name<<endl;
                cout<<"the event place is :\n"<<place<<endl;
                cout<<"the events date is : \n"<<date<<endl;
                cout<<" the events time is: \n"<<time<<endl;
                cout<<"the number of tickets available is:\n"<<ticketsNumber<<endl;

            }




};
class Customer
{
    private:
    int Id;
    string name;
    string email;
    int Count=0; 
    public:
    Customer( int ID, string Name,string Email,int & count);
    Customer( string Name,string Email);
     void setname(string name1);
     void setemail(string email1);
     void setid(int id1);
     string getname();
     string getemail();
     int getid();
     //int IdCreator(int& count);
     void displayCustomers()
     {
        cout<<" the customer "<<Count<< " id is :\n "<<Id<<endl;
        cout<<" the customer "<<Count<< " name is :\n"<<name<<endl;
        cout<<" the customer "<<Count<< " email is :\n"<<email<<endl; 
     }

};

class tickets 
{
    private:
   
    string Name;
    string Email;
    int customerid=0;
    int Seat=0; 
   
     
                                                                                                                    
    public:
    tickets();
    tickets(string name,string email,int customerId,int seat);
    void setname(string customerName1);
    void setemail(string email1);
    void setcustomerid(int customerid1);
    void setseat(int seat1);
    string getname()
    {
        return Name;
    }
    string getemail()
    {
        return Email;
    }
    int getcustomerid()
    {
        return customerid;
    }
    int getseat()
    {
        return Seat;
    }

    void ticketDisplay();
    //void setTicketsId(int ticketId1);
    
    
    
    
    

  
};
int main()
{
   queue<int> ticketqueue;
    int customerid=0;
    int counter=0;
   
    int count2=0;
    int count1=1;
    events Amr1,Amr2; 
    int count=10; 
    Amr1.setname("Amr Diab concert 1");
    Amr1.setplace("cairo");
   Amr1.setdate("12 sep 2023");
   Amr1.settime("3:50");
    Amr1.setticketsNumber(2);
    Amr2.setname("Amr Diab concert 2");
    Amr2.setplace("Giza");
    Amr2.setdate("23 nov 2045");
    Amr2.settime("8:50");
    Amr2.setticketsNumber(2);
    string name[100];
    string email[100];
    for(int j=1;j<7;j++)
    {
       
        cout<<"customer "<<j<<" wrtie your name:\n";
        cin>>name[j];
        cout<<"customer "<<j<<" write you email:\n";
        cin>>email[j];
        cout<<"your customer id is:\n"<<j<<endl;
        
    }
     Customer customer1(1,name[1],email[2],count1);
    Customer customer2(2,name[2],email[2],count1);
    Customer customer3(3,name[3],email[3],count1);
    Customer customer4 (4, name[4],email[4],count1);
    Customer customer5 (5, name[5],email[5],count1);
    Customer customer6 (6, name[6],email[6],count1);
    cout<<"/////////////////////////////////////////////"<<endl;
    cout<<"details about the concerts"<<endl;
    Amr1.display_Event();
     cout<<"/////////////////////////////////////////////"<<endl;
    Amr2.display_Event();
    // I can display the customer information using a display function I created put it will be a repetition
    // however, I will include the method as a comment 
    //customer1.displayCustomers();
    //customer2.displayCustomers();
    //customer3.displayCustomers();
    //customer4.displayCustomers();
    //customer5.displayCustomers();
    //customer6.displayCustomers();
     cout<<"/////////////////////////////////////////////"<<endl;
    cout<<"the name of the customers who registered"<<endl;
     cout<<"/////////////////////////////////////////////"<<endl;
     for(int q=1;q<7;q++)
            {
                cout<<"the customer name "<<q<<endl<<name[q]<<endl;
                cout<<"the customer email "<<q<<endl<<email[q]<<endl;
           }
     int ticket1=0, ticket2=0;
     int ticket =2;
     int seat[7];
   int ticketname[7]; 
  
   
       do
       {
        cout<<"please enter your customer id to reserve a ticket \n";
      cin>>customerid;
      ticketname[counter]=customerid;
       if(0<customerid or customerid <7 )
        {
        cout<<"please wrtie your prefered seat\n";
        cin>>seat[ticket];
        ticket--;
        Amr1.setticketsNumber(ticket);
        counter++;
       }
       else 
       {
        cout<<"you did not register yet\n";
       } 
       }while(ticket>0);
        ticket1=ticketname[(counter-2)]; 
       ticket2=ticketname[(counter-1)];  
       cout<<"///////////////////////////////////////////////////////////////////\n";
       cout<<"///////////////////////////////////////////////////////////////////\n";
       
      string Tname1=" ";
      string Temail1=" ";;
       int Tseat1=0;
       string Tname2=" ";
       string Temail2=" ";
       int Tseat2=0;

        Tname1 = name[ticket1]; 
        Temail1 = email[ticket1]; 
        Tseat1 =seat[(ticket1+1)];     

        Tname2 = name[ticket2]; 
        Temail2 = email[ticket2]; 
        Tseat2 =seat[(ticket2-1)];          
       tickets Ticket1(Tname1, Temail1,ticket1,Tseat1);
       tickets Ticket2(Tname2, Temail2,ticket2,Tseat2);
        cout<<"/////////////////////////////////////////////"<<endl;
       cout<<"details about the concert after ticket reservation"<<endl;
        Amr1.display_Event();
         cout<<"/////////////////////////////////////////////"<<endl;
        Amr2.display_Event();
         cout<<"/////////////////////////////////////////////"<<endl;
        cout<<"the cousmters details after the reservation are:\n";
            for(int q=1;q<7;q++)
            {
                cout<<"the customer name "<<q<<endl<<name[q]<<endl;
                cout<<"the customer email "<<q<<endl<<email[q]<<endl;
            }
        cout<<"/////////////////////////////////////////////"<<endl;
       Ticket1.ticketDisplay();
        cout<<"/////////////////////////////////////////////"<<endl;
       Ticket2.ticketDisplay();

       int cancel;
       cout<<"if you want to cancel your ticket enter your customer id then 1 \n";
       cin>>customerid>>cancel;
       if(cancel==1)
       {
        if(customerid==ticket1)
        {
            
           Ticket1.setname(" ");
           Ticket1.setemail(" ");
           Ticket1.setcustomerid(0);
           Ticket1.setseat(0);
           ticket++; 
            Amr1.setticketsNumber(ticket);

           count2++;
        }
        else if (customerid==ticket2)
        {
            
           Ticket2.setname(" ");
           Ticket2.setemail(" ");
           Ticket2.setcustomerid(0);
           Ticket2.setseat(0);
           ticket++; 
            Amr1.setticketsNumber(ticket);

           count2=count2+2;
         ticket++; 
       }
       }
        cout<<"/////////////////////////////////////////////"<<endl;
       Amr1.display_Event();
        cout<<"/////////////////////////////////////////////"<<endl;
        Amr2.display_Event();
        if (count2>0)
        {
             cout<<"/////////////////////////////////////////////"<<endl;
            cout<<"the cousmters  details after the cancelation are:\n";
             cout<<"/////////////////////////////////////////////"<<endl;
           for(int q=1;q<7;q++)
            {
              cout<<"the customer name "<<q<<endl<<name[q]<<endl;
                cout<<"the customer email "<<q<<endl <<email[q]<<endl;
           }
           if(count2==1)
           {
                cout<<"there is no reservation to ticket 1\n";
           }
           else if (count2==2)
           {
            cout<<"there is no reservation to ticket2 \n";
           }
            cout<<"/////////////////////////////////////////////"<<endl;
           Ticket1.ticketDisplay();
            cout<<"/////////////////////////////////////////////"<<endl;
           Ticket2.ticketDisplay();

    
        }


        counter=0;
        ticket=2;
        //I implemented the same step as the assigment said to reserve again so I did it again 
     do
       {
        cout<<"please enter your customer id to reserve a ticket \n";
        cin>>customerid;
        ticketname[counter]=customerid;
       if(0<customerid or customerid <7 )
        {
        cout<<"please wrtie your prefered seat\n";
        cin>>seat[ticket];
        ticket--;
        Amr1.setticketsNumber(ticket);

        counter++;
       }
       else 
       {
        cout<<"you did not register yet\n";
       } 
       }while(ticket>0);
        ticket1=ticketname[(counter-2)]; 
       ticket2=ticketname[(counter-1)];  
      
      
       
        Tname1 = name[ticket1]; 
        Temail1 = email[ticket1]; 
        Tseat1 =seat[(ticket1+1)];     

        Tname2 = name[ticket2]; 
        Temail2 = email[ticket2];  
        Tseat2 =seat[(ticket2-1)];          
        cout<<"/////////////////////////////////////////////////////////\n";
       cout<<"the tickets have sold out sign in waiting list\n";
       cout<<"/////////////////////////////////////////////////////////\n";

        int waitinglist[8];
        int waitingseat[8];
        int lateticket=0;
        for(int i=3;i<7;i++)
        {
            cout<<"please write your customerid\n";
            cin>>customerid;
            waitinglist[lateticket]=customerid;
           ticketqueue.push(customerid);
            
            if(0<customerid or customerid<7 )
            {
                cout<<"please wrtie your prefered seat\n";
                 cin>>waitingseat[lateticket];
                  lateticket++; 
            }
            else 
            {
                cout<<"you have not registered yet\n";
            }
        }
        int ticket3=0;
         ticket3=waitinglist[(lateticket-4)];
        int ticket4=waitinglist[(lateticket-3)];
        int ticket5=waitinglist[(lateticket-2)];
        int ticket6=waitinglist[(lateticket-1)];

        string Tname3 = name[ticket3]; 
        string Temail3 = email[ticket3]; 
        int Tseat3 =waitingseat[ticket3];  

        string Tname4 = name[ticket4]; 
        string Temail4 = email[ticket4]; 
        int Tseat4 =waitingseat[(ticket4)]; 

        string Tname5 = name[ticket5]; 
        string Temail5 = email[ticket5]; 
        int Tseat5 =waitingseat[(ticket5)];

        string Tname6 = name[ticket6]; 
        string Temail6 = email[ticket6]; 
        int Tseat6 =waitingseat[ticket6];     
         cout<<"/////////////////////////////////////////////"<<endl;
        Amr1.display_Event(); 
         cout<<"/////////////////////////////////////////////"<<endl;
         Ticket1.setname(Tname1);
         Ticket1.setemail(Temail1);
         Ticket1.setcustomerid(ticket1);
         Ticket1.setseat(Tseat1);
          Ticket2.setname(Tname2);
         Ticket2.setemail(Temail2);
         Ticket2.setcustomerid(ticket2);
         Ticket2.setseat(Tseat2);
          cout<<"/////////////////////////////////////////////"<<endl;
        Ticket1.ticketDisplay();
         cout<<"/////////////////////////////////////////////"<<endl;
        Ticket2.ticketDisplay();
        for(int i=3;i<7;i++)
        {
            int j=1;
            cout<<"the waiting list is:\n";
            cout<<"customer name"<<j<<"is:\n";
            j++;
            cout<<name[i]<<endl;
        }

       cout<<"/////////////////////////////////////////////"<<endl;
        cout<<"if you have reserved a ticket and want to cancel it please write your customer id"<<endl;
        cin>>customerid;
         if(customerid==ticket1)
        {
            
           Ticket1.setname(" ");
           Ticket1.setemail(" ");
           Ticket1.setcustomerid(0);
           Ticket1.setseat(0);
           ticket++; 
           Amr1.setticketsNumber(ticket);
           count2++;
        }
        else if (customerid==ticket2)
        {
            
           Ticket2.setname(" ");
           Ticket2.setemail(" ");
           Ticket2.setcustomerid(0);
           Ticket2.setseat(0);
           ticket++; 
           Amr1.setticketsNumber(ticket);
           count2=count2+2;
          
       }
    
            if(ticket>0)
                {
                    
                   
                     int index =ticketqueue.front();
                     ticketqueue.pop();
                      lateticket--;
                      if(count2==1)
                      {
                        Tname1 = name[index]; 
                     Temail1 = email[index];  
                     Tseat1 =waitingseat[index];     
                     ticket--;
                     Amr1.setticketsNumber(ticket); 
                      }
                      else if(count2==2)
                      {
                      Tname2 = name[index]; 
                     Temail2 = email[index];  
                     Tseat2 =waitingseat[index];     
                     ticket--;
                     Amr1.setticketsNumber(ticket);    
                      }
                }
                 cout<<"/////////////////////////////////////////////"<<endl;
                Amr1.display_Event(); 
                 cout<<"/////////////////////////////////////////////"<<endl;
                  Ticket1.setname(Tname1);
                 Ticket1.setemail(Temail1);
                 Ticket1.setcustomerid(ticket1);
                 Ticket1.setseat(Tseat1);
                 Ticket2.setname(Tname2);
                 Ticket2.setemail(Temail2);
                 Ticket2.setcustomerid(ticket2);
                 Ticket2.setseat(Tseat2);
                  cout<<"/////////////////////////////////////////////"<<endl;
                Ticket1.ticketDisplay();
                 cout<<"/////////////////////////////////////////////"<<endl;
                Ticket2.ticketDisplay();
                 cout<<"/////////////////////////////////////////////"<<endl;
                cout<<"the waiting list is:\n";
                for(int i=4;i<7;i++)
                {
                    int j=0;
                    cout<<"customer"<<j<<"is\n";
                    cout<<name[i]<<endl;
                }
                 cout<<"/////////////////////////////////////////////"<<endl;
    return 0; 

}

 Customer ::Customer( int ID, string Name,string Email,int &count1)
    {
       Id=ID;
        name=Name;
        email=Email;
        Count=count1;
        count1++;
    };
 Customer:: Customer( string Name,string Email)
    {
        name=Name;
        email=Email;
    };
    void Customer ::  setname(string name1) 
    {
        name=name1;
    };
    void Customer :: setemail(string email1)
    {
        email=email1;
    };
     void Customer :: setid(int id1)
     {
        id1=Id;
     }
    string Customer :: getname()
    {
        return name;
    };
    string Customer :: getemail()
    {
        return email;
    };
    int Customer :: getid()
    {
        return Id;
    }


    tickets :: tickets(string name,string email,int customerId,int seat)
    {
      Name=name;
      Email=email;
      customerid=customerId;
      Seat=seat;
       
    };
    void tickets :: setcustomerid(int customerid1)
    {
        customerid=customerid1;

    };
    void tickets :: setseat(int seat1)
    {
        Seat=seat1;
    };

    tickets::tickets()
    {

    };
     void tickets :: setname(string Name1)
     {
        Name=Name1;
     };
     void tickets :: setemail(string email1)
     {
        Email=email1;
     };
    

  // int Customer :: IdCreator(int& count)  // count will refer to the nember of the tickets 
   // {
        //int x=count; 
        //count--;
       // return x;
  //  };
   void tickets :: ticketDisplay ()
    {   
        cout<<" if the customer Id or seat prefered = o, so there no one reserved the ticket\n";
        cout<<"the customer name on the ticket is:\n"<<Name<<endl;
        cout<<"the customer email on the ticket is :\n"<<Email<<endl;
       cout<<"the customer Id who reserved the ticket is:\n"<<customerid<<endl;
       cout<<"the customer who reservd the ticket prefered seat is:\n"<<Seat<<endl;
    }






