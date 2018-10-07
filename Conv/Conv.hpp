#ifndef _CONV_HPP_
#define _CONV_HPP_

#include <iostream>
#include <vector>

class Conv {
public:
	//Konstruktor
	Conv(std::vector<double> u, std::vector<double>  v);

	//Wektor wyjsciowy conv(u, v)
	std::vector<double> getConv() { return w; }

	//Algorytm liczacy splot
	void searchConv();
	void printToConsole();

private:
	std::vector<double> u;
	std::vector<double> v;
	std::vector<double> w;
};
#endif // !_CONV_HPP_
