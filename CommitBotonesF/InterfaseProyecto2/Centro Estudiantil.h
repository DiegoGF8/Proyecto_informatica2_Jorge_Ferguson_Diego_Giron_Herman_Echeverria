#pragma once

namespace InterfaseProyecto2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CentroEstudiantil
	/// </summary>
	public ref class CentroEstudiantil : public System::Windows::Forms::Form
	{
	public:
		CentroEstudiantil(void)
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
		~CentroEstudiantil()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblNoACE;
	protected:
	private: System::Windows::Forms::TextBox^ tbxNoACE;
	private: System::Windows::Forms::Button^ btnBuscarCE;
	private: System::Windows::Forms::Label^ lblDP;
	private: System::Windows::Forms::Label^ lblHACE;
	private: System::Windows::Forms::Label^ lblHADP;
	private: System::Windows::Forms::Label^ lblGT;
	private: System::Windows::Forms::Label^ lblHAGT;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ btnPromo;
	private: System::Windows::Forms::ComboBox^ cmbNCE;
	private: System::Windows::Forms::Label^ lblInfoCCE;


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
			this->lblNoACE = (gcnew System::Windows::Forms::Label());
			this->tbxNoACE = (gcnew System::Windows::Forms::TextBox());
			this->btnBuscarCE = (gcnew System::Windows::Forms::Button());
			this->lblDP = (gcnew System::Windows::Forms::Label());
			this->lblHACE = (gcnew System::Windows::Forms::Label());
			this->lblHADP = (gcnew System::Windows::Forms::Label());
			this->lblGT = (gcnew System::Windows::Forms::Label());
			this->lblHAGT = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->btnPromo = (gcnew System::Windows::Forms::Button());
			this->cmbNCE = (gcnew System::Windows::Forms::ComboBox());
			this->lblInfoCCE = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// lblNoACE
			// 
			this->lblNoACE->AutoSize = true;
			this->lblNoACE->Location = System::Drawing::Point(13, 13);
			this->lblNoACE->Name = L"lblNoACE";
			this->lblNoACE->Size = System::Drawing::Size(176, 13);
			this->lblNoACE->TabIndex = 0;
			this->lblNoACE->Text = L"Ingrese el numero de aula deseado:";
			// 
			// tbxNoACE
			// 
			this->tbxNoACE->Location = System::Drawing::Point(16, 46);
			this->tbxNoACE->Name = L"tbxNoACE";
			this->tbxNoACE->Size = System::Drawing::Size(100, 20);
			this->tbxNoACE->TabIndex = 1;
			// 
			// btnBuscarCE
			// 
			this->btnBuscarCE->Location = System::Drawing::Point(157, 42);
			this->btnBuscarCE->Name = L"btnBuscarCE";
			this->btnBuscarCE->Size = System::Drawing::Size(75, 23);
			this->btnBuscarCE->TabIndex = 2;
			this->btnBuscarCE->Text = L"Buscar";
			this->btnBuscarCE->UseVisualStyleBackColor = true;
			// 
			// lblDP
			// 
			this->lblDP->AutoSize = true;
			this->lblDP->Location = System::Drawing::Point(13, 157);
			this->lblDP->Name = L"lblDP";
			this->lblDP->Size = System::Drawing::Size(74, 13);
			this->lblDP->TabIndex = 3;
			this->lblDP->Text = L"DELY PANES";
			// 
			// lblHACE
			// 
			this->lblHACE->AutoSize = true;
			this->lblHACE->Location = System::Drawing::Point(13, 126);
			this->lblHACE->Name = L"lblHACE";
			this->lblHACE->Size = System::Drawing::Size(205, 13);
			this->lblHACE->TabIndex = 4;
			this->lblHACE->Text = L"HORARIOS DE ATENCIÓN  CAFETERÍA";
			// 
			// lblHADP
			// 
			this->lblHADP->AutoSize = true;
			this->lblHADP->Location = System::Drawing::Point(16, 185);
			this->lblHADP->Name = L"lblHADP";
			this->lblHADP->Size = System::Drawing::Size(195, 13);
			this->lblHADP->TabIndex = 5;
			this->lblHADP->Text = L"De lunes a viernes de 6:00am a 7:00pm";
			// 
			// lblGT
			// 
			this->lblGT->AutoSize = true;
			this->lblGT->Location = System::Drawing::Point(255, 157);
			this->lblGT->Name = L"lblGT";
			this->lblGT->Size = System::Drawing::Size(47, 13);
			this->lblGT->TabIndex = 6;
			this->lblGT->Text = L"GITANE";
			// 
			// lblHAGT
			// 
			this->lblHAGT->AutoSize = true;
			this->lblHAGT->Location = System::Drawing::Point(255, 185);
			this->lblHAGT->Name = L"lblHAGT";
			this->lblHAGT->Size = System::Drawing::Size(195, 13);
			this->lblHAGT->TabIndex = 7;
			this->lblHAGT->Text = L"De lunes a viernes de 6:00am a 7:00pm";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(19, 85);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(99, 13);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Seleccione el nivel ";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(602, 13);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Volver a Inicio";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// btnPromo
			// 
			this->btnPromo->Location = System::Drawing::Point(173, 221);
			this->btnPromo->Name = L"btnPromo";
			this->btnPromo->Size = System::Drawing::Size(129, 23);
			this->btnPromo->TabIndex = 10;
			this->btnPromo->Text = L"PROMOCIONES";
			this->btnPromo->UseVisualStyleBackColor = true;
			// 
			// cmbNCE
			// 
			this->cmbNCE->FormattingEnabled = true;
			this->cmbNCE->Location = System::Drawing::Point(124, 85);
			this->cmbNCE->Name = L"cmbNCE";
			this->cmbNCE->Size = System::Drawing::Size(121, 21);
			this->cmbNCE->TabIndex = 11;
			// 
			// lblInfoCCE
			// 
			this->lblInfoCCE->AutoSize = true;
			this->lblInfoCCE->Location = System::Drawing::Point(22, 279);
			this->lblInfoCCE->Name = L"lblInfoCCE";
			this->lblInfoCCE->Size = System::Drawing::Size(165, 13);
			this->lblInfoCCE->TabIndex = 12;
			this->lblInfoCCE->Text = L"INFORMACIÓN DE CONTACTO:";
			// 
			// CentroEstudiantil
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(716, 377);
			this->Controls->Add(this->lblInfoCCE);
			this->Controls->Add(this->cmbNCE);
			this->Controls->Add(this->btnPromo);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lblHAGT);
			this->Controls->Add(this->lblGT);
			this->Controls->Add(this->lblHADP);
			this->Controls->Add(this->lblHACE);
			this->Controls->Add(this->lblDP);
			this->Controls->Add(this->btnBuscarCE);
			this->Controls->Add(this->tbxNoACE);
			this->Controls->Add(this->lblNoACE);
			this->Name = L"CentroEstudiantil";
			this->Text = L" ";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
