#pragma once
#include "Student.h"
#include <string>
class StudentCouncil : public Student
{
public:
	StudentCouncil(const string& Name1, const string& Name2, const string& Name3);
	int GetRating() override;
};

