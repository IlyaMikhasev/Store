#pragma once
#include <string>
struct product{
	std::string name;
	int price;
	int number ;	
}apple{ "€блоко",20,15 }, orange{ "апельсин", 7, 19 }, pineapple{ "ананас",80 };
void print_prod(product& P);
inline int full_price(product& P) {
	return P.number * P.price;
}
void sell(product &P,int num);