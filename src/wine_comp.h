#ifndef WINE_COMP_H
#define WINE_COMP_H

#include "wine.h"
#include <string>
#include <valarray>

class WineComp : public Wine {
public:
	WineComp();
	WineComp(const char* l, int y, const int yr[], const int bot[]);
	WineComp(const char* l, int y);
	~WineComp() override = default;

	void getBottles() override;
	const std::string& label() override;
	size_t sum() override;
	void show() override;

private:
	using ArrayIntT = std::valarray<int>;
	using PairArrayT = std::pair<ArrayIntT, ArrayIntT>;

	std::string _name;
	PairArrayT _stats;
};


#endif // WINE_COMP_H