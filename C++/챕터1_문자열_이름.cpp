#include <print>
#include <iostream>
#include <string>
using namespace std;

int main() {
	string first, last, name, k_name;
	string space = " ";

	print("�̸��� �Է��ϼ���: ");
	cin >> first;

	print("���� �Է��ϼ���: ");
	cin >> last;

	name = first + space + last; // first last����
	k_name = last + first; // �ѱ��� �̸�. last+first ����

	println("Your name is {},", name);
	print("����� �ѱ��� �̸��� {}�Դϴ�.", k_name);

}