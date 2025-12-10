#pragma once

#include "Core.h"

namespace Moon
{
	class MN_API Application
	{
	public:
		Application();
		virtual ~Application();

		void run();

	};

	//To be defined in CLIENT
	Application* CreateApplication();

}
