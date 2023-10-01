#include "Polinota.h"

class SandboxApp : public Polinota::Application
{
public:
	SandboxApp()
	{
		
	}

	~SandboxApp()
	{

	}
};

Polinota::Application* Polinota::CreateApplication()
{
	return new SandboxApp();
}