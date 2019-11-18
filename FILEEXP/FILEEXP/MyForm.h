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
			fileexplorer = new FILEEXPLORER();
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
	private: System::Windows::Forms::TextBox^  txtRUTA;
	protected:
	private:
		FILEEXPLORER* fileexplorer;
	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// txtRUTA
			// 
			this->txtRUTA->Location = System::Drawing::Point(65, 79);
			this->txtRUTA->Name = L"txtRUTA";
			this->txtRUTA->Size = System::Drawing::Size(357, 20);
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
			this->button1->Location = System::Drawing::Point(457, 78);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(97, 20);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Buscar archivo";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 30, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(93, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(536, 49);
			this->label2->TabIndex = 3;
			this->label2->Text = L"EXPLORADOR DE ARCHIVOS";
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(65, 121);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(357, 394);
			this->listBox1->TabIndex = 4;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(560, 162);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(137, 20);
			this->textBox1->TabIndex = 6;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 20.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label3->Location = System::Drawing::Point(451, 121);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(209, 33);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Filtrar por nombre";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(560, 194);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(137, 20);
			this->textBox2->TabIndex = 11;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(560, 224);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(137, 20);
			this->textBox3->TabIndex = 12;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 20.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(448, 261);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(212, 33);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Filtrar por tamaño";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(560, 308);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(137, 20);
			this->textBox4->TabIndex = 17;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(560, 335);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(137, 20);
			this->textBox5->TabIndex = 18;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(560, 366);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(137, 20);
			this->textBox6->TabIndex = 19;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(454, 162);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(97, 23);
			this->button2->TabIndex = 20;
			this->button2->Text = L"Empieza con";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(454, 194);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(97, 23);
			this->button3->TabIndex = 21;
			this->button3->Text = L"Finaliza con";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(454, 224);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(97, 23);
			this->button4->TabIndex = 22;
			this->button4->Text = L"Contiene";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(457, 308);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(97, 23);
			this->button5->TabIndex = 23;
			this->button5->Text = L"Mayor a";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(457, 337);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(97, 23);
			this->button6->TabIndex = 24;
			this->button6->Text = L"Menor a";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(457, 366);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(97, 23);
			this->button7->TabIndex = 25;
			this->button7->Text = L"Igual a";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 20.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(451, 407);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(178, 33);
			this->label4->TabIndex = 26;
			this->label4->Text = L"Ordenado Final";
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->button8->Location = System::Drawing::Point(454, 455);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(97, 23);
			this->button8->TabIndex = 27;
			this->button8->Text = L"Ascendente";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(601, 455);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(96, 23);
			this->button9->TabIndex = 28;
			this->button9->Text = L"Descendente";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(750, 525);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtRUTA);
			this->Name = L"MyForm";
			this->Text = L"Trabajo final";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		if (!(String::IsNullOrEmpty(txtRUTA->Text)) && is_directory(marshal_as<string>(txtRUTA->Text))) {
			this->Height = 600;
			String ^ ruta = txtRUTA->Text;
			string path = marshal_as<string>(ruta); //CONVERTIR DE String^ A string
			fileexplorer->scan(path); //SCANEAR LA RUTA INDICADA
									  //TAMAREEEEEEEEEEE
		}
	}
	};
}
