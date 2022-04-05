#pragma once

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
	private: System::Windows::Forms::Label^ lbltitulobiblioteca;
	private: System::Windows::Forms::Label^ lblnumeroaulabiblioteca;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ lblnivelbiblioteca;
	private: System::Windows::Forms::Button^ botonBuscarBiblio;
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
			this->lbltitulobiblioteca = (gcnew System::Windows::Forms::Label());
			this->lblnumeroaulabiblioteca = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->lblnivelbiblioteca = (gcnew System::Windows::Forms::Label());
			this->botonBuscarBiblio = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lbltitulobiblioteca
			// 
			this->lbltitulobiblioteca->AutoSize = true;
			this->lbltitulobiblioteca->Location = System::Drawing::Point(24, 22);
			this->lbltitulobiblioteca->Name = L"lbltitulobiblioteca";
			this->lbltitulobiblioteca->Size = System::Drawing::Size(546, 13);
			this->lbltitulobiblioteca->TabIndex = 0;
			this->lbltitulobiblioteca->Text = L"A continuación debera llenar la informacion para poder conocer como llegar a tu d"
				L"estino en el edificio de biblioteca";
			// 
			// lblnumeroaulabiblioteca
			// 
			this->lblnumeroaulabiblioteca->AutoSize = true;
			this->lblnumeroaulabiblioteca->Location = System::Drawing::Point(24, 56);
			this->lblnumeroaulabiblioteca->Name = L"lblnumeroaulabiblioteca";
			this->lblnumeroaulabiblioteca->Size = System::Drawing::Size(129, 13);
			this->lblnumeroaulabiblioteca->TabIndex = 1;
			this->lblnumeroaulabiblioteca->Text = L"Ingresa el numero de aula";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(27, 88);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 2;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Sotano", L"Primer Nivel", L"Seugndo Nivel", L"Tercer Nivel",
					L"Cuarto Nivel"
			});
			this->comboBox1->Location = System::Drawing::Point(208, 88);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 3;
			// 
			// lblnivelbiblioteca
			// 
			this->lblnivelbiblioteca->AutoSize = true;
			this->lblnivelbiblioteca->Location = System::Drawing::Point(166, 56);
			this->lblnivelbiblioteca->Name = L"lblnivelbiblioteca";
			this->lblnivelbiblioteca->Size = System::Drawing::Size(204, 13);
			this->lblnivelbiblioteca->TabIndex = 4;
			this->lblnivelbiblioteca->Text = L"Selecciona el nivel al que te deseas dirigir";
			// 
			// botonBuscarBiblio
			// 
			this->botonBuscarBiblio->Location = System::Drawing::Point(131, 124);
			this->botonBuscarBiblio->Name = L"botonBuscarBiblio";
			this->botonBuscarBiblio->Size = System::Drawing::Size(75, 23);
			this->botonBuscarBiblio->TabIndex = 5;
			this->botonBuscarBiblio->Text = L"Buscar";
			this->botonBuscarBiblio->UseVisualStyleBackColor = true;
			// 
			// Biblioteca
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(676, 397);
			this->Controls->Add(this->botonBuscarBiblio);
			this->Controls->Add(this->lblnivelbiblioteca);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->lblnumeroaulabiblioteca);
			this->Controls->Add(this->lbltitulobiblioteca);
			this->Name = L"Biblioteca";
			this->Text = L"Biblioteca";
			this->Load += gcnew System::EventHandler(this, &Biblioteca::Biblioteca_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Biblioteca_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
