// chapter_material.h
/*
	most chapter classes will derive from this class
	void pick_sections(ofstream& writefile);
	ask userto input subsection number, maps to subsections, writes information onto file
	
	please close files when done
*/

#include<string>
#include<stack>
#include<map>
#include<iostream>
#include<fstream>
using namespace std;

class Chapter_material
{
	public:
		Chapter_material();
		Chapter_material();
		void pick_sections(ofstream& writefile);
		
	private:
		string chapter_name;
		int chapter_num;
		int chapter_sections;
		map<int, Chapter_subsections> sections;
	
	
};

class Chapter_subsections
{
	public:
		Chapter_subsections();
		Chapter_subsections(string ws_name, ifstream& problems_file);
		void modify_information();
		
		//for later development
		//void select_HW_material(stack<string>& HW_problems_stack);// user selects what material was covered and calls get problems
		//void get_problems(stack<string>& problems_stack);//stack passed by reference, allows user to pick specific problems
		
		void print_to_file(ofstream& writefile);
	private:
		string file_name;
		ifstream myfile ("example.txt");//file containing problems 
		
	
}