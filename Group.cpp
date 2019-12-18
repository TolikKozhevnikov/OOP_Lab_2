#include "Group.h"
#include "Student.h"
#include "StudentDefualt.h"
#include "StudentBotanist.h"
#include "StudentCouncil.h"
#include <iostream>
#include <algorithm>

using namespace std;
Group::Group(const string& Name) {
	this->Name = Name;
}
const string& Group::GetGroupName() {
	return Name;
}

Student* Group::InfoAboutStudent(const string& Name1, const string& Name2, const string& Name3) {
	for (auto i = Students.begin(); i != Students.end(); i++) {
		cout << "| " << Name1 << " " << Name2 << " " << Name3 << " " << "a member of the group" << " " << this->GetGroupName() << endl;
		cout << "-----------------------------------------" << endl;
		return *i;
	}
	cout << "Student not found" << endl;
	cout << "-----------------------------------------" << endl;
	return nullptr;
}
bool Group::AcceptAddToGroup(Student* student) {
	if (Students.size() < 4) { // должно быть 20, но для примера 4
	Students.push_back(student);
	cout << "| " << student->GetName1() << " add to group " << Name << endl;
	cout << "-----------------------------------------" << endl;
	return true;
	}
	else
	{
		cout << "| "  << student->GetName1() <<" is not added to the group " << Name << " because it is crowded" << endl;
		cout << "-----------------------------------------" << endl;
	}
}
void Group::ToExpelTheStudent(Student* student) {
	for (auto i = Students.begin(); i != Students.end(); i++) {
		if (student == *i) {
			cout << "| " << "Student " << student->GetName1() << " has been kick" << endl;
			cout << "-----------------------------------------" << endl;
			Students.erase(i);
			student->LeftFromGroup(this->Name);
			break;
		}
	}
}

void Group::SortStudentName(){
	sort(Students.begin(), Students.end());
	cout << "| List of students with exam scores: " << endl;
	cout << "| " << endl;
	
	for (int i = 0; i < Students.size(); i++) {
		cout << "| " << Students[i]->GetName1() << " " << Students[i]->GetName2() << " " << Students[i]->GetName3() << " " << Students[i]->GetRating() << endl;
	}
	cout << "-----------------------------------------" << endl;
}
void Group::Exam() {
	cout << "| Students expelled after the exam: " << endl;
	cout << "| " << endl;
	for (int i = 0; i < Students.size(); i++) {
		if (Students[i]->GetRating() < 3) {
			cout << "| Student " << Students[i]->GetName1() << " expelled because of academic performance!" << endl;
			Students[i]->LeftFromGroup(this->Name);
		}
	}
	cout << "-----------------------------------------" << endl;
}

