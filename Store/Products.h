#pragma once
#include <string>
struct product{
	std::string name;
	int price;
	int number ;	
}apple{ "������",20,15 }, orange{ "��������", 7, 19 }, pineapple{ "������",80 };
void print_prod(product& P);
int full_price(product& P);
void sell(product &P,int num);