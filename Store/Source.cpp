#include <iostream>
#include "Products.h"
int main() {
	setlocale(LC_ALL, "Russian");
	int n,m;
	print_prod(apple);
	print_prod(orange);
	print_prod(pineapple);
	std::cout << "Выбирите товар:\n1.яблоки\n2.апельсины\n3.ананас\n";
	std::cin >> n;
	
	switch (n) {
	case 1: {
		std::cout << "Цена за весь товар " << apple.name << " = " << full_price(apple) << '\n';
		std::cout << "Введите количество приобретаемого товара ->";
		std::cin >> m;
		sell(apple,m);
		std::cout << "Вы купили " << m << " шт.\nОстаток:\n";
		print_prod(apple);
		break; }
	case 2: {
		std::cout << "Цена за весь товар " << orange.name << " = " << full_price(orange) << '\n';
		std::cout << "Введите количество приобретаемого товара ->";
		std::cin >>m;
		sell(orange,m);
		std::cout << "Вы купили " << m << " шт.\nОстаток:\n";
		print_prod(orange); 
		break; }
	case 3: {
		std::cout << "Цена за весь товар " << pineapple.name << " = " << full_price(pineapple) << '\n';
		std::cout << "Введите количество приобретаемого товара ->";
		std::cin >> m;
		sell(pineapple,m);
		std::cout << "Вы купили " << m << " шт.\nОстаток:\n";
		print_prod(pineapple);
		break; }
	default:std::cout << "Данного продукта несуществует!\n";		
	}
	return 0;
}