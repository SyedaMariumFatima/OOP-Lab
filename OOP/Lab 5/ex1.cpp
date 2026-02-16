#include<iostream>
using namespace std;
class car{
    public:
    int year;
    string model;
    static int totalCars;
    car(string model, int year){
        this->model=model;
        this->year=year;
        totalCars+=1;
    }
    void display(){
        cout<<"Model: "<<model<<endl;
        cout<<"Year: "<<year<<endl;
    }
    static void showTotal(){
        cout<<"Total number of cars: "<<totalCars<<endl;
    }
};
int car ::totalCars=0;
int main(){
    car c1("honda", 2007);
    car c2("ferrari", 2022);
    car c3("toyota", 2011);
    car c4("luba", 1999);
    car::showTotal();
}