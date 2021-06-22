#include <iostream>
#include "UniversityDB.hpp"

int main()
{
    University univ;
    Student student1("Jan", "Kowalski", "ul. Brzozowa 12, Olsztyn", "M", 207333u, "89652365559");
    Student student2("Jan", "Nowak", "ul. Brzozowa 13, Olsztyn", "M", 208333u, "92852365559");
    Student student3("Adam", "Ryba", "ul. Brzozowa 14, Bydgoszcz", "M", 107333u, "55030101230");
    Student student4("Katarzyna", "Ryba", "ul. Brzozowa 14, Bydgoszcz", "M", 107333u, "91652365559");
    Student student5("Zbigniew", "Golonka", "ul. Brzozowa 14, Bydgoszcz", "M", 107333u, "80652365559");

    univ.addStudent(student1);
    univ.addStudent(student2);
    univ.addStudent(student3);
    univ.addStudent(student4);
    univ.addStudent(student5);

    auto result = univ.searchByPesel("89652365559");

    std::cout << "Znaleziono: " << result.getName() << '\n';

    std::cout << "Przed sortowaniem:\n";
    univ.printStudents();
    univ.sortBySurname();

    std::cout << "Po sortowaniu:\n";
    univ.printStudents();


    return 0;
}