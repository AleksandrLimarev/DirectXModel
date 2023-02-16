#include "AppWindow.h"



int main()
{
	try
	{
		GraphicsEngine::create();
		
	}
	catch (...) { return -1; }

	

	{
		try
		{
			AppWindow app;
			while (app.isRun());
		}
		catch (...) {
			
			GraphicsEngine::release();
			return -1;
		}
	}

	
	GraphicsEngine::release();

	return 0;
}