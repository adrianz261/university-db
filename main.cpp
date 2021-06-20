#include <iostream>
#include "UniversityDB.hpp"

int main()
{
    University univ;
    Student student1("Jan", "Kowalski", "ul. Brzozowa 12, Olsztyn", "M", 207333u, 99123113456u);
    Student student2("Jan", "Nowak", "ul. Brzozowa 13, Olsztyn", "M", 208333u, 99123113456u);
    Student student3("Adam", "Ryba", "ul. Brzozowa 14, Bydgoszcz", "M", 107333u, 99123110755u);

    univ.addStudent(student1);
    univ.addStudent(student2);
    univ.addStudent(student3);

    auto result = univ.searchBySurname("Ryba");

    std::cout << "Znaleziono: " << result.getName() << '\n';

    univ.printStudents();
    return 0;
}