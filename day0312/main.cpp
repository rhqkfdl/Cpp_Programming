/*
2024년 3월 12일
남경남
C++프로그래밍
C++ 기초 학습을 위한 파일
*/

#include <iostream>
using namespace std;
int main() {
	int studentNumber = 0;
	string studentclass;
	string name;

	cout << "이름을 입력하세요 >> ";
	cin >> name;

	cout << "학과를 입력하세요 >> ";
	cin >> studentclass;

	cout << "학번을 입력하세요 >> ";
	cin >> studentNumber;

	cout << "이름 : " << name << endl;
	cout << "학과 : " << studentclass << endl;
	cout << "학번 : " << studentNumber << endl;
	return 0;
}