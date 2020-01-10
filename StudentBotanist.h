#pragma once
#include "Student.h"
#include <string>

class StudentBotanist : public Student
{
public:
	StudentBotanist(const string& Name1, const string& Name2, const string& Name3);
	int GetRating() override;
	int GetRatingAgain() override;
};


