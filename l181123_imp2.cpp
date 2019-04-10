#include"student.h"
#include"course.h"
int student::count=0;
void course::addstudent(student *a)
{
	if(students_reg<4)
		students[students_reg]=a;
	a->addcourse(this);
	students_reg++;
}

course::course(string name,string id)
{
	course_name=name;
	course_number=id;
	students_reg=0;

}
void course::dropstudent(student*a)
{
	for(int i;i<students_reg;i++)
	{
		if(a==students[i])
			students[i]=nullptr;
	}
}
void course::addstudent_task2(student *a)
{
	if(students_reg<4)
		students[students_reg]=a;
	students_reg++;
}
string course::getname()
{
	return course_name;
}
