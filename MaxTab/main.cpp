#include <iostream>

#include "Max.h"

int main(int, char**)
{
	int tableau[] = { 3, 5, 4, 1 };

	std::cout << MaxFromTab(tableau, 4) << std::endl;
}