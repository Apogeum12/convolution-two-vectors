#include "Conv.hpp"

Conv::Conv(std::vector<double> u, std::vector<double> v) {
	this->u = u;
	this->v = v;
	this->searchConv();
}

void Conv::searchConv() {
	size_t sizeU = u.size(), sizeV = v.size();
	size_t size = sizeU + sizeV - 1;
	double sum = 0;

	for (int i = 0; i < size; i++) {
		int iter = i;
		for (int j = 0; j <= i; j++) {
			if (u.size() <= j || v.size() <= iter) sum;
			else { sum += u.at(j) * v.at(iter); }
			iter--;
		}
		this->w.push_back(sum);
		sum = 0;
	}
}

void Conv::printToConsole() {
	std::cout << "Result  conv(u, v) equal is: \n";
		for(int i = 0; i < w.size(); i++) {
			std::cout << w.at(i) << " ";
		}
		printf("\n");
}