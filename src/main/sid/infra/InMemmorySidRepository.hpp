/*
 * InMemmorySidRepository.hpp
 *
 *  Created on: 14 de fev de 2021
 *      Author: lsilva
 */

#pragma once

#include <map>
#include <vector>

#include "../entity/sid/Sid.hpp"
#include "../entity/repository/SidRepository.hpp"

class InMemmorySidRepository: public SidRepository
{
public:
	static SidRepository* getInstance();
	virtual ~InMemmorySidRepository() = default;

	Sid findBy(int id);
	std::vector<Sid> findAll();
	void deleteBy(int id);
	void insert(Sid sid);
	void update(int id, Sid sid);

private:
	InMemmorySidRepository();
	std::map<int, Sid> memmoryDb;
};

