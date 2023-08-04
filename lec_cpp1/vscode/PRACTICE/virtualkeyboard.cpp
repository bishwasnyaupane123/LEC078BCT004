#include<iostream>
using namespace std;
class parent{
    public:
    virtual void display(){
        cout<<"this is parent class :"<<endl;

    }
};
class child:public parent{
    void display(){
        cout<<"this is child class:"<<endl;
    }
    
};
int main(){
    child c1;
    c1.display();
    parent*Bbtr;
    Bbtr=&c1;
    Bbtr->display();
    *Bbtr.display();
    return 0;
}
