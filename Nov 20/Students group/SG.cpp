#include "Students group.h"
#include <iostream>

void Students_group::group_initialization() {
	std::cout << "Amount students" << std::endl;
	std::cin >> _amount_students;
	std::cout << "Group number" << std::endl;
	std::cin >> _group_number;
	std::cout << "Year of study" << std::endl;
	std::cin >> _year_of_study;
}

void Students_group::Students_groupGET() {
	std::cout <<"Group number " << _group_number << "\tAmount students " << _amount_students << "\tYear of study " << _year_of_study << std::endl;
}

void Student::student_initialization() {
	std::cout << "Student's name" << std::endl;
	std::cin >> _name;
	std::cout << "Student's number" << std::endl;
	std::cin >> _self_number;
}

void Student::StudentGET() {
	std::cout << "Student's name " << _name << "\tStudent's number " << _self_number << std::endl;
}

int main()
{
	Students_group obj;
	obj.group_initialization();
	Student Sobj;
	Sobj.student_initialization();

	obj.Students_groupGET();
	Sobj.StudentGET();

	return 0;
}