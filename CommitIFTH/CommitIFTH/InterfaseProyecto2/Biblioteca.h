#pragma once
#include <iostream>
#include <string>

namespace InterfaseProyecto2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Biblioteca
	/// </summary>
	public ref class Biblioteca : public System::Windows::Forms::Form
	{
	public:
		Biblioteca(void)
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
		~Biblioteca()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ lblnumeroaulabiblioteca;
	private: System::Windows::Forms::TextBox^ tbxBuscarB;

	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ lblnivelbiblioteca;
	private: System::Windows::Forms::Button^ botonBuscarBiblio;
	private: System::Windows::Forms::Label^ lblContactoB;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::LinkLabel^ lnkbCorreo;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ lblHAB;
	private: System::Windows::Forms::Label^ labelh;
	private: System::Windows::Forms::Label^ lblWP;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ lblResult;
	protected:

	protected:


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
			this->lblnumeroaulabiblioteca = (gcnew System::Windows::Forms::Label());
			this->tbxBuscarB = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->lblnivelbiblioteca = (gcnew System::Windows::Forms::Label());
			this->botonBuscarBiblio = (gcnew System::Windows::Forms::Button());
			this->lblContactoB = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lnkbCorreo = (gcnew System::Windows::Forms::LinkLabel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->lblHAB = (gcnew System::Windows::Forms::Label());
			this->labelh = (gcnew System::Windows::Forms::Label());
			this->lblWP = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lblResult = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// lblnumeroaulabiblioteca
			// 
			this->lblnumeroaulabiblioteca->AutoSize = true;
			this->lblnumeroaulabiblioteca->Location = System::Drawing::Point(24, 9);
			this->lblnumeroaulabiblioteca->Name = L"lblnumeroaulabiblioteca";
			this->lblnumeroaulabiblioteca->Size = System::Drawing::Size(129, 13);
			this->lblnumeroaulabiblioteca->TabIndex = 1;
			this->lblnumeroaulabiblioteca->Text = L"Ingresa el numero de aula";
			// 
			// tbxBuscarB
			// 
			this->tbxBuscarB->Location = System::Drawing::Point(27, 34);
			this->tbxBuscarB->Name = L"tbxBuscarB";
			this->tbxBuscarB->Size = System::Drawing::Size(100, 20);
			this->tbxBuscarB->TabIndex = 2;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Sotano", L"Primer Nivel", L"Seugndo Nivel", L"Tercer Nivel",
					L"Cuarto Nivel"
			});
			this->comboBox1->Location = System::Drawing::Point(126, 81);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 3;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Biblioteca::comboBox1_SelectedIndexChanged);
			// 
			// lblnivelbiblioteca
			// 
			this->lblnivelbiblioteca->AutoSize = true;
			this->lblnivelbiblioteca->Location = System::Drawing::Point(24, 81);
			this->lblnivelbiblioteca->Name = L"lblnivelbiblioteca";
			this->lblnivelbiblioteca->Size = System::Drawing::Size(96, 13);
			this->lblnivelbiblioteca->TabIndex = 4;
			this->lblnivelbiblioteca->Text = L"Selecciona el nivel";
			// 
			// botonBuscarBiblio
			// 
			this->botonBuscarBiblio->Location = System::Drawing::Point(157, 32);
			this->botonBuscarBiblio->Name = L"botonBuscarBiblio";
			this->botonBuscarBiblio->Size = System::Drawing::Size(75, 23);
			this->botonBuscarBiblio->TabIndex = 5;
			this->botonBuscarBiblio->Text = L"Buscar";
			this->botonBuscarBiblio->UseVisualStyleBackColor = true;
			this->botonBuscarBiblio->Click += gcnew System::EventHandler(this, &Biblioteca::botonBuscarBiblio_Click);
			// 
			// lblContactoB
			// 
			this->lblContactoB->AutoSize = true;
			this->lblContactoB->Location = System::Drawing::Point(24, 279);
			this->lblContactoB->Name = L"lblContactoB";
			this->lblContactoB->Size = System::Drawing::Size(165, 13);
			this->lblContactoB->TabIndex = 6;
			this->lblContactoB->Text = L"INFORMACI�N DE CONTACTO ";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(24, 305);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(114, 13);
			this->label1->TabIndex = 7;
			this->label1->Text = L"WhatsApp: 5612-7002";
			// 
			// lnkbCorreo
			// 
			this->lnkbCorreo->AutoSize = true;
			this->lnkbCorreo->Location = System::Drawing::Point(144, 305);
			this->lnkbCorreo->Name = L"lnkbCorreo";
			this->lnkbCorreo->Size = System::Drawing::Size(100, 13);
			this->lnkbCorreo->TabIndex = 8;
			this->lnkbCorreo->TabStop = true;
			this->lnkbCorreo->Text = L"biblio@unis.edu.gt  ";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(538, 9);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(126, 23);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Volver a inicio ";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// lblHAB
			// 
			this->lblHAB->AutoSize = true;
			this->lblHAB->Location = System::Drawing::Point(235, 122);
			this->lblHAB->Name = L"lblHAB";
			this->lblHAB->Size = System::Drawing::Size(198, 13);
			this->lblHAB->TabIndex = 10;
			this->lblHAB->Text = L"HORARIO DE ATENCI�N BIBLIOTECA";
			// 
			// labelh
			// 
			this->labelh->AutoSize = true;
			this->labelh->Location = System::Drawing::Point(238, 158);
			this->labelh->Name = L"labelh";
			this->labelh->Size = System::Drawing::Size(195, 13);
			this->labelh->TabIndex = 11;
			this->labelh->Text = L"De lunes a viernes de 7:00am a 5:00pm";
			// 
			// lblWP
			// 
			this->lblWP->AutoSize = true;
			this->lblWP->Location = System::Drawing::Point(24, 194);
			this->lblWP->Name = L"lblWP";
			this->lblWP->Size = System::Drawing::Size(142, 13);
			this->lblWP->TabIndex = 12;
			this->lblWP->Text = L"REGLAS WORKING POINT";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(27, 222);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(610, 13);
			this->label2->TabIndex = 13;
			this->label2->Text = L"Solo pueden ingresar 4 alumnos por sala, no se puede comer ni beber dentro de la "
				L"sala, mantener un vol�men de voz apropiado";
			// 
			// lblResult
			// 
			this->lblResult->AutoSize = true;
			this->lblResult->Location = System::Drawing::Point(269, 40);
			this->lblResult->Name = L"lblResult";
			this->lblResult->Size = System::Drawing::Size(0, 13);
			this->lblResult->TabIndex = 14;
			// 
			// Biblioteca
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(676, 397);
			this->Controls->Add(this->lblResult);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->lblWP);
			this->Controls->Add(this->labelh);
			this->Controls->Add(this->lblHAB);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->lnkbCorreo);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lblContactoB);
			this->Controls->Add(this->botonBuscarBiblio);
			this->Controls->Add(this->lblnivelbiblioteca);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->tbxBuscarB);
			this->Controls->Add(this->lblnumeroaulabiblioteca);
			this->Name = L"Biblioteca";
			this->Text = L"Biblioteca";
			this->Load += gcnew System::EventHandler(this, &Biblioteca::Biblioteca_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Biblioteca_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void botonBuscarBiblio_Click(System::Object^ sender, System::EventArgs^ e) {
	int x;
	x = Convert::ToInt32(tbxBuscarB->Text);
	if (x >= 0 && x <= 5) {
		lblResult->Text = "Su aula se encuentra en el Sotano de Biblioteca.";
	}
	else if (x >= 101 && x <= 104) {
		lblResult->Text = "Su aula se encuentra en el Primer Nivel de Biblioteca.";
	}
	else if (x >= 201 && x <= 214) {
		lblResult->Text = "Su aula se encuentra en el Segundo Nivel de Biblioteca.";
	}
	else {
		lblResult->Text = "Su aula se encuentra en otro edificio o no existe.";
	}
}
};
}
