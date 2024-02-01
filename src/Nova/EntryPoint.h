#pragma once
#ifdef NE_PLATFORM_WINDOWS

extern ne::Application* ne::CreateApplication();

int main(int argc, char** argv)
{
	auto app = ne::CreateApplication();
	app->Run();
	delete app;
}

#endif