/*
 * Sid.h
 *
 *  Created on: 14 de fev de 2021
 *      Author: lsilva
 */

#pragma once

#include <string>

#include "../code/Code.hpp"
#include "../name/Name.hpp"

class Sid
{
public:
	Sid() = default;
	Sid(const Name name, const Code code);
	virtual ~Sid() = default;
	const std::string getName();
	const std::string getCode();

private:
	Name name;
	Code code;
};

