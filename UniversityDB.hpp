#pragma once

#include <vector>
#include "Student.hpp"


class University
{
    std::vector<Student> student_list_;
    
    public:
    University();
    University(const std::vector<Student> student_list);
    ~University() = default;

    void printStudents() const;
};