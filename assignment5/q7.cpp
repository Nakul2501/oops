#include <iostream>
using namespace std;
class speedometer{
    public:
    float speed;
    speedometer(){
        cout<<"Enter the speed of the car: ";
        cin>>speed;
    }
};
class fuelgauge{
    public:
    float fuel;
    fuelgauge(){
        cout<<"Enter the fuel level of the car: ";
        cin>>fuel;
    }
};
class thermometer{
    public:
    float temp;
    thermometer(){
        cout<<"Enter the temperature: ";
        cin>>temp;
    }
};
class cardashboard:public speedometer, public fuelgauge, public thermometer{
    public:
    void display(){
        cout<<"Speed: "<<speed<<" km/h"<<endl;
        cout<<"Fuel Level: "<<fuel<<" %"<<endl;
        cout<<"Temperature: "<<temp<<" °C"<<endl;
    }
};
int main(){
    cardashboard car1;
    car1.display();
    return 0;
}