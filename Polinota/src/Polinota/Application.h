#pragma once
#include "Core.h"

namespace Polinota {

	class POLINOTA_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	Application* CreateApplication();
}

