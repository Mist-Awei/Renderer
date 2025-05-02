#include <Renderer.h>

class Sandbox : public Renderer::Application
{
public:
	Sandbox()
	{
	}

	~Sandbox()
	{
	}
};

Renderer::Application* Renderer::CreateApplication()
{
	return new Sandbox();
}