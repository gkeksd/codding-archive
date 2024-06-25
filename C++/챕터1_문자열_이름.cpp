#include <print>
#include <iostream>
#include <string>
using namespace std;

int main() {
	string first, last, name, k_name;
	string space = " ";

	print("이름을 입력하세요: ");
	cin >> first;

	print("성을 입력하세요: ");
	cin >> last;

	name = first + space + last; // first last형태
	k_name = last + first; // 한국식 이름. last+first 형태

	println("Your name is {},", name);
	print("당신의 한국식 이름은 {}입니다.", k_name);

}