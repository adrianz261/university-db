#include "Student.hpp"

Student::Student(const std::string& name,
            const std::string& surname,
            const std::string& address,
            const std::string& gender,
            const unsigned long int index_number,
            const unsigned long int pesel)
            : name_(name),
            surname_(surname),
            address_(address),
            gender_(gender),
            index_number_(index_number),
            pesel_(pesel)
            { }

    bool Student::checkPesel(const unsigned long int pesel)
    {
        return false;
    }

    std::string Student::getName() const { return name_; }
    std::string Student::getSurname() const { return surname_; }
    std::string Student::getAddress() const { return address_; }
    std::string Student::getGender() const { return gender_; }
    unsigned long int Student::getIndexNumber() const { return index_number_; }
    const auto& Student::getPesel() const{ return pesel_; }

    void Student::setName(const std::string& name)
    {
        if (!name.empty())
        {
            name_ = name;
        }
    }

    void Student::setSurname(const std::string& surname)
    {
        if (!surname.empty())
        {
            surname_ = surname;
        }
    }

    void Student::setAddress(const std::string& address)
    {
       if (!address.empty())
        {
            address_ = address;
        }
    }

    void Student::setGender(const std::string& gender)
    {
        if (!gender_.empty())
        {
            gender_ = gender;
        }
    }

    void Student::setIndexNumber(const unsigned long int index_number)
    {
        if(index_number > 0)
        {
            index_number_ = index_number;
        }
    }

    void Student::setPesel(const unsigned long int pesel)
    {
        if (Student::checkPesel(pesel))
        {
            pesel_ = pesel;
        }
    }