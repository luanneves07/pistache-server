/*
 * SidDto.hpp
 *
 *  Created on: 16 de fev de 2021
 *      Author: lsilva
 */

#pragma once

#include <string>
#include "../entity/sid/Sid.hpp"

class SidDto
{
public:
	SidDto() = default;
	SidDto(std::string name, std::string code);
	~SidDto() = default;

	int getId();
	std::string getName();
	std::string getCode();

	static Sid toSid(SidDto dto);
	static SidDto toDto(Sid sid);

private:
	int id = 0;
	std::string name;
	std::string code;
};
