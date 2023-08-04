// PROGRAM USING NAMESPACE 

#include<iostream>
using std::cin;
using std::cout;

namespace PAWAN{
    char name[20];
    char address[20];
    int roll;
    void getdata()
    {
        cout<<"enter your name\t";
        cin>>name;
        cout<<"\nenter your address\t";
        cin>>address;
        cout<<"enter your roll\t";
        cin>>roll;
    }
    void display()
    {
        cout<<"NAME: "<<name;
        cout<<"\nADDRESS: "<<address;
        cout<<"\nROLL: "<<roll;
    }
}

namespace KRISTINA{
    char country[20]="Australia";
    char address[20]="Melbourne";
    int age=18;
    int x;

    void HEY()
    {
        cout<<"enter 0 or 1";
        cin>>x;
        if(x==0 || x==1)
        {
           cout<<"you entered valid digit\n";
        }
        else{
            cout<<"INVALID:::::??";
        }
    }

    void display()
    {
        cout<<"\nCountry: "<<country;
        cout<<"\nAddress: "<<address;
        cout<<"\nAge: "<<age;
    }
}

int main(){
     using namespace PAWAN;
     using namespace KULDEEP;

     getdata();      // UNCOMMON FUNCTION NAME IN GIVEN NAMESPACES
     HEY(); 


     PAWAN::display();     // COMMON FUNCTION NAME IN GIVEN NAMESSPACES
      KULDEEP::display();
    return 0;
}