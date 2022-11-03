#include <iostream>
#include "Products.h"

void print_prod(product &P){
	std::cout << "Название продукта = " << P.name << '\n';
	std::cout << "количество =        " << P.number <<'\n';
	std::cout << "Цена =              " << P.price << "\n\n";
}

int full_price(product &P){
	return P.number*P.price;
}

void sell(product &P, int num){
	if (num > P.number)
		std::cout << "Данного товара нет в таком количестве! осталось - " << P.number << " шт.\n";
	else
		P.number -= num;
}
