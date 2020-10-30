#pragma once

namespace Train_Ticket_Reservation {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for goandreturen
	/// </summary>
	public ref class goandreturen : public System::Windows::Forms::Form
	{
	public:
		goandreturen(void)
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
		~goandreturen()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox3;
	protected: 
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::GroupBox^  groupBox5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::ComboBox^  comboBox3;
	private: System::Windows::Forms::ComboBox^  comboBox5;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::ComboBox^  comboBox4;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::ComboBox^  comboBox11;
	private: System::Windows::Forms::Label^  label16;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(goandreturen::typeid));
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->comboBox11 = (gcnew System::Windows::Forms::ComboBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->groupBox3->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::SystemColors::ControlDark;
			this->groupBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"groupBox3.BackgroundImage")));
			this->groupBox3->Controls->Add(this->button3);
			this->groupBox3->Controls->Add(this->button2);
			this->groupBox3->Controls->Add(this->button1);
			this->groupBox3->Controls->Add(this->textBox7);
			this->groupBox3->Controls->Add(this->textBox6);
			this->groupBox3->Controls->Add(this->textBox5);
			this->groupBox3->Controls->Add(this->label10);
			this->groupBox3->Controls->Add(this->label8);
			this->groupBox3->Controls->Add(this->label5);
			this->groupBox3->Controls->Add(this->textBox4);
			this->groupBox3->Controls->Add(this->label22);
			this->groupBox3->Controls->Add(this->textBox1);
			this->groupBox3->Controls->Add(this->textBox2);
			this->groupBox3->Controls->Add(this->textBox3);
			this->groupBox3->Controls->Add(this->label21);
			this->groupBox3->Controls->Add(this->label18);
			this->groupBox3->Controls->Add(this->label20);
			this->groupBox3->Controls->Add(this->label19);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->groupBox3->Location = System::Drawing::Point(629, 46);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(734, 641);
			this->groupBox3->TabIndex = 4;
			this->groupBox3->TabStop = false;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(582, 532);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(114, 45);
			this->button3->TabIndex = 34;
			this->button3->Text = L"Exit";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &goandreturen::button3_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(303, 532);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(140, 45);
			this->button2->TabIndex = 33;
			this->button2->Text = L"Print";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(38, 532);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(124, 45);
			this->button1->TabIndex = 32;
			this->button1->Text = L"Reset";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(38, 441);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(211, 38);
			this->textBox7->TabIndex = 31;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(434, 441);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(208, 38);
			this->textBox6->TabIndex = 30;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(252, 104);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(270, 38);
			this->textBox5->TabIndex = 29;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(89, 393);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(73, 29);
			this->label10->TabIndex = 28;
			this->label10->Text = L"Time";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(498, 393);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(67, 29);
			this->label8->TabIndex = 27;
			this->label8->Text = L"Date";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(6, 114);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(156, 20);
			this->label5->TabIndex = 25;
			this->label5->Text = L"Type Of Ticket  ::";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(252, 277);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(270, 38);
			this->textBox4->TabIndex = 24;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(8, 280);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(74, 21);
			this->label22->TabIndex = 4;
			this->label22->Text = L"Price  ::";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(252, 148);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(270, 38);
			this->textBox1->TabIndex = 4;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(252, 190);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(270, 38);
			this->textBox2->TabIndex = 5;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(252, 232);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(270, 38);
			this->textBox3->TabIndex = 6;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(6, 231);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(99, 21);
			this->label21->TabIndex = 23;
			this->label21->Text = L"No.Seat  ::";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Tahoma", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(171, 21);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(323, 46);
			this->label18->TabIndex = 20;
			this->label18->Text = L"Travilling Ticket";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(6, 194);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(53, 21);
			this->label20->TabIndex = 22;
			this->label20->Text = L"To  ::";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(6, 160);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(76, 21);
			this->label19->TabIndex = 21;
			this->label19->Text = L"From  ::";
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::SystemColors::ControlDark;
			this->groupBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"groupBox2.BackgroundImage")));
			this->groupBox2->Controls->Add(this->groupBox5);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->groupBox4);
			this->groupBox2->Controls->Add(this->comboBox4);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->radioButton2);
			this->groupBox2->Controls->Add(this->radioButton1);
			this->groupBox2->Controls->Add(this->comboBox11);
			this->groupBox2->Controls->Add(this->label16);
			this->groupBox2->Location = System::Drawing::Point(18, 46);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(611, 619);
			this->groupBox2->TabIndex = 3;
			this->groupBox2->TabStop = false;
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->label4);
			this->groupBox5->Controls->Add(this->label6);
			this->groupBox5->Controls->Add(this->comboBox3);
			this->groupBox5->Controls->Add(this->comboBox5);
			this->groupBox5->Location = System::Drawing::Point(256, 510);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(349, 103);
			this->groupBox5->TabIndex = 27;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"groupBox5";
			this->groupBox5->Visible = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(13, 24);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(62, 24);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Form";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(13, 70);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(34, 24);
			this->label6->TabIndex = 6;
			this->label6->Text = L"To";
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"ALEX", L"CAIRO", L"BENHA"});
			this->comboBox3->Location = System::Drawing::Point(142, 74);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(121, 24);
			this->comboBox3->TabIndex = 8;
			// 
			// comboBox5
			// 
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"CAIRO", L"BENHA", L"ALEX"});
			this->comboBox5->Location = System::Drawing::Point(142, 23);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(121, 24);
			this->comboBox5->TabIndex = 9;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Tahoma", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(47, 63);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(177, 34);
			this->label3->TabIndex = 27;
			this->label3->Text = L"Paassenger";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->label11);
			this->groupBox4->Controls->Add(this->label9);
			this->groupBox4->Controls->Add(this->comboBox1);
			this->groupBox4->Controls->Add(this->comboBox2);
			this->groupBox4->Location = System::Drawing::Point(17, 366);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(349, 103);
			this->groupBox4->TabIndex = 26;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"groupBox4";
			this->groupBox4->Visible = false;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(13, 24);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(62, 24);
			this->label11->TabIndex = 8;
			this->label11->Text = L"Form";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(13, 70);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(34, 24);
			this->label9->TabIndex = 6;
			this->label9->Text = L"To";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"ALEX", L"CAIRO", L"BENHA"});
			this->comboBox1->Location = System::Drawing::Point(142, 74);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 24);
			this->comboBox1->TabIndex = 8;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"CAIRO", L"BENHA", L"ALEX"});
			this->comboBox2->Location = System::Drawing::Point(142, 24);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 24);
			this->comboBox2->TabIndex = 9;
			// 
			// comboBox4
			// 
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"Adult", L"Child"});
			this->comboBox4->Location = System::Drawing::Point(114, 110);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(213, 24);
			this->comboBox4->TabIndex = 25;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Tahoma", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(44, 160);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(87, 34);
			this->label2->TabIndex = 24;
			this->label2->Text = L"Class";
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->radioButton2->Location = System::Drawing::Point(116, 276);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(119, 25);
			this->radioButton2->TabIndex = 23;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Economey";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->radioButton1->Location = System::Drawing::Point(117, 214);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(118, 25);
			this->radioButton1->TabIndex = 22;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"First Class";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// comboBox11
			// 
			this->comboBox11->FormattingEnabled = true;
			this->comboBox11->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"1", L"2", L"3"});
			this->comboBox11->Location = System::Drawing::Point(159, 477);
			this->comboBox11->Name = L"comboBox11";
			this->comboBox11->Size = System::Drawing::Size(121, 24);
			this->comboBox11->TabIndex = 18;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(21, 469);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(77, 21);
			this->label16->TabIndex = 17;
			this->label16->Text = L"No.Seat";
			// 
			// goandreturen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1381, 732);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Name = L"goandreturen";
			this->Text = L"Go And Return";
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
				 Application::Exit();
			 }
};
}
