// Chapter_subsections.h
/*
	chapter number, section
Constructor functions:

Input/Modification functions:
	void modify_information();
	Allows the user to input a new problem into the file.
	Pre: The list of strings must exist
	Post: The list of strings, hw_list, will have another problem added to it
	
Accessor functions:
	void print_to_file(ofstream& writefile);
	prints all problems in hw_list to passed textfile
	Pre: ofstream passed to function must be initialized to text file. Hw_list must have problems in it and must be a list of strings.
	Post: problems in hw_list are written to text file

	
	please close files when done
*/

#include<string>
#include<stack>
#include<map>
#include<iostream>
#include<fstream>
#include<list>
using namespace std;

class Chapter_subsections
{
	public:
		Chapter_subsections();
		//Chapter_subsections(string ws_name, ifstream& problems_file);
		Chapter_subsections(list<string> hw);
		void modify_information();
		
		//for later development
		//void select_HW_material(stack<string>& HW_problems_stack);// user selects what material was covered and calls get problems. gets all problems related to material
		//void select_specific_problems();//user selects specific problems to put on homework. Ex. 2-27 Odd
		//void get_problems(stack<string>& problems_stack);//stack passed by reference, allows user to pick specific problems
		
		void print_to_file(ofstream& writefile);
		
	private:
		//string file_name;
		//ifstream myfile ("example.txt");//file containing problems
		
		list<string> hw_list;
		
	
};