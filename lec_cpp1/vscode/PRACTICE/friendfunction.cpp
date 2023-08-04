#include<iostream>
using namespace std;
class number
{
private:
int a;
public:
void display()
{
a = 5;
cout<<"Number = "<<a;
}
friend void show();
friend int main();
};
void show() 
{
number N1;
N1.a = 10;
cout<<"number = "<<N1.a;
}

int main()
{
show();
number N1;
N1.a = 25;
return 0;
}