/*
 * ServerHandler.cpp
 *
 *  Created on: 15 de fev de 2021
 *      Author: lsilva
 */

#include "ServerHandler.hpp"

#include <pistache/http.h>
#include <pistache/http_defs.h>
#include <iostream>

#include "../../sid/framework/SidApi.hpp"

ServerHandler::ServerHandler()
{
	std::cout << "iniciando servidor..." << std::endl;
	router = new Rest::Router();
}

ServerHandler::~ServerHandler()
{
	delete router;
}

Rest::Router* ServerHandler::getRouter()
{
	return router;
}

void ServerHandler::onRequest(const Http::Request &request,
		Http::ResponseWriter response)
{
	response.send(Http::Code::Ok, "Hello, World\n");
}

void ServerHandler::initSidRouter()
{
	Rest::Routes::Get(router, "/sid/all",
			Rest::Routes::bind(&SidApi::index, this));
//	Routes::Get(router, "/sid/all",
//			Routes::bind(&SidController::getAllSids, this));
//	Routes::Post(router, "sid/:id",
//			Routes::bind(&SidController::insertSid, this));
}
