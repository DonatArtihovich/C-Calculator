#pragma once
#include <string>

namespace Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ operationInput;

	private: System::Windows::Forms::Button^ percentButton;
	private: System::Windows::Forms::Button^ backspaceButton;


	private: System::Windows::Forms::Button^ CButton;

	private: System::Windows::Forms::Button^ CEButton;
	private: System::Windows::Forms::Button^ squareButton;
	private: System::Windows::Forms::Button^ squareRootButton;
	private: System::Windows::Forms::Button^ divisionButton;





	private: System::Windows::Forms::Button^ fractionButton;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ multiplyButton;






	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button0;
	private: System::Windows::Forms::Button^ commaButton;
	private: System::Windows::Forms::Button^ resultButton;





	private: System::Windows::Forms::Button^ signButton;


	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ plusButton;



	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ minusButton;



	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ stateLabel;
	private: bool isNewEntering{ true };


	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->operationInput = (gcnew System::Windows::Forms::TextBox());
			this->percentButton = (gcnew System::Windows::Forms::Button());
			this->backspaceButton = (gcnew System::Windows::Forms::Button());
			this->CButton = (gcnew System::Windows::Forms::Button());
			this->CEButton = (gcnew System::Windows::Forms::Button());
			this->squareButton = (gcnew System::Windows::Forms::Button());
			this->squareRootButton = (gcnew System::Windows::Forms::Button());
			this->divisionButton = (gcnew System::Windows::Forms::Button());
			this->fractionButton = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->multiplyButton = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button0 = (gcnew System::Windows::Forms::Button());
			this->commaButton = (gcnew System::Windows::Forms::Button());
			this->resultButton = (gcnew System::Windows::Forms::Button());
			this->signButton = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->plusButton = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->minusButton = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->stateLabel = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(61, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 17);
			this->label1->TabIndex = 0;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(51, 58);
			this->label2->Name = L"label2";
			this->label2->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->label2->Size = System::Drawing::Size(0, 17);
			this->label2->TabIndex = 1;
			// 
			// operationInput
			// 
			this->operationInput->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->operationInput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			this->operationInput->Location = System::Drawing::Point(12, 58);
			this->operationInput->Name = L"operationInput";
			this->operationInput->Size = System::Drawing::Size(319, 64);
			this->operationInput->TabIndex = 3;
			this->operationInput->Text = L"0";
			// 
			// percentButton
			// 
			this->percentButton->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->percentButton->Location = System::Drawing::Point(12, 128);
			this->percentButton->Name = L"percentButton";
			this->percentButton->Size = System::Drawing::Size(72, 52);
			this->percentButton->TabIndex = 4;
			this->percentButton->Text = L"%";
			this->percentButton->UseVisualStyleBackColor = false;
			this->percentButton->Click += gcnew System::EventHandler(this, &MyForm::percentButton_Click);
			// 
			// backspaceButton
			// 
			this->backspaceButton->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->backspaceButton->Location = System::Drawing::Point(248, 128);
			this->backspaceButton->Name = L"backspaceButton";
			this->backspaceButton->Size = System::Drawing::Size(72, 52);
			this->backspaceButton->TabIndex = 8;
			this->backspaceButton->Text = L"⌫";
			this->backspaceButton->UseVisualStyleBackColor = false;
			this->backspaceButton->Click += gcnew System::EventHandler(this, &MyForm::backspaceButtonClick);
			// 
			// CButton
			// 
			this->CButton->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->CButton->Location = System::Drawing::Point(170, 128);
			this->CButton->Name = L"CButton";
			this->CButton->Size = System::Drawing::Size(72, 52);
			this->CButton->TabIndex = 9;
			this->CButton->Text = L"C";
			this->CButton->UseVisualStyleBackColor = false;
			this->CButton->Click += gcnew System::EventHandler(this, &MyForm::CButton_Click);
			// 
			// CEButton
			// 
			this->CEButton->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->CEButton->Location = System::Drawing::Point(92, 128);
			this->CEButton->Name = L"CEButton";
			this->CEButton->Size = System::Drawing::Size(72, 52);
			this->CEButton->TabIndex = 10;
			this->CEButton->Text = L"CE";
			this->CEButton->UseVisualStyleBackColor = false;
			this->CEButton->Click += gcnew System::EventHandler(this, &MyForm::CEButton_Click);
			// 
			// squareButton
			// 
			this->squareButton->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->squareButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->squareButton->Location = System::Drawing::Point(92, 186);
			this->squareButton->Name = L"squareButton";
			this->squareButton->Size = System::Drawing::Size(72, 52);
			this->squareButton->TabIndex = 14;
			this->squareButton->Text = L"x²";
			this->squareButton->UseVisualStyleBackColor = false;
			this->squareButton->Click += gcnew System::EventHandler(this, &MyForm::squareButton_Click);
			// 
			// squareRootButton
			// 
			this->squareRootButton->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->squareRootButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->squareRootButton->Location = System::Drawing::Point(170, 186);
			this->squareRootButton->Name = L"squareRootButton";
			this->squareRootButton->Size = System::Drawing::Size(72, 52);
			this->squareRootButton->TabIndex = 13;
			this->squareRootButton->Text = L"√x";
			this->squareRootButton->UseVisualStyleBackColor = false;
			this->squareRootButton->Click += gcnew System::EventHandler(this, &MyForm::squareRootButton_Click);
			// 
			// divisionButton
			// 
			this->divisionButton->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->divisionButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->divisionButton->Location = System::Drawing::Point(248, 186);
			this->divisionButton->Name = L"divisionButton";
			this->divisionButton->Size = System::Drawing::Size(72, 52);
			this->divisionButton->TabIndex = 12;
			this->divisionButton->Text = L"/";
			this->divisionButton->UseVisualStyleBackColor = false;
			this->divisionButton->Click += gcnew System::EventHandler(this, &MyForm::basicOperation_Click);
			// 
			// fractionButton
			// 
			this->fractionButton->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->fractionButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->fractionButton->Location = System::Drawing::Point(12, 186);
			this->fractionButton->Name = L"fractionButton";
			this->fractionButton->Size = System::Drawing::Size(72, 52);
			this->fractionButton->TabIndex = 11;
			this->fractionButton->Text = L"1/x";
			this->fractionButton->UseVisualStyleBackColor = false;
			this->fractionButton->Click += gcnew System::EventHandler(this, &MyForm::fractionButton_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button8->Location = System::Drawing::Point(92, 244);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(72, 52);
			this->button8->TabIndex = 18;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::numberButtonClick);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button9->Location = System::Drawing::Point(170, 244);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(72, 52);
			this->button9->TabIndex = 17;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::numberButtonClick);
			// 
			// multiplyButton
			// 
			this->multiplyButton->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->multiplyButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->multiplyButton->Location = System::Drawing::Point(248, 244);
			this->multiplyButton->Name = L"multiplyButton";
			this->multiplyButton->Size = System::Drawing::Size(72, 52);
			this->multiplyButton->TabIndex = 16;
			this->multiplyButton->Text = L"*";
			this->multiplyButton->UseVisualStyleBackColor = false;
			this->multiplyButton->Click += gcnew System::EventHandler(this, &MyForm::basicOperation_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button7->Location = System::Drawing::Point(12, 244);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(72, 52);
			this->button7->TabIndex = 15;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::numberButtonClick);
			// 
			// button0
			// 
			this->button0->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button0->Location = System::Drawing::Point(92, 422);
			this->button0->Name = L"button0";
			this->button0->Size = System::Drawing::Size(72, 52);
			this->button0->TabIndex = 30;
			this->button0->Text = L"0";
			this->button0->UseVisualStyleBackColor = false;
			this->button0->Click += gcnew System::EventHandler(this, &MyForm::numberButtonClick);
			// 
			// commaButton
			// 
			this->commaButton->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->commaButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 17));
			this->commaButton->Location = System::Drawing::Point(170, 422);
			this->commaButton->Name = L"commaButton";
			this->commaButton->Size = System::Drawing::Size(72, 52);
			this->commaButton->TabIndex = 29;
			this->commaButton->Text = L",";
			this->commaButton->UseVisualStyleBackColor = false;
			this->commaButton->Click += gcnew System::EventHandler(this, &MyForm::commaButton_Click);
			// 
			// resultButton
			// 
			this->resultButton->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->resultButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 17));
			this->resultButton->Location = System::Drawing::Point(248, 422);
			this->resultButton->Name = L"resultButton";
			this->resultButton->Size = System::Drawing::Size(72, 52);
			this->resultButton->TabIndex = 28;
			this->resultButton->Text = L"=";
			this->resultButton->UseVisualStyleBackColor = false;
			this->resultButton->Click += gcnew System::EventHandler(this, &MyForm::resultButton_Click);
			// 
			// signButton
			// 
			this->signButton->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->signButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->signButton->Location = System::Drawing::Point(12, 422);
			this->signButton->Name = L"signButton";
			this->signButton->Size = System::Drawing::Size(72, 52);
			this->signButton->TabIndex = 27;
			this->signButton->Text = L"+/-";
			this->signButton->UseVisualStyleBackColor = false;
			this->signButton->Click += gcnew System::EventHandler(this, &MyForm::signButton_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button2->Location = System::Drawing::Point(92, 364);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(72, 52);
			this->button2->TabIndex = 26;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::numberButtonClick);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button3->Location = System::Drawing::Point(170, 364);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(72, 52);
			this->button3->TabIndex = 25;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::numberButtonClick);
			// 
			// plusButton
			// 
			this->plusButton->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->plusButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 17));
			this->plusButton->Location = System::Drawing::Point(248, 364);
			this->plusButton->Name = L"plusButton";
			this->plusButton->Size = System::Drawing::Size(72, 52);
			this->plusButton->TabIndex = 24;
			this->plusButton->Text = L"+";
			this->plusButton->UseVisualStyleBackColor = false;
			this->plusButton->Click += gcnew System::EventHandler(this, &MyForm::basicOperation_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button1->Location = System::Drawing::Point(12, 364);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(72, 52);
			this->button1->TabIndex = 23;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::numberButtonClick);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button5->Location = System::Drawing::Point(92, 306);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(72, 52);
			this->button5->TabIndex = 22;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::numberButtonClick);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button6->Location = System::Drawing::Point(170, 306);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(72, 52);
			this->button6->TabIndex = 21;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::numberButtonClick);
			// 
			// minusButton
			// 
			this->minusButton->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->minusButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 17));
			this->minusButton->Location = System::Drawing::Point(248, 306);
			this->minusButton->Name = L"minusButton";
			this->minusButton->Size = System::Drawing::Size(72, 52);
			this->minusButton->TabIndex = 20;
			this->minusButton->Text = L"-";
			this->minusButton->UseVisualStyleBackColor = false;
			this->minusButton->Click += gcnew System::EventHandler(this, &MyForm::basicOperation_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button4->Location = System::Drawing::Point(12, 306);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(72, 52);
			this->button4->TabIndex = 19;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::numberButtonClick);
			// 
			// stateLabel
			// 
			this->stateLabel->AutoSize = true;
			this->stateLabel->Location = System::Drawing::Point(12, 34);
			this->stateLabel->Name = L"stateLabel";
			this->stateLabel->Size = System::Drawing::Size(0, 17);
			this->stateLabel->TabIndex = 31;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(343, 508);
			this->Controls->Add(this->stateLabel);
			this->Controls->Add(this->button0);
			this->Controls->Add(this->commaButton);
			this->Controls->Add(this->resultButton);
			this->Controls->Add(this->signButton);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->plusButton);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->minusButton);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->multiplyButton);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->squareButton);
			this->Controls->Add(this->squareRootButton);
			this->Controls->Add(this->divisionButton);
			this->Controls->Add(this->fractionButton);
			this->Controls->Add(this->CEButton);
			this->Controls->Add(this->CButton);
			this->Controls->Add(this->backspaceButton);
			this->Controls->Add(this->percentButton);
			this->Controls->Add(this->operationInput);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {};
		System::Void numberButtonClick(System::Object^ sender, System::EventArgs^ e);
		System::Void backspaceButtonClick(System::Object^ sender, System::EventArgs^ e);
		System::Double calculateLabel();
		System::Void resultButton_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void CButton_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void CEButton_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void signButton_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void basicOperation_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void fractionButton_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void squareButton_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void squareRootButton_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void commaButton_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void percentButton_Click(System::Object^ sender, System::EventArgs^);
	};
}
