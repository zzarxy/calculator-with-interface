#include <iostream>
#include <string>
#include "MyForm.h"




using namespace System;
using namespace System::Windows::Forms;



[STAThread]
void main(array<String^>^ arg) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    calculator::MyForm form; 
    Application::Run(% form);
    
    
}