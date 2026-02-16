#pragma once
#include<iostream>
using namespace std;
class Course
{
private:
	string CourseName;
	int CourseID;
public:
	Course();
	Course(string cn, int id);
	void setcoursename(string Cn);
	void setcourseid(int id);
	string getcoursename();
	int getcourseid();
};

