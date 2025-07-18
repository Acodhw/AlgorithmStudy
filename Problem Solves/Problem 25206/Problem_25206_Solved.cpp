#include <iostream>
#include <cstring>
using std::cout;
using std::cin;


int main() {	
	int allScore = 0;
	int allGrade = 0;
	for (int i = 0; i < 20; i++) {
		char str[55];
		float score;
		char grade[3];
		cin >> str >> score >> grade;
		allScore += (int)score;
		if (strcmp(grade, "A+") == 0) {
			allGrade += (int)score * 45;
		}
		else if (strcmp(grade, "A0") == 0) {
			allGrade += (int)score * 40;
		}
		else if (strcmp(grade, "B+") == 0) {
			allGrade += (int)score * 35;
		}
		else if (strcmp(grade, "B0") == 0) {
			allGrade += (int)score * 30;
		}
		else if (strcmp(grade, "C+") == 0) {
			allGrade += (int)score * 25;
		}
		else if (strcmp(grade, "C0") == 0) {
			allGrade += (int)score * 20;
		}
		else if (strcmp(grade, "D+") == 0) {
			allGrade += (int)score * 15;
		}
		else if (strcmp(grade, "D0") == 0) {
			allGrade += (int)score * 10;
		}
		else if (strcmp(grade, "F") == 0) {
			allGrade += (int)score * 0;
		}
		else if (strcmp(grade, "P") == 0) {
			allScore -= (int)score;
		}
	}
	cout << (allGrade * 1.0f / allScore) * 0.100000f;
	return 0;
}