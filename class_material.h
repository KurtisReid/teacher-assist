// class_material.h
/*



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
		void create_ws(stack<string>& HW_problems_stack, map<int, Chapter_material> book);
		
	private:
		map<int, Chapter_material> book;//<int is chapter number, 
		stack<string> HW_problems_stack;// clears at every day
	
	
	
};