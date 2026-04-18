#include <iostream>

class CarEngine {
private:
    int horsepower;

public:
    CarEngine(int hp) : horsepower(hp) {}

    // Task 2: Make Mechanic a friend class of CarEngine
    friend class Mechanic;
};

// Task 1: Create class Mechanic
class Mechanic {
public:
    // Task 3 & 4: Display engine horsepower and Add validation
    void displayHorsepower(CarEngine& engine) {
        std::cout << "Current Horsepower: " << engine.horsepower << std::endl;
    }

    void upgradeHorsepower(CarEngine& engine, int newHp) {
        if (newHp >= 100 && newHp <= 1000) {
            engine.horsepower = newHp;
            std::cout << "Upgrade successful! New Horsepower: " << engine.horsepower << std::endl;
        } else {
            std::cout << "Invalid horsepower! Must be between 100 and 1000." << std::endl;
        }
    }
};

int main() {
    CarEngine myEngine(150);
    Mechanic myMechanic;

    myMechanic.displayHorsepower(myEngine);
    myMechanic.upgradeHorsepower(myEngine, 500); // Valid upgrade
    myMechanic.upgradeHorsepower(myEngine, 1200); // Invalid upgrade

    return 0;
}
