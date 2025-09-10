#include <Bagel.h>

class Sandbox : public Bagel::Application {
public:
	Sandbox() {
	
	}

	~Sandbox() {

	}
};

Bagel::Application* Bagel::CreateApplication() {
	return new Sandbox();
}