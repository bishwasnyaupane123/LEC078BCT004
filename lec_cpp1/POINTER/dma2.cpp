#include<iostream>
using namespace std;
class vehicle
{
    private:
    int platenumber;
    public:
     int getNumber(int a)
     {
        platenumber=a;
        cout<<"no of your scooter: "<<platenumber<<endl;
        return platenumber;
    }
 };
 int main ()
 {
    vehicle scooter;
    scooter.getnumber(8634);
    return 0;
}
