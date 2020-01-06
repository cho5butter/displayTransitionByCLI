#include "MyForm1.h"

#include "MyForm.h"

using namespace testProject;

System::Void MyForm1::MyForm1_Load(System::Object^ sender, System::EventArgs^ e)
{
	MyForm^ myform;

	if (this->Owner != nullptr)
	{
		myform = static_cast<MyForm^>(this->Owner);
		myform->m_num = 20;
	}

}
