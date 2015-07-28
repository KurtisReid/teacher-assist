//Chapter_material.cpp


#include "Chapter_subsections.h"
#include "Chapter_material.h"
#include<string>
#include<stack>
#include<map>
#include<iostream>
#include<fstream>

using namespace std;

Chapter_material::Chapter_material()
{
	
}
Chapter_material::Chapter_material(string ch_name, int ch_num, int ch_sects, map<int, Chapter_subsections> sect_map)
{
	
}
void Chapter_material::pick_sections(ofstream& writefile)
{
	//get_problems(ofstream& writefile);
	int section;
	cout << "what section do you want to retrive the info from?" << endl;
	cin >> section;
	while (cin.fail() || section > chapter_sections)
	{
		//not an int
		cout << "invalid enter" << endl;
		cout << "what section do you want to retrive the info from?" << endl;
		cin >> section;
	}
	cout << "you choose section: " << cin >> section;
	
}