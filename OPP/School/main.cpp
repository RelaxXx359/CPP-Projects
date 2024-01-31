#include <iostream>
#include "Student.h"
#include "School.h"
#include "Teachers.h"
#include "Class.h"
#include "Discipline.h"



int main() {

    // Discipline
    Discipline math("Math", 15, 8);
    Discipline physics("Physics", 20, 10);
    Discipline history("History", 45, 69);


    // Teachers
    Teachers teachers1("Asen Asenov", "Professor", history);
    Teachers teachers2("Blago Ivanov", "Doktor", math);
    Teachers teachers3("Michael Brown", "Professor", {history});
    Teachers teachers4("Jennifer Williams", "Assistant Professor", physics);

    vector<Teachers> t1 = {teachers1, teachers2};
    vector<Teachers> t2 = {teachers3, teachers4};


    // Student
    Student student1("Georgi", 1);
    Student student2("Petsho", 2);
    Student student3("Asq", 3);
    Student student4("Asq", 4);

    Student student5("Georgi", 1);
    Student student6("Petsho", 2);
    Student student7("Asq", 3);
    Student student8("Asq", 4);

    // Class
    Class class1("ClassA", t1, {student1, student2, student3, student4});
    Class class2("ClassB", t2, {student1, student2, student3, student4});


    //Create school
    School school({class1, class2});


    std::cout << "School Information:\n";
    for (auto &schoolClass: school.getClass()) {
        std::cout << "Class Identifier: " << schoolClass.getTextIdents() << "\n";
        for (auto &teacher: schoolClass.getLectures()) {
            std::cout << "  Teacher: " << teacher.getName() << ", Title: " << teacher.getTitle() << "\n";
            for (auto &discipline: teacher.getDiscipline()) {
                std::cout << "    Discipline: " << discipline.getName() << ", Lectures: "
                          << discipline.getLectures() << ", Exercises: " << discipline.getExrcises() << "\n";
            }
        }
        for (auto &student: schoolClass.getStudents()) {
            std::cout << "  Student: " << student.getName() << ", Class Number: " << student.getStudentNum() << "\n";
        }
        std::cout << "\n";
        return 0;
    }
