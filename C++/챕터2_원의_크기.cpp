#include <print>
#include <cmath>
#include <iostream>
using namespace std;

int main() {
	const double pi = 3.141592;

	double rad, perim, area, vol;

	print("원의 반지름을 입력하세요: ");
	cin >> rad;

	perim = 2 * rad * pi; //원의 둘레
	area = pow(rad, 2) * pi; //원의 넓이
	vol = 4/3 * pi * pow(rad, 3);

	print("원의 지름 = {}\n원의 둘레 = {}\n원의 넓이 = {}\n원의 부피 = {}", 2 * rad, perim, area, vol);
}
