#include <iostream>
#include "UniversityDB.hpp"

int main()
{
    University univ;
    Student student("Jan", "Kowalski", "ul. Brzozowa 12, Olsztyn", "M", 207333, 88563698456);

    univ.addStudent(student);

    univ.printStudents();
    return 0;
}