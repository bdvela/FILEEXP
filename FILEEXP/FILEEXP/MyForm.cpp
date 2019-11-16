#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;

int main(array<System::String ^> ^args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew FILEEXP::MyForm);
	return 0;
}
