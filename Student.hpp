#pragma once

#include <string>
#include <array>

class Student
{
    std::string imie_;
    std::string nazwisko_;
    std::string adres_;
    std::string plec_;
    std::string nr_indeksu;
    std::array<uint8_t, 11> pesel_;

    public:
    Student(const std::string& imie,
            const std::string& nazwisko,
            const std::string& adres,
            const std::string& plec,
            const std::string& nr_indeksu,
            const std::array<uint8_t, 11> pesel);
    ~Student() = default;

    std::string getImie() const;
    std::string getNazwisko() const;
};