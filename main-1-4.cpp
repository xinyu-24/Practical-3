#include "Person.h"
#include <iostream>

PersonList createPersonList(int n); // Function declaration
PersonList shallowCopyPersonList(PersonList pl); // Function declaration

int main() {
    int n = 3;
    PersonList original = createPersonList(n);
    PersonList copy = shallowCopyPersonList(original);

    // Modify original to check if the copy reflects the change
    original.people[0].name = "Modified Name";
    original.people[0].age = 99;

    std::cout << "Original List:\n";
    for (int i = 0; i < n; i++) {
        std::cout << "Person " << i + 1 << ": " << original.people[i].name << ", " << original.people[i].age << std::endl;
    }

    std::cout << "\nShallow Copied List:\n";
    for (int i = 0; i < n; i++) {
        std::cout << "Person " << i + 1 << ": " << copy.people[i].name << ", " << copy.people[i].age << std::endl;
    }

    // Clean up dynamically allocated memory
    delete[] original.people;

    return 0;
}
