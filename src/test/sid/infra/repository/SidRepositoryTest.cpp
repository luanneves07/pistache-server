/*
 * SidRepositoryTest.cpp
 *
 *  Created on: 14 de fev de 2021
 *      Author: lsilva
 */

#include "../../../../main/sid/entity/repository/SidRepository.hpp"
#include "SidRepositoryTest.hpp"

#include <iostream>
#include <string>

#include "../../../../main/sid/entity/code/Code.hpp"
#include "../../../../main/sid/entity/name/Name.hpp"
#include "../../../../main/sid/entity/sid/Sid.hpp"
#include "../../../../main/sid/framework/SidModuleUtils.hpp"

class SidRepository;

void mayRegisterAValidSid()
{
	std::cout << "Iniciando teste de repositório" << std::endl;
	SidRepository *repository = SidModuleUtils::getInMemmoryRepository();

	Sid testSid = Sid(Name("abc"), Code("def"));
	std::cout << "Criou a SID com nome: " << testSid.getName() << " e código: "
			<< testSid.getCode() << std::endl;
	Sid testSid2 = Sid(Name("Luan"), Code("LUANO"));
	std::cout << "Criou a SID com nome: " << testSid2.getName() << " e código: "
			<< testSid2.getCode() << std::endl;

	repository->insert(testSid);
	repository->insert(testSid2);

	std::cout << "recuperando SID incluida no repositório..." << std::endl;
	Sid recoveredSid = repository->findBy(0);
	std::cout << "Recuperou a SID com nome: " << testSid.getName()
			<< " e código: " << testSid.getCode() << std::endl;

	std::cout << "recuperando SID incluida no repositório..." << std::endl;
	recoveredSid = repository->findBy(1);
	std::cout << "Recuperou a SID com nome: " << recoveredSid.getName()
			<< " e código: " << recoveredSid.getCode() << std::endl;

	std::cout << "finalizou teste de repositório" << std::endl;
	delete repository;
}
