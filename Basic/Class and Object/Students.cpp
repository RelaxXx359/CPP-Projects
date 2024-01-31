#include <iostream>
#include <string>

class Students {
public:
    // first constructor optoin
    //Students(std::string firstName, std::string lastName, long long egn, std::string city, std::string birthdayDate) {
    //    this->firstName = firstName, this->lastName = lastName, this->egn = egn, this->city = city, this->birthdayDate = birthdayDate;
    //}

    // second constructor option
    Students(std::string firstName, std::string lastName, long long egn, std::string city, std::string birthdayDate) :
            firstName(firstName), lastName(lastName), egn(egn), city(city), birthdayDate(birthdayDate) {}

    // setters
    void setFirstName(std::string firstName) {
        this->firstName = firstName;
    }

    void setLastName(std::string lastName) {
        this->lastName = lastName;
    }

    // getters
    std::string getFullName() {
        return firstName + " " + lastName;
    }

    std::string getLastName() {
        return this->lastName = lastName;
    }

    // function
    void printStudentInfo() const {
        std::cout << "Student name is: " << firstName << " " << lastName << " with EGN: " << egn << " from city: " << city
                  << " with birthday: " << birthdayDate << std::endl;
    }

private:
    std::string firstName;
    std::string lastName;
    long long egn;
    std::string city;
    std::string birthdayDate;
};

int main() {
    Students pesho("Pesho", "Ivanov", 9508064642, "Silistra", "06.08.1995");
    pesho.printStudentInfo();
    std::string fullName = pesho.getFullName();
    std::cout << fullName << std::endl;

    std::cout << "Enter student first name: ";
    std::string firstName;
    std::cin >> firstName;

    std::string lastName;
    std::cout << "Enter student last name: ";
    std::cin >> lastName;

    Students anotherStudent(firstName, lastName, 9904194521, "Ruse", "19.04.1999");

    std::cout << anotherStudent.getFullName() << "\n";
    anotherStudent.setFirstName("Ivan");
    anotherStudent.setLastName("Stoianov");
    std::cout << anotherStudent.getFullName() << "\n";

    return 0;
}