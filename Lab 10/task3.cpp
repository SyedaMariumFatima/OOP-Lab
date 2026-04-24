#include <iostream>
using namespace std;

int main()
{
    int marks = 10;
    try
    {
        // Check invalid condition
        if (marks<0 || maks>100)
        {
            throw "Error: Invalid marks!";
        }
        // Division operation
        cout << "marks: " << marks << endl;
    }
    // Catch block to handle exception
    catch (const char* message)
    {
        cout << message << endl;
    }
    cout << "Program continues normally..." << endl;
    return 0;
}
