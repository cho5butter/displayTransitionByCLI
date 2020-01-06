#include "MyUserControl1.h"
#include "MyForm.h"

using namespace testProject;

System::Void MyUserControl1::Button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	MyForm::ctrl->Visible = true;
	MyForm::ctrl1->Visible = false;
}