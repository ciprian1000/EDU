#pragma once

#include "Bird.h"

class Chicken : public Bird {
public:
	Chicken();
	~Chicken();

protected:
	bool mCanFly;
};
