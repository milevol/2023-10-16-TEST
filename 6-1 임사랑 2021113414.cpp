// 심화프로그래밍 6주차 1번 2021113414 임사랑

#include <iostream>
#include <string>
using namespace std;

void reverseDig(string& str1, string& str2) { // 참조에 의한 호출
	string temp;

	if (str1[0] == '0') { // 맨 앞 '0'일 경우 삭제
		str1.erase(0, 1);
	}

	if (str2[0] == '0') {
		str2.erase(0, 1);
	}
	
	cout << "민수의 숫자 : " << str1 << endl;
	cout << "철수의 숫자 : " << str2 << endl;

	// 숫자 교환
	temp = str1;
	str1 = str2;
	str2 = temp;

	cout << endl;
	cout << "숫자를 서로 교환합니다.\n" << endl;

	cout << "민수의 숫자 : " << str1 << endl;
	cout << "철수의 숫자 : " << str2 << endl;

	cout << endl;
	cout << "숫자를 거꾸로 변경합니다.\n" << endl;

	cout << "민수의 숫자 : ";
	int last = str1.length() - 1;
	
	for (int i = last; i >= 0; i--) { // 숫자 역순 출력
		if (str1[last] == '0') { // 맨 앞 '0'일 경우 삭제
			str1.erase(last, 1);
		}
		cout << str1[i];
	}

	cout << endl;
	cout << "철수의 숫자 : ";
	for (int i = last; i >= 0; i--) {
		if (str2[last] == '0') {
			str2.erase(last, 1);
		}
		cout << str2[i];
	}
}

int main() {
	string str1 = "012340";
	string str2 = "056080";

	reverseDig(str1, str2);

	return 0;
}