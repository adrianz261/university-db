#pragma once

#include <string>
#include <array>

class Student
{
    std::string imie_;
    std::string nazwisko_;
    std::string adres_;
    std::string plec_;
    std::string nr_indeksu_;
    std::array<uint8_t, 11> pesel_;

    public:
    Student(const std::string& imie,
            const std::string& nazwisko,
            const std::string& adres,
            const std::string& plec,
            const std::string& nr_indeksu,
            const std::array<uint8_t, 11> pesel);
    ~Student() = default;

    static bool checkPesel(const std::array<uint8_t, 11>&);

    std::string getImie() const;
    std::string getNazwisko() const;
    std::string getAdres() const;
    std::string getPlec() const;
    std::string getNrIndeksu() const;
    const auto& getPesel() const;

    void setImie(const std::string& imie);
    void setNazwisko(const std::string& nazwisko);
    void setAdres(const std::string& adres);
    void setPlec(const std::string& plec);
    void setNrIndeksu(const std::string& nr_indeksu);
    void setPesel(const std::array<uint8_t, 11>& pesel);
};