#pragma once

#ifdef BG_PLATFORM_WINDOWS

extern Bagel::Application* Bagel::CreateApplication();

int main(int argc, char** argv) {
	auto app = Bagel::CreateApplication();
	app->Run();
	delete app;
}

#endif