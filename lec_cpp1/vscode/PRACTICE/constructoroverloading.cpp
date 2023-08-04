#include<iostream>
using namespace std;
class number
{
private:
int a, b, c;
public:
number(){}
number(int x);
number(int x, int y);
number(int x, int y, int z);
};
number::number(int x)
{
cout<<"\nconstructor 1"<<endl;
a = x;
cout<<"A = "<<a<<endl;
}
number::number(int x, int y)
{

cout<<"\nconstructor 2"<<endl;
a = x;
b = y;
cout<<"A = "<<a<<endl;
cout<<"B = "<<b<<endl;
}

number::number(int x, int y, int z)
{
cout<<"\nconstructor 3"<<endl;
a = x;
b = y;
c = z;
cout<<"A = "<<a<<endl;
cout<<"B = "<<b<<endl;
cout<<"C = "<<c<<endl;
}

int main()
{
number N1, N2, N3;
N1 = number(45);
N2 = number(25, 42);
N3 = number(10,20,30);
return 0;
}