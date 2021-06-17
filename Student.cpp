#include "Student.hpp"

Student::Student(const std::string& imie,
            const std::string& nazwisko,
            const std::string& adres,
            const std::string& plec,
            const std::string& nr_indeksu,
            const unsigned long int pesel)
            : imie_(imie),
            nazwisko_(nazwisko),
            adres_(adres),
            plec_(plec),
            nr_indeksu_(nr_indeksu),
            pesel_(pesel)
            { }

    static bool checkPesel(const unsigned long int pesel)
    {
        return false;
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
       if (!adres.empty())
        {
            adres_ = adres;
        }
    }

    void Student::setPlec(const std::string& plec)
    {
        if (!plec_.empty())
        {
            plec_ = plec;
        }
    }

    void Student::setNrIndeksu(const std::string& nr_indeksu)
    {
        if(!nr_indeksu_.empty())
        {
            nr_indeksu_ = nr_indeksu;
        }
    }

    void Student::setPesel(const unsigned long int pesel)
    {
        if (checkPesel(pesel))
        {
            pesel_ = pesel;
        }
    }