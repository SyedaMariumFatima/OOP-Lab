#include<iostream>
using namespace std;
class book{
    public:
    const int ISBN;
    string name;
    book(int isbn, string n):ISBN(isbn), name(n){}
    void display(){
        cout<<"ISBN:"<<ISBN<<endl;
    }
};
int main(){
    book b1(123, "Heidi");
    b1.display();
}
