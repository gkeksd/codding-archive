#include <print>
#include <cmath>
#include <iostream>
using namespace std;

int main() {
	const double pi = 3.141592;

	double rad, perim, area, vol;

	print("���� �������� �Է��ϼ���: ");
	cin >> rad;

	perim = 2 * rad * pi; //���� �ѷ�
	area = pow(rad, 2) * pi; //���� ����
	vol = 4/3 * pi * pow(rad, 3);

	print("���� ���� = {}\n���� �ѷ� = {}\n���� ���� = {}\n���� ���� = {}", 2 * rad, perim, area, vol);
}