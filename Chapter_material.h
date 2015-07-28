// chapter_material.h
/*
	most chapter classes will derive from this class
	
Constructor functions:
	Chapter_material();
	Default constuctor
	Pre:
	Post:
	
	Chapter_material(string ch_name, int ch_num, int ch_sects, map<int, Chapter_subsections> sect_map);
	Pre:
	Post:

Input/Modification functions:

	void select_by_subject(ofstream& writefile);
	**will not be implimented until later versions**
	User selects what material was covered and calls function get_problems. gets all problems related to material
	Pre:
	Post:
	
	void selection_settings(ofstream& writefile);
	**will not be implimented until later versions**
	User selects if they want all problems (complete_hw_list), subject-based problems, or specific problems to be printed to file.
	Program calls functions accordingly.
	Pre:
	Post:

Accessor functions:
	void pick_sections(ofstream& writefile);
	ask user what subsection they want input subsection number, maps to subsections, writes information onto file
	
	
Member variables:
	string chapter_name;
	
	int chapter_num;
	
	int chapter_sections;
	- number of sections in chapter.
	- Used in counting
	
	map<int, Chapter_subsections> sections;
	- Map of chapter subsections
	- int equals the section number
	- Ex. ch 8 section 2
Notes to self:
	please close files when done
*/
#include "Chapter_subsections.h"
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
		Chapter_material(string ch_name, int ch_num, int ch_sects, map<int, Chapter_subsections> sect_map);
		void pick_sections(ofstream& writefile);
		void set_sections();
		
	private:
		string chapter_name;
		int chapter_num;
		int chapter_sections;
		map<int, Chapter_subsections> sections;
		
		
	
	
};

