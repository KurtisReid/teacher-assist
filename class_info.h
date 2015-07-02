//basic_info_class.h

/*
data structure that contains the following:
	- Teachers name
	- Class name
	- Course Number

// input functions
	void set_instructors_first_name(string first);
		Takes input and sets instructors_first_name to value passed
		Pre: value passed must be a string
		Post: instructors_first_name set to value passed
	void set_instructors_last_name(string last);
		Pre: value passed must be a string
		Post: instructors_last_name set to value passed
	void set_instructors_full_name(string first, string last);
		Pre: values passed must be strings
		Post: instructors_first_name set to value first, instructors_last_name set to value last
	void set_class_name(string class_nme);
		Pre: value passed must be a string and a correct class name
		Post: class_name set to value passed
	void set_course_num(string course);
		Pre: value passed must be a string
		Post: course_number set to value passed

Accessors functions
	string get_instructor_first_name();
		Pre: instructor_first_name is initialized
		Post: returns instructor_first_name 
	string get_last_name();
		Pre: instructor_last_name is initialized
		Post: returns instructor_last_name 
	string get_full_name();
		Pre: instructor_first_name and instructor_last_name are initialized
		Post: returns instructor_first_name , instructor_last_name
	string get_class_name();
		Pre: class_name is initialized
		Post: returns class_name 
	string get_course_number();
		Pre: course_number is initialized
		Post: returns course_number
		
	void make_worksheet();
		creteas new text file with basic information, calls the pick_chapter function in class_material
		Pre: Class material is intitialized and has information
		Post: file contianing homework problems is created and has homework problems on it
		
	void print_info();
		Pre:
		Post: prints instructor_first_name, instructor_last_name, class_name, and course_number to the screen

	


*/
#include<string>
using namespace std;

class Class_info
{
	public:
		Class_info();// default constructor
		Class_info(string first, string last, string class_n, string course_num);// constructor
		// mutator functions
		void set_instructors_first_name(string first);
		void set_instructors_last_name(string last);
		void set_instructors_full_name(string first, string last);
		void set_class_name(string class_nme);
		void set_course_num(string course);
		
		//assessor functions
		string get_instructor_first_name() {return instructor_first_name;}
		string get_last_name() {return instructor_last_name;}
		string get_full_name() {return instructor_last_name + ", " + instructor_first_name;}
		string get_class_name() {return class_name;}
		string get_course_number() {return course_number;}
		
		void make_worksheet();// creteas new text file with basic information
		
		void print_info();
	
	private:
		string instructor_first_name;
		string instructor_last_name;
		string class_name;// ex. calculus 1
		string course_number;// ex ma2024
		Class_material material;//object contains material
	
};