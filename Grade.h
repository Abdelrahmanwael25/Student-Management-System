#pragma once
#include<iostream>
#include"Student.h"
#include"Course.h"
using namespace std;
class Grade
{
private:
	Student student;
	Course course;
	int grade;
public:
	Grade();
	Grade(const Student& s, const Course& c, int g);
	void setgrade(int a);
	int getgrade() const;
	Student GetStudent() const;
	Course GetCourse() const;
	;
};

