 #include<iostream>
using namespace std;
class  Point{
    public:
    virtual void draw(){
        cout<<"point"<<endl;    
    }
};
class line:public Point{
    public:
    void draw()
    {
        cout<<"line"<<endl;
    }
};
class Triangle:public Point {
    public:
    void draw()
    {cout<<"triangle"<<endl;}
};
class polygon:public Point
{
    public:
    void draw(){
    cout<<"polygon"<<endl;
    }
};
class circle:public Point{
    public:
    void draw(){
        cout<<"circle"<<endl;
    }
};
int main(){
    Point pt;
    line ln;
    Triangle tr;
    polygon py;
    circle cr;
    Point *baseptr[]={&pt ,&ln, &tr, &py, &cr};
    cout<<"fig drawn by abse poinetr are:"<<endl;
    for(int i=0;i<5;i++)
    baseptr[i]->draw();

}