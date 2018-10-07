#include <iostream>
#include <vector>
#include"Conv.hpp"


int main()
{
	std::cout << "Write lenght vectors u and v:" << std::endl;
	int size_u, size_v;
	std::vector<double> u;
	std::vector<double> v;
	std::cin >> size_u >> size_v;
	std::cout << "Enter elements for u, separated by a space: ";
	for (int i = 0; i < size_u; i++) {
		double k;
		std::cin >> k;
		u.push_back(k);
	}

	std::cout << "Enter elements for v, separated by a space: ";
	for (int i = 0; i < size_v; i++) {
		double k;
		std::cin >> k;
		v.push_back(k);
	}

	Conv *conv;
	conv = new Conv(u, v);

	conv->printToConsole();

	system("pause");
	return 0;
}
