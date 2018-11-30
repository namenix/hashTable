#pragma once
#include "factory.h"
//#include "strategy.h"
#include "StrategyImp.h"
#ifndef FIRST_H
#define FIRST_H


class FirstStr : public StrategyImp {
public:
	Decision decide(const StackCard & stack) override;
	FirstStr() { score = 0u; }
	~FirstStr() {}
};

#endif