#pragma once

#include <string>
#include <array>

class Student
{
    std::string imie_;
    std::string nazwisko_;
    std::string adres_;
    std::string plec_;
    unsigned long int nr_indeksu_;
    unsigned long int pesel_;

    public:
    Student(const std::string& imie,
            const std::string& nazwisko,
            const std::string& adres,
            const std::string& plec,
            const unsigned long int nr_indeksu,
            const unsigned long int pesel);
    ~Student() = default;

    static bool checkPesel(const unsigned long int);

    std::string getImie() const;
    std::string getNazwisko() const;
    std::string getAdres() const;
    std::string getPlec() const;
    unsigned long int getNrIndeksu() const;
    const auto& getPesel() const;

    void setImie(const std::string& imie);
    void setNazwisko(const std::string& nazwisko);
    void setAdres(const std::string& adres);
    void setPlec(const std::string& plec);
    void setNrIndeksu(const unsigned long int nr_indeksu);
    void setPesel(const unsigned long int pesel);
};