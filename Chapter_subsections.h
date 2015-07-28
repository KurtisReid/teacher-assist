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
	void print_to_file(ofstream& writefile, list<string> prob_list);
	prints all problems in prob_list to passed textfile
	Pre: ofstream passed to function must be initialized to text file. Hw_list must have problems in it and must be a list of strings.
	Post: problems in hw_list are written to text file

	
	void select_HW_material(ofstream& writefile);
	User selects what material was covered and calls function get_problems. gets all problems related to material
	*Depreciated due to select_by_subject function in Chapter material class*
	Pre:
	Post:
	
	void select_specific_problems(ofstream& writefile);
	User selects specific problems to put on homework and calls function print_to_file. Ex. 2-27 Odd
	Pre:
	Post:
	
	void get_problems(list<string>& HW_problems_list);
	Gets specified hw problems, puts into a list, then calls print_to_file
	Pre: Problems exist 
	Post: more problems have been printed to file
	
	void hw_settings();
	***Depreciated due to selection_settings function in Chapter material class***
	User selects if they want all problems (complete_hw_list), subject-based problems, or specific problems to be printed to file.
	Program calls functions accordingly.
	Pre:
	Post:
	
	
Member variables:
	list<string> hw_list;
	Containes all the problems in the section
	
	
Notes to self:
	-please close files when done
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
		
		void print_to_file(ofstream& writefile, list<string> prob_list);
		
	private:
		//string file_name;
		//ifstream myfile ("example.txt");//file containing problems
		
		list<string> complete_hw_list;
		
	
};