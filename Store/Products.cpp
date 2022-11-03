#include <iostream>
#include "Products.h"

void print_prod(product &P){
	std::cout << "Название продукта = " << P.name << '\n';
	std::cout << "количество =        " << P.number <<'\n';
	std::cout << "Цена =              " << P.price << "\n\n";
}



void sell(product &P, int num){
	if (num > P.number)
		std::cout << "Данного товара нет в таком количестве! осталось - " << P.number << " шт.\n";
	else
		P.number -= num;
}
