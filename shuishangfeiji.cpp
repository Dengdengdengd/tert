#include <iostream>
using namespace std;

class CRAFT{
    protected:
        double speed;
    public:
        CRAFT(double speed){
            this->speed=speed;
            cout<<"创建航行器(速度: "<<speed<<")"<<endl;
        }
        ~CRAFT(){
            cout<<"销毁航行器(速度: "<<speed<<")"<<endl;
        }
        virtual void Show(){
            cout<<"航行(速度: "<<speed<<")"<<endl;
        }

};

class PLANE : virtual public CRAFT{
    protected:
        double width;
    public:
        PLANE(double speed, double width):CRAFT(speed),width(width){
            cout<<"创建飞机(翼展: "<<width<<")"<<endl;
        }
        ~PLANE(){
            cout<<"销毁飞机(翼展: "<<width<<")"<<endl;
        }
        void Show(){
            cout<<"航行(速度: "<<speed<<", 翼展: "<<width<<")"<<endl;
        }
};

class SHIP : virtual public CRAFT{
    protected:
        double depth;
    public:
        SHIP(double speed, double depth):CRAFT(speed),depth(depth){
            cout<<"创建船(吃水: "<<depth<<")"<<endl;
        }
        ~SHIP(){
            cout<<"销毁船(吃水: "<<depth<<")"<<endl;
        }
        void Show(){
            cout<<"航行(速度: "<<speed<<", 吃水: "<<depth<<")"<<endl;
        }
};
class SEAPLANE : public PLANE,public SHIP{
    public:
        SEAPLANE(double speed, double width, double depth):PLANE(speed, width), SHIP(speed, depth),CRAFT(speed){
            cout<<"创建水上飞机"<<endl;
        }
        ~SEAPLANE(){
            cout<<"销毁水上飞机"<<endl;
        }
        void Show(){
            cout<<"航行(速度: "<<speed<<", 翼展: "<<width<<", 吃水: "<<depth<<")"<<endl;
        }
};

int main()
{
    double s, w, d;
    CRAFT *p;
    cin >> s >> w >> d;
    p = new SEAPLANE(s, w, d);
    p->Show();
    delete p;
    return 0;
}

// #include <iostream>
// using namespace std;

// class CRAFT {
// protected:
//     double speed;

// public:
//     CRAFT(double speed) {
//         this->speed = speed;
//         cout << "创建航行器(速度: " << speed << ")" << endl;
//     }

//     virtual ~CRAFT() {
//         cout << "销毁航行器(速度: " << speed << ")" << endl;
//     }

//     virtual void Show() {
//         cout << "航行(速度: " << speed << ")" << endl;
//     }
// };

// class PLANE : virtual public CRAFT {
// protected:
//     double width;

// public:
//     PLANE(double speed, double width) : CRAFT(speed) {
//         this->width = width;
//         cout << "创建飞机(翼展: " << width << ")" << endl;
//     }

//     ~PLANE() {
//         cout << "销毁飞机(翼展: " << width << ")" << endl;
//     }

//     void Show() override {
//         cout << "航行(速度: " << speed << ", 翼展: " << width << ")" << endl;
//     }
// };

// class SHIP : virtual public CRAFT {
// protected:
//     double depth;

// public:
//     SHIP(double speed, double depth) : CRAFT(speed) {
//         this->depth = depth;
//         cout << "创建船(吃水: " << depth << ")" << endl;
//     }

//     ~SHIP() {
//         cout << "销毁船(吃水: " << depth << ")" << endl;
//     }

//     void Show() override {
//         cout << "航行(速度: " << speed << ", 吃水: " << depth << ")" << endl;
//     }
// };

// class SEAPLANE : public PLANE, public SHIP {
// public:
//     SEAPLANE(double speed, double width, double depth) : CRAFT(speed), PLANE(speed, width), SHIP(speed, depth) {
//         cout << "创建水上飞机" << endl;
//     }

//     ~SEAPLANE() {
//         cout << "销毁水上飞机" << endl;
//     }

//     void Show() override {
//         cout << "航行(速度: " << speed << ", 翼展: " << width << ", 吃水: " << depth << ")" << endl;
//     }
// };

// int main() {
//     double s, w, d;
//     CRAFT *p;
//     cin >> s >> w >> d;
//     p = new SEAPLANE(s, w, d);
//     p->Show();
//     delete p;
//     return 0;
// }

