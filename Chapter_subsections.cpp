//chapter_subsections.cpp

#include "Chapter_subsections.h"
#include<string>
#include<stack>
#include<map>
#include<iostream>
#include<fstream>

using namespace std;

Chapter_subsections::Chapter_subsections()
{
	
}
Chapter_subsections::Chapter_subsections(string ws_name, ifstream& problems_file)
{
	
}
void Chapter_subsections::modify_information()
{
	
}

//for later development
//void select_HW_material(stack<string>& HW_problems_stack);// user selects what material was covered and calls get problems
//void get_problems(stack<string>& problems_stack);//stack passed by reference, allows user to pick specific problems

void Chapter_subsections::print_to_file(ofstream& writefile)
{
	for (iterator it = hw_list.begin(); it != hw_list.end(); ++it)
	{
		writefile << *it << endl;
	}
}