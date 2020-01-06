#include "MyForm.h"

#include "MyForm1.h"

using namespace testProject;

[STAThreadAttribute]

int main(void)
{
	Application::Run(gcnew MyForm());
	return 0;
}

System::Void MyForm::MyForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	MyForm::m_num = 10;
	MyForm::ctrl = gcnew MyUserControl();
	MyForm::ctrl1 = gcnew MyUserControl1();
	MyForm::panel1->Controls->Add(ctrl);
	MyForm::panel1->Controls->Add(ctrl1);
	MyForm::ctrl->Visible = true;
	MyForm::ctrl1->Visible = false;
}