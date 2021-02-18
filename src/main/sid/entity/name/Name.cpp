/*
 * name.cpp
 *
 *  Created on: 14 de fev de 2021
 *      Author: lsilva
 */
#include <stdexcept>
#include "Name.hpp"

Name::Name(const std::string name)
{
	if (name.empty())
	{
		throw std::runtime_error("Nome fora do padrão");
	}
	Name::name = name;
}

const std::string Name::getName()
{
	return Name::name;
}
