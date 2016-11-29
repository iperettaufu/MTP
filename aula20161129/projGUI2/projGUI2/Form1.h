#include <cmath>

#pragma once

namespace projGUI2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  lblDisplay;
	protected: 
	private: System::Windows::Forms::Button^  btn7;
	private: System::Windows::Forms::Button^  btn8;
	private: System::Windows::Forms::Button^  btn9;
	private: System::Windows::Forms::Button^  btnAdicao;
	private: System::Windows::Forms::Button^  btnApaga;
	private: System::Windows::Forms::Button^  btn4;
	private: System::Windows::Forms::Button^  btn5;
	private: System::Windows::Forms::Button^  btn6;
	private: System::Windows::Forms::Button^  btnSubtracao;
	private: System::Windows::Forms::Button^  btnFatorial;
	private: System::Windows::Forms::Button^  btn1;
	private: System::Windows::Forms::Button^  btn2;
	private: System::Windows::Forms::Button^  btn3;
	private: System::Windows::Forms::Button^  btnMultiplicacao;
	private: System::Windows::Forms::Button^  btnPotencia;
	private: System::Windows::Forms::Button^  btn0;
	private: System::Windows::Forms::Button^  btnVirgula;
	private: System::Windows::Forms::Button^  btnPosNeg;
	private: System::Windows::Forms::Button^  btnDivisao;
	private: System::Windows::Forms::Button^  btnRaizQuadrada;
	private: System::Windows::Forms::Button^  btnResultado;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->lblDisplay = (gcnew System::Windows::Forms::Label());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->btnAdicao = (gcnew System::Windows::Forms::Button());
			this->btnApaga = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->btnSubtracao = (gcnew System::Windows::Forms::Button());
			this->btnFatorial = (gcnew System::Windows::Forms::Button());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btnMultiplicacao = (gcnew System::Windows::Forms::Button());
			this->btnPotencia = (gcnew System::Windows::Forms::Button());
			this->btn0 = (gcnew System::Windows::Forms::Button());
			this->btnVirgula = (gcnew System::Windows::Forms::Button());
			this->btnPosNeg = (gcnew System::Windows::Forms::Button());
			this->btnDivisao = (gcnew System::Windows::Forms::Button());
			this->btnRaizQuadrada = (gcnew System::Windows::Forms::Button());
			this->btnResultado = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lblDisplay
			// 
			this->lblDisplay->BackColor = System::Drawing::Color::White;
			this->lblDisplay->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lblDisplay->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblDisplay->Location = System::Drawing::Point(12, 9);
			this->lblDisplay->Name = L"lblDisplay";
			this->lblDisplay->Size = System::Drawing::Size(371, 72);
			this->lblDisplay->TabIndex = 0;
			this->lblDisplay->Text = L"0";
			this->lblDisplay->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// btn7
			// 
			this->btn7->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->btn7->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->btn7->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btn7->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn7->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btn7->Location = System::Drawing::Point(19, 103);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(65, 59);
			this->btn7->TabIndex = 1;
			this->btn7->Text = L"7";
			this->btn7->UseVisualStyleBackColor = false;
			this->btn7->Click += gcnew System::EventHandler(this, &Form1::btn7_Click);
			// 
			// btn8
			// 
			this->btn8->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->btn8->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->btn8->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btn8->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn8->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btn8->Location = System::Drawing::Point(90, 103);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(65, 59);
			this->btn8->TabIndex = 1;
			this->btn8->Text = L"8";
			this->btn8->UseVisualStyleBackColor = false;
			this->btn8->Click += gcnew System::EventHandler(this, &Form1::btn8_Click);
			// 
			// btn9
			// 
			this->btn9->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->btn9->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->btn9->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btn9->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn9->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btn9->Location = System::Drawing::Point(161, 103);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(65, 59);
			this->btn9->TabIndex = 1;
			this->btn9->Text = L"9";
			this->btn9->UseVisualStyleBackColor = false;
			this->btn9->Click += gcnew System::EventHandler(this, &Form1::btn9_Click);
			// 
			// btnAdicao
			// 
			this->btnAdicao->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->btnAdicao->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->btnAdicao->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btnAdicao->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnAdicao->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnAdicao->Location = System::Drawing::Point(232, 103);
			this->btnAdicao->Name = L"btnAdicao";
			this->btnAdicao->Size = System::Drawing::Size(65, 59);
			this->btnAdicao->TabIndex = 1;
			this->btnAdicao->Text = L"+";
			this->btnAdicao->UseVisualStyleBackColor = false;
			this->btnAdicao->Click += gcnew System::EventHandler(this, &Form1::btnAdicao_Click);
			// 
			// btnApaga
			// 
			this->btnApaga->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->btnApaga->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->btnApaga->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btnApaga->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnApaga->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnApaga->Location = System::Drawing::Point(303, 103);
			this->btnApaga->Name = L"btnApaga";
			this->btnApaga->Size = System::Drawing::Size(65, 59);
			this->btnApaga->TabIndex = 1;
			this->btnApaga->Text = L"CE";
			this->btnApaga->UseVisualStyleBackColor = false;
			this->btnApaga->Click += gcnew System::EventHandler(this, &Form1::btnApaga_Click);
			// 
			// btn4
			// 
			this->btn4->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->btn4->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->btn4->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btn4->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btn4->Location = System::Drawing::Point(19, 168);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(65, 59);
			this->btn4->TabIndex = 1;
			this->btn4->Text = L"4";
			this->btn4->UseVisualStyleBackColor = false;
			this->btn4->Click += gcnew System::EventHandler(this, &Form1::btn4_Click);
			// 
			// btn5
			// 
			this->btn5->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->btn5->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->btn5->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btn5->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn5->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btn5->Location = System::Drawing::Point(90, 168);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(65, 59);
			this->btn5->TabIndex = 1;
			this->btn5->Text = L"5";
			this->btn5->UseVisualStyleBackColor = false;
			this->btn5->Click += gcnew System::EventHandler(this, &Form1::btn5_Click);
			// 
			// btn6
			// 
			this->btn6->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->btn6->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->btn6->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btn6->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn6->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btn6->Location = System::Drawing::Point(161, 168);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(65, 59);
			this->btn6->TabIndex = 1;
			this->btn6->Text = L"6";
			this->btn6->UseVisualStyleBackColor = false;
			this->btn6->Click += gcnew System::EventHandler(this, &Form1::btn6_Click);
			// 
			// btnSubtracao
			// 
			this->btnSubtracao->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->btnSubtracao->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->btnSubtracao->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btnSubtracao->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnSubtracao->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnSubtracao->Location = System::Drawing::Point(232, 168);
			this->btnSubtracao->Name = L"btnSubtracao";
			this->btnSubtracao->Size = System::Drawing::Size(65, 59);
			this->btnSubtracao->TabIndex = 1;
			this->btnSubtracao->Text = L"-";
			this->btnSubtracao->UseVisualStyleBackColor = false;
			this->btnSubtracao->Click += gcnew System::EventHandler(this, &Form1::btnSubtracao_Click);
			// 
			// btnFatorial
			// 
			this->btnFatorial->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->btnFatorial->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->btnFatorial->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btnFatorial->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 20.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnFatorial->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnFatorial->Location = System::Drawing::Point(303, 168);
			this->btnFatorial->Name = L"btnFatorial";
			this->btnFatorial->Size = System::Drawing::Size(65, 59);
			this->btnFatorial->TabIndex = 1;
			this->btnFatorial->Text = L"n!";
			this->btnFatorial->UseVisualStyleBackColor = false;
			this->btnFatorial->Click += gcnew System::EventHandler(this, &Form1::btnFatorial_Click);
			// 
			// btn1
			// 
			this->btn1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->btn1->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->btn1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btn1->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btn1->Location = System::Drawing::Point(19, 233);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(65, 59);
			this->btn1->TabIndex = 1;
			this->btn1->Text = L"1";
			this->btn1->UseVisualStyleBackColor = false;
			this->btn1->Click += gcnew System::EventHandler(this, &Form1::btn1_Click);
			// 
			// btn2
			// 
			this->btn2->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->btn2->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->btn2->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btn2->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btn2->Location = System::Drawing::Point(90, 233);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(65, 59);
			this->btn2->TabIndex = 1;
			this->btn2->Text = L"2";
			this->btn2->UseVisualStyleBackColor = false;
			this->btn2->Click += gcnew System::EventHandler(this, &Form1::btn2_Click);
			// 
			// btn3
			// 
			this->btn3->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->btn3->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->btn3->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btn3->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btn3->Location = System::Drawing::Point(161, 233);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(65, 59);
			this->btn3->TabIndex = 1;
			this->btn3->Text = L"3";
			this->btn3->UseVisualStyleBackColor = false;
			this->btn3->Click += gcnew System::EventHandler(this, &Form1::btn3_Click);
			// 
			// btnMultiplicacao
			// 
			this->btnMultiplicacao->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->btnMultiplicacao->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->btnMultiplicacao->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btnMultiplicacao->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnMultiplicacao->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnMultiplicacao->Location = System::Drawing::Point(232, 233);
			this->btnMultiplicacao->Name = L"btnMultiplicacao";
			this->btnMultiplicacao->Size = System::Drawing::Size(65, 59);
			this->btnMultiplicacao->TabIndex = 1;
			this->btnMultiplicacao->Text = L"×";
			this->btnMultiplicacao->UseVisualStyleBackColor = false;
			this->btnMultiplicacao->Click += gcnew System::EventHandler(this, &Form1::btnMultiplicacao_Click);
			// 
			// btnPotencia
			// 
			this->btnPotencia->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->btnPotencia->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->btnPotencia->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btnPotencia->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnPotencia->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnPotencia->Location = System::Drawing::Point(303, 233);
			this->btnPotencia->Name = L"btnPotencia";
			this->btnPotencia->Size = System::Drawing::Size(65, 59);
			this->btnPotencia->TabIndex = 1;
			this->btnPotencia->Text = L"xʸ";
			this->btnPotencia->UseVisualStyleBackColor = false;
			this->btnPotencia->Click += gcnew System::EventHandler(this, &Form1::btnPotencia_Click);
			// 
			// btn0
			// 
			this->btn0->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->btn0->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->btn0->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btn0->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn0->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btn0->Location = System::Drawing::Point(19, 298);
			this->btn0->Name = L"btn0";
			this->btn0->Size = System::Drawing::Size(65, 59);
			this->btn0->TabIndex = 1;
			this->btn0->Text = L"0";
			this->btn0->UseVisualStyleBackColor = false;
			this->btn0->Click += gcnew System::EventHandler(this, &Form1::btn0_Click);
			// 
			// btnVirgula
			// 
			this->btnVirgula->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->btnVirgula->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->btnVirgula->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btnVirgula->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnVirgula->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnVirgula->Location = System::Drawing::Point(90, 298);
			this->btnVirgula->Name = L"btnVirgula";
			this->btnVirgula->Size = System::Drawing::Size(65, 59);
			this->btnVirgula->TabIndex = 1;
			this->btnVirgula->Text = L",";
			this->btnVirgula->UseVisualStyleBackColor = false;
			this->btnVirgula->Click += gcnew System::EventHandler(this, &Form1::btnVirgula_Click);
			// 
			// btnPosNeg
			// 
			this->btnPosNeg->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->btnPosNeg->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->btnPosNeg->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btnPosNeg->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnPosNeg->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnPosNeg->Location = System::Drawing::Point(161, 298);
			this->btnPosNeg->Name = L"btnPosNeg";
			this->btnPosNeg->Size = System::Drawing::Size(65, 59);
			this->btnPosNeg->TabIndex = 1;
			this->btnPosNeg->Text = L"±";
			this->btnPosNeg->UseVisualStyleBackColor = false;
			this->btnPosNeg->Click += gcnew System::EventHandler(this, &Form1::btnPosNeg_Click);
			// 
			// btnDivisao
			// 
			this->btnDivisao->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->btnDivisao->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->btnDivisao->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btnDivisao->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnDivisao->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnDivisao->Location = System::Drawing::Point(232, 298);
			this->btnDivisao->Name = L"btnDivisao";
			this->btnDivisao->Size = System::Drawing::Size(65, 59);
			this->btnDivisao->TabIndex = 1;
			this->btnDivisao->Text = L"÷";
			this->btnDivisao->UseVisualStyleBackColor = false;
			this->btnDivisao->Click += gcnew System::EventHandler(this, &Form1::btnDivisao_Click);
			// 
			// btnRaizQuadrada
			// 
			this->btnRaizQuadrada->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->btnRaizQuadrada->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->btnRaizQuadrada->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btnRaizQuadrada->Font = (gcnew System::Drawing::Font(L"AmdtSymbols", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnRaizQuadrada->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnRaizQuadrada->Location = System::Drawing::Point(303, 298);
			this->btnRaizQuadrada->Name = L"btnRaizQuadrada";
			this->btnRaizQuadrada->Size = System::Drawing::Size(65, 59);
			this->btnRaizQuadrada->TabIndex = 1;
			this->btnRaizQuadrada->Text = L"√¯";
			this->btnRaizQuadrada->UseVisualStyleBackColor = false;
			this->btnRaizQuadrada->Click += gcnew System::EventHandler(this, &Form1::btnRaizQuadrada_Click);
			// 
			// btnResultado
			// 
			this->btnResultado->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->btnResultado->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->btnResultado->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btnResultado->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnResultado->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnResultado->Location = System::Drawing::Point(90, 363);
			this->btnResultado->Name = L"btnResultado";
			this->btnResultado->Size = System::Drawing::Size(207, 59);
			this->btnResultado->TabIndex = 1;
			this->btnResultado->Text = L"=";
			this->btnResultado->UseVisualStyleBackColor = false;
			this->btnResultado->Click += gcnew System::EventHandler(this, &Form1::btnResultado_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->ClientSize = System::Drawing::Size(398, 437);
			this->Controls->Add(this->btnRaizQuadrada);
			this->Controls->Add(this->btnDivisao);
			this->Controls->Add(this->btnPotencia);
			this->Controls->Add(this->btnMultiplicacao);
			this->Controls->Add(this->btnFatorial);
			this->Controls->Add(this->btnPosNeg);
			this->Controls->Add(this->btnSubtracao);
			this->Controls->Add(this->btn3);
			this->Controls->Add(this->btnResultado);
			this->Controls->Add(this->btnApaga);
			this->Controls->Add(this->btnVirgula);
			this->Controls->Add(this->btn6);
			this->Controls->Add(this->btn2);
			this->Controls->Add(this->btnAdicao);
			this->Controls->Add(this->btn0);
			this->Controls->Add(this->btn5);
			this->Controls->Add(this->btn1);
			this->Controls->Add(this->btn9);
			this->Controls->Add(this->btn4);
			this->Controls->Add(this->btn8);
			this->Controls->Add(this->btn7);
			this->Controls->Add(this->lblDisplay);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form1";
			this->Text = L"Calculadora do bem";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);

		}
		#define MAXDIGITOS 15
		bool flagVirgula;
		bool flagResultado;
		double memoria;
		char operacao;
		void liberaDisplay()
		{
			lblDisplay->Text = "0";
			flagVirgula = false;
			flagResultado = false;
		}
		double fatorial(double numero)
		{
			return (numero > 1)? numero*fatorial(numero-1) : 1;
		}
#pragma endregion
		private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 flagVirgula = false;
			 flagResultado = false;
			 memoria = 0.0;
			 operacao = '\0';
		 }
	private: System::Void btnApaga_Click(System::Object^  sender, System::EventArgs^  e) {
				  liberaDisplay();
		 }
	private: System::Void btn0_Click(System::Object^  sender, System::EventArgs^  e) {
				 if(lblDisplay->Text->Length < MAXDIGITOS) {
					if(lblDisplay->Text != "0")
						lblDisplay->Text = lblDisplay->Text + "0";
					if(flagResultado) {
						lblDisplay->Text = "0";
						flagResultado = false;
					}
				 }
			 }
	private: System::Void btn1_Click(System::Object^  sender, System::EventArgs^  e) {
				 if(lblDisplay->Text->Length < MAXDIGITOS) {
					 if(lblDisplay->Text != "0" && !flagResultado)
						 lblDisplay->Text = lblDisplay->Text + "1";
					 else {
						 lblDisplay->Text = "1";
						 flagResultado = false;
					 }
				 }
			}
private: System::Void btnVirgula_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(lblDisplay->Text->Length < MAXDIGITOS-1) {
				 if(!flagVirgula) {
 					lblDisplay->Text = lblDisplay->Text + ",";
					flagVirgula = true;
				 }
			 }
		 }

private: System::Void btnPosNeg_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(lblDisplay->Text != "0") {
				 // Versão 1
				 //double numero = System::Convert::ToDouble(lblDisplay->Text);
				 //lblDisplay->Text = System::Convert::ToString(numero*(-1));
				 // Versão 2
				 if(lblDisplay->Text->Substring(0,1) == "-")
					 lblDisplay->Text = lblDisplay->Text->Substring(1);
				 else
					 lblDisplay->Text = "-" + lblDisplay->Text;
			 }
		 }

private: System::Void btnPotencia_Click(System::Object^  sender, System::EventArgs^  e) {
			 memoria = System::Convert::ToDouble(lblDisplay->Text);
			 operacao = '^';
			 liberaDisplay();
		 }
private: System::Void btnRaizQuadrada_Click(System::Object^  sender, System::EventArgs^  e) {
			 double numero = System::Convert::ToDouble(lblDisplay->Text);
			 lblDisplay->Text = System::Convert::ToString(sqrt(numero));
			 if(lblDisplay->Text->Length > MAXDIGITOS)
				lblDisplay->Text = lblDisplay->Text->Substring(0,MAXDIGITOS);
			 flagResultado = true;
		 }

private: System::Void btnAdicao_Click(System::Object^  sender, System::EventArgs^  e) {
			 memoria = System::Convert::ToDouble(lblDisplay->Text);
			 operacao = '+';
			 liberaDisplay();
		 }
private: System::Void btnResultado_Click(System::Object^  sender, System::EventArgs^  e) {
			 double numero = System::Convert::ToDouble(lblDisplay->Text);
			 switch(operacao) {
			 case '+': memoria += numero; break;
			 case '-': memoria -= numero; break;
			 case '*': memoria *= numero; break;
			 case '/': memoria /= numero; break;
			 case '^': memoria = Math::Pow(memoria,numero); break;
			 }
			 if(memoria > Math::Pow(10,MAXDIGITOS) - 1)
				lblDisplay->Text = memoria.ToString("e");
			 else
				 lblDisplay->Text = memoria.ToString();
			 if(lblDisplay->Text->Length > MAXDIGITOS)
				lblDisplay->Text = lblDisplay->Text->Substring(0,MAXDIGITOS);
			 flagResultado = true;
		 }
private: System::Void btnFatorial_Click(System::Object^  sender, System::EventArgs^  e) {
			 double numero = System::Convert::ToDouble(lblDisplay->Text);
			 numero = fatorial(numero);
			 if(numero > Math::Pow(10,MAXDIGITOS) - 1)
				lblDisplay->Text = numero.ToString("e");
			 else
				 lblDisplay->Text = numero.ToString();
			 flagResultado = true;
		 }
private: System::Void btnSubtracao_Click(System::Object^  sender, System::EventArgs^  e) {
			 memoria = System::Convert::ToDouble(lblDisplay->Text);
			 operacao = '-';
			 liberaDisplay();
		 }
private: System::Void btnMultiplicacao_Click(System::Object^  sender, System::EventArgs^  e) {
			 memoria = System::Convert::ToDouble(lblDisplay->Text);
			 operacao = '*';
			 liberaDisplay();
		 }
private: System::Void btnDivisao_Click(System::Object^  sender, System::EventArgs^  e) {
			 memoria = System::Convert::ToDouble(lblDisplay->Text);
			 operacao = '/';
			 liberaDisplay();
		 }

private: System::Void btn2_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(lblDisplay->Text->Length < MAXDIGITOS) {
					 if(lblDisplay->Text != "0" && !flagResultado)
						 lblDisplay->Text = lblDisplay->Text + "2";
					 else {
						 lblDisplay->Text = "2";
						 flagResultado = false;
					 }
				 }
		 }
private: System::Void btn3_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(lblDisplay->Text->Length < MAXDIGITOS) {
					 if(lblDisplay->Text != "0" && !flagResultado)
						 lblDisplay->Text = lblDisplay->Text + "3";
					 else {
						 lblDisplay->Text = "3";
						 flagResultado = false;
					 }
				 }
		 }
private: System::Void btn4_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(lblDisplay->Text->Length < MAXDIGITOS) {
					 if(lblDisplay->Text != "0" && !flagResultado)
						 lblDisplay->Text = lblDisplay->Text + "4";
					 else {
						 lblDisplay->Text = "4";
						 flagResultado = false;
					 }
				 }
		 }
private: System::Void btn5_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(lblDisplay->Text->Length < MAXDIGITOS) {
					 if(lblDisplay->Text != "0" && !flagResultado)
						 lblDisplay->Text = lblDisplay->Text + "5";
					 else {
						 lblDisplay->Text = "5";
						 flagResultado = false;
					 }
				 }
		 }
private: System::Void btn6_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(lblDisplay->Text->Length < MAXDIGITOS) {
					 if(lblDisplay->Text != "0" && !flagResultado)
						 lblDisplay->Text = lblDisplay->Text + "6";
					 else {
						 lblDisplay->Text = "6";
						 flagResultado = false;
					 }
				 }
		 }
private: System::Void btn7_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(lblDisplay->Text->Length < MAXDIGITOS) {
					 if(lblDisplay->Text != "0" && !flagResultado)
						 lblDisplay->Text = lblDisplay->Text + "7";
					 else {
						 lblDisplay->Text = "7";
						 flagResultado = false;
					 }
				 }
		 }
private: System::Void btn8_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(lblDisplay->Text->Length < MAXDIGITOS) {
					 if(lblDisplay->Text != "0" && !flagResultado)
						 lblDisplay->Text = lblDisplay->Text + "8";
					 else {
						 lblDisplay->Text = "8";
						 flagResultado = false;
					 }
				 }
		 }
private: System::Void btn9_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(lblDisplay->Text->Length < MAXDIGITOS) {
					 if(lblDisplay->Text != "0" && !flagResultado)
						 lblDisplay->Text = lblDisplay->Text + "9";
					 else {
						 lblDisplay->Text = "9";
						 flagResultado = false;
					 }
				 }
		 }

};
}

