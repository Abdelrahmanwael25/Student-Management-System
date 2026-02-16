#include<iostream>
#include"Grade.h"
#include"GradeManager.h"
using namespace std;
int main() {
    GradeManager manager;

    Student s1("abdelrahman", "wael", 19);
    Student s2("wael", "ahmed", 21);

    Course c1("Math", 1213);
    Course c2("Physics", 1124);

    manager.addstudent(s1);
    manager.addstudent(s2);

    manager.addcourse(c1);
    manager.addcourse(c2);

    manager.addgrade(Grade(s1, c1, 95));
    manager.addgrade(Grade(s2, c2, 88));

    cout << "All Grades:\n";
    manager.printAllgrades();

    cout << "\nAverage = " << manager.average() << endl;

    return 0;

}
