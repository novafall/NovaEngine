#include <Nova.h>

class Example : public ne::Application
{
public:
	Example()
	{

	}

	~Example()
	{

	}

	
};

ne::Application* ne::CreateApplication()
{
	return new Example();
}
