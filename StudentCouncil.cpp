#include "StudentCouncil.h"

StudentCouncil::StudentCouncil(const string& Name1, const string& Name2, const string& Name3) {
	this->Name1 = Name1;
	this->Name2 = Name2;
	this->Name3 = Name3;
}
int StudentCouncil::GetRating() {
	return rand() % 3 + 3;
}
