#ifndef WINE_INH_H
#define WINE_INH_H

#include "wine.h"
#include <string>
#include <valarray>

class WineInh : public Wine, private std::string, private std::pair<std::valarray<int>, std::valarray<int>> {
public:
	WineInh();
	WineInh(const char* l, int y, const int yr[], const int bot[]);
	WineInh(const char* l, int y);
	~WineInh() override = default;

	void getBottles() override;
	const std::string& label() override;
	size_t sum() override;
	void show() override;

private:
	using ArrayIntT = std::valarray<int>;
	using PairArrayT = std::pair<ArrayIntT, ArrayIntT>;
};


#endif // WINE_INH_H
