#pragma once
#include <iostream>
#include "Aplicacion.h"
#include <msclr\marshal_cppstd.h>
using namespace msclr::interop;
using namespace std;

namespace COLASS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>

	Aplicacion a,b;
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
	private: System::Windows::Forms::Button^  tamano;
	protected: 

	protected: 
	private: System::Windows::Forms::DataGridView^  Grillax;
	private: System::Windows::Forms::DataGridView^  Grillay;
	private: System::Windows::Forms::Button^  insertar;

	private: System::Windows::Forms::TextBox^  ttamano;
	private: System::Windows::Forms::Button^  mostrar;



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
			this->tamano = (gcnew System::Windows::Forms::Button());
			this->Grillax = (gcnew System::Windows::Forms::DataGridView());
			this->Grillay = (gcnew System::Windows::Forms::DataGridView());
			this->insertar = (gcnew System::Windows::Forms::Button());
			this->ttamano = (gcnew System::Windows::Forms::TextBox());
			this->mostrar = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Grillax))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Grillay))->BeginInit();
			this->SuspendLayout();
			// 
			// tamano
			// 
			this->tamano->Location = System::Drawing::Point(569, 52);
			this->tamano->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tamano->Name = L"tamano";
			this->tamano->Size = System::Drawing::Size(123, 43);
			this->tamano->TabIndex = 0;
			this->tamano->Text = L"TAMANO";
			this->tamano->UseVisualStyleBackColor = true;
			this->tamano->Click += gcnew System::EventHandler(this, &Form1::tamano_Click);
			// 
			// Grillax
			// 
			this->Grillax->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Grillax->Location = System::Drawing::Point(28, 10);
			this->Grillax->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Grillax->Name = L"Grillax";
			this->Grillax->RowTemplate->Height = 28;
			this->Grillax->Size = System::Drawing::Size(420, 119);
			this->Grillax->TabIndex = 1;
			this->Grillax->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::Grillax_CellContentClick);
			// 
			// Grillay
			// 
			this->Grillay->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Grillay->Location = System::Drawing::Point(28, 134);
			this->Grillay->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Grillay->Name = L"Grillay";
			this->Grillay->Size = System::Drawing::Size(420, 119);
			this->Grillay->TabIndex = 2;
			// 
			// insertar
			// 
			this->insertar->Location = System::Drawing::Point(569, 114);
			this->insertar->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->insertar->Name = L"insertar";
			this->insertar->Size = System::Drawing::Size(124, 43);
			this->insertar->TabIndex = 3;
			this->insertar->Text = L"INSERTAR";
			this->insertar->UseVisualStyleBackColor = true;
			this->insertar->Click += gcnew System::EventHandler(this, &Form1::insertar_Click);
			// 
			// ttamano
			// 
			this->ttamano->Location = System::Drawing::Point(569, 12);
			this->ttamano->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ttamano->Name = L"ttamano";
			this->ttamano->Size = System::Drawing::Size(101, 22);
			this->ttamano->TabIndex = 4;
			// 
			// mostrar
			// 
			this->mostrar->Location = System::Drawing::Point(568, 180);
			this->mostrar->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->mostrar->Name = L"mostrar";
			this->mostrar->Size = System::Drawing::Size(124, 43);
			this->mostrar->TabIndex = 5;
			this->mostrar->Text = L"MOSTRAR";
			this->mostrar->UseVisualStyleBackColor = true;
			this->mostrar->Click += gcnew System::EventHandler(this, &Form1::mostrar_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(904, 357);
			this->Controls->Add(this->mostrar);
			this->Controls->Add(this->ttamano);
			this->Controls->Add(this->insertar);
			this->Controls->Add(this->Grillay);
			this->Controls->Add(this->Grillax);
			this->Controls->Add(this->tamano);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"Form1";
			this->Text = L"Form1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Grillax))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Grillay))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Grillax_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
			 
			 }
private: System::Void tamano_Click(System::Object^  sender, System::EventArgs^  e) {
			 a.Tamano(Grillax,  ttamano);
		 }
private: System::Void insertar_Click(System::Object^  sender, System::EventArgs^  e) {
		 a.Guardar(Grillax, ttamano);
		 
		 }
private: System::Void mostrar_Click(System::Object^  sender, System::EventArgs^  e) {
			 a.Mostrar(Grillay);
		 }
};
}

