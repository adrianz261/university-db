#include <iostream>
#include "UniversityDB.hpp"

University::University()
{
    student_list_.reserve(20);
}

University::University(const std::vector<Student> student_list)
    : student_list_(student_list)
{
}

void University::addStudent(const Student& student)
{
    student_list_.push_back(student);
}

void University::printStudents() const
{
    std::cout << "*********************************\n";
    for (const auto& student : student_list_)
    {
        std::cout << "* " << student.getName()
                << ' ' << student.getSurname()
                << ' ' << student.getSurname()
                << ' ' << student.getAddress()
                << ' ' << student.getIndexNumber()
                << ' ' << student.getPesel()
                << ' ' << student.getGender()
                << " *\n";
    }
    std::cout << "*********************************\n";
}