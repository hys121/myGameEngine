#pragma once

#include "Core.h"

namespace GEngine {
	class GENGINE_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	Application* CreateApplication();
}
