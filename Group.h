#pragma once
#include "Student.h"
#include "StudentDefualt.h"
#include "StudentBotanist.h"
#include "StudentCouncil.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Group
{
private:
	string Name;
	vector <Student*> Students;
	
public:
	Group(const string& Name);
	const string& GetGroupName();
	Student* InfoAboutStudent(const string& Name1, const string& Name2, const string& Name3);
	bool AcceptAddToGroup(Student* student);
	void ToExpelTheStudent(Student* student);
	void SortStudentName();
	void Exam();

};

