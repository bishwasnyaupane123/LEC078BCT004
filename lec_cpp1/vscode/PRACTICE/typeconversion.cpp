#include<iostream>
using namespace std;
class Celsius
( private:
float temper;
public:
Celsius ()
temper=0;
)
Celsius (float ftmp)
( tempers (ftmp-32) *5/9; ) void showtemper ()
{
coutくく"Temperature in Celsius:"<<temper;
J;
int main ()
Celsius cel;//cel is user-defined float fer://fer is basic cout<<"\nEnter temperature in Fahrenheit measurement:"; cin>>fer;
cel=fer;//convert from basic to user-defined ;
cel.showtemper ();
return 0;
}