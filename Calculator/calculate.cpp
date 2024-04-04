#include "MyForm.h"

using namespace Calculator;

System::Double MyForm::calculateLabel() {
	this->isNewEntering = true;
	String^ stateLabelText{ this->stateLabel->Text };

	if (!stateLabelText->Length) return this->operationInput->Text->Length
		? Convert::ToDouble(this->operationInput->Text)
		: 0;

	Double num1{ Convert::ToDouble(stateLabelText->Substring(0, stateLabelText->Length - 1)) };
	Double num2{ Convert::ToDouble(this->operationInput->Text) };

	String^ stateSign{ stateLabelText->Substring(stateLabelText->Length - 1) };

	if (stateSign == "+") return num1 + num2;
	else if (stateSign == "-") return num1 - num2;
	else if (stateSign == "*") return num1 * num2;
	else if (stateSign == "/") return num1 / num2;
};

System::Void MyForm::resultButton_Click(System::Object^ sender, System::EventArgs^ e) {
	this->operationInput->Text = this->calculateLabel() + "";
	this->stateLabel->Text = "";
}

System::Void MyForm::fractionButton_Click(System::Object^ sender, System::EventArgs^ e) {
	Double currentNum{ this->calculateLabel() };

	this->stateLabel->Text = "";
	this->operationInput->Text = 1 / currentNum + "";
}

System::Void MyForm::squareButton_Click(System::Object^ sender, System::EventArgs^ e) {
	Double currentNum{ this->calculateLabel() };

	this->stateLabel->Text = "";
	this->operationInput->Text = pow(currentNum, 2) + "";
}

System::Void MyForm::squareRootButton_Click(System::Object^ sender, System::EventArgs^ e) {
	Double currentNum{ this->calculateLabel() };

	this->stateLabel->Text = "";
	this->operationInput->Text = sqrt(currentNum) + "";
}