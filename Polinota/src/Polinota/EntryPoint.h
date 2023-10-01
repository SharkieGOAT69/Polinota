#pragma once
#ifdef PL_PLATFORM_WINDOWS

	extern Polinota::Application* Polinota::CreateApplication();

	int main(int argc, char** argv)
	{
		auto app = Polinota::CreateApplication();
		app->Run();
		delete app;
	}

#endif