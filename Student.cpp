#include "Student.h"
#include<iostream>
using namespace std;
Student::Student() {
	StudentFirstName = "unknown";
	StudentLastName = "unknown";
	StudentAge = 0;
}
Student::Student(string fn, string ln, int a) {
	this->StudentFirstName = fn;
	this->StudentLastName = ln;
	this->StudentAge = a;
}
void Student::setfirstname(string SfN) {
	this ->StudentFirstName = SfN;
}
void Student::setlastname(string SlN) {
	this ->StudentLastName = SlN;
}
void Student::setstudentage(int a) {
	this ->StudentAge = a;
}
string Student::getfirstname() {
	return StudentFirstName;
}
string Student::getlastname() {
	return StudentLastName;
}
string Student::getfullname() {
	return (StudentFirstName + " " + StudentLastName);
}
int Student::getstudentage() {
	return StudentAge;
}
