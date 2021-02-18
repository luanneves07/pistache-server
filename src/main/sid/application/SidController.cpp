/*
 * SidController.cpp
 *
 *  Created on: 15 de fev de 2021
 *      Author: lsilva
 */

#include "SidController.hpp"

#include "../entity/repository/SidRepository.hpp"
#include "../entity/sid/Sid.hpp"

SidController::SidController(SidRepository *repository) :
		repository(repository)
{

}

SidController::~SidController()
{
	delete repository;
}

std::vector<SidDto> SidController::getAll()
{
	std::vector<SidDto> allSids = std::vector<SidDto>();
	for (Sid sid : repository->findAll())
	{
		allSids.push_back(SidDto::toDto(sid));
	}
	return allSids;
}

void SidController::insert(SidDto dto)
{
	repository->insert(SidDto::toSid(dto));
}
