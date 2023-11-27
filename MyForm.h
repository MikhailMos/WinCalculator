#pragma once

namespace WinCalculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
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
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ result_label;

	private: System::Windows::Forms::Button^ btn_ac;
	private: System::Windows::Forms::Button^ btn_plus_minus;
	private: System::Windows::Forms::Button^ btn_percent;
	private: System::Windows::Forms::Button^ btn_div;
	private: System::Windows::Forms::Button^ btn_mult;






	private: System::Windows::Forms::Button^ btn_9;

	private: System::Windows::Forms::Button^ btn_8;

	private: System::Windows::Forms::Button^ btn_7;
	private: System::Windows::Forms::Button^ btn_minus;


	private: System::Windows::Forms::Button^ btn_6;

	private: System::Windows::Forms::Button^ btn_5;

	private: System::Windows::Forms::Button^ btn_4;
	private: System::Windows::Forms::Button^ btn_plus;
	private: System::Windows::Forms::Button^ btn_3;
	private: System::Windows::Forms::Button^ btn_2;
	private: System::Windows::Forms::Button^ btn_1;
	private: System::Windows::Forms::Button^ btn_equals;






	private: System::Windows::Forms::Button^ btn_dot;


	private: System::Windows::Forms::Button^ btn_0;

	private: double first_num = 0.;
	private: char user_action = ' '; // содержит выбранное действие, по умолчанию пробел
	private: bool is_equal = false; // флаг нажити€ на равно
	private: System::Windows::Forms::Label^ first_num_label; // содержит первое введенное число, дл€ информации
	private: bool is_calc = false; // дл€ понимани€ нужно рассчитвать или нет
	
	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->result_label = (gcnew System::Windows::Forms::Label());
			this->btn_ac = (gcnew System::Windows::Forms::Button());
			this->btn_plus_minus = (gcnew System::Windows::Forms::Button());
			this->btn_percent = (gcnew System::Windows::Forms::Button());
			this->btn_div = (gcnew System::Windows::Forms::Button());
			this->btn_mult = (gcnew System::Windows::Forms::Button());
			this->btn_9 = (gcnew System::Windows::Forms::Button());
			this->btn_8 = (gcnew System::Windows::Forms::Button());
			this->btn_7 = (gcnew System::Windows::Forms::Button());
			this->btn_minus = (gcnew System::Windows::Forms::Button());
			this->btn_6 = (gcnew System::Windows::Forms::Button());
			this->btn_5 = (gcnew System::Windows::Forms::Button());
			this->btn_4 = (gcnew System::Windows::Forms::Button());
			this->btn_plus = (gcnew System::Windows::Forms::Button());
			this->btn_3 = (gcnew System::Windows::Forms::Button());
			this->btn_2 = (gcnew System::Windows::Forms::Button());
			this->btn_1 = (gcnew System::Windows::Forms::Button());
			this->btn_equals = (gcnew System::Windows::Forms::Button());
			this->btn_dot = (gcnew System::Windows::Forms::Button());
			this->btn_0 = (gcnew System::Windows::Forms::Button());
			this->first_num_label = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// result_label
			// 
			this->result_label->BackColor = System::Drawing::Color::White;
			this->result_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->result_label->Location = System::Drawing::Point(5, 33);
			this->result_label->Name = L"result_label";
			this->result_label->Size = System::Drawing::Size(276, 64);
			this->result_label->TabIndex = 1;
			this->result_label->Text = L"0";
			this->result_label->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// btn_ac
			// 
			this->btn_ac->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btn_ac->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_ac->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_ac->Location = System::Drawing::Point(13, 109);
			this->btn_ac->Name = L"btn_ac";
			this->btn_ac->Size = System::Drawing::Size(60, 60);
			this->btn_ac->TabIndex = 2;
			this->btn_ac->Text = L"AC";
			this->btn_ac->UseVisualStyleBackColor = false;
			this->btn_ac->Click += gcnew System::EventHandler(this, &MyForm::btn_ac_Click);
			// 
			// btn_plus_minus
			// 
			this->btn_plus_minus->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btn_plus_minus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_plus_minus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_plus_minus->Location = System::Drawing::Point(80, 109);
			this->btn_plus_minus->Name = L"btn_plus_minus";
			this->btn_plus_minus->Size = System::Drawing::Size(60, 60);
			this->btn_plus_minus->TabIndex = 3;
			this->btn_plus_minus->Text = L"+/-";
			this->btn_plus_minus->UseVisualStyleBackColor = false;
			this->btn_plus_minus->Click += gcnew System::EventHandler(this, &MyForm::btn_plus_minus_Click);
			// 
			// btn_percent
			// 
			this->btn_percent->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btn_percent->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_percent->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_percent->Location = System::Drawing::Point(146, 109);
			this->btn_percent->Name = L"btn_percent";
			this->btn_percent->Size = System::Drawing::Size(60, 60);
			this->btn_percent->TabIndex = 4;
			this->btn_percent->Text = L"%";
			this->btn_percent->UseVisualStyleBackColor = false;
			this->btn_percent->Click += gcnew System::EventHandler(this, &MyForm::btn_percent_Click);
			// 
			// btn_div
			// 
			this->btn_div->BackColor = System::Drawing::Color::Orange;
			this->btn_div->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_div->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_div->Location = System::Drawing::Point(212, 109);
			this->btn_div->Name = L"btn_div";
			this->btn_div->Size = System::Drawing::Size(60, 60);
			this->btn_div->TabIndex = 5;
			this->btn_div->Text = L"/";
			this->btn_div->UseVisualStyleBackColor = false;
			this->btn_div->Click += gcnew System::EventHandler(this, &MyForm::btn_div_Click);
			// 
			// btn_mult
			// 
			this->btn_mult->BackColor = System::Drawing::Color::Orange;
			this->btn_mult->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_mult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_mult->Location = System::Drawing::Point(212, 179);
			this->btn_mult->Name = L"btn_mult";
			this->btn_mult->Size = System::Drawing::Size(60, 60);
			this->btn_mult->TabIndex = 9;
			this->btn_mult->Text = L"*";
			this->btn_mult->UseVisualStyleBackColor = false;
			this->btn_mult->Click += gcnew System::EventHandler(this, &MyForm::btn_mult_Click);
			// 
			// btn_9
			// 
			this->btn_9->BackColor = System::Drawing::Color::FloralWhite;
			this->btn_9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_9->Location = System::Drawing::Point(146, 179);
			this->btn_9->Name = L"btn_9";
			this->btn_9->Size = System::Drawing::Size(60, 60);
			this->btn_9->TabIndex = 8;
			this->btn_9->Text = L"9";
			this->btn_9->UseVisualStyleBackColor = false;
			this->btn_9->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// btn_8
			// 
			this->btn_8->BackColor = System::Drawing::Color::FloralWhite;
			this->btn_8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_8->Location = System::Drawing::Point(80, 179);
			this->btn_8->Name = L"btn_8";
			this->btn_8->Size = System::Drawing::Size(60, 60);
			this->btn_8->TabIndex = 7;
			this->btn_8->Text = L"8";
			this->btn_8->UseVisualStyleBackColor = false;
			this->btn_8->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// btn_7
			// 
			this->btn_7->BackColor = System::Drawing::Color::FloralWhite;
			this->btn_7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_7->Location = System::Drawing::Point(13, 179);
			this->btn_7->Name = L"btn_7";
			this->btn_7->Size = System::Drawing::Size(60, 60);
			this->btn_7->TabIndex = 6;
			this->btn_7->Text = L"7";
			this->btn_7->UseVisualStyleBackColor = false;
			this->btn_7->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// btn_minus
			// 
			this->btn_minus->BackColor = System::Drawing::Color::Orange;
			this->btn_minus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_minus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_minus->Location = System::Drawing::Point(212, 248);
			this->btn_minus->Name = L"btn_minus";
			this->btn_minus->Size = System::Drawing::Size(60, 60);
			this->btn_minus->TabIndex = 13;
			this->btn_minus->Text = L"-";
			this->btn_minus->UseVisualStyleBackColor = false;
			this->btn_minus->Click += gcnew System::EventHandler(this, &MyForm::btn_minus_Click);
			// 
			// btn_6
			// 
			this->btn_6->BackColor = System::Drawing::Color::FloralWhite;
			this->btn_6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_6->Location = System::Drawing::Point(146, 248);
			this->btn_6->Name = L"btn_6";
			this->btn_6->Size = System::Drawing::Size(60, 60);
			this->btn_6->TabIndex = 12;
			this->btn_6->Text = L"6";
			this->btn_6->UseVisualStyleBackColor = false;
			this->btn_6->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// btn_5
			// 
			this->btn_5->BackColor = System::Drawing::Color::FloralWhite;
			this->btn_5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_5->Location = System::Drawing::Point(80, 248);
			this->btn_5->Name = L"btn_5";
			this->btn_5->Size = System::Drawing::Size(60, 60);
			this->btn_5->TabIndex = 11;
			this->btn_5->Text = L"5";
			this->btn_5->UseVisualStyleBackColor = false;
			this->btn_5->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// btn_4
			// 
			this->btn_4->BackColor = System::Drawing::Color::FloralWhite;
			this->btn_4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_4->Location = System::Drawing::Point(13, 248);
			this->btn_4->Name = L"btn_4";
			this->btn_4->Size = System::Drawing::Size(60, 60);
			this->btn_4->TabIndex = 10;
			this->btn_4->Text = L"4";
			this->btn_4->UseVisualStyleBackColor = false;
			this->btn_4->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// btn_plus
			// 
			this->btn_plus->BackColor = System::Drawing::Color::Orange;
			this->btn_plus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_plus->Location = System::Drawing::Point(212, 318);
			this->btn_plus->Name = L"btn_plus";
			this->btn_plus->Size = System::Drawing::Size(60, 60);
			this->btn_plus->TabIndex = 17;
			this->btn_plus->Text = L"+";
			this->btn_plus->UseVisualStyleBackColor = false;
			this->btn_plus->Click += gcnew System::EventHandler(this, &MyForm::btn_plus_Click);
			// 
			// btn_3
			// 
			this->btn_3->BackColor = System::Drawing::Color::FloralWhite;
			this->btn_3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_3->Location = System::Drawing::Point(146, 318);
			this->btn_3->Name = L"btn_3";
			this->btn_3->Size = System::Drawing::Size(60, 60);
			this->btn_3->TabIndex = 16;
			this->btn_3->Text = L"3";
			this->btn_3->UseVisualStyleBackColor = false;
			this->btn_3->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// btn_2
			// 
			this->btn_2->BackColor = System::Drawing::Color::FloralWhite;
			this->btn_2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_2->Location = System::Drawing::Point(80, 318);
			this->btn_2->Name = L"btn_2";
			this->btn_2->Size = System::Drawing::Size(60, 60);
			this->btn_2->TabIndex = 15;
			this->btn_2->Text = L"2";
			this->btn_2->UseVisualStyleBackColor = false;
			this->btn_2->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// btn_1
			// 
			this->btn_1->BackColor = System::Drawing::Color::FloralWhite;
			this->btn_1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_1->Location = System::Drawing::Point(13, 318);
			this->btn_1->Name = L"btn_1";
			this->btn_1->Size = System::Drawing::Size(60, 60);
			this->btn_1->TabIndex = 14;
			this->btn_1->Text = L"1";
			this->btn_1->UseVisualStyleBackColor = false;
			this->btn_1->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// btn_equals
			// 
			this->btn_equals->BackColor = System::Drawing::Color::Orange;
			this->btn_equals->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_equals->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_equals->Location = System::Drawing::Point(212, 386);
			this->btn_equals->Name = L"btn_equals";
			this->btn_equals->Size = System::Drawing::Size(60, 60);
			this->btn_equals->TabIndex = 21;
			this->btn_equals->Text = L"=";
			this->btn_equals->UseVisualStyleBackColor = false;
			this->btn_equals->Click += gcnew System::EventHandler(this, &MyForm::btn_equals_Click);
			// 
			// btn_dot
			// 
			this->btn_dot->BackColor = System::Drawing::Color::FloralWhite;
			this->btn_dot->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_dot->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_dot->Location = System::Drawing::Point(146, 386);
			this->btn_dot->Name = L"btn_dot";
			this->btn_dot->Size = System::Drawing::Size(60, 60);
			this->btn_dot->TabIndex = 20;
			this->btn_dot->Text = L".";
			this->btn_dot->UseVisualStyleBackColor = false;
			this->btn_dot->Click += gcnew System::EventHandler(this, &MyForm::btn_dot_Click);
			// 
			// btn_0
			// 
			this->btn_0->BackColor = System::Drawing::Color::FloralWhite;
			this->btn_0->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_0->Location = System::Drawing::Point(13, 387);
			this->btn_0->Name = L"btn_0";
			this->btn_0->Size = System::Drawing::Size(127, 60);
			this->btn_0->TabIndex = 18;
			this->btn_0->Text = L"0";
			this->btn_0->UseVisualStyleBackColor = false;
			this->btn_0->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// first_num_label
			// 
			this->first_num_label->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->first_num_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->first_num_label->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->first_num_label->Location = System::Drawing::Point(5, 5);
			this->first_num_label->Margin = System::Windows::Forms::Padding(3, 0, 0, 0);
			this->first_num_label->Name = L"first_num_label";
			this->first_num_label->Size = System::Drawing::Size(276, 25);
			this->first_num_label->TabIndex = 22;
			this->first_num_label->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->ClientSize = System::Drawing::Size(284, 461);
			this->Controls->Add(this->first_num_label);
			this->Controls->Add(this->btn_equals);
			this->Controls->Add(this->btn_dot);
			this->Controls->Add(this->btn_0);
			this->Controls->Add(this->btn_plus);
			this->Controls->Add(this->btn_3);
			this->Controls->Add(this->btn_2);
			this->Controls->Add(this->btn_1);
			this->Controls->Add(this->btn_minus);
			this->Controls->Add(this->btn_6);
			this->Controls->Add(this->btn_5);
			this->Controls->Add(this->btn_4);
			this->Controls->Add(this->btn_mult);
			this->Controls->Add(this->btn_9);
			this->Controls->Add(this->btn_8);
			this->Controls->Add(this->btn_7);
			this->Controls->Add(this->btn_div);
			this->Controls->Add(this->btn_percent);
			this->Controls->Add(this->btn_plus_minus);
			this->Controls->Add(this->btn_ac);
			this->Controls->Add(this->result_label);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->KeyPreview = true;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Calc";
			this->Shown += gcnew System::EventHandler(this, &MyForm::MyForm_Shown);
			this->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::MyForm_KeyPress);
			this->ResumeLayout(false);

		}
#pragma endregion
	
	private: System::Void MyForm_Shown(System::Object^ sender, System::EventArgs^ e) {
		// установим фокус на кнопку "="
		this->btn_equals->Focus();
	}

	// ќбработчик нажати€ на цифровую кнопку
	private: System::Void BtnNumber_Click(System::Object^ sender, System::EventArgs^ e) {
		Button^ button = safe_cast<Button^>(sender);
		
		if (this->result_label->Text == "0" || this->is_equal) {
			this->result_label->Text = button->Text;
			this->is_equal = false;
		}
		else {
			this->result_label->Text += button->Text;
		}

		if (this->first_num_label->Text->Length) {
			this->is_calc = true;
		}
		
	}

	private: System::Void btn_plus_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('+');
	}

	private: System::Void btn_minus_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('-');
	}

	private: System::Void btn_mult_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('*');
	}

	private: System::Void btn_div_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('/');
	}

	private: System::Double Calculate() {

		double result = 0.;
		double second = System::Convert::ToDouble(this->result_label->Text);

		switch (this->user_action) {
		case '+': {
			result = this->first_num + second;
			break;
		}
		case '-': {
			result = this->first_num - second;
			break;
		}
		case '*': {
			result = this->first_num * second;
			break;
		}
		case '%': {
			result = this->first_num * second / 100;
			break;
		}
		case '/': {
			if (second == 0.) {
				result = 0.;
				MessageBox::Show(this, "ƒеление на 0 запрещено", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else {
				result = this->first_num / second;
			}
			break;
		}

		}

		return result;

	}

	private: System::Void math_action(char action) {

		// рассчитаем
		if (this->is_calc) {
			this->first_num = Calculate();
			this->is_calc = false;
		}
		else if (this->first_num_label->Text->Length == 0) {
			this->first_num = System::Convert::ToDouble(this->result_label->Text);
		}

		this->user_action = action;

		String^ ssign = gcnew String(&action);

		this->first_num_label->Text = System::Convert::ToString(this->first_num) + " " + ssign;
		
		this->result_label->Text = "0";
	}

	private: System::Void btn_equals_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->user_action == ' ') {
			return;
		}
		
		double result = Calculate();

		this->is_equal = true;
		this->result_label->Text = System::Convert::ToString(result);

		//сбросим значени€ предыдущего номера и выбранного знака
		this->first_num_label->Text = "";
		this->is_calc = false;
	}

	private: System::Void btn_ac_Click(System::Object^ sender, System::EventArgs^ e) {
		
		this->first_num_label->Text = "";
		this->result_label->Text = "0";
		this->first_num = 0.;
		this->user_action = ' ';
		this->is_equal = false;
	}
	
	private: System::Void btn_plus_minus_Click(System::Object^ sender, System::EventArgs^ e) {
		
		double num = System::Convert::ToDouble(this->result_label->Text);
		num *= -1;

		this->result_label->Text = System::Convert::ToString(num);
	}
	
	private: System::Void btn_percent_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('%');
	}

	private: System::Void btn_dot_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!this->result_label->Text->Contains(",")) {
			this->result_label->Text += ",";
		}
	}

	private: System::Void remove_last_character() {
		if (this->result_label->Text->Length == 1) {
			this->result_label->Text = "0";
		}
		else {
			System::String^ sresult = this->result_label->Text->Remove(this->result_label->Text->Length - 1);
			this->result_label->Text = sresult;
		}
	}

	private: System::Void MyForm_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {

		switch (e->KeyChar)
		{
		case '0': {
			BtnNumber_Click(this->btn_0, e);
			break;
		}
		case '1': {
			BtnNumber_Click(this->btn_1, e);
			break;
		}
		case '2': {
			BtnNumber_Click(this->btn_2, e);
			break;
		}
		case '3': {
			BtnNumber_Click(this->btn_3, e);
			break;
		}
		case '4': {
			BtnNumber_Click(this->btn_4, e);
			break;
		}
		case '5': {
			BtnNumber_Click(this->btn_5, e);
			break;
		}
		case '6': {
			BtnNumber_Click(this->btn_6, e);
			break;
		}
		case '7': {
			BtnNumber_Click(this->btn_7, e);
			break;
		}
		case '8': {
			BtnNumber_Click(this->btn_8, e);
			break;
		}
		case '9': {
			BtnNumber_Click(this->btn_9, e);
			break;
		}
		case ',':
		case '.': {
			btn_dot_Click(this->btn_dot, e);
			break;
		}
		case '%': {
			btn_percent_Click(this->btn_percent, e);
			break;
		}
		case '*': {
			btn_mult_Click(this->btn_mult, e);
			break;
		}
		case '-': {
			btn_minus_Click(this->btn_minus, e);
			break;
		}
		case '+': {
			btn_plus_Click(this->btn_plus, e);
			break;
		}
		case '/': {
			btn_div_Click(this->btn_div, e);
			break;
		}
		case wchar_t(27): { //Esc
			btn_ac_Click(this->btn_ac, e);
			break;
		}
		case wchar_t(13): { //Enter
			btn_equals_Click(this->btn_equals, e);
			break;
		}
		case wchar_t(8) : { //Backspace
			remove_last_character();
			break;
		}
		default:
			break;
		}

	}

};
}
