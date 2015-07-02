// class_material.h
/*
	void create_ws();
	asks users for which chapters did the class go over. 


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
		void create_ws();
		
	private:
		map<int, Chapter_material> book;//<int is chapter number, 
		stack<string> HW_problems_stack;// clears at every day
	
	
	
};