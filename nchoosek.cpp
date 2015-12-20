
#include <iostream>

int nchoosek(int,int);

int main() {
	
	int n = 10;
	int k = 3;

	std::cout << nchoosek(n, k) << std::endl;


	return 0;
}


int nchoosek(int n, int k) {

	if(k == 0) return 1;
	if(n == 0) return 0;

	return nchoosek(n-1, k-1)+nchoosek(n-1,k);
}