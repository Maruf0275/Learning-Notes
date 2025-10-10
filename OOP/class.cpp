#include <iostream>
using namespace std;

class smallobj
{
    private:
        int somedata;
    public:
        void setdata(int d)
        {
            somedata=d;
        }
        void showdata()
        {
        cout<<"\n data is:"<<somedata;
        }

};

int main()
{
    smallobj s1,s2;
    s1.setdata(20);
    s2.setdata(30);
    s1.showdata();
    s2.showdata();

    return 0;
}