#include "Person.h"

PersonList shallowCopyPersonList(PersonList pl) {
    PersonList copy;
    copy.numPeople = pl.numPeople;
    copy.people = pl.people; // Shallow copy: points to the same array

    return copy;
}
