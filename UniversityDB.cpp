#include <iostream>
#include <algorithm>
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

auto University::searchBySurname(const std::string& surname)
{
    return std::find(student_list_.cbegin(), student_list_.cend(),
                        [surname](const Student& s) { return (s.getSurname() == surname) ? true : false; });
}

void University::printStudents() const
{
    std::cout << "*********************************\n";
    for (const auto& student : student_list_)
    {
        std::cout << "* " << student.getName()
                << " | " << student.getSurname()
                << " | " << student.getSurname()
                << " | " << student.getAddress()
                << " | " << student.getIndexNumber()
                << " | " << student.getPesel()
                << " | " << student.getGender()
                << " *\n";
    }
    std::cout << "*********************************\n";
}