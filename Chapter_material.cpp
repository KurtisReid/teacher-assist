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
	int section, choice;
	bool stay = true;
	cout << "what section do you want to retrive the info from?" << endl;
	cin >> section;
	while (cin.fail() || section > chapter_sections)
	{
		//not an int
		cout << "invalid enter" << endl;
		cout << "what section do you want to retrive the info from?" << endl;
		cin >> section;
	}
	cout << "you choose section: " << section << endl;
	Chapter_subsections user_selection = sections.at(section);
	
	do
	{
		cout << "What do you want to do" << endl;
		cout << "	1 = modify section info" << endl;
		cout << "	2 = get all hw and print to file" << endl;
		cout << "	else = exit section" << endl;
		cin >> choice;
		
		if (choice == 1)
		{
			cout << "modify information" << endl;
			user_selection.modify_information();
		}
		else if (choice == 2)
		{
			cout << "get hw and print to file" << endl;
			user_selection.get_problems(writefile);
		}
		else
		{
			stay == false
		}
		
	} while(stay);

	
}

void Chapter_material::set_section(int num)
{
	//map<int, Chapter_subsections> sections;
	
	Chapter_subsections chap_subsect = Chapter_subsections(num);
	bool stay = true;
	int choice;
	cout << "modify info in chapter_subsection" << endl;
	do
	{
		chap_subsect.modify_information();
		cout << "modify more?" << endl;
		cout << "	1 = yes" << endl;
		cout << "	else = no" << endl;
		cin >> choice;
		if (choice != 1)
		{
			stay = false;
		}
	} while (stay == true);
	cout << "chapter_subsection modification finished" << endl;
}