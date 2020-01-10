#pragma once
#include "Student.h"
#include <string>

class StudentDefualt : public Student
{
public:
	StudentDefualt(const string& Name1, const string& Name2, const string& Name3);
	int GetRating() override;
	int GetRatingAgain() override;
};

	
