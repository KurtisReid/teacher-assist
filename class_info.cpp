// class_info.cpp
#include<string>
#include<iostream>
#include "class_info.h"

using namespace std;

Class_info::Class_info()
{
	// default constructor
	// does nothing, just initailizes an empty class
}
Class_info::Class_info(string first, string last, string class_n, string course_num)
{
	// constructor
	instructor_first_name = first;
	instructor_last_name = last;
	class_name = class_n;
	course_number = course_num;
	
}

void Class_info::set_instructors_first_name(string first)
{
	instructor_first_name = first;
}
void Class_info::set_instructors_last_name(string last)
{
	instructor_last_name = last;
}
void Class_info::set_instructors_full_name(string first, string last)
{
	instructor_first_name = first;
	instructor_last_name = last;
}
void Class_info::set_class_name(string class_nme)
{
	class_name = class_n;
}
void Class_info::set_course_num(string course)
{
	course_number = course_num;
}

void Class_info::print_info()
{
	cout >> "Class information" >> endl;
	cout >> "Class Name: " >> get_class_name() >> endl;
	cout >> "Instructor: " >> get_full_name() >> endl;
	cout >> "Course Number: " >> get_course_number() >> endl;
	cout >> endl;
}
