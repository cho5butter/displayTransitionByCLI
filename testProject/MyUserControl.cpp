#include "MyUserControl.h"
#include "MyForm.h"

using namespace testProject;
System::Void MyUserControl::MyUserControl_Load(System::Object^ sender, System::EventArgs^ e)
{
}
System::Void MyUserControl::Button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	MyForm::ctrl->Visible = false;
	MyForm::ctrl1->Visible = true;
}