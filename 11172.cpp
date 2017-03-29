#include <iostream>

void rel_op (long int a, long int b){
	if (a<b)
		std::cout << '<';
	else if (a>b)
		std::cout << '>';
	else 
		std::cout << '=';

	std::cout << std::endl;
}


int main(){

	int t;
	long int a, b;

	std::cin >> t;

	for (int i=0; i<t; i++){
		std::cin >>  a >> b;
		rel_op (a,b);
	}

	return 0;
}