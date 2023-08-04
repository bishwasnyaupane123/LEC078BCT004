#include<iostream>
using namespace std;
class Student
{
int rn;
char gender;
int age;
int std;
public:
void getinfo()
{
cout<<"Enter roll number: ";
cin>>rn;
cout<<"Gender ? : ";
cin>>gender;
cout<<"Age ? :";
cin>>age;
cout<<"Std ? : ";
cin>>std;
}

void displayinfo()
{
cout<<"Roll no. = "<<rn<<endl;
cout<<"Gender = "<<gender<<endl;
cout<<"Age = "<<age<<endl;
cout<<"Std = "<<std<<endl;
}
};
int main()
{
Student S[5];
for(int i = 0; i<5; i++)
{
S[i].getinfo();
}
for(int i = 0; i<5; i++)
{
S[i].displayinfo();
} return 0;
}