#include <iostream>
#include <string>
#include "Person.h"
#include <vector>

using namespace std;

int main() {

    vector<Person> people;
    while (true) {

        Person person;
        string name;
        cin >> name;

        if (name == "END") {
            break;
        }
        person.name = name;
        cin >> person.age;

        people.push_back(person);
    }
    for (int i = 0; i < people.size(); ++i) {
        cout << people[i].name << " " << people[i].age << endl;
    }


    return 0;
}
