/*
	Teacher assist app:
	designed to take input from teacher and create worksheet for students
	
	



*/
#include "Chapter_subsections.h"
#include "class_info.h"
#include "class_material.h"
#include "Chapter_material.h"
#include <iostream>
#include<list>

using namespace std;

void create_everything();
//create eveything then place it

int main () 
{
	//first test
	Class_info math("kurtis", "reid", "Calculus_1", "CSE_15057");
	math.create_material();
	//math.make_worksheet();
	
	
	
}

void create_everything()
{
	//chapter subsections
	Chapter_subsections chap_one_point_one
	
	Chapter_material chapter_one = Chapter_material()
}

Chapter_subsections create_chapter_sub(int num)
{
	Chapter_subsections chap_subsect = Chapter_subsections(num);
	cout << "modify info in chapter_subsection" << endl;
	for (int i = 0; i < 4; i++)
	{
		chap_subsect.modify_information();
	}
	cout << "chapter_subsection modification finished" << endl;
	return chap_subsect;
}