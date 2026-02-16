#include<iostream>
#include "GradeManager.h"
using namespace std;
GradeManager::GradeManager() {
	students = nullptr;
	courses = nullptr;
	grades = nullptr;
	studentCount = 0;
	courseCount = 0;
	gradeCount = 0;
}
GradeManager::~GradeManager() {
	delete[] students;
	delete[] courses;
	delete[] grades;
}

void GradeManager::addstudent(const Student& s) {
	Student* temp = new Student[studentCount + 1];
	for (int i = 0; i < studentCount; i++)
		temp[i] = students[i];

	temp[studentCount] = s;

	delete[] students;
	students = temp;
	studentCount++;
}

void GradeManager::addcourse(const Course& c) {
	Course* temp = new Course[courseCount + 1];
	for (int i = 0; i < courseCount; i++)
		temp[i] = courses[i];

	temp[courseCount] = c;

	delete[] courses;
	courses = temp;
	courseCount++;
}

void GradeManager::addgrade(const Grade& g) {
	Grade* temp = new Grade[gradeCount + 1];
	for (int i = 0; i < gradeCount; i++)
		temp[i] = grades[i];

	temp[gradeCount] = g;

	delete[] grades;
	grades = temp;
	gradeCount++;
}

void GradeManager::printAllgrades() const {
	for (int i = 0; i < gradeCount; i++) {
		cout << grades[i].GetStudent().getfullname() << " | "
			<< grades[i].GetCourse().getcoursename() << " | "
			<< grades[i].getgrade() << endl;
	}
}
double GradeManager::average() const {
	if (gradeCount == 0) return 0;

	double sum = 0;
	for (int i = 0; i < gradeCount; i++)
		sum += grades[i].getgrade();

	return sum / gradeCount;
}

