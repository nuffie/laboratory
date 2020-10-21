#include "stdafx.hpp"
#include "MyForm.h"
#include "Math.hpp"

using namespace System;
#define WINAPI __stdcall

int WINAPI WinMain(int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm);
	return 0;
}