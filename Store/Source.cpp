#include <iostream>
#include "Products.h"
int main() {
	setlocale(LC_ALL, "Russian");
	int n,m;
	print_prod(apple);
	print_prod(orange);
	print_prod(pineapple);
	std::cout << "�������� �����:\n1.������\n2.���������\n3.������\n";
	std::cin >> n;
	
	switch (n) {
	case 1: {
		std::cout << "���� �� ���� ����� " << apple.name << " = " << full_price(apple) << '\n';
		std::cout << "������� ���������� �������������� ������ ->";
		std::cin >> m;
		sell(apple,m);
		std::cout << "�� ������ " << m << " ��.\n�������:\n";
		print_prod(apple);
		break; }
	case 2: {
		std::cout << "���� �� ���� ����� " << orange.name << " = " << full_price(orange) << '\n';
		std::cout << "������� ���������� �������������� ������ ->";
		std::cin >>m;
		sell(orange,m);
		std::cout << "�� ������ " << m << " ��.\n�������:\n";
		print_prod(orange); 
		break; }
	case 3: {
		std::cout << "���� �� ���� ����� " << pineapple.name << " = " << full_price(pineapple) << '\n';
		std::cout << "������� ���������� �������������� ������ ->";
		std::cin >> m;
		sell(pineapple,m);
		std::cout << "�� ������ " << m << " ��.\n�������:\n";
		print_prod(pineapple);
		break; }
	default:std::cout << "������� �������� ������������!\n";		
	}
	return 0;
}