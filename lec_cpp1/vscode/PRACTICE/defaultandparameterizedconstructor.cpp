#include<iostream>
using namespace std;
class number
{
private:
int a, b, c;
public:
number(int x)
{
cout<<"ma messi ho"<<endl;
a = x;
cout<<"A = "<<a<<endl;
}
number(){
    cout<<"ma ronaldo ho"<<endl;
} 
number(int n, int m, int x=0)
{
a = n; 
b = m;
c = x;
cout<<"we are GOAT"<<endl;
cout<<"A = "<<a<<endl;
cout<<"B = "<<b<<endl;
cout<<"C = "<<c<<endl;
}
};
int main()
{
number N1(25);
number N2;
number N3(1,2);
return 0;
};