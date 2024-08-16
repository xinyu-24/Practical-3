#include "Person.h"
#include <iostream>

PersonList createPersonList(int n); // Function declaration

int main() {
    int n = 3;
    PersonList pl = createPersonList(n);

    for (int i = 0; i < n; i++) {
        std::cout << "Person " << i + 1 << ": " << pl.people[i].name << ", " << pl.people[i].age << std::endl;
    }

    delete[] pl.people; // Free the dynamically allocated memory

    return 0;
}
