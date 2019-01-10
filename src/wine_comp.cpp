#include "wine_comp.h"

#include <iostream>

WineComp::WineComp() : Wine(), _name(), _stats() {}

WineComp::WineComp(const char* l, int y, const int* yr, const int* bot) :
		Wine(),
		_name(l ? l : std::string()),
		_stats(ArrayIntT(yr, static_cast<size_t>(y)), ArrayIntT(bot, static_cast<size_t>(y))) {}

WineComp::WineComp(const char* l, int y) :
		Wine(),
		_name(l ? l : std::string()),
		_stats(ArrayIntT(static_cast<size_t>(y)), ArrayIntT(static_cast<size_t>(y))) {}

void WineComp::getBottles() {
	for (size_t i = 0, len = _stats.first.size(); i < len; ++i) {
		std::cout << (i + 1) << ". Enter year: ";
		std::cin >> _stats.first[i];
		std::cout << (i + 1) << ". Enter number of bottles: ";
		std::cin >> _stats.second[i];
	}
}

const std::string& WineComp::label() {
	return _name;
}

size_t WineComp::sum() {
	return static_cast<size_t>(_stats.second.sum());
}

void WineComp::show() {
	std::cout << "Name: " << _name << std::endl;
	std::cout << "Stats: " << std::endl;
	for (size_t i = 0, len = _stats.first.size(); i < len; ++i) {
		std::cout << (i + 1) << ". " << _stats.first[i] << " year, " << _stats.second[i] << " bottles" << std::endl;
	}
}
