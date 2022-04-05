#pragma once
#include "Biblioteca.h"
#include "Centro Estudiantil.h"
#include "AreasL.h"
#include "Capilla.h"

namespace InterfaseProyecto2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ lblNoAulaI;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ lblbInfoCI;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;




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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->lblNoAulaI = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->lblbInfoCI = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(105, 59);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Biblioteca";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(267, 59);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(108, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Centro Estudiantil";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(186, 59);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Capilla";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(381, 59);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Areas Libres";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->ImageLocation = L"https://sertv.gob.pa/crisolfm/wp-content/uploads/sites/2/2019/10/UNIS.png";
			this->pictureBox1->Location = System::Drawing::Point(123, 214);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(700, 263);
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			// 
			// lblNoAulaI
			// 
			this->lblNoAulaI->AutoSize = true;
			this->lblNoAulaI->Location = System::Drawing::Point(105, 106);
			this->lblNoAulaI->Name = L"lblNoAulaI";
			this->lblNoAulaI->Size = System::Drawing::Size(224, 13);
			this->lblNoAulaI->TabIndex = 5;
			this->lblNoAulaI->Text = L"Ingrese el número de aula, junto con su prefijo";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(105, 134);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 6;
			// 
			// lblbInfoCI
			// 
			this->lblbInfoCI->AutoSize = true;
			this->lblbInfoCI->Location = System::Drawing::Point(108, 518);
			this->lblbInfoCI->Name = L"lblbInfoCI";
			this->lblbInfoCI->Size = System::Drawing::Size(165, 13);
			this->lblbInfoCI->TabIndex = 7;
			this->lblbInfoCI->Text = L"INFORMACIÓN DE CONTACTO ";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(386, 106);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(118, 22);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Prefijos - Key";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(390, 140);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(381, 13);
			this->label2->TabIndex = 9;
			this->label2->Text = L"CE: Centro Estudiantil     B: Biblioteca    BS: Sotano de Biblioteca";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(937, 609);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lblbInfoCI);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->lblNoAulaI);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm";
			this->Text = L"Dirrectorio de Campus Unis 2022";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {

	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	InterfaseProyecto2::Biblioteca^ biblioteca = gcnew InterfaseProyecto2::Biblioteca();
	this->Visible = false;
	biblioteca->ShowDialog();
	this->Visible = true;

}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	InterfaseProyecto2::Capilla^ capilla = gcnew InterfaseProyecto2::Capilla();
	this->Visible = false;
	capilla->ShowDialog();
	this->Visible = true;
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	InterfaseProyecto2::CentroEstudiantil^ centro = gcnew InterfaseProyecto2::CentroEstudiantil();
	this->Visible = false;
	centro->ShowDialog();
	this->Visible = true;
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	InterfaseProyecto2::AreasL^ areasl = gcnew InterfaseProyecto2::AreasL();
	this->Visible = false;
	areasl->ShowDialog();
	this->Visible = true;
}
};
}

