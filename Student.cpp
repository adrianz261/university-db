#include "Student.hpp"

Student::Student(const std::string& imie,
            const std::string& nazwisko,
            const std::string& adres,
            const std::string& plec,
            const std::string& nr_indeksu,
            const std::array<uint8_t, 11> pesel)
            : imie_(imie)
            {

            }


    std::string Student::getImie() const { return imie_; }
    std::string Student::getNazwisko() const { return nazwisko_; }
    std::string Student::getAdres() const { return adres_; }
    std::string Student::getPlec() const { return plec_; }
    std::string Student::getNrIndeksu() const { return nr_indeksu_; }
    const auto& Student::getPesel() const{ return pesel_; }

    void Student::setImie(const std::string& imie)
    {
        if (!imie.empty())
        {
            imie_ = imie;
        }
    }

    void Student::setNazwisko(const std::string& nazwisko)
    {
        if (!nazwisko.empty())
        {
            nazwisko_ = nazwisko;
        }
    }

    void Student::setAdres(const std::string& adres)
    {

    }

    void Student::setPlec(const std::string& plec)
    {

    }

    void Student::setNrIndeksu(const std::string& nr_indeksu)
    {

    }

    void Student::setPesel(const std::array<uint8_t, 11>& pesel)
    {

    }