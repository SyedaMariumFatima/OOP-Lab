#include <iostream>
using namespace std;
class Notification{
    protected:
    string recipient;
    public:
    Notification(string rec){recipient=rec;}
    virtual void sendNotification()=0;
};
class emailNotification: public Notification{
    public:
   emailNotification(string rec) : Notification(rec) {}
    void sendNotification() override {      
    cout << "--- Email Notification ---" << endl;
    cout << "To: " << recipient << endl;
    cout << "Message: Your monthly statement is ready." << endl;
    cout << "Status: Sent Successfully" << endl << endl;
    }
};
class smsNotification: public Notification{
    public:
    smsNotification(string rec) : Notification(rec) {}
    void sendNotification() override {
     cout << "--- SMS Notification ---" << endl;
     cout << "To: " << recipient << endl;
    cout << "Message: Your OTP is 1234" << endl;
    cout << "Status: Sent Successfully" << endl << endl;
    }
};
class pushNotification: public Notification{
    public:
    pushNotification(string rec) : Notification(rec) {}
    void sendNotification() override {
   cout << "--- Push Notification ---" << endl;
   cout << "To: " << recipient << endl;
   cout << "Message: You have a new friend request!" << endl;
   cout << "Status: Sent Successfully" << endl << endl;
    }
};

int main() {
    smsNotification sms("03001234567");
    sms.sendNotification();

    return 0;
}
