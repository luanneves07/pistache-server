/*
 * SidDto.cpp
 *
 *  Created on: 16 de fev de 2021
 *      Author: lsilva
 */

#include "SidDto.hpp"

#include "../entity/code/Code.hpp"
#include "../entity/name/Name.hpp"

SidDto::SidDto(std::string name, std::string code) :
		name(name), code(code)
{

}

int SidDto::getId()
{
	return id;
}

std::string SidDto::getName()
{
	return name;
}

std::string SidDto::getCode()
{
	return code;
}

Sid SidDto::toSid(SidDto dto)
{
	Name name = dto.getName();
	Code code = dto.getCode();
	return Sid(name, code);
}

SidDto SidDto::toDto(Sid sid)
{
	return SidDto(sid.getName(), sid.getCode());
}
