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

void Class_info::create_material()
{
	//create new material from scratch
	/*
		class material
		chapter material
		chapter subsections
	
	*/
	
}

void Class_info::add_more_material()
{
	//add to preexisting material
}

void Class_info::make_worksheet()
{
	ofstream new_worksheet;
	string usr_input;
	string txt = ".txt";
	// could add more formats later
	cout << "what do you want your new file to be labelled (no spaces please)?" << endl;
	cin >> usr_input;
	
	// appending file type extention to name
	usr_input.append(txt);
	
	//creating worksheet file
	new_worksheet.open(usr_input);
	
	//adding basic information
	new_worksheet << get_full_name() << "\t" << get_class_name() << "\t" << get_course_number() << endl;
	
	material.pick_chapter(new_worksheet);
	
	// to do later: allow multiple chapters to be picked
	
	// closing file
	new_worksheet.close();
	
	
	
}

void Class_info::print_info()
{
	cout << "Class information" << endl;
	cout << "Class Name: " << get_class_name() << endl;
	cout << "Instructor: " << get_full_name() << endl;
	cout << "Course Number: " << get_course_number() << endl;
	cout << endl;
}
