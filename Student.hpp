#pragma once

#include <string>
#include <array>

class Student
{
    std::string name_;
    std::string surname_;
    std::string address_;
    std::string gender_;
    unsigned long int index_number_;
    std::string pesel_;

    public:
    Student(const std::string& name,
            const std::string& surname,
            const std::string& address,
            const std::string& gender,
            const unsigned long int index_number,
            const std::string& pesel);
    ~Student() = default;

    static bool checkPesel(const std::string&);

    std::string getName() const;
    std::string getSurname() const;
    std::string getAddress() const;
    std::string getGender() const;
    unsigned long int getIndexNumber() const;
    std::string getPesel() const;

    void setName(const std::string& name);
    void setSurname(const std::string& surname);
    void setAddress(const std::string& address);
    void setGender(const std::string& gender);
    void setIndexNumber(const unsigned long int index_number);
    void setPesel(const std::string& pesel);
};