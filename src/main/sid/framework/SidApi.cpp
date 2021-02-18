/*
 * SidApi.cpp
 *
 *  Created on: 16 de fev de 2021
 *      Author: lsilva
 */

#include "SidApi.hpp"

#include <pistache/http.h>
#include <iostream>

#include "SidModuleUtils.hpp"

void SidApi::index(const Rest::Request &request, Http::ResponseWriter response)
{
	SidRepository *repository = SidModuleUtils::getInMemmoryRepository();
	SidController controller = SidController(repository);
	controller.getAll();
	response.send(Http::Code::Ok, "GET recebido");
}

void SidApi::registerSid(const Rest::Request &request,
		Http::ResponseWriter response)
{
	SidRepository *repository = SidModuleUtils::getInMemmoryRepository();
	SidController controller = SidController(repository);
//	controller.insert(dto);
	std::cout << "Insert SID" << std::endl;
	response.send(Http::Code::Ok, "Post recebido");
}
