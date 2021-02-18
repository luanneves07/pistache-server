/*
 * SidApi.hpp
 *
 *  Created on: 16 de fev de 2021
 *      Author: lsilva
 */
#pragma once
#include <pistache/router.h>
#include <pistache/http_defs.h>
#include "../application/SidController.hpp"

using namespace Pistache;

class SidApi
{
public:
	SidApi() = default;
	virtual ~SidApi() = default;

	static void index(const Rest::Request &request,
			Http::ResponseWriter response);
	static void registerSid(const Rest::Request &request,
			Http::ResponseWriter response);
};

