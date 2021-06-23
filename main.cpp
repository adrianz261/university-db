#include <iostream>
#include "UniversityDB.hpp"

int main()
{
    University univ;
    Student student1("Jan", "Kowalski", "ul. Brzozowa 12, Olsztyn", "Mężczyzna", 207339u, "89652365559");
    Student student2("Jan", "Nowak", "ul. Brzozowa 13, Olsztyn", "Mężczyzna", 208333u, "92852365559");
    Student student3("Adam", "Ryba", "ul. Brzozowa 14, Bydgoszcz", "Mężczyzna", 107833u, "55030101230");
    Student student4("Katarzyna", "Ryba", "ul. Brzozowa 14, Bydgoszcz", "Kobieta", 107335u, "91652365559");
    Student student5("Zbigniew", "Golonka", "ul. Brzozowa 14, Bydgoszcz", "Mężczyzna", 107334u, "80652365559");

    univ.addStudent(student1);
    univ.addStudent(student2);
    univ.addStudent(student3);
    univ.addStudent(student4);
    univ.addStudent(student5);

    auto search_result1 = univ.searchBySurname("Ryba");
    auto search_result2 = univ.searchByPesel("89652365559");
    std::cout << "wyszukiwanie po nazwisku: " << search_result1.getName() << ' ' << search_result1.getSurname() << '\n';
    std::cout << "wyszukiwanie po numerze PESEL: " << search_result2.getName() << ' ' << search_result2.getSurname() << '\n';
    
    std::cout << "Przed sortowaniem (nazwisko):\n";
    univ.printStudents();
    univ.sortBySurname();
    std::cout << "Po sortowaniu (nazwisko):\n";
    univ.printStudents();

    const std::string some_pesel = "55030101230";
    const unsigned int some_index_number = 107335u;
    if (Student::checkPesel(some_pesel))
    {
        std::cout << "Podany numer PESEL" << some_pesel << " jest poprawny.\n";
    }

    if (univ.removeStudent(some_index_number))
    {
        std::cout << "Usunieto studenta !\n";
    }

    std::cout << "Przed sortowaniem (PESEL):\n";
    univ.printStudents();
    univ.sortByPesel();
    std::cout << "Po sortowaniu (PESEL):\n";
    univ.printStudents();


    return 0;
}