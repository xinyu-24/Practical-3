#include "Person.h"
#include <iostream>

Person* createPersonArray(int n); // Function declaration

int main() {
    int n = 3;
    Person* people = createPersonArray(n);

    for (int i = 0; i < n; i++) {
        std::cout << "Person " << i + 1 << ": " << people[i].name << ", " << people[i].age << std::endl;
    }

    delete[] people; // Free the dynamically allocated memory

    return 0;
}
