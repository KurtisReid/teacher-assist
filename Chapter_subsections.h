// Chapter_subsections.h
/*

	
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
		//void select_HW_material(stack<string>& HW_problems_stack);// user selects what material was covered and calls get problems
		//void get_problems(stack<string>& problems_stack);//stack passed by reference, allows user to pick specific problems
		
		void print_to_file(ofstream& writefile);
	private:
		//string file_name;
		//ifstream myfile ("example.txt");//file containing problems
		
		list<string> hw_list;
		
	
};