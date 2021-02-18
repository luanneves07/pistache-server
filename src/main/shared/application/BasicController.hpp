/*
 * BasicController.hpp
 *
 *  Created on: 16 de fev de 2021
 *      Author: lsilva
 */

#pragma once

#include <vector>

template<class C>
class BasicController
{
public:
	~BasicController() = default;
	virtual std::vector<C> getAll() = 0;
	virtual void insert(C dto) = 0;
};

