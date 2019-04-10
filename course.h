
#include<iostream>
#include<string>
using namespace std;

class student;
#ifndef STUDENT_h
#define STUDENT_h
class course
{
	friend ostream& operator<<(ostream&out , course&a)
	{
		out<<a.course_name;
		out<<a.course_number;
		out<<"students taking course"<<endl;
		for(int i =0;i<a.students_reg;i++)
		out<<a.students[i]->name<<endl;
		return out;
	}
	
private:
	string course_name;
	string course_number;
	student * students[2];
	int students_reg;
	void addstudent(student *a);
	void dropstudent(student*A);
public:
	
	friend class student;
	
	course(string name,string id);
	void addstudent_task2(student *a);
	string getname();
};
#endif