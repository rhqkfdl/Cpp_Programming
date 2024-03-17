/*
2024년 3월 13일
남경남
C++프로그래밍
수업 내용 실습2
*/

#include <iostream>
#include <cstring>

using namespace std;

int main() {
	int number1 = 0;
	int number2 = 0;
	char op;
	int result = 0;

	cin >> number1 >> op >> number2;
	switch(op) {
	case '+':
		result = number1 + number2;
	}
	switch (op) {
	case '-':
		result = number1 - number2;
	}
	cout << result;
	// if (strcmp(op, "+") == 0) {
	// 	cout << number1 + number2;
	// }
	// else if (strcmp(op, "-") == 0) {
	// 	cout << number1 - number2;
	// }
	// else if (strcmp(op, "*") == 0) {
	// 	cout << number1 * number2;
	// }
	// else if (strcmp(op, "/") == 0) {
	// 	cout << number1 / number2;
	// }
	// else {
	// 	cout << "해당 연산은 존재하지 않습니다.";
	// }
	return 0;
}
