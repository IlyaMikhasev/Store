#pragma once
#include <string>
struct product{
	std::string name;
	int price;
	int number ;	
}apple{ "€блоко",20,15 }, orange{ "апельсин", 7, 19 }, pineapple{ "ананас",80 };
void print_prod(product& P);
int full_price(product& P);
void sell(product &P,int num);