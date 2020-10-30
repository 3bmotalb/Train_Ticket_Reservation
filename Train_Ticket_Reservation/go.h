#pragma once

namespace Train_Ticket_Reservation {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for go
	/// </summary>
	public ref class go : public System::Windows::Forms::Form
	{
	public:
		go(void)
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
		~go()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 









































	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::ComboBox^  comboBox11;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::ComboBox^  comboBox4;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::ComboBox^  comboBox6;
	private: System::Windows::Forms::GroupBox^  groupBox5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::ComboBox^  comboBox3;
	private: System::Windows::Forms::ComboBox^  comboBox5;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::GroupBox^  groupBox2;












	private: System::ComponentModel::IContainer^  components;


	protected: 





































	protected: 





































	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(go::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->comboBox11 = (gcnew System::Windows::Forms::ComboBox());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->comboBox6 = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox1->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::ControlDark;
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(11, 4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1369, 88);
			this->groupBox1->TabIndex = 5;
			this->groupBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(226, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(852, 69);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Train Ticket Reservation :: Go";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(8, 226);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(76, 21);
			this->label19->TabIndex = 21;
			this->label19->Text = L"From  ::";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(8, 269);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(53, 21);
			this->label20->TabIndex = 22;
			this->label20->Text = L"To  ::";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Tahoma", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(171, 21);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(335, 46);
			this->label18->TabIndex = 20;
			this->label18->Text = L"Travelling Ticket";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(8, 313);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(99, 21);
			this->label21->TabIndex = 23;
			this->label21->Text = L"No.Seat  ::";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(252, 301);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(270, 38);
			this->textBox3->TabIndex = 6;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(252, 257);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(270, 38);
			this->textBox2->TabIndex = 5;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(252, 214);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(270, 38);
			this->textBox1->TabIndex = 4;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(8, 357);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(74, 21);
			this->label22->TabIndex = 4;
			this->label22->Text = L"Price  ::";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(252, 345);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(270, 38);
			this->textBox4->TabIndex = 24;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(8, 139);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(156, 20);
			this->label5->TabIndex = 25;
			this->label5->Text = L"Type Of Ticket  ::";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(252, 126);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(270, 38);
			this->textBox5->TabIndex = 29;
			this->textBox5->Text = L"Go";
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &go::textBox5_TextChanged);
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
			this->button1->Click += gcnew System::EventHandler(this, &go::button1_Click);
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
			this->button2->Click += gcnew System::EventHandler(this, &go::button2_Click);
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
			this->button3->Click += gcnew System::EventHandler(this, &go::button3_Click);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(252, 170);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(270, 38);
			this->textBox6->TabIndex = 38;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(8, 183);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(75, 20);
			this->label8->TabIndex = 39;
			this->label8->Text = L"Class ::";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->dateTimePicker1->Location = System::Drawing::Point(153, 484);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(290, 32);
			this->dateTimePicker1->TabIndex = 40;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(8, 417);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(50, 20);
			this->label7->TabIndex = 42;
			this->label7->Text = L"Time";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(153, 422);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(155, 38);
			this->textBox7->TabIndex = 43;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(12, 484);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(49, 20);
			this->label12->TabIndex = 44;
			this->label12->Text = L"Date";
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::SystemColors::ControlDark;
			this->groupBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"groupBox3.BackgroundImage")));
			this->groupBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->groupBox3->Controls->Add(this->label12);
			this->groupBox3->Controls->Add(this->textBox7);
			this->groupBox3->Controls->Add(this->label7);
			this->groupBox3->Controls->Add(this->dateTimePicker1);
			this->groupBox3->Controls->Add(this->label8);
			this->groupBox3->Controls->Add(this->textBox6);
			this->groupBox3->Controls->Add(this->button3);
			this->groupBox3->Controls->Add(this->button2);
			this->groupBox3->Controls->Add(this->button1);
			this->groupBox3->Controls->Add(this->textBox5);
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
			this->groupBox3->Location = System::Drawing::Point(646, 98);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(734, 633);
			this->groupBox3->TabIndex = 4;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Go";
			this->groupBox3->Enter += gcnew System::EventHandler(this, &go::groupBox3_Enter);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(30, 532);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(77, 21);
			this->label16->TabIndex = 17;
			this->label16->Text = L"No.Seat";
			// 
			// comboBox11
			// 
			this->comboBox11->FormattingEnabled = true;
			this->comboBox11->Items->AddRange(gcnew cli::array< System::Object^  >(15) {L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8", 
				L"9", L"10", L"11", L"12", L"13", L"14", L"15"});
			this->comboBox11->Location = System::Drawing::Point(159, 529);
			this->comboBox11->Name = L"comboBox11";
			this->comboBox11->Size = System::Drawing::Size(121, 24);
			this->comboBox11->TabIndex = 18;
			this->comboBox11->TextChanged += gcnew System::EventHandler(this, &go::comboBox11_TextChanged);
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
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &go::radioButton1_CheckedChanged);
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
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &go::radioButton2_CheckedChanged);
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
			// comboBox4
			// 
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"Adult", L"Child"});
			this->comboBox4->Location = System::Drawing::Point(114, 110);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(213, 24);
			this->comboBox4->TabIndex = 25;
			this->comboBox4->SelectedIndexChanged += gcnew System::EventHandler(this, &go::comboBox4_SelectedIndexChanged);
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->label11);
			this->groupBox4->Controls->Add(this->label9);
			this->groupBox4->Controls->Add(this->comboBox1);
			this->groupBox4->Controls->Add(this->comboBox2);
			this->groupBox4->Location = System::Drawing::Point(17, 313);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(349, 103);
			this->groupBox4->TabIndex = 26;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"distenation";
			this->groupBox4->Visible = false;
			this->groupBox4->Enter += gcnew System::EventHandler(this, &go::groupBox4_Enter);
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
			this->label11->Text = L"From";
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
			this->comboBox1->TextChanged += gcnew System::EventHandler(this, &go::comboBox1_TextChanged);
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"CAIRO", L"BENHA", L"ALEX"});
			this->comboBox2->Location = System::Drawing::Point(142, 24);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 24);
			this->comboBox2->TabIndex = 9;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &go::comboBox2_SelectedIndexChanged);
			this->comboBox2->TextChanged += gcnew System::EventHandler(this, &go::comboBox2_TextChanged);
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
			// comboBox6
			// 
			this->comboBox6->FormattingEnabled = true;
			this->comboBox6->Items->AddRange(gcnew cli::array< System::Object^  >(7) {L"6:30 A.M", L"8 A.M", L"9:30 A.M", L"11 A.M", 
				L"3 P.M", L"6 P.M", L"10 P.M"});
			this->comboBox6->Location = System::Drawing::Point(159, 568);
			this->comboBox6->Name = L"comboBox6";
			this->comboBox6->Size = System::Drawing::Size(121, 24);
			this->comboBox6->TabIndex = 41;
			this->comboBox6->SelectedIndexChanged += gcnew System::EventHandler(this, &go::comboBox6_SelectedIndexChanged);
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->label4);
			this->groupBox5->Controls->Add(this->label6);
			this->groupBox5->Controls->Add(this->comboBox3);
			this->groupBox5->Controls->Add(this->comboBox5);
			this->groupBox5->Location = System::Drawing::Point(17, 422);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(349, 103);
			this->groupBox5->TabIndex = 27;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"distenation";
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
			this->label4->Text = L"From";
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
			this->comboBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &go::comboBox3_SelectedIndexChanged);
			// 
			// comboBox5
			// 
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"CAIRO", L"BENHA", L"ALEX"});
			this->comboBox5->Location = System::Drawing::Point(142, 23);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(121, 24);
			this->comboBox5->TabIndex = 9;
			this->comboBox5->SelectedIndexChanged += gcnew System::EventHandler(this, &go::comboBox5_SelectedIndexChanged);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(31, 568);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(51, 21);
			this->label10->TabIndex = 42;
			this->label10->Text = L"Time";
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::SystemColors::ControlDark;
			this->groupBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"groupBox2.BackgroundImage")));
			this->groupBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->groupBox2->Controls->Add(this->label10);
			this->groupBox2->Controls->Add(this->groupBox5);
			this->groupBox2->Controls->Add(this->comboBox6);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->groupBox4);
			this->groupBox2->Controls->Add(this->comboBox4);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->radioButton2);
			this->groupBox2->Controls->Add(this->radioButton1);
			this->groupBox2->Controls->Add(this->comboBox11);
			this->groupBox2->Controls->Add(this->label16);
			this->groupBox2->Location = System::Drawing::Point(12, 98);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(628, 633);
			this->groupBox2->TabIndex = 3;
			this->groupBox2->TabStop = false;
			// 
			// go
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1381, 732);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Name = L"go";
			this->Text = L"go";
			this->Load += gcnew System::EventHandler(this, &go::go_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
				 if(radioButton1->Checked==true) {
					groupBox4->Visible = true;
					groupBox5->Visible = false;
				}
				else if(radioButton2->Checked==true) {
					groupBox5->Visible = true;
					groupBox4->Visible = false;
				}

				 if ( radioButton1->Checked == true )
			       textBox6->Text = "First Class";
			 else if ( radioButton2->Checked == true )
				    textBox6->Text = "Economy";
				 //class
			 }
private: System::Void comboBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 /*int index=comboBox2->SelectedIndex;
			 comboBox1->SelectedIndex=index;*/
		 }
private: System::Void comboBox5_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			  textBox1->Text = comboBox5->Text;
			  //from_economy
		 }
private: System::Void comboBox3_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 textBox2->Text = comboBox3->Text;
			  //to_economy
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			  textBox1->Text = "";
			 textBox2->Text = "";
			 textBox3->Text = "";
			 textBox4->Text = "";
			 textBox6->Text = "";
			 comboBox2->Text = "";
			 comboBox6->Text = "";
			textBox7->Text = "";
			 comboBox1->Text = "";
			 comboBox11->Text = "";
			 comboBox4->Text = "";
			  comboBox3->Text = "";
			   comboBox5->Text = "";
			   
			   // textBox5->Text = "";

                 
			   //reset
			 
			
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			  String^com2=Convert::ToString(comboBox2->SelectedItem);
			 String^com1=Convert::ToString(comboBox1->SelectedItem);
			 

			  if(com2=="CAIRO" && com1=="ALEX" && comboBox4->Text =="Adult")
				 textBox4->Text="50 LE";
			 else if(com2=="CAIRO" && com1=="ALEX" && comboBox4->Text =="Child")
				 textBox4->Text="30 LE";
			 else  if(com2=="CAIRO" && com1=="BENHA" && comboBox4->Text =="Adult")
				 textBox4->Text="25 LE";
			 else  if(com2=="CAIRO" && com1=="BENHA" && comboBox4->Text =="Child")
				 textBox4->Text="12.5 LE";
			 
			 else  if(com2=="BENHA" && com1=="CAIRO" && comboBox4->Text =="Adult")
				 textBox4->Text="20 LE";
			 else  if(com2=="BENHA" && com1=="CAIRO" && comboBox4->Text =="Child")
				 textBox4->Text="10 LE";
			 
			 else if(com2=="BENHA" && com1=="ALEX" && comboBox4->Text =="Adult")
				 textBox4->Text="35 LE";
			 else if(com2=="BENHA" && com1=="ALEX" && comboBox4->Text =="Child")
				 textBox4->Text="22 LE";

			 else  if(com2=="ALEX" && com1=="BENHA" && comboBox4->Text =="Adult")
				 textBox4->Text="30 LE";
			 else  if(com2=="ALEX" && com1=="BENHA" && comboBox4->Text =="Child")
				 textBox4->Text="14 LE";

			 else  if(com2=="ALEX" && com1=="CAIRO" && comboBox4->Text =="Adult")
				 textBox4->Text="16 LE";
			 else  if(com2=="ALEX" && com1=="CAIRO" && comboBox4->Text =="Child")
				 textBox4->Text="7.5 LE";


			 else if(comboBox4->Text=="")
			 {
				 MessageBox::Show("Error : choose the type of the passenger !!");
			 }

			
			




			 String^com5=Convert::ToString(comboBox5->SelectedItem);
			 String^com3=Convert::ToString(comboBox3->SelectedItem);
			 if(com5=="CAIRO" && com3=="ALEX" && comboBox4->Text =="Adult")
				 textBox4->Text="20 LE";
			 else if(com5=="CAIRO" && com3=="ALEX" && comboBox4->Text =="Child")
				 textBox4->Text="10 LE";

			 else  if(com5=="CAIRO" && com3=="BENHA" && comboBox4->Text =="Adult")
				 textBox4->Text="15 LE";
			 else  if(com5=="CAIRO" && com3=="BENHA" && comboBox4->Text =="Child")
				 textBox4->Text="8 LE";
			 
			 else  if(com5=="BENHA" && com3=="CAIRO" && comboBox4->Text =="Adult")
				 textBox4->Text="10 LE";
			 else  if(com5=="BENHA" && com3=="CAIRO" && comboBox4->Text =="Child")
				 textBox4->Text="5 LE";

			 else if(com5=="BENHA" && com3=="ALEX" && comboBox4->Text =="Adult")
				 textBox4->Text="15 LE";
			 else if(com5=="BENHA" && com3=="ALEX" && comboBox4->Text =="Child")
				 textBox4->Text="6.5 LE";

			 else  if(com5=="ALEX" && com3=="BENHA" && comboBox4->Text =="Adult")
				 textBox4->Text="12 LE";
			 else  if(com5=="ALEX" && com3=="BENHA" && comboBox4->Text =="Child")
				 textBox4->Text="4.5 LE";

			 else  if(com5=="ALEX" && com3=="CAIRO" && comboBox4->Text =="Adult")
				 textBox4->Text="7 LE";
			 else  if(com5=="ALEX" && com3=="CAIRO" && comboBox4->Text =="Child")
				 textBox4->Text="4 LE";


			 
			 else if(comboBox5->Text == comboBox3->Text && groupBox5->Visible == true)
			 {
				 MessageBox::Show("Error : choose your distnation !!");
			 }

			  if(comboBox2->Text == comboBox1->Text && groupBox4->Visible == true)
			 {
				 MessageBox::Show("Error : choose your distnation !!");
			 }


			  


			

		 }
private: System::Void comboBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 textBox1->Text = comboBox2->Text;
			  //from_frist
		 }
private: System::Void comboBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			  textBox2->Text = comboBox1->Text;
			  //to_frist
		 }
private: System::Void comboBox11_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			  textBox3->Text = comboBox11->Text;
			  //no_seat
		 }
private: System::Void textBox5_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			// textBox5->Text = "Go";
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			  Application::Exit();
		 //Exit
		 }
private: System::Void textBox7_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void go_Load(System::Object^  sender, System::EventArgs^  e) {
			 
		 }
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
			
		 }
private: System::Void comboBox4_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

			 if(radioButton1->Checked==true) {
					groupBox4->Visible = true;
					groupBox5->Visible = false;
				}
				else if(radioButton2->Checked==true) {
					groupBox5->Visible = true;
					groupBox4->Visible = false;
				}

				if ( radioButton1->Checked == true )
			       textBox6->Text = "First Class";
			 else if ( radioButton2->Checked == true )
				    textBox6->Text = "Economy";
		
		 //class
		 }
private: System::Void textBox7_TextChanged_1(System::Object^  sender, System::EventArgs^  e) {
			
		 }
private: System::Void groupBox4_Enter(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void comboBox6_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 textBox7->Text = comboBox6->Text;
			 //time
		 }
private: System::Void groupBox3_Enter(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
