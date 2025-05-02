#pragma once

#ifdef RD_PLATFORM_WINDOWS

extern Renderer::Application* Renderer::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Renderer::CreateApplication();
	app->Run();
	delete app;
	return 0;
}

#endif