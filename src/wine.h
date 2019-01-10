#ifndef WINE_H
#define WINE_H

#include <string>

class Wine {
public:
	virtual ~Wine() = default;

	virtual void getBottles() = 0;
	virtual const std::string& label() = 0;
	virtual size_t sum() = 0;
	virtual void show() = 0;
};

#endif // WINE_H
