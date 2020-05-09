#pragma once
#include <cmath>

namespace Zadanie5 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Podsumowanie informacji o MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ plikToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ otwórzWykresToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ zapiszTabelêToolStripMenuItem;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::CheckBox^ kalibracja;
	private: System::Windows::Forms::TextBox^ x0;














	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ livex;
	private: System::Windows::Forms::TextBox^ livey;
	private: System::Windows::Forms::Label^ srodek;
	private: System::Windows::Forms::Label^ Px;




	private: System::Windows::Forms::NumericUpDown^ wybor;

	private: System::Windows::Forms::Label^ label1;




	private: System::Windows::Forms::CheckBox^ dodaj_dane;
	private: System::Windows::Forms::Label^ Py;
	private: System::Windows::Forms::TextBox^ x1;
	private: System::Windows::Forms::TextBox^ x2;
	private: System::Windows::Forms::TextBox^ y2;



	private: System::Windows::Forms::TextBox^ y1;

	private: System::Windows::Forms::TextBox^ y0;
	private: System::Windows::Forms::TextBox^ y2px;


	private: System::Windows::Forms::TextBox^ y1px;

	private: System::Windows::Forms::TextBox^ y0px;
	private: System::Windows::Forms::TextBox^ x2px;


	private: System::Windows::Forms::TextBox^ x1px;

	private: System::Windows::Forms::TextBox^ x0px;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::CheckBox^ logx;
	private: System::Windows::Forms::CheckBox^ logy;
	private: System::Windows::Forms::Button^ czysc;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridView^ tabela;




















	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->plikToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->otwórzWykresToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->zapiszTabelêToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->kalibracja = (gcnew System::Windows::Forms::CheckBox());
			this->x0 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->livex = (gcnew System::Windows::Forms::TextBox());
			this->livey = (gcnew System::Windows::Forms::TextBox());
			this->srodek = (gcnew System::Windows::Forms::Label());
			this->Px = (gcnew System::Windows::Forms::Label());
			this->wybor = (gcnew System::Windows::Forms::NumericUpDown());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dodaj_dane = (gcnew System::Windows::Forms::CheckBox());
			this->Py = (gcnew System::Windows::Forms::Label());
			this->x1 = (gcnew System::Windows::Forms::TextBox());
			this->x2 = (gcnew System::Windows::Forms::TextBox());
			this->y2 = (gcnew System::Windows::Forms::TextBox());
			this->y1 = (gcnew System::Windows::Forms::TextBox());
			this->y0 = (gcnew System::Windows::Forms::TextBox());
			this->y2px = (gcnew System::Windows::Forms::TextBox());
			this->y1px = (gcnew System::Windows::Forms::TextBox());
			this->y0px = (gcnew System::Windows::Forms::TextBox());
			this->x2px = (gcnew System::Windows::Forms::TextBox());
			this->x1px = (gcnew System::Windows::Forms::TextBox());
			this->x0px = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->logx = (gcnew System::Windows::Forms::CheckBox());
			this->logy = (gcnew System::Windows::Forms::CheckBox());
			this->czysc = (gcnew System::Windows::Forms::Button());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabela = (gcnew System::Windows::Forms::DataGridView());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->wybor))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tabela))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->plikToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(931, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// plikToolStripMenuItem
			// 
			this->plikToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->otwórzWykresToolStripMenuItem,
					this->zapiszTabelêToolStripMenuItem
			});
			this->plikToolStripMenuItem->Name = L"plikToolStripMenuItem";
			this->plikToolStripMenuItem->Size = System::Drawing::Size(38, 20);
			this->plikToolStripMenuItem->Text = L"Plik";
			// 
			// otwórzWykresToolStripMenuItem
			// 
			this->otwórzWykresToolStripMenuItem->Name = L"otwórzWykresToolStripMenuItem";
			this->otwórzWykresToolStripMenuItem->Size = System::Drawing::Size(151, 22);
			this->otwórzWykresToolStripMenuItem->Text = L"Otwórz wykres";
			this->otwórzWykresToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::otwórzWykresToolStripMenuItem_Click);
			// 
			// zapiszTabelêToolStripMenuItem
			// 
			this->zapiszTabelêToolStripMenuItem->Name = L"zapiszTabelêToolStripMenuItem";
			this->zapiszTabelêToolStripMenuItem->Size = System::Drawing::Size(151, 22);
			this->zapiszTabelêToolStripMenuItem->Text = L"Zapisz tabelê";
			this->zapiszTabelêToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::zapiszTabelêToolStripMenuItem_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Cross;
			this->pictureBox1->Location = System::Drawing::Point(0, 27);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(600, 600);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			this->pictureBox1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox1_MouseMove);
			// 
			// kalibracja
			// 
			this->kalibracja->AutoSize = true;
			this->kalibracja->Location = System::Drawing::Point(739, 27);
			this->kalibracja->Name = L"kalibracja";
			this->kalibracja->Size = System::Drawing::Size(88, 17);
			this->kalibracja->TabIndex = 2;
			this->kalibracja->Text = L"Kalibracja osi";
			this->kalibracja->UseVisualStyleBackColor = true;
			this->kalibracja->CheckedChanged += gcnew System::EventHandler(this, &MyForm::kalibracja_CheckedChanged);
			// 
			// x0
			// 
			this->x0->Location = System::Drawing::Point(707, 110);
			this->x0->Name = L"x0";
			this->x0->Size = System::Drawing::Size(36, 20);
			this->x0->TabIndex = 3;
			this->x0->Text = L"0";
			this->x0->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->x0->TextChanged += gcnew System::EventHandler(this, &MyForm::x0_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(719, 94);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(12, 13);
			this->label5->TabIndex = 16;
			this->label5->Text = L"x";
			// 
			// livex
			// 
			this->livex->Location = System::Drawing::Point(0, 633);
			this->livex->Name = L"livex";
			this->livex->Size = System::Drawing::Size(60, 20);
			this->livex->TabIndex = 17;
			this->livex->Visible = false;
			// 
			// livey
			// 
			this->livey->Location = System::Drawing::Point(66, 633);
			this->livey->Name = L"livey";
			this->livey->Size = System::Drawing::Size(60, 20);
			this->livey->TabIndex = 18;
			this->livey->Visible = false;
			// 
			// srodek
			// 
			this->srodek->AutoSize = true;
			this->srodek->Location = System::Drawing::Point(609, 113);
			this->srodek->Name = L"srodek";
			this->srodek->Size = System::Drawing::Size(92, 13);
			this->srodek->TabIndex = 19;
			this->srodek->Text = L"Pocz¹tek uk³adu:";
			// 
			// Px
			// 
			this->Px->AutoSize = true;
			this->Px->Location = System::Drawing::Point(616, 139);
			this->Px->Name = L"Px";
			this->Px->Size = System::Drawing::Size(85, 13);
			this->Px->TabIndex = 20;
			this->Px->Text = L"Punkt na osi 0X:";
			// 
			// wybor
			// 
			this->wybor->Location = System::Drawing::Point(793, 64);
			this->wybor->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 3, 0, 0, 0 });
			this->wybor->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->wybor->Name = L"wybor";
			this->wybor->Size = System::Drawing::Size(34, 20);
			this->wybor->TabIndex = 23;
			this->wybor->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->wybor->ValueChanged += gcnew System::EventHandler(this, &MyForm::wybor_ValueChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(695, 66);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(75, 13);
			this->label1->TabIndex = 24;
			this->label1->Text = L"Wybierz punkt";
			// 
			// dodaj_dane
			// 
			this->dodaj_dane->AutoSize = true;
			this->dodaj_dane->Location = System::Drawing::Point(707, 254);
			this->dodaj_dane->Name = L"dodaj_dane";
			this->dodaj_dane->Size = System::Drawing::Size(124, 17);
			this->dodaj_dane->TabIndex = 26;
			this->dodaj_dane->Text = L"Dodaj dane do tabeli";
			this->dodaj_dane->UseVisualStyleBackColor = true;
			this->dodaj_dane->CheckedChanged += gcnew System::EventHandler(this, &MyForm::dodaj_dane_CheckedChanged);
			// 
			// Py
			// 
			this->Py->AutoSize = true;
			this->Py->Location = System::Drawing::Point(616, 165);
			this->Py->Name = L"Py";
			this->Py->Size = System::Drawing::Size(85, 13);
			this->Py->TabIndex = 27;
			this->Py->Text = L"Punkt na osi 0Y:";
			// 
			// x1
			// 
			this->x1->Location = System::Drawing::Point(707, 136);
			this->x1->Name = L"x1";
			this->x1->Size = System::Drawing::Size(36, 20);
			this->x1->TabIndex = 28;
			this->x1->Text = L"1";
			this->x1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// x2
			// 
			this->x2->Location = System::Drawing::Point(707, 162);
			this->x2->Name = L"x2";
			this->x2->ReadOnly = true;
			this->x2->Size = System::Drawing::Size(36, 20);
			this->x2->TabIndex = 29;
			this->x2->Text = L"0";
			this->x2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// y2
			// 
			this->y2->Location = System::Drawing::Point(749, 162);
			this->y2->Name = L"y2";
			this->y2->Size = System::Drawing::Size(36, 20);
			this->y2->TabIndex = 32;
			this->y2->Text = L"1";
			this->y2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// y1
			// 
			this->y1->Location = System::Drawing::Point(749, 136);
			this->y1->Name = L"y1";
			this->y1->ReadOnly = true;
			this->y1->Size = System::Drawing::Size(36, 20);
			this->y1->TabIndex = 31;
			this->y1->Text = L"0";
			this->y1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// y0
			// 
			this->y0->Location = System::Drawing::Point(749, 110);
			this->y0->Name = L"y0";
			this->y0->Size = System::Drawing::Size(36, 20);
			this->y0->TabIndex = 30;
			this->y0->Text = L"0";
			this->y0->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->y0->TextChanged += gcnew System::EventHandler(this, &MyForm::y0_TextChanged);
			// 
			// y2px
			// 
			this->y2px->Location = System::Drawing::Point(859, 162);
			this->y2px->Name = L"y2px";
			this->y2px->Size = System::Drawing::Size(36, 20);
			this->y2px->TabIndex = 38;
			this->y2px->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// y1px
			// 
			this->y1px->Location = System::Drawing::Point(859, 136);
			this->y1px->Name = L"y1px";
			this->y1px->Size = System::Drawing::Size(36, 20);
			this->y1px->TabIndex = 37;
			this->y1px->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// y0px
			// 
			this->y0px->Location = System::Drawing::Point(859, 110);
			this->y0px->Name = L"y0px";
			this->y0px->Size = System::Drawing::Size(36, 20);
			this->y0px->TabIndex = 36;
			this->y0px->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// x2px
			// 
			this->x2px->Location = System::Drawing::Point(817, 162);
			this->x2px->Name = L"x2px";
			this->x2px->Size = System::Drawing::Size(36, 20);
			this->x2px->TabIndex = 35;
			this->x2px->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// x1px
			// 
			this->x1px->Location = System::Drawing::Point(817, 136);
			this->x1px->Name = L"x1px";
			this->x1px->Size = System::Drawing::Size(36, 20);
			this->x1px->TabIndex = 34;
			this->x1px->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// x0px
			// 
			this->x0px->Location = System::Drawing::Point(817, 110);
			this->x0px->Name = L"x0px";
			this->x0px->Size = System::Drawing::Size(36, 20);
			this->x0px->TabIndex = 33;
			this->x0px->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(758, 94);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(12, 13);
			this->label2->TabIndex = 39;
			this->label2->Text = L"y";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(863, 94);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(29, 13);
			this->label3->TabIndex = 41;
			this->label3->Text = L"y[px]";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(824, 94);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(29, 13);
			this->label4->TabIndex = 40;
			this->label4->Text = L"x[px]";
			// 
			// logx
			// 
			this->logx->AutoSize = true;
			this->logx->Location = System::Drawing::Point(661, 201);
			this->logx->Name = L"logx";
			this->logx->Size = System::Drawing::Size(124, 17);
			this->logx->TabIndex = 42;
			this->logx->Text = L"Logarytmiczna os 0X";
			this->logx->UseVisualStyleBackColor = true;
			// 
			// logy
			// 
			this->logy->AutoSize = true;
			this->logy->Location = System::Drawing::Point(807, 201);
			this->logy->Name = L"logy";
			this->logy->Size = System::Drawing::Size(124, 17);
			this->logy->TabIndex = 43;
			this->logy->Text = L"Logarytmiczna os 0Y";
			this->logy->UseVisualStyleBackColor = true;
			// 
			// czysc
			// 
			this->czysc->Location = System::Drawing::Point(739, 603);
			this->czysc->Name = L"czysc";
			this->czysc->Size = System::Drawing::Size(75, 23);
			this->czysc->TabIndex = 44;
			this->czysc->Text = L"Czyœæ tabelê";
			this->czysc->UseVisualStyleBackColor = true;
			this->czysc->Click += gcnew System::EventHandler(this, &MyForm::czysc_Click);
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"y";
			this->Column3->Name = L"Column3";
			this->Column3->Width = 75;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"x";
			this->Column2->Name = L"Column2";
			this->Column2->Width = 75;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Nr";
			this->Column1->Name = L"Column1";
			this->Column1->Width = 75;
			// 
			// tabela
			// 
			this->tabela->BackgroundColor = System::Drawing::SystemColors::ButtonFace;
			this->tabela->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->tabela->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Column1, this->Column2,
					this->Column3
			});
			this->tabela->GridColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->tabela->Location = System::Drawing::Point(635, 277);
			this->tabela->Name = L"tabela";
			this->tabela->Size = System::Drawing::Size(269, 320);
			this->tabela->TabIndex = 25;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(931, 655);
			this->Controls->Add(this->czysc);
			this->Controls->Add(this->logy);
			this->Controls->Add(this->logx);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->y2px);
			this->Controls->Add(this->y1px);
			this->Controls->Add(this->y0px);
			this->Controls->Add(this->x2px);
			this->Controls->Add(this->x1px);
			this->Controls->Add(this->x0px);
			this->Controls->Add(this->y2);
			this->Controls->Add(this->y1);
			this->Controls->Add(this->y0);
			this->Controls->Add(this->x2);
			this->Controls->Add(this->x1);
			this->Controls->Add(this->Py);
			this->Controls->Add(this->dodaj_dane);
			this->Controls->Add(this->tabela);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->wybor);
			this->Controls->Add(this->Px);
			this->Controls->Add(this->srodek);
			this->Controls->Add(this->livey);
			this->Controls->Add(this->livex);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->x0);
			this->Controls->Add(this->kalibracja);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->wybor))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tabela))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void otwórzWykresToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenFileDialog^ plik = gcnew OpenFileDialog();
		plik->Title = "Otwórz";
		plik->InitialDirectory = "Desktop";
		plik->Filter ="Wszystkie pliki (*.*)|*.*|"+"JPEG (*.jpg;*.jpeg)|*.jpg;*.jpeg|" +"GIF (*.gif)|*.gif|" +"PNG (*.png)|*.png|" +"BMP (*.bmp)|*.bmp";
		plik->FilterIndex = 1;
		plik->RestoreDirectory = true;
		if (plik->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			pictureBox1->Image = Image::FromFile(plik->FileName);
		}
	}
private: System::Void pictureBox1_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	int x = e->X;
	int y = e->Y;
	livex->Text = x.ToString();
	livey->Text = y.ToString();
}

private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (kalibracja->Checked==true)
	{
		switch (Convert::ToInt32(wybor->Text))
		{
		case 1:	
			x0px->Text = livex->Text;
			y0px->Text = livey->Text;
			break;
		case 2:
			x1px->Text = livex->Text;
			y1px->Text = livey->Text;
			break;
		case 3:
			x2px->Text = livex->Text;
			y2px->Text = livey->Text;
			break;
		default:
			MessageBox::Show("Nieoczekiwany b³¹d", "B³¹d", MessageBoxButtons::OK, MessageBoxIcon::Error);
			break;
		}
	}
	else if (dodaj_dane->Checked==true)
	{
		double rx_px, ry_px,rx,ry;
		double nx, ny;
		double x, y;
		int nr;
		double a, b;
		try
		{

			if (logx->Checked==true)
			{
				a = (log10(Convert::ToDouble(x1->Text)) - log10(Convert::ToDouble(x0->Text))) / (Convert::ToInt32(x1px->Text) - Convert::ToInt32(x0px->Text));
				b = log10(Convert::ToDouble(x1->Text)) - a * Convert::ToInt32(x1px->Text);
				x = pow(10 , (a * Convert::ToInt32(livex->Text) + b));
			}
			else
			{
				rx_px = abs(Convert::ToInt32(x2px->Text) - Convert::ToInt32(x1px->Text));
				rx = abs(Convert::ToDouble(x2->Text) - Convert::ToDouble(x1->Text));
				nx = rx / rx_px;
				x = (Convert::ToInt32(livex->Text) - Convert::ToInt32(x0px->Text)) * nx + Convert::ToDouble(x0->Text);
			}
			
			if (logy->Checked==true)
			{
				a = (log10(Convert::ToDouble(y2->Text)) - log10(Convert::ToDouble(y0->Text))) / (Convert::ToInt32(y2px->Text) - Convert::ToInt32(y0px->Text));
				b = log10(Convert::ToDouble(y2->Text)) - a * Convert::ToInt32(y2px->Text);
				y = pow(10, (a * Convert::ToInt32(livey->Text) + b));
			}
			else
			{
				ry_px = abs(Convert::ToInt32(y2px->Text) - Convert::ToInt32(y1px->Text));
				ry = abs(Convert::ToDouble(y2->Text) - Convert::ToDouble(y1->Text));
				ny = ry / ry_px;
				y = Convert::ToDouble(y0->Text) - (Convert::ToInt32(livey->Text) - Convert::ToInt32(y0px->Text)) * ny;
			}
			nr = tabela->Rows->Count;
			tabela->Rows->Add(nr.ToString(),x.ToString(),y.ToString());
		}
		catch (Exception^)
		{
			MessageBox::Show("Komórki konfiguracyje zosta³y Ÿle wype³nione", "B³¹d konfiguracji", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	
}
private: System::Void x0_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	x2->Text = x0->Text;
}
private: System::Void y0_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	y1->Text = y0->Text;
}
private: System::Void kalibracja_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (kalibracja->Checked==true)
	{
		srodek->ForeColor = Color::Red;
		dodaj_dane->Checked = false;
	}
	else
	{
		srodek->ForeColor = Color::Black;
		Px->ForeColor = Color::Black;
		Py->ForeColor = Color::Black;
		wybor->Value = 1;
	}
}
private: System::Void dodaj_dane_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (dodaj_dane->Checked==true)
	{
		kalibracja->Checked = false;
	}
}
private: System::Void wybor_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	if (kalibracja->Checked==true)
	{
		if (wybor->Value == 1)
		{
			srodek->ForeColor = Color::Red;
			Px->ForeColor = Color::Black;
			Py->ForeColor = Color::Black;
		}
		else if (wybor->Value == 2)
		{
			srodek->ForeColor = Color::Black;
			Px->ForeColor = Color::Red;
			Py->ForeColor = Color::Black;
		}
		else if (wybor->Value == 3)
		{
			srodek->ForeColor = Color::Black;
			Px->ForeColor = Color::Black;
			Py->ForeColor = Color::Red;
		}
	}
}
private: System::Void zapiszTabelêToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	SaveFileDialog^ plik = gcnew SaveFileDialog();
	plik->Filter = "Txt file (*.txt)|*.txt|All file(*.*)|*.*";
	plik->Title = "Zapisz tabelê";
	plik->InitialDirectory = "Desktop";
	plik->FilterIndex = 1;
	plik->RestoreDirectory = true;

	if (plik->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		TextWriter^ writer = gcnew StreamWriter(plik->FileName);
		writer->Write(tabela->Columns[0]->HeaderText+" \t");
		writer->Write(tabela->Columns[1]->HeaderText + " \t\t");
		writer->Write(tabela->Columns[2]->HeaderText);
		writer->WriteLine("");
		for (int i = 0; i < tabela->Rows->Count - 1; i++)
		{
			for (int j = 0; j < tabela->Columns->Count; j++)
			{
				writer->Write(tabela->Rows[i]->Cells[j]->Value->ToString() + " \t");
			}
			writer->WriteLine("");
		}
		writer->Close();
		MessageBox::Show("Tabela zosta³a zapisana: " + plik->FileName);
	}
}
private: System::Void czysc_Click(System::Object^ sender, System::EventArgs^ e) {
	tabela->Rows->Clear();
}
};
}
