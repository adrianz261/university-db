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

Student University::searchBySurname(const std::string& surname)
{
    return *std::find_if(student_list_.cbegin(), student_list_.cend(),
                        [surname](const auto& s)
                        { return s.getSurname() == surname; });
}

Student University::searchByPesel(const std::string& pesel)
{
    return *std::find_if(student_list_.cbegin(), student_list_.cend(),
                    [pesel](const Student& s)
                    {
                        return s.getPesel() == pesel;
                    });
}

void University::printStudents() const
{
    std::cout << "*********************************\n";
    for (const auto& student : student_list_)
    {
        std::cout << "* " << student.getName()
                << " | " << student.getSurname()
                << " | " << student.getAddress()
                << " | " << student.getIndexNumber()
                << " | " << student.getGender()
                << " *\n";
    }
    std::cout << "*********************************\n";
}