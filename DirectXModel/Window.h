#pragma once
#include <Windows.h>
#pragma comment(lib,"d3d11.lib") 



class Window
{
	public: 
		Window();
		bool init();
		bool broadcast();
		bool release();
		bool isRun();

		virtual void onCreate()=0;
		virtual void onUpdate()=0;
		virtual void onDestroy();

		~Window();
protected: 
	HWND m_hwnd;
	bool m_is_run;
};