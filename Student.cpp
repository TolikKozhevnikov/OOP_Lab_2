#include "Student.h"
#include "Group.h"
#include "StudentBotanist.h"
#include "StudentDefualt.h"
#include "StudentCouncil.h"

using namespace std;

Student::Student(const string& Name1, const string& Name2, const string& Name3) {
	this->Name1 = Name1;
	this->Name2 = Name2;
	this->Name3 = Name3;
	
}

const string& Student::GetName1() {
	return Name1;
}
const string& Student::GetName2() {
	return Name2;
}
const string& Student::GetName3() {
	return Name3;
}
void Student::JoinToGroup(Group& group) {

	if (group.AcceptAddToGroup(this)) {
		Groups.push_back(group.GetGroupName());
	}
}
void Student::LeftFromGroup(const string& GroupName) {
	for (auto i = Groups.begin(); i != Groups.end(); i++) {
		if (GroupName == *(i)) {
			Groups.erase(i);
			break;
		}
	}
}

