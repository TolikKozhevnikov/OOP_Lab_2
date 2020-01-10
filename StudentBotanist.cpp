#include "StudentBotanist.h"

StudentBotanist::StudentBotanist(const string& Name1, const string& Name2, const string& Name3) {
	this->Name1 = Name1;
	this->Name2 = Name2;
	this->Name3 = Name3;
}
int StudentBotanist::GetRating() {
	return rand() % 2 + 4;
}
int StudentBotanist::GetRatingAgain() {
	return rand() % 2 + 4;
}
