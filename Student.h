#pragma once
#include <iostream>
#include <vector>
#include <string>
class Group;
class StudentDefault;
class StudentCouncil;

using namespace std;

class Student
{
private:
	vector <string> Groups;
public:
	Student() {};
	string Name1;
	string Name2;
	string Name3;
	Student(const string& Name1, const string& Name2, const string& Name3);
	const string& GetName1();
	const string& GetName2();
	const string& GetName3();
	void JoinToGroup(Group& group);
	void LeftFromGroup(const string& GroupName);
	bool operator < (const Student& st) const {
		return this->Name1 > st.Name1;
	};
	virtual int GetRating() = 0;
};

