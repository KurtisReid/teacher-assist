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

void Class_material::create_book()
{
	//map<int, Chapter_material> book;
	Chapter_material ch = Chapter_material("chapter one", 1, 3);
	ch1.set_section(int num);
	
	/*
		7/28/15
		I stopped here
	
	*/
	
}


//void Class_material::create_ws();//creates the basic hw file, puts class info
void Class_material::pick_chapter(ofstream& writefile)
{
	
	bool multiple_chapters = true;
	string mult_chap;
	
	// seeing if mutiple chapters must be acessed
	cout << "Did you cover multiple chapters today?" << endl;
	cout << "1 = yes" << endl << "else = no" << endl;
	cin >> mult_chap;
	
	if (mult_chap = "1")// if mutltiple chapters
	{
		do {
			get_chapter(writefile);
			cout << "another chapter?" << endl;
			cout << "1 = yes" << endl << "else = no" << endl;
			cin >> mult_chap;
			if (mult_chap = "1")
			{
				// do nothing
			}
			else
			{
				multiple_chapters = false;
			}
		
		} while (multiple_chapters);
	}
	else//only one chapter
	{
		get_chapter(writefile);
	}
	
	
}

void Class_material::get_chapter(ofstream& writefile)
{
	int chapter;
	// ask for chapter
	cout << "what chapter was today's material in?"
			
	//navigating to chapter
	auto look = book.find(chapter);
	if (look != book.end())
	{
		cout << "found " << look->first << " " << look->second << endl;
				
		//prinitng chapter number on to file
		writefile << chapter << endl;
				
		//calling pick_sections function in chapter material, passes the text file
		look->second.pick_sections(writefile);
	}
}