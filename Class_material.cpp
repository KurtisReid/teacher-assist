/*
	void pick_chapter(ofstream& writefile);
	asks users for which chapters did the class go over. passes textfile to chapter material.
	once returned ask user if they want to go to any other chapters


*/
#include "class_material.h"
#include "Chapter_material.h"
#include<string>
#include<map>
#include<stack>
#include <iostream>
#include <fstream>
#include <cctype>// for tolower function
using namespace std;

Class_material::Class_material()
{
	
}
Class_material::Class_material(map<int, Chapter_material>, stack<string>)
{
	
}
//void Class_material::create_ws();//creates the basic hw file, puts class info
void Class_material::pick_chapter(ofstream& writefile)
{
	int chapter;
	bool multiple_chapters = true;
	string mult_chap;
	
	// seeing if mutiple chapters must be acessed
	cout << "Did you cover multiple chapters today?" << endl;
	cout << "1 = yes" << endl << "else = no" << endl;
	cin >> mult_chap;
	
	if (mult_chap = "1")
	{
		do {
			// ask for chapter
			cout << "what chapter was today's material in?"
			
			//navigating to chapter
			auto look = book.find(chapter);
			if (look != book.end())
			{
				cout << "found " << look->first << " " << look->second << endl;
				
				//calling pick_sections function in chapter material
				look->second.pick_sections(writefile);
			}
		
		
		} while (multiple_chapters);
	}
	
	
}