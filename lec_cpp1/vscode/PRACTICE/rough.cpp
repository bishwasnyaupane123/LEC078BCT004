#include<iostream>
using namespace std;

class result{
    public:   int a=60;
    void abb(){ 
    if (a>40){
        cout<<"pass"<<endl;}
        else{
            cout<<"fail"<<endl;
        }
    }
    };
int main(){
    result a;
    a.abb();
    return 0;
}