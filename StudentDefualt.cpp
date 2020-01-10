#include "StudentDefualt.h"

StudentDefualt::StudentDefualt(const string& Name1, const string& Name2, const string& Name3){
	this->Name1 = Name1;
	this->Name2 = Name2;
	this->Name3 = Name3;
}
int StudentDefualt::GetRating(){
	return rand() % 5 + 1;
}
int StudentDefualt::GetRatingAgain() {
	return rand() % 5 + 1;
}
