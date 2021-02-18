/*
 * InMemmorySidRepository.cpp
 *
 *  Created on: 14 de fev de 2021
 *      Author: lsilva
 */

#include "InMemmorySidRepository.hpp"

#include <iostream>
#include <string>
#include <utility>

SidRepository* InMemmorySidRepository::getInstance()
{
	static InMemmorySidRepository* instance;
	return instance;
}

InMemmorySidRepository::InMemmorySidRepository()
{
	memmoryDb = std::map<int, Sid>();
}

std::vector<Sid> InMemmorySidRepository::findAll()
{
	std::vector<Sid> dbData = std::vector<Sid>();
	std::cout << "REquisitou index: " << std::endl;
	return dbData;
}

void InMemmorySidRepository::insert(Sid sid)
{
	int id = 0;
	for (auto const &_ : InMemmorySidRepository::memmoryDb)
	{
		id++;
	}
	InMemmorySidRepository::memmoryDb.insert(
	{ id, sid });
	std::cout << "Inseriu: " << id << "::" << memmoryDb[id].getName()
			<< std::endl;
}

void InMemmorySidRepository::update(int id, Sid sid)
{
	if (!(memmoryDb.find(id) == memmoryDb.end()))
	{
		memmoryDb[id] = sid;
	}
}

void InMemmorySidRepository::deleteBy(int id)
{
	memmoryDb.erase(id);
}

Sid InMemmorySidRepository::findBy(int id)
{
	return memmoryDb[id];
}
