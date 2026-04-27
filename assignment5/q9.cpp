#include <iostream>
#include <string>
using namespace std;
class vehicle{
    public:
    string make;
    string model;
    int year;
    vehicle(){
        cout<<"Enter the make of the vehicle: ";
        cin>>make;
        cout<<"Enter the model of the vehicle: ";
        cin>>model;
        cout<<"Enter the year of the vehicle: ";
        cin>>year;
    }
};
class truck: public vehicle{
    public:
    float load_capacity;
    truck(){
        cout<<"Enter the load capacity of the truck: ";
        cin>>load_capacity;
    }
};
class refrigeratedtruck: public truck{
    public:
    float temperature_control;
    refrigeratedtruck(){
        cout<<"Enter the temperature of the refrigerated truck: ";
        cin>>temperature_control;
    }
    void disp(){
        cout<<"Make: "<<make<<endl;
        cout<<"Model: "<<model<<endl;
        cout<<"Year: "<<year<<endl;
        cout<<"Load Capacity: "<<load_capacity<<endl;
        cout<<"Temperature Control: "<<temperature_control<<endl;
    }
};
int main(){
    refrigeratedtruck r1;
    r1.disp();
    return 0;
}