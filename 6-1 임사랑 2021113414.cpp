// ��ȭ���α׷��� 6���� 1�� 2021113414 �ӻ��

#include <iostream>
#include <string>
using namespace std;

void reverseDig(string& str1, string& str2) { // ������ ���� ȣ��
	string temp;

	if (str1[0] == '0') { // �� �� '0'�� ��� ����
		str1.erase(0, 1);
	}

	if (str2[0] == '0') {
		str2.erase(0, 1);
	}
	
	cout << "�μ��� ���� : " << str1 << endl;
	cout << "ö���� ���� : " << str2 << endl;

	// ���� ��ȯ
	temp = str1;
	str1 = str2;
	str2 = temp;

	cout << endl;
	cout << "���ڸ� ���� ��ȯ�մϴ�.\n" << endl;

	cout << "�μ��� ���� : " << str1 << endl;
	cout << "ö���� ���� : " << str2 << endl;

	cout << endl;
	cout << "���ڸ� �Ųٷ� �����մϴ�.\n" << endl;

	cout << "�μ��� ���� : ";
	int last = str1.length() - 1;
	
	for (int i = last; i >= 0; i--) { // ���� ���� ���
		if (str1[last] == '0') { // �� �� '0'�� ��� ����
			str1.erase(last, 1);
		}
		cout << str1[i];
	}

	cout << endl;
	cout << "ö���� ���� : ";
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