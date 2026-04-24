#include <iostream>
using namespace std;

int main()
{
    int a;
    cin>>a;
    try
    {
        // Check invalid condition
        if (a<18)
        {
            throw "Error: Age under 18 not allowed!";
        }
        // Division operation
        cout << "Age: " <<a<< endl;
    }
    // Catch block to handle exception
    catch (const char* message)
    {
        cout << message << endl;
    }
    cout << "Program continues normally..." << endl;
    return 0;
}
