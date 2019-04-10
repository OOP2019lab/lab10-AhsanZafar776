
#include<iostream>
#include<string>
using namespace std;
class course;
#ifndef COURSE_H
#define COURSE_H
class student
{
	friend ostream& operator<<(ostream& out, student& a)
	{
		out<<a.name;
		out<<a.roll_number;
		out<<" course takne by student"<<endl;
		for(int i=0;i<a.courses_taken;i++)
		out<<a.courses[i]->course_name<<endl;

		return out;
	}
private:
	static int count;
	 string username;
	string roll_number;
	string name;
	course *courses[4];
	int courses_taken;
	void addcourse_task2(course *a);
public:
	friend class course;
	student(string n ,string roll);
	void addcourse(course *a);
	void dropcourse(course * );
	string getname();



};
#endif