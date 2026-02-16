#pragma once
#include<iostream>
#include<vector>
#include"Student.h"
#include"Course.h"
#include"Grade.h"
using namespace std;
class GradeManager
{
private:
	Student* students;
	Course* courses;
	Grade* grades;
	int studentCount;
	int courseCount;
	int gradeCount;
public:
	GradeManager();
	~GradeManager();
	void addstudent(const Student& s);
	void addcourse(const Course& c);
	void addgrade(const Grade& g);
	void printAllgrades()const;
	double average()const;
};

