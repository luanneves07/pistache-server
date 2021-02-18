/*
 * Code.hpp
 *
 *  Created on: 14 de fev de 2021
 *      Author: lsilva
 */
#pragma once
#include <string>

class Code
{
public:
	Code() = default;
	Code(const std::string code);
	virtual ~Code() = default;
	const std::string getCode();

private:
	std::string code;
};
