// class_material.h
/*
	void pick_chapter(ofstream& writefile);
	asks users for which chapters did the class go over. passes textfile to chapter material.
	once returned ask user if they want to go to any other chapters


*/
#include "Chapter_material.h"
#include<string>
#include<map>
#include<stack>

using namespace std;

class Class_material
{
	public:
		Class_material();
		Class_material(map<int, Chapter_material>, stack<string>);
		void create_book();
		//void create_ws();//creates the basic hw file, puts class info
		void pick_chapter(ofstream& writefile);
		void get_chapter(ofstream& writefile);
		
	private:
		map<int, Chapter_material> book;//<int is chapter number, 
		stack<string> HW_problems_stack;// clears at every day
	
	
	
};