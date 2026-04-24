#include <iostream>
#include <algorithm> // For std::max

template <typename T>
class GenericArray {
private:
    T* data;
    int size;

public:
    // Constructor
    GenericArray(T arr[], int s) {
        size = s;
        data = new T[size];
        for (int i = 0; i < size; i++) {
            data[i] = arr[i];
        }
    }

    // Destructor to free memory
    ~GenericArray() {
        delete[] data;
    }

    // Displays all elements
    void display() const {
        for (int i = 0; i < size; i++) {
            std::cout << data[i] << " ";
        }
        std::cout << std::endl;
    }

    // Finds the maximum value
    T findMax() const {
        T maxVal = data[0];
        for (int i = 1; i < size; i++) {
            if (data[i] > maxVal) {
                maxVal = data[i];
            }
        }
        return maxVal;
    }
};

int main() {
    // Example with Integers
    int intNums[] = {10, 50, 30, 20};
    GenericArray<int> intArray(intNums, 4);
    std::cout << "Integer Array: ";
    intArray.display();
    std::cout << "Max Integer: " << intArray.findMax() << "\n\n";

    // Example with Doubles
    double doubleNums[] = {1.5, 9.8, 4.2, 7.6};
    GenericArray<double> doubleArray(doubleNums, 4);
    std::cout << "Double Array: ";
    doubleArray.display();
    std::cout << "Max Double: " << doubleArray.findMax() << "\n";

    return 0;
}
