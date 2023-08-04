#include<iostream>
class number
{
int a;
public:
void getdata()  
{
cin>>a;
}
void display()
{
cout<<a;  
}
number Add(number N2)
{
number N3;
N3.a = a + N2.a;
return N3;
}

};
void main()
{
clrscr();
number N1, N2, N3;
cout<<"Enter 1st number : ";
N1.getdata();
cout<<"Enter 2nd number : ";
N2.getdata();
N3 = N1.Add(N2);
cout<<"Sum = ";
N3.display();
getch();
}