#include <iostream>
#include <string>

using namespace std;

class Students {
public:
     // конструкция
    Students(string name1, string name2, long long id, string city, string date):firstName(name1), lastName(name2),
    personalNo(id), city(city), birthday(date){

//        this->firstName = name1;
//        this->lastName = name2;
//        this->personalNo = id;
//        this->city = city;
//        this->birthday = date;

    }

    // сетер на име
    void setFirstName(string firstName) {
        this->firstName = firstName;
    }

    // сетер на фамилията
    void setLastName(string lastName) {
        this->lastName = lastName;
    }

    // гетер на име
    string getFirstName() {
        return this->firstName;
    }
    // гетер на фамилията
    string getLastName() {
        return this->lastName;
    }

    // Принтиране на текст
    void displayMessage() {
        cout << "Name        " << firstName << " "<< lastName << endl << "PersonalNo  " << personalNo << endl
             << "City        " << city << endl
             << "Birthday    " << birthday << endl;
        cout << endl;
    }
    // Принтиране на данни въведени от потребителя
    void addStudents(){
         cout<< "Hi " << firstName << " you have been successfully added!" << endl << "Name        " << firstName << " "<< lastName << endl << "PersonalNo  " << personalNo << endl
              << "City        " << city << endl
              << "Birthday    " << birthday << endl;
        cout << endl;
     }


private:
    string firstName;
    string lastName;
    long long personalNo;
    string city;
    string birthday;

};

int main() {

    // статично въведени данни
    Students firstStudent("Dobrolyub", "Velinov", 8320152862, "Kyustendil", "05/10/1983");
    firstStudent.displayMessage();
    Students secondStudent("Ivan", "Ivanov", 8352684958, "Sofia", "24/06/1983");
    secondStudent.displayMessage();


    // данни въвеждани от потребителя
    string firstName;
    cout << "Added a student: First Name: \n";
    cin >> firstName;

    // данни въвеждани от потребителя
    string lastName;
    cout << "Added a student: Last Name: \n";
    cin >> lastName;

    // данни въвеждани от потребителя
    long long ID;
    cout << "Add personal number: \n";
    cin >> ID;

    // данни въвеждани от потребителя
    string city;
    cout << "Add city: \n";
    cin >> city;

    // данни въвеждани от потребителя
    string birthtay;
    cout << "Data dd/mm/yyyy: ";
    cin >> birthtay;

    // нов ред
    cout << endl;

    // присвояване на данни към класа
    Students anotherStudent(firstName, lastName, ID, city, birthtay);
    anotherStudent.addStudents();

    return 0;
}