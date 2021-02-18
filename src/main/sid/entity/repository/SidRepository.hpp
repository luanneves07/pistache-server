/*
 * SidRepository.hpp
 *
 *  Created on: 14 de fev de 2021
 *      Author: lsilva
 */

#pragma once
#include <vector>
#include "../sid/Sid.hpp"

class SidRepository
{
public:
	virtual std::vector<Sid> findAll() = 0;
	virtual Sid findBy(int id) = 0;
	virtual void deleteBy(int id) = 0;
	virtual void insert(const Sid sid) = 0;
	virtual void update(int id, const Sid sid) = 0;
	virtual ~SidRepository() = default;
};

