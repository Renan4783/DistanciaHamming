//============================================================================
// Name        : hamming2.cpp
// Author      : Renan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <bitset>
#include <cstdint>

using namespace std;

int main() {

	unsigned int mensagem = 0b0101;
	std::bitset<8>x(mensagem);

	std::cout << x << std::endl;

	return 0;
}
