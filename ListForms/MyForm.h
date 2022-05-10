#pragma once
#include "Sort.h"
#include <string>
#include <msclr\marshal_cppstd.h>
#include "SortStepByStep.h"
namespace ListForms {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	public:
		int p = 0;
	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;

	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ b0;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ b1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ b2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ b3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ b4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ b5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ b6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ b7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ b8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ b9;
	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->b0 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->b1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->b2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->b3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->b4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->b5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->b6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->b7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->b8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->b9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(63, 62);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(351, 20);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(64, 170);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(349, 20);
			this->textBox2->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(506, 59);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(96, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Sort";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(506, 108);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(96, 23);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Step-by-step sort";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(506, 170);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(96, 20);
			this->textBox4->TabIndex = 5;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox4_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(541, 154);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(30, 13);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Size:";
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(10) {
				this->b0, this->b1,
					this->b2, this->b3, this->b4, this->b5, this->b6, this->b7, this->b8, this->b9
			});
			this->dataGridView1->Location = System::Drawing::Point(22, 256);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(1043, 150);
			this->dataGridView1->TabIndex = 7;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// b0
			// 
			this->b0->HeaderText = L"b[0]";
			this->b0->Name = L"b0";
			this->b0->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			// 
			// b1
			// 
			this->b1->HeaderText = L"b[1]";
			this->b1->Name = L"b1";
			// 
			// b2
			// 
			this->b2->HeaderText = L"b[2]";
			this->b2->Name = L"b2";
			// 
			// b3
			// 
			this->b3->HeaderText = L"b[3]";
			this->b3->Name = L"b3";
			// 
			// b4
			// 
			this->b4->HeaderText = L"b[4]";
			this->b4->Name = L"b4";
			// 
			// b5
			// 
			this->b5->HeaderText = L"b[5]";
			this->b5->Name = L"b5";
			// 
			// b6
			// 
			this->b6->HeaderText = L"b[6]";
			this->b6->Name = L"b6";
			// 
			// b7
			// 
			this->b7->HeaderText = L"b[7]";
			this->b7->Name = L"b7";
			// 
			// b8
			// 
			this->b8->HeaderText = L"b[8]";
			this->b8->Name = L"b8";
			// 
			// b9
			// 
			this->b9->HeaderText = L"b[9]";
			this->b9->Name = L"b9";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1087, 483);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		textBox2->Text = textBox1->Text;
		while (1 != (dataGridView1->RowCount)) {
			dataGridView1->Rows->RemoveAt(0);
		}
		p = 0;
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		std::string str = msclr::interop::marshal_as<string>(textBox1->Text);
		char* cstr = new char[str.length() + 1];
		strcpy(cstr, str.c_str());
		char* cht;
		cht = strtok(cstr, " ");
		int i = 0;
		int n = System::Convert::ToInt32(textBox4->Text);
		std::string* arr = new std::string[System::Convert::ToInt32(textBox4->Text)];
		while (cht != NULL && i < n) {
			arr[i] = cht;
			cht = strtok(NULL, " ");
			i++;
		}
		sort(arr, n);
		std::string stdarr = "";
		for (int i = 0; i < System::Convert::ToInt32(textBox4->Text); i++) {
			stdarr = stdarr + arr[i] + ' ';
		}
		textBox2->Text = msclr::interop::marshal_as<String^>(stdarr);
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	std::string str = msclr::interop::marshal_as<string>(textBox2->Text);
	char* cstr = new char[str.length() + 1];
	strcpy(cstr, str.c_str());
	char* cht;
	cht = strtok(cstr, " ");
	int i = 0;
	int n = System::Convert::ToInt32(textBox4->Text);
	std::string* arr = new std::string[System::Convert::ToInt32(textBox4->Text)];
	while (cht != NULL && i < n) {
		arr[i] = cht;
		cht = strtok(NULL, " ");
		i++;
	}
	while (1 != (dataGridView1->RowCount)) {
			dataGridView1->Rows->RemoveAt(0);
	}
	int max = 0;
	for (int i = 0; i < n; i++) { //находит максимальную длину элементов
		if (max < arr[i].length()) {
			max = arr[i].length();
		}
	}
	int* larr = sortsbs(arr, n, p);
	int f = 0;
	for (int i = 0; i < 10; i++) {
		if (i <= (n-1) && ((max - 1) - p) >= 0) {
			dataGridView1->Rows->Add();
			dataGridView1->Rows[f]->Cells[larr[i]]->Value = msclr::interop::marshal_as<String^>(arr[i]);
			f++;
		}
	}
	f = 0;
	for (int i = 0; i < n; i++) {
		if (((max - 1) - p) < 0) {
			dataGridView1->Rows->Add();
			dataGridView1->Rows[f]->Cells[0]->Value = msclr::interop::marshal_as<String^>(arr[i]);
			f++;
		}
	}
	delete larr;
	std::string stdarr = "";
	for (int i = 0; i < System::Convert::ToInt32(textBox4->Text); i++) {
		stdarr = stdarr + arr[i] + ' ';
	}
	textBox2->Text = msclr::interop::marshal_as<String^>(stdarr);
	p++;
}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
};
}
