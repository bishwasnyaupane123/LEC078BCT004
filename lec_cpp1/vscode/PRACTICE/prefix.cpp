#include<iostream>
using namespace std;
class counter{
    private:
    unsigned int count;
    public:
    counter(){count=0;}
        int ret_count(){return count;}
    void operator ++() { count ++;}
    };
    int main()

    {
        counter c1,c2;
        cout<<"\n c1="<<c1.ret_count();
        cout<<"\n c2="<<c2.ret_count();
        ++c1;
         ++c2;
          ++c2;
           ++c2;
            ++c2;
    ++c2;
    ++c2;
        
        cout<<"\n c1="<<c1.ret_count();
          cout<<"\n c2="<<c2.ret_count();
          return 0;

    }



