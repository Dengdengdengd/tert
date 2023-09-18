#include <iostream>
#include <iomanip>
using namespace std;


class Payroll{
    protected:
        float pay_per_hour;
        float hours;
        float total_pay;
    public:
        Payroll(){}
        Payroll(float h);
        void setPay_per_hour(float pph);
        bool setHours(float hour);
        float getPayment();
};

Payroll::Payroll(float h): hours(h) {}
void Payroll::setPay_per_hour(float pph)
{
    pay_per_hour=pph;
}

bool Payroll::setHours(float hour)
{
    if(hour>=0 && hour<=60)    
    {
        hours=hour;
        total_pay=pay_per_hour * hours;
        return true;
    }else
        return false;
}

float Payroll::getPayment( )
{
    return total_pay;
}


int main( )
{
    Payroll employee[10];    
    float  pph;
    float  tHour;
    cin >> pph;

    for(int i=0;i<10;i++)
    {
        employee[i].setPay_per_hour(pph);
        while(true)
        {
            cin>>tHour;
            if(employee[i].setHours(tHour))    
                break;
            else
            {
                
            }
        }
    }

    for(int i=0;i<10;i++)
        cout<<setiosflags(ios::fixed)<<setprecision(2)
            <<employee[i].getPayment()<<" ";

    return 0;
}

