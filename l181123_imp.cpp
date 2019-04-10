#include"student.h"
#include"course.h"
void student::addcourse( course *a)
{

	if(courses_taken <2)
	{
		courses[courses_taken]=a;
	}
	a->addstudent(this);
	courses_taken++;

}

student::student(string n ,string roll)
{
	count++;
	name=n;
	roll_number=roll;
	int flag=0;
	username=count;

}
void student::dropcourse( course*a)
{
	for(int i=0;i<courses_taken;i++)
	{
		if(a=courses[i])
			courses[i]=nullptr;
	}
}
void student::addcourse_task2( course *a)
{

	if(courses_taken <2)
	{
		courses[courses_taken]=a;
	}
	courses_taken++;

}
string student::getname()
{
	return name;
}
