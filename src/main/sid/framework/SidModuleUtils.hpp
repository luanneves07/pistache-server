/*
 * SidModuleUtils.h
 *
 *  Created on: 14 de fev de 2021
 *      Author: lsilva
 */

#pragma once

class SidController;

class SidRepository;

class SidModuleUtils
{
public:
	SidModuleUtils() = default;
	virtual ~SidModuleUtils() = default;
	static SidRepository* getInMemmoryRepository();
};

