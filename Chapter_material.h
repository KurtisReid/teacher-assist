// chapter_material.h
/*
	most chapter classes will derive from this class


*/

#include<string>
#include<stack>
using namespace std;

class Chapter_material
{
	public:
		Chapter_material();
		Chapter_material();
		
	private:
		string chapter_name;
		int chapter_num;
		int chapter_sections;
		map<int, Chapter_subsections> sections;
	
	
};

class Chapter_subsections
{
	public:
		void set_information(string str);
		void select_HW_material(stack<string>& HW_problems_stack);// user selects what material was covered and calls get problems
		void get_problems(stack<string>& problems_stack);//stack passed by reference
		
	
}