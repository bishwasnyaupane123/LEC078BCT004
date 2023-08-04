#include<iostream>
using namespace std;
class vehicle
{
    private:
    int platenumber;
    public:
     vehicle()
     {
        platenumber=8643;
        cout<<"no of your scooter: "<<platenumber<<endl;
        return platenumber;
    }
    vehicle(int pnum)
    {
        platenumber=pnum;
        cout<<"the value of plate no is "<<pnum<<endl;
    }
 };
 int main ()
 {
    vehicle scooter(8623);

   // scooter.getnumber(8634);
    //return 0;
}
