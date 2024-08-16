#include "Person.h"

PersonList deepCopyPersonList(PersonList pl) {
    PersonList copy;
    copy.numPeople = pl.numPeople;
    copy.people = new Person[pl.numPeople];

    for (int i = 0; i < pl.numPeople; i++) {
        copy.people[i].name = pl.people[i].name;
        copy.people[i].age = pl.people[i].age;
    }

    return copy;
}
