//============================================================================
// Name        : aixm-server.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <pistache/endpoint.h>
#include <pistache/net.h>
#include <pistache/router.h>
#include <memory>

#include "main/shared/framework/ServerHandler.hpp"

using namespace Pistache;

int main()
{
	Address addr(Ipv4::any(), Port(9080));
	auto opts = Http::Endpoint::options().threads(1);
	Http::Endpoint server(addr);
	server.init(opts);

	ServerHandler handler = ServerHandler();
	server.setHandler(handler.getRouter()->handler());
	server.serve();
}
