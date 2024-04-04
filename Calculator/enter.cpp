#include "MyForm.h"

using namespace Calculator;

System::Void MyForm::numberButtonClick(System::Object^ sender, System::EventArgs^ e) {
	Button^ clickedButton = dynamic_cast<Button^>(sender);

	if (clickedButton != nullptr)
	{
		String^ buttonText = clickedButton->Text;
		if (!isNewEntering) {
			this->operationInput->Text += buttonText;
		}
		else {
			this->operationInput->Text = buttonText;
		}
	}
	this->isNewEntering = false;
}

System::Void MyForm::backspaceButtonClick(System::Object^ sender, System::EventArgs^ e) {
	String^ operationText = this->operationInput->Text;

	if (operationText->Length > 0)
	{
		this->operationInput->Text = operationText->Substring(0, operationText->Length - 1);
	}
}

System::Void MyForm::commaButton_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!this->isNewEntering) {
		this->operationInput->Text += ",";
	}
	else {
		this->operationInput->Text = "0,";
		this->isNewEntering = false;
	}
}

System::Void MyForm::percentButton_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!this->stateLabel->Text->Length) return;
	Double originNum{ Convert::ToDouble(this->stateLabel->Text->Substring(0, this->stateLabel->Text->Length - 1)) };
	Double percentNum = { Convert::ToDouble(this->operationInput->Text) };

	this->operationInput->Text = originNum * percentNum / 100 + "";
}

System::Void MyForm::CButton_Click(System::Object^ sender, System::EventArgs^ e) {
	this->isNewEntering = true;
	this->operationInput->Text = "0";
	this->stateLabel->Text = "";
}

System::Void MyForm::CEButton_Click(System::Object^ sender, System::EventArgs^ e) {
	this->isNewEntering = true;
	this->operationInput->Text = "0";
}

System::Void MyForm::signButton_Click(System::Object^ sender, System::EventArgs^ e) {
	this->operationInput->Text = -Convert::ToDouble(this->operationInput->Text) + "";
}

System::Void MyForm::basicOperation_Click(System::Object^ sender, System::EventArgs^ e) {
	Double currentNum{ this->calculateLabel() };
	Button^ clickedButton = dynamic_cast<Button^>(sender);

	if (clickedButton != nullptr)
	{
		String^ buttonText = clickedButton->Text;
		this->stateLabel->Text = currentNum + " " + buttonText;
		this->operationInput->Text = Convert::ToString(currentNum);
	}
}