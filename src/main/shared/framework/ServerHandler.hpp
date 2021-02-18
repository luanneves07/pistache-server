/*
 * ServerHandler.h
 *
 *  Created on: 15 de fev de 2021
 *      Author: lsilva
 */
#pragma once

#include <pistache/endpoint.h>
#include <pistache/router.h>

using namespace Pistache;

class ServerHandler: public Http::Handler
{
public:
	HTTP_PROTOTYPE(ServerHandler)

	ServerHandler();
	~ServerHandler();

	Rest::Router* getRouter();
	void onRequest(const Http::Request &request, Http::ResponseWriter response);

private:
	Rest::Router *router;
	void initSidRouter();
};

