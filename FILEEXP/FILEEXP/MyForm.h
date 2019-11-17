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
	private: System::Windows::Forms::Button^  button2;
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
			this->button2 = (gcnew System::Windows::Forms::Button());
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
			this->button1->Text = L"Buscar archivo";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(57, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(598, 46);
			this->label2->TabIndex = 3;
			this->label2->Text = L"EXPLORADOR DE ARCHIVOS";
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(26, 143);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(502, 394);
			this->listBox1->TabIndex = 4;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(595, 143);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(143, 23);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Filtrar por columnas";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(750, 549);
			this->Controls->Add(this->button2);
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
