#include <print>
#include <iostream>

int main() {
	const unsigned int pennyValue = 1;
	const unsigned int dimeValue = 10;
	const unsigned int dollarValue = 100;

	int penny, dime, dollar;

	std::print("����� ���� �Է��ϼ���: ");
	std::cin >> penny;

	std::print("������ ���� �Է��ϼ���: ");
	std::cin >> dime;

	std::print("�޷��� ���� �Է��ϼ���: ");
	std::cin >> dollar;

	int sum = penny * pennyValue + dime * dimeValue + dollar * dollarValue;

	std::print("�� ����� ��: {}���", sum);
}