#pragma once
#include<iostream>
using namespace std;
class Student
{
private:
	string StudentFirstName, StudentLastName;
	int StudentAge;
public:
	Student();
	Student(string fn, string ln, int a);
	void setfirstname(string SfN);
	void setlastname(string SlN);
	void setstudentage(int a);
	string getfirstname();
	string getlastname();
	string getfullname();
	int getstudentage();
};

