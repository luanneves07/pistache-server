/*
 * Code.cpp
 *
 *  Created on: 14 de fev de 2021
 *      Author: lsilva
 */
#include <stdexcept>
#include "Code.hpp"

Code::Code(const std::string code)
{
	if (code.empty())
	{
		throw std::runtime_error("Código fora do padrão");
	}
	Code::code = code;
}

const std::string Code::getCode()
{
	return Code::code;
}
