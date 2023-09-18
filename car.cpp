#include <iostream>
using namespace std;

class CAR{
    protected:
        double speed;
    public:
        CAR(double speed=0){
            this->speed=speed;
            cout<<"创建汽车("<<speed<<"公里/小时)"<<endl;
        }
        ~CAR(){
            cout<<"销毁汽车("<<speed<<"公里/小时)"<<endl;
        }
        virtual void Show(){
            cout<<"汽车: "<<speed<<"公里/小时"<<endl;
        }
};

class BUS : virtual public CAR{
    protected:
        double seat;
    public:
        BUS(double speed=0, double seat=0):CAR(speed),seat(seat){
            cout<<"创建客车("<<seat<<"人)"<<endl;
        }
        ~BUS(){
            cout<<"销毁客车("<<seat<<"人)"<<endl;
        }
        void Show() override{
            cout<<"客车: "<<speed<<"公里/小时, "<<seat<<"人"<<endl;
        }
};

class TRUCK : virtual public CAR{
    protected:
        double load;
    public:
        TRUCK(double speed=0, double load=0):CAR(speed),load(load){
            cout<<"创建货车("<<load<<"吨)"<<endl;
        }
        ~TRUCK(){
            cout<<"销毁货车("<<speed<<"吨)"<<endl;
        }
        void Show() override{ 
            cout<<"货车: "<<speed<<"公里/小时, "<<load<<"吨"<<endl;
        }
};

class VAN : public BUS,public TRUCK{
    public:
        VAN(double speed=0, double seat=0, double load=0):BUS(speed,seat),TRUCK(speed,load),CAR(speed){
            cout<<"创建客货两用车"<<endl;
        }

        ~VAN(){
            cout<<"销毁客货两用车"<<endl;
        }

        void Show() override{
            cout<<"客货两用车: "<<speed<<"公里/小时, "<<seat<<"人, "<<load<<"吨"<<endl;
        }
};

int main()
{
    CAR *p;
    double s, t, w;
    cin >>s,t,w;
    p = new VAN(s, t, w);
    p->Show();
    delete p;
    return 0;
}