#include "wine_inh.h"
#include <iostream>

WineInh::WineInh() : Wine(), std::string(), PairArrayT() {}

WineInh::WineInh(const char* l, int y, const int* yr, const int* bot) :
		Wine(),
		std::string(l ? l : std::string()),
		PairArrayT(ArrayIntT(yr, static_cast<size_t>(y)), ArrayIntT(bot, static_cast<size_t>(y))) {}

WineInh::WineInh(const char* l, int y) :
		Wine(),
		std::string(l ? l : std::string()),
		PairArrayT(ArrayIntT(static_cast<size_t>(y)), ArrayIntT(static_cast<size_t>(y))) {}

void WineInh::getBottles() {
	for (size_t i = 0, len = PairArrayT::first.size(); i < len; ++i) {
		std::cout << (i + 1) << ". Enter year: ";
		std::cin >> PairArrayT::first[i];
		std::cout << (i + 1) << ". Enter number of bottles: ";
		std::cin >> PairArrayT::second[i];
	}
}

const std::string& WineInh::label() {
	return static_cast<std::string&>(*this);
}

size_t WineInh::sum() {
	return static_cast<size_t>(PairArrayT::second.sum());
}

void WineInh::show() {
	std::cout << "Name: " << label() << std::endl;
	std::cout << "Stats: " << std::endl;
	for (size_t i = 0, len = PairArrayT::first.size(); i < len; ++i) {
		std::cout << (i + 1) << ". " << PairArrayT::first[i] << " year, " << PairArrayT::second[i] << " bottles" << std::endl;
	}
}
