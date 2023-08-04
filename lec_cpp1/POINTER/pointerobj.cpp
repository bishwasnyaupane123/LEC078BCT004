#include<iostream>
using namespace std;
class employee
{
    private:
    char name[25];
    float salary;
    public:
    void getdata()
    {
        cout<<"\nenter the name";
        cin>>name;
        cout<<"\nenter salary";
        cin>>salary;

    }
    void showdata()
    {
cout<<"\n name:"<<name<<endl;
cout<<"\n salary:"<<salary;

    }
};
int main()
{
    employee *eptr;
    employee e;
    eptr=&e;
    eptr -> getdata();
    cout<<" \n data through pointer variable:"<<endl;
    eptr -> showdata();
    return 0;

}