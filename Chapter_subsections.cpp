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
Chapter_subsections::Chapter_subsections(list<string> hw)
{
	complete_hw_list = hw;
}
void Chapter_subsections::modify_information()
{
	string usr_inp;
	cout << "please enter the problem you wish to insert into the list:" << endl;
	cin >> usr_inp;
	complete_hw_list.push_back(usr_inp);
}

/*for later development
//void select_HW_material(stack<string>& HW_problems_stack);// user selects what material was covered and calls get problems
//void get_problems(stack<string>& problems_stack);//stack passed by reference, allows user to pick specific problems
void Chapter_subsections::select_specific_problems()
{
	//user selects specific problems to put on homework. Ex. 2-27 Odd
	
}
*/

void Chapter_subsections::print_to_file(ofstream& writefile, list<string> prob_list)
{
	
	for (iterator it = prob_list.begin(); it != prob_list.end(); ++it)
	{
		writefile << *it << endl;
	}
	
}