#include <print>
#include <iostream>
using namespace std;

int main() {
	int num = 17;
	const double pi = 3.141592; // ���. �� ���� �Ұ�

	println("{}", num); // 17. print(num);�� �������� ����
	cout << num << endl; // 17

	num += 20;

	println("{}", num); // 37

	println("{}", pi); // 3.141592
	/* pi = 2;  �������� ���� */

	int num2 = 12;
	int num3;

	print("������ �Է��Ͻʽÿ�: ");
	cin >> num3;

	print("{}", num2 + num3);
}