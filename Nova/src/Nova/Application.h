#pragma once

#include "Core.h"

namespace ne
{
	class NE_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	//创建客户端
	Application* CreateApplication();
}

