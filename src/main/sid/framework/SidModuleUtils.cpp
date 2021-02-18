/*
 * SidModuleUtils.cpp
 *
 *  Created on: 14 de fev de 2021
 *      Author: lsilva
 */

#include "SidModuleUtils.hpp"

#include "../infra/InMemmorySidRepository.hpp"

SidRepository* SidModuleUtils::getInMemmoryRepository()
{
	return InMemmorySidRepository::getInstance();
}
