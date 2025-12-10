#include <Moon.h>

class SandBox : public Moon::Application
{
public:
	SandBox()
	{
	}
	~SandBox()
	{
	}

};

Moon::Application* Moon::CreateApplication() {
	return new SandBox();
}