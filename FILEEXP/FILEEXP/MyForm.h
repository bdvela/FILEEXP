#pragma once
#include "FILEEXPLORER.h"
#include <msclr\marshal_cppstd.h>
namespace FILEEXP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;
	using namespace System::IO;
	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			FX = new FILEEXPLORER();
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private:
		FILEEXPLORER* FX;
	private: System::Windows::Forms::TextBox^  txtRUTA;

	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  txtBUSCAR;

	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::RadioButton^  rbNOMBRE;
	private: System::Windows::Forms::RadioButton^  rbEXTENSION;
	private: System::Windows::Forms::RadioButton^  rbTAMAÑO;



	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::RadioButton^  rbFECHA;

	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;






	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::CheckBox^  checkBox3;
	private: System::Windows::Forms::CheckBox^  checkBox4;
	private: System::Windows::Forms::CheckBox^  checkBox5;
	private: System::Windows::Forms::CheckBox^  checkBox6;





	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->txtRUTA = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtBUSCAR = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->rbNOMBRE = (gcnew System::Windows::Forms::RadioButton());
			this->rbEXTENSION = (gcnew System::Windows::Forms::RadioButton());
			this->rbTAMAÑO = (gcnew System::Windows::Forms::RadioButton());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->rbFECHA = (gcnew System::Windows::Forms::RadioButton());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// txtRUTA
			// 
			this->txtRUTA->Location = System::Drawing::Point(65, 79);
			this->txtRUTA->Name = L"txtRUTA";
			this->txtRUTA->Size = System::Drawing::Size(503, 20);
			this->txtRUTA->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(23, 82);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(36, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Ruta :";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(595, 78);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(143, 20);
			this->button1->TabIndex = 2;
			this->button1->Text = L"ABRIR";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(87, 17);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(598, 46);
			this->label2->TabIndex = 3;
			this->label2->Text = L"EXPLORADOR DE ARCHIVOS";
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(26, 126);
			this->listBox1->Name = L"listBox1";
			this->listBox1->ScrollAlwaysVisible = true;
			this->listBox1->Size = System::Drawing::Size(464, 381);
			this->listBox1->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(570, 135);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(105, 25);
			this->label3->TabIndex = 5;
			this->label3->Text = L"BUSCAR";
			// 
			// txtBUSCAR
			// 
			this->txtBUSCAR->Location = System::Drawing::Point(514, 219);
			this->txtBUSCAR->Name = L"txtBUSCAR";
			this->txtBUSCAR->Size = System::Drawing::Size(145, 20);
			this->txtBUSCAR->TabIndex = 6;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(664, 219);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(68, 19);
			this->button2->TabIndex = 7;
			this->button2->Text = L"BUSCAR";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// rbNOMBRE
			// 
			this->rbNOMBRE->AutoSize = true;
			this->rbNOMBRE->Location = System::Drawing::Point(530, 168);
			this->rbNOMBRE->Name = L"rbNOMBRE";
			this->rbNOMBRE->Size = System::Drawing::Size(62, 17);
			this->rbNOMBRE->TabIndex = 8;
			this->rbNOMBRE->TabStop = true;
			this->rbNOMBRE->Text = L"Nombre";
			this->rbNOMBRE->UseVisualStyleBackColor = true;
			// 
			// rbEXTENSION
			// 
			this->rbEXTENSION->AutoSize = true;
			this->rbEXTENSION->Location = System::Drawing::Point(530, 194);
			this->rbEXTENSION->Name = L"rbEXTENSION";
			this->rbEXTENSION->Size = System::Drawing::Size(71, 17);
			this->rbEXTENSION->TabIndex = 9;
			this->rbEXTENSION->TabStop = true;
			this->rbEXTENSION->Text = L"Extensión";
			this->rbEXTENSION->UseVisualStyleBackColor = true;
			// 
			// rbTAMAÑO
			// 
			this->rbTAMAÑO->AutoSize = true;
			this->rbTAMAÑO->Location = System::Drawing::Point(633, 168);
			this->rbTAMAÑO->Name = L"rbTAMAÑO";
			this->rbTAMAÑO->Size = System::Drawing::Size(64, 17);
			this->rbTAMAÑO->TabIndex = 10;
			this->rbTAMAÑO->TabStop = true;
			this->rbTAMAÑO->Text = L"Tamaño";
			this->rbTAMAÑO->UseVisualStyleBackColor = true;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox1->Location = System::Drawing::Point(505, 127);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(236, 120);
			this->pictureBox1->TabIndex = 11;
			this->pictureBox1->TabStop = false;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(664, 352);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(68, 19);
			this->button3->TabIndex = 14;
			this->button3->Text = L"FILTRAR";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(514, 352);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(145, 20);
			this->textBox2->TabIndex = 13;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(514, 259);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(216, 20);
			this->label4->TabIndex = 12;
			this->label4->Text = L"FILTRAR POR NOMBRE";
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->pictureBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox2->Location = System::Drawing::Point(505, 256);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(236, 120);
			this->pictureBox2->TabIndex = 15;
			this->pictureBox2->TabStop = false;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(664, 483);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(68, 19);
			this->button4->TabIndex = 18;
			this->button4->Text = L"FILTRAR";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(514, 483);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(145, 20);
			this->textBox3->TabIndex = 17;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->pictureBox3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox3->Location = System::Drawing::Point(505, 387);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(236, 120);
			this->pictureBox3->TabIndex = 19;
			this->pictureBox3->TabStop = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(514, 389);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(213, 20);
			this->label5->TabIndex = 20;
			this->label5->Text = L"FILTRAR POR TAMAÑO";
			// 
			// rbFECHA
			// 
			this->rbFECHA->AutoSize = true;
			this->rbFECHA->Location = System::Drawing::Point(633, 193);
			this->rbFECHA->Name = L"rbFECHA";
			this->rbFECHA->Size = System::Drawing::Size(55, 17);
			this->rbFECHA->TabIndex = 21;
			this->rbFECHA->TabStop = true;
			this->rbFECHA->Text = L"Fecha";
			this->rbFECHA->UseVisualStyleBackColor = true;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(592, 289);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(71, 13);
			this->label6->TabIndex = 22;
			this->label6->Text = L"Empieza con:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(593, 308);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(66, 13);
			this->label7->TabIndex = 23;
			this->label7->Text = L"Finaliza con:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(596, 328);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(52, 13);
			this->label8->TabIndex = 24;
			this->label8->Text = L"Contiene:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(598, 461);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(42, 13);
			this->label9->TabIndex = 30;
			this->label9->Text = L"Igual a:";
			this->label9->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(599, 439);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(40, 13);
			this->label10->TabIndex = 29;
			this->label10->Text = L"Menor:";
			this->label10->Click += gcnew System::EventHandler(this, &MyForm::label10_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(598, 416);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(39, 13);
			this->label11->TabIndex = 28;
			this->label11->Text = L"Mayor:";
			this->label11->Click += gcnew System::EventHandler(this, &MyForm::label11_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(193, 518);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(106, 20);
			this->label12->TabIndex = 34;
			this->label12->Text = L"ORDENAR:";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(318, 518);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(114, 19);
			this->button5->TabIndex = 35;
			this->button5->Text = L"ASCENDENTE";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(468, 517);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(124, 19);
			this->button6->TabIndex = 36;
			this->button6->Text = L"DESCENDENTE";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(575, 288);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(15, 14);
			this->checkBox1->TabIndex = 37;
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(575, 308);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(15, 14);
			this->checkBox2->TabIndex = 38;
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(575, 328);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(15, 14);
			this->checkBox3->TabIndex = 39;
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Location = System::Drawing::Point(577, 418);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(15, 14);
			this->checkBox4->TabIndex = 40;
			this->checkBox4->UseVisualStyleBackColor = true;
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->Location = System::Drawing::Point(577, 437);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(15, 14);
			this->checkBox5->TabIndex = 41;
			this->checkBox5->UseVisualStyleBackColor = true;
			// 
			// checkBox6
			// 
			this->checkBox6->AutoSize = true;
			this->checkBox6->Location = System::Drawing::Point(577, 461);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(15, 14);
			this->checkBox6->TabIndex = 42;
			this->checkBox6->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(750, 121);
			this->Controls->Add(this->checkBox6);
			this->Controls->Add(this->checkBox5);
			this->Controls->Add(this->checkBox4);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->rbFECHA);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->rbTAMAÑO);
			this->Controls->Add(this->rbEXTENSION);
			this->Controls->Add(this->rbNOMBRE);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->txtBUSCAR);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtRUTA);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		listBox1->Items->Clear();
		if ((String::IsNullOrEmpty(txtRUTA->Text)) || !(is_directory(marshal_as<string>(txtRUTA->Text)))) {
			MessageBox::Show("El directorio ingresado no existe o no es un directorio.");
		}
		else {

			String ^ ruta = txtRUTA->Text;
			string path = marshal_as<string>(ruta); //CONVERTIR DE String^ A string
			FX->scan(path); //SCANEAR LA RUTA INDICADA
			vector<Archivo*> vec = FX->Show_All();

			for (Archivo* var : vec) {
				listBox1->Items->Add(marshal_as<String^>(var->get_ruta()));
			}

			this->Height = 600;
			MessageBox::Show("El directorio fue encontrado y abierto con éxito.");
		}


	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

		if (!String::IsNullOrEmpty(txtBUSCAR->Text)) {
			if (rbNOMBRE->Checked) {
				String ^ nombre = txtBUSCAR->Text;
				string name = marshal_as<string>(nombre); //CONVERTIR DE String^ A string
				vector<Archivo*> vec = FX->Buscar_Nombre(name);

				if (!vec.empty()) {
					listBox1->Items->Clear();
					for (Archivo* var : vec) {
						listBox1->Items->Add(marshal_as<String^>(var->get_ruta()));
					}
					MessageBox::Show("Elemento(s) encontrados correctamente.");
				}
				else {
					MessageBox::Show("Elemento(s) NO encontrados.");
				}
			}
			else if (rbEXTENSION->Checked) {
				String ^ extension = txtBUSCAR->Text;
				string ex = marshal_as<string>(extension); //CONVERTIR DE String^ A string
				vector<Archivo*> vec = FX->Buscar_Extension(ex);

				if (!vec.empty()) {
					listBox1->Items->Clear();
					for (Archivo* var : vec) {
						listBox1->Items->Add(marshal_as<String^>(var->get_ruta()));
					}
					MessageBox::Show("Elemento(s) encontrados correctamente.");
				}
				else {
					MessageBox::Show("Elemento(s) NO encontrados.");
				}
			}
			else if (rbTAMAÑO->Checked) {
				String ^ tamaño = txtBUSCAR->Text;
				long long tam = Convert::ToInt64(tamaño);
					vector<Archivo*> vec = FX->Buscar_Tamaño(tam);

				if (!vec.empty()) {
					listBox1->Items->Clear();
					for (Archivo* var : vec) {
						listBox1->Items->Add(marshal_as<String^>(var->get_ruta()));
					}
					MessageBox::Show("Elemento(s) encontrados correctamente.");
				}
				else {
					MessageBox::Show("Elemento(s) NO encontrados.");
				}
			}
			else if (rbFECHA->Checked) {

				String ^ fecha = txtBUSCAR->Text;
				string date = marshal_as<string>(fecha); //CONVERTIR DE String^ A string
				vector<Archivo*> vec = FX->Buscar_Nombre(date);

				if (!vec.empty()) {
					listBox1->Items->Clear();
					for (Archivo* var : vec) {
						listBox1->Items->Add(marshal_as<String^>(var->get_ruta()));
					}
					MessageBox::Show("Elemento(s) encontrados correctamente.");
				}
				else {
					MessageBox::Show("Elemento(s) NO encontrados.");
				}
			}

		}
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		listBox1->Items->Clear();
		vector<Archivo*> vec;



		string ss = marshal_as<string>(textBox2->Text);

		if (checkBox1->Enabled == true) {

			
			vec = FX->FiltrarPorNombreStart(ss);
			
		}
		else if (checkBox2->Enabled == true) {

			vec = FX->FiltrarPorNombreEnd(ss);
		}
		else if (checkBox3->Enabled == true) {
			vec = FX->FiltrarPorNombreContains(ss);
		}

		listBox1->Items->Clear();
		for (Archivo*var : vec) {
			
			listBox1->Items->Add(marshal_as<String^>(var->get_ruta()));
	   }
	}

	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		listBox1->Items->Clear();
		vector<Archivo*> vec;

		string ss = marshal_as<string>(textBox3->Text);

		int numero = stoi(ss);

		if (checkBox4->Enabled == true) {

			vec = FX->FiltrarPorTamañoMayor(numero);
		}
		else if (checkBox5->Enabled == true) {

			vec = FX->FiltrarPorTamañoMenor(numero);
		}
		else if (checkBox6->Enabled == true) {
			vec = FX->FiltrarPorTamañoIgual(numero);
		}

		listBox1->Items->Clear();

		for (Archivo*var : vec) {
			
			listBox1->Items->Add(marshal_as<String^>(var->get_ruta()));
		}
	}

	private: System::Void label11_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label10_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label9_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {

	vector<string> vec;
	for (long long i = 0; i < listBox1->Items->Count; i++) {
		vec.push_back(marshal_as<string>(listBox1->Items[i]->ToString()));
	}
	listBox1->Items->Clear();
	string key;
	int j;
		for (int i = 1; i < vec.size(); i++) {
			key = vec[i];
			j = i - 1;
			while (j >= 0 && vec[j] > key) {
				vec[j + 1] = vec[j];
				j = j - 1;
			}
			vec[j + 1] = key;
	}
		for (int i = 0; i < vec.size(); i++) {
			listBox1->Items->Add(marshal_as<String^>(vec[i]));
		}
	//listBox1->Sorted = true;
}
};
}