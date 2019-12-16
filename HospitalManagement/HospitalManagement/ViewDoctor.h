#pragma once

namespace HospitalManagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ViewDoctor
	/// </summary>
	public ref class ViewDoctor : public System::Windows::Forms::Form
	{
	public:
		ViewDoctor(void)
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
		~ViewDoctor()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
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
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(14) {L"Dr. M.A. Muhut \t\tConsultant\t\tAnesthisiology", 
				L"DR.MA Mannan                             Child                                   " 
				L"            General Medicine ", L"DR.Dev joti Ghosh                         Kidney & Heart                         " 
				L"     General Medicine ", 
				L"DR.Fatema akter                            Gynocology                            " 
				L"         Surgery", L"Dr. M.A. Muhut 1\t                   Consultant\t\t Anesthisiology", 
				L"DR.MA Mannan 1                          Child                                    " 
				L"          General Medicine ", L"DR.Dev joti Ghosh 1                      Kidney & Heart                          " 
				L"   General Medicine ", 
				L"DR.Fatema akter 1                         Gynocology                             " 
				L"       Surgery", L"Dr. M.A. Muhut 2\t                    Consultant\t\t   Anesthisiology", 
				L"DR.MA Mannan 2                          Child                                    " 
				L"           General Medicine ", L"DR.Dev joti Ghosh 2                      Kidney & Heart                          " 
				L"   General Medicine ", 
				L"DR.Fatema akter  2                       Gynocology                              " 
				L"         Surgery", L"", L""});
			this->listBox1->Location = System::Drawing::Point(12, 49);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(685, 186);
			this->listBox1->TabIndex = 0;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &ViewDoctor::listBox1_SelectedIndexChanged);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(91, 287);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(530, 20);
			this->textBox1->TabIndex = 1;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(91, 313);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(530, 20);
			this->textBox2->TabIndex = 2;
			// 
			// ViewDoctor
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(812, 466);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->listBox1);
			this->Name = L"ViewDoctor";
			this->Text = L"ViewDoctor";
			this->Load += gcnew System::EventHandler(this, &ViewDoctor::ViewDoctor_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ViewDoctor_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
				 int a=listBox1->SelectedIndex;
				 String^ dln=listBox1->SelectedItem->ToString();
				 textBox1->Text=dln;
				
						 int b=0700+a*100;
						 String^ aks=listBox1->SelectedItem->ToString()+"is available at"+b.ToString();
						 

						 textBox2->Text=aks;
		
			 }
	};
}
