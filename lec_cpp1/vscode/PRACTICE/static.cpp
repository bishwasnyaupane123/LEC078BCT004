 #include<iostream>
 using namespace std;
 void display(){
    int static i=1;
    i++;
    i=i+5;
    cout<<"value of i:"<<i;
}



int main(){


    display();
    display();
    return 0;
}