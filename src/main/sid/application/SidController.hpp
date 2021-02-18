/*
 * SidController.hpp
 *
 *  Created on: 15 de fev de 2021
 *      Author: lsilva
 */

#pragma once

#include <stddef.h>
#include <vector>

#include "../../shared/application/BasicController.hpp"
#include "SidDto.hpp"

class SidRepository;

class SidController: public BasicController<SidDto>
{
public:
	SidController() = default;
	SidController(SidRepository *repository);
	~SidController();

	std::vector<SidDto> getAll();
	void insert(SidDto dto);

private:
	SidRepository *repository = NULL;
};

