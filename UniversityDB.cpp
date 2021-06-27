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

void University::addStudent(const Student &student)
{
    student_list_.push_back(student);
}

Student University::searchBySurname(const std::string &surname)
{
    return *std::find_if(student_list_.cbegin(), student_list_.cend(),
                         [surname](const auto &s)
                         { return s.getSurname() == surname; });
}

Student University::searchByPesel(const std::string &pesel)
{
    return *std::find_if(student_list_.cbegin(), student_list_.cend(),
                         [pesel](const Student &s)
                         {
                             return s.getPesel() == pesel;
                         });
}

void University::sortByPesel()
{
    std::sort(student_list_.begin(), student_list_.end(),
              [](const Student &lhs, const Student &rhs)
              {
                  const std::string &lhs_pesel = lhs.getPesel();
                  const std::string &rhs_pesel = rhs.getPesel();

                  return lhs_pesel < rhs_pesel;
              });
}

void University::sortBySurname()
{
    std::sort(student_list_.begin(), student_list_.end(),
              [](const Student &lhs, const Student &rhs)
              { return lhs.getSurname() < rhs.getSurname(); });
}

bool University::removeStudent(const unsigned long int index_number)
{
    auto it = std::remove_if(student_list_.begin(), student_list_.end(),
                             [index_number](const Student &s)
                             { return s.getIndexNumber() == index_number; });
    if (it == student_list_.end())
    {
        return false;
    }

    student_list_.erase(it, student_list_.end());
    return true;
}

void University::printStudents() const
{
    std::cout << "*********************************************\n";
    for (const auto &student : student_list_)
    {
        std::cout << "* " << student.getName()
                  << " | " << student.getSurname()
                  << " | " << student.getAddress()
                  << " | " << student.getIndexNumber()
                  << " | " << student.getGender()
                  << " | " << student.getPesel()
                  << " *\n";
    }
    std::cout << "**********************************************\n";
}