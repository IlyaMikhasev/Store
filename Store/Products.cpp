#include <iostream>
#include "Products.h"

void print_prod(product &P){
	std::cout << "�������� �������� = " << P.name << '\n';
	std::cout << "���������� =        " << P.number <<'\n';
	std::cout << "���� =              " << P.price << "\n\n";
}

int full_price(product &P){
	return P.number*P.price;
}

void sell(product &P, int num){
	if (num > P.number)
		std::cout << "������� ������ ��� � ����� ����������! �������� - " << P.number << " ��.\n";
	else
		P.number -= num;
}
