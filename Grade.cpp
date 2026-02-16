#include "Grade.h"
#include<iostream>

using namespace std;
Grade::Grade() {
	grade = 0;

}
Grade::Grade(const Student& s, const Course& c, int g):student(s),course(c)  {
	this -> grade = g;
}
void Grade::setgrade(int a) {
	grade = a;
}
int Grade::getgrade() const{
	return grade;
}
Student Grade::GetStudent() const {
	return student;
}

Course Grade::GetCourse() const {
	return course;
}
