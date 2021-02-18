#pragma once
#include "Trampa.h"
class DecoratorTrampas:
	public Trampa
{
	Trampa* trampa;
public:
	DecoratorTrampas(Trampa* _trampa) {
		trampa = _trampa;
	}
};

