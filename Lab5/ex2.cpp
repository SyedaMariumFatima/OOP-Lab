#include<iostream>
using namespace std;
class bankAccount{
    public:
    static int total;
    bankAccount(){
        total++;
    }
    void static displayTotal(){
        cout<<"Total:"<<total<<endl;
    }
};
int bankAccount::total=0;
int main(){
    bankAccount a1;
    bankAccount a2;
    bankAccount::displayTotal;
}
