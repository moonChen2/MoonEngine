#pragma once


#ifdef MN_PLATFORM_WINDOWS

extern Moon::Application* Moon::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Moon::CreateApplication();
	app->run();
	delete app;
}

#endif 