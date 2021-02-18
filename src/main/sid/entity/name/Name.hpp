/*
 * name.hpp
 *
 *  Created on: 14 de fev de 2021
 *      Author: lsilva
 */
#pragma once
#include <string>

class Name
{
public:
	Name() = default;
	Name(const std::string name);
	virtual ~Name() = default;
	const std::string getName();

private:
	std::string name;
};
