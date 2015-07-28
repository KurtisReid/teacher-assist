// chapter_material.h
/*
	most chapter classes will derive from this class
	
Constructor functions:

Input/Modification functions:

Accessor functions:
	void pick_sections(ofstream& writefile);
	ask user to input subsection number, maps to subsections, writes information onto file
	
	
Member variables:

Notes to self:
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

