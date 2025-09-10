#pragma once

#include "Core.h"

namespace Bagel {

	class BG_API Application {
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// TO be defined in CLIENT
	Application* CreateApplication();
}

