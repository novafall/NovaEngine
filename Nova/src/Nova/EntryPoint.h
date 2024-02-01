#pragma once
#ifdef NE_PLATFORM_WINDOWS

extern ne::Application* ne::CreateApplication();

int main(int argc, char** argv)
{
	ne::Log::Init();
	NE_CORE_WARN("Initialized log!");
	NE_INFO("Hi!");

	auto app = ne::CreateApplication();
	app->Run();
	delete app;
}

#endif