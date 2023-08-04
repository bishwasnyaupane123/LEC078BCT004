#include<iostream>
class number
{
int a;
public:
void getdata(int n) 
{
a = n;
}
void display(number x)
{
cout<<"Number = "<<x.a; 
}
};
void main()
{
clrscr();
number N1,N2;
N1.getdata(36);

N2.display(N1);
getch();
}