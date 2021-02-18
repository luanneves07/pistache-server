/*
 * Sid.cpp
 *
 *  Created on: 14 de fev de 2021
 *      Author: lsilva
 */

#include "Sid.hpp"

Sid::Sid(const Name name, const Code code) :
		name(name), code(code)
{

}

const std::string Sid::getName()
{
	return Sid::name.getName();
}

const std::string Sid::getCode()
{
	return Sid::code.getCode();
}
