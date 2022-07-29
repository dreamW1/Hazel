#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** argv) {

	Hazel::Log::Init();
	HZ_CORE_ERROR("Hellow");
	HZ_CLIENT_INFO("HAZEL");

	Hazel::Application* app = Hazel::CreateApplication();
	app->run();
	delete app;
}
#else 
     #error Hazel only supports Windows!
#endif // HZ_PLATFORM_WINDOWS

