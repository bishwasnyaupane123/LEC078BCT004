 #include<iostream>
using namespace std;

class student{
    char name[30];
    public:
    void data(){ 
    cout<<"enter the name of student:"<<name<<endl;
    cin>>name;
    }
};

class Test    
{
    protected:
        int subjects[3], i;
    public:
        void info()
        {
                cout<<"\n Enter Marks for Three Subjects ";
                cout<<"\n TOC : ";
                cin>>subjects[0];
                cout<<"\n EDC: ";
                cin>>subjects[1];
                cout<<"\n OOP: ";
                cin>>subjects[2];
        }
};

class Total : public Test
{
protected:
        int total;
    public:
        void total_of_three_subjects()
        {
                total = subjects[0] + subjects[1] + subjects[2];
        }
};
class Result : public Total        
{
    private:
        float per;
    public:
        void calculate_total()
        {
                per=total;
        }
        void show_result()
        {
                cout<<"\n                     \n";
                cout<<"\n total marks  of a Student : "<<per;
        }
};
int main()
{       student s;
        s.data();
        Result a;
        
        a.info();
        a.total_of_three_subjects();
        a.calculate_total();
        a.show_result();
        return 0;
}

