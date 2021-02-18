/*
 * NameTest.cpp
 *
 *  Created on: 14 de fev de 2021
 *      Author: lsilva
 */
#include <iostream>
#include "NameTest.hpp"
#include "../../../../main/sid/entity/name/Name.hpp"

void mayNotCreateNameWithEmptyString()
{
	Name a = Name("");
	std::cout << a.getName() << std::endl;
}

