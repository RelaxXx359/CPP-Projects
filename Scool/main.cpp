#include "Discipline.h"
#include "Teacher.h"
#include "Student.h"
#include "Class.h"
#include "School.h"
#include <iostream>

using namespace std;


int main() {
    // Create disciplines
    Discipline math("Math", 20, 10);
    Discipline physics("Physics", 15, 8);
    Discipline history("History", 45, 69);


    // Create teachers
    Teacher teacher1("John Doe", "Professor", {physics });
    // Create students
    Student student1("Bob",1);
    Student student2("Emma", 2);

    Student student5("Richard", 1);
    Student student6("Daniel", 2);


    // Create classes
    Class class1("ClassA", { teacher1 }, { student1 });


    // Create school
    School school({ class1 });

    // Print sample school information
    std::cout << "School Information:\n";
    for (auto& schoolClass : school.getClasses()) {
        cout << "Class Identifier: " << schoolClass.getIdentifier() << "\n";
        for (auto& teacher : schoolClass.getTeachers()) {
            cout << "  Teacher: " << teacher.getName() << ", Title: " << teacher.getTitle() << "\n";
//            for (auto& discipline : teacher.getDiscipline()) {
//                cout << "    Discipline: " << discipline.getName() << ", Lectures: "
//                          << discipline.getLectures() << ", Exercises: " << discipline.getExrcises() << "\n";
//            }
        }
        for (auto& student : schoolClass.getStudents()) {
            cout << "  Student: " << student.getName() << ", Class Number: " << student.getClassNumber() << "\n";
        }
        cout << "\n";
    }


    return 0;
}
