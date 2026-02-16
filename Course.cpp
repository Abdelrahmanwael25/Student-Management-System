#include "Course.h"
#include<iostream>
using namespace std;
Course::Course() {
	CourseName = "unknown";
	CourseID = 0;
}
Course::Course(string cn, int id) :CourseName(cn), CourseID(id){

}
void Course::setcoursename(string Cn) {
	CourseName = Cn;
}
void Course::setcourseid(int id) {
	CourseID = id;
}
string Course::getcoursename() {
	return CourseName;
}
int Course::getcourseid() {
	return CourseID;
}
