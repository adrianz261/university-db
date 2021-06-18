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

void University::printStudents() const
{
    std::cout << "*********************************";
    for (const auto& student : student_list_)
    {
        std::cout << "* ";
    }
}