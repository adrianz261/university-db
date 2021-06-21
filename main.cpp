#include <iostream>
#include "UniversityDB.hpp"

int main()
{
    University univ;
    Student student1("Jan", "Kowalski", "ul. Brzozowa 12, Olsztyn", "M", 207333u, "89652365559");
    Student student2("Jan", "Nowak", "ul. Brzozowa 13, Olsztyn", "M", 208333u, "89652365559");
    Student student3("Adam", "Ryba", "ul. Brzozowa 14, Bydgoszcz", "M", 107333u, "89652365559");

    univ.addStudent(student1);
    univ.addStudent(student2);
    univ.addStudent(student3);

    auto result = univ.searchByPesel("89652365559");

    std::cout << "Znaleziono: " << result.getName() << '\n';

    for (auto p : result.getPesel())
    {
        std::cout << p;
    }

    univ.printStudents();
    return 0;
}