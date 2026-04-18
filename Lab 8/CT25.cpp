#include <iostream>
using namespace std;

class Student {
private:
    float marks[3]; // Private data members

public:
    // Function to accept input from user with validation
    void setMarks() {
        cout << "Enter marks for 3 subjects (0-100):\n";
        
        // Loop/Logic for marks validation
       
        for(int i = 0; i < 3; i++) {
            do {
                cout << "Subject " << i + 1 << ": ";
                cin >> marks[i];
                if (marks[i] < 0 || marks[i] > 100) {
                    cout << "Invalid input! Marks must be between 0 and 100." << endl;
                }
            } while (marks[i] < 0 || marks[i] > 100);
        }
    }

    // Friend function declaration
    friend float calculateAverage(Student s);
};

// Friend function definition
float calculateAverage(Student s) {
    // Accessing private members marks1, marks2, marks3
    return (s.marks[0] + s.marks[1] + s.marks[2]) / 3.0;
}

int main() {
    Student s1;
    
    // Accept input
    s1.setMarks();
    
    // Calculate and display average using friend function
    float avg = calculateAverage(s1);
    cout << "\nThe average marks are: " << avg << endl;

    return 0;
}
