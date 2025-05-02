#pragma once

#include "Core.h"

namespace Renderer
{
	class RENDERER_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	Application* CreateApplication();
}