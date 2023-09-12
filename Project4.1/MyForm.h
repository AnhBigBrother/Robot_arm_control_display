#pragma once

namespace Project41 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			array<String^>^ portname;
			portname = serialPort1->GetPortNames();
			comboBox1->DataSource = portname;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^ comboBox1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label2;
	private: System::IO::Ports::SerialPort^ serialPort1;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label22;


	private: System::ComponentModel::IContainer^ components;

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
			this->components = (gcnew System::ComponentModel::Container());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->serialPort1 = (gcnew System::IO::Ports::SerialPort(this->components));
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(110, 53);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 24);
			this->comboBox1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(51, 57);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(43, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"COM :";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(258, 50);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 33);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Conect";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(116, 92);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(23, 18);
			this->label2->TabIndex = 3;
			this->label2->Text = L"---";
			// 
			// timer1
			// 
			this->timer1->Interval = 400;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(23, 161);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(146, 25);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Current Angle";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(24, 204);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(93, 20);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Front angle";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(24, 241);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(103, 20);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Rotate angle";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(24, 280);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(89, 20);
			this->label6->TabIndex = 7;
			this->label6->Text = L"High angle";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(152, 204);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(27, 20);
			this->label7->TabIndex = 8;
			this->label7->Text = L"---";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(152, 241);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(27, 20);
			this->label8->TabIndex = 9;
			this->label8->Text = L"---";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(152, 280);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(27, 20);
			this->label9->TabIndex = 10;
			this->label9->Text = L"---";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(451, 59);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(84, 18);
			this->label10->TabIndex = 11;
			this->label10->Text = L"Position 1";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(786, 59);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(84, 18);
			this->label11->TabIndex = 12;
			this->label11->Text = L"Position 2";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(402, 92);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(37, 16);
			this->label12->TabIndex = 13;
			this->label12->Text = L"Front";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(402, 124);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(47, 16);
			this->label13->TabIndex = 14;
			this->label13->Text = L"Rotate";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(404, 161);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(35, 16);
			this->label14->TabIndex = 15;
			this->label14->Text = L"High";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(748, 94);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(37, 16);
			this->label15->TabIndex = 16;
			this->label15->Text = L"Front";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(748, 127);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(47, 16);
			this->label16->TabIndex = 17;
			this->label16->Text = L"Rotate";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(748, 158);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(35, 16);
			this->label17->TabIndex = 18;
			this->label17->Text = L"High";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(476, 89);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 19;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(476, 121);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 20;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(476, 158);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 21;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(828, 91);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 22);
			this->textBox4->TabIndex = 22;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(828, 121);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 22);
			this->textBox5->TabIndex = 23;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(828, 158);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 22);
			this->textBox6->TabIndex = 24;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(443, 241);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(115, 30);
			this->button2->TabIndex = 25;
			this->button2->Text = L"Set Position 1";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(789, 237);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(115, 30);
			this->button3->TabIndex = 26;
			this->button3->Text = L"Set Position 2";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(443, 291);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(115, 44);
			this->button4->TabIndex = 27;
			this->button4->Text = L"Set position 1 by Joystick";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(789, 291);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(115, 44);
			this->button5->TabIndex = 28;
			this->button5->Text = L"Set position 2 by Joystick";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(448, 378);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(87, 66);
			this->button6->TabIndex = 29;
			this->button6->Text = L"Auto";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(764, 378);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(164, 66);
			this->button7->TabIndex = 30;
			this->button7->Text = L"Control by Joystick";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(114, 397);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(36, 25);
			this->label18->TabIndex = 31;
			this->label18->Text = L"---";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(24, 318);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(101, 20);
			this->label19->TabIndex = 32;
			this->label19->Text = L"Staple angle";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(402, 195);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(46, 16);
			this->label20->TabIndex = 33;
			this->label20->Text = L"Staple";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(748, 195);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(46, 16);
			this->label21->TabIndex = 34;
			this->label21->Text = L"Staple";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(476, 195);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 22);
			this->textBox7->TabIndex = 35;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(828, 194);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 22);
			this->textBox8->TabIndex = 36;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(152, 318);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(27, 20);
			this->label22->TabIndex = 37;
			this->label22->Text = L"---";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1030, 522);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox1);
			this->Name = L"MyForm";
			this->Text = L"DISPLAY";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		System::String^ s = "";
		System::String^ s1 = "";
		System::String^ s2 = "";
		System::String^ s3 = "";
		System::String^ s4 = "";
		System::String^ out = "";
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (serialPort1->IsOpen) { return; }
		serialPort1->BaudRate = 9600;
		serialPort1->PortName = comboBox1->Text;
		serialPort1->Open();
		label2->Text = "Conected";
		label18->Text = "Control Mode";
		timer1->Start();
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		serialPort1->Write("aut");
		label18->Text = "Auto Mode";
	}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	serialPort1->Write("con");
	label18->Text = "Control Mode";
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	serialPort1->Write("fir");
	textBox1->Text = s1;
	textBox2->Text = s2;
	textBox3->Text = s3;
	textBox7->Text = s4;
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	serialPort1->Write("sec");
	textBox4->Text = s1;
	textBox5->Text = s2;
	textBox6->Text = s3;
	textBox8->Text = s4;
}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	s = serialPort1->ReadLine();
	s1 = ""; s2 = ""; s3 = ""; s4 = "";
	serialPort1->DiscardInBuffer();
	for (int i = 1; i < 4; i++) {
		if (s[i] == '0') {
			if (s1 != "") { s1 = s1 + s[i]; }
		}
		else { s1 = s1 + s[i]; }
	}
	for (int i = 5; i < 8; i++) {
		if (s[i] == '0') {
			if (s2 != "") { s2 = s2 + s[i]; }
		}
		else { s2 = s2 + s[i]; }
	}
	for (int i = 9; i < 12; i++) {
		if (s[i] == '0') {
			if (s3 != "") { s3 = s3 + s[i]; }
		}
		else { s3 = s3 + s[i]; }
	}
	for (int i = 13; i < 16; i++) {
		if (s[i] == '0') {
			if (s4 != "") { s4 = s4 + s[i]; }
		}
		else { s4 = s4 + s[i]; }
	}
	if (s1 == "") { s1 = "0"; }
	if (s2 == "") { s2 = "0"; }
	if (s3 == "") { s3 = "0"; }
	if (s4 == "") { s4 = "0"; }
	label7->Text = s1;
	label8->Text = s2;
	label9->Text = s3;
	label22->Text = s4;
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	out = "";
	out = "*" + textBox1->Text + "*" + textBox2->Text + "*" + textBox3->Text + "*" + textBox7->Text;
	serialPort1->Write(out);
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	out = "";
	out = "#" + textBox4->Text + "#" + textBox5->Text + "#" + textBox6->Text + "#" + textBox8->Text;
	serialPort1->Write(out);
}
};
}
