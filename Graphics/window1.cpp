#include "window1.h"



using namespace System;
using namespace System::Windows::Forms;


int main()
{

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew CppCLR_WinformsProjekt::Form1()); // 
	return 0;
}