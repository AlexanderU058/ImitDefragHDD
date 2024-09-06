#pragma once

#include <ctime>
#include <cstdlib>
#include "ZhestkiiDisk.h"
ZhestkiiDisk disk1;
ZhestkiiDisk disk2;
ZhestkiiDisk disk3;

namespace kursovoi {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button3;
	protected: 


	protected: 

	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::DataPoint^  dataPoint1 = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint(0, 
				0));
			System::Windows::Forms::DataVisualization::Charting::Series^  series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^  title1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// chart1
			// 
			chartArea1->AxisX->Enabled = System::Windows::Forms::DataVisualization::Charting::AxisEnabled::False;
			chartArea1->AxisX->LineWidth = 0;
			chartArea1->AxisX->Maximum = 10;
			chartArea1->AxisX->Minimum = 0;
			chartArea1->AxisX2->MajorGrid->Enabled = false;
			chartArea1->AxisY->Enabled = System::Windows::Forms::DataVisualization::Charting::AxisEnabled::False;
			chartArea1->AxisY->Maximum = 10;
			chartArea1->AxisY->Minimum = 0;
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->BackColor = System::Drawing::Color::White;
			legend1->Name = L"Legend1";
			legend1->Title = L"Обозначения";
			legend1->TitleBackColor = System::Drawing::Color::White;
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(12, 292);
			this->chart1->Name = L"chart1";
			this->chart1->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Bright;
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::FastPoint;
			series1->Color = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			series1->Legend = L"Legend1";
			series1->LegendText = L"Файлы типа 1";
			series1->MarkerSize = 8;
			series1->MarkerStyle = System::Windows::Forms::DataVisualization::Charting::MarkerStyle::Square;
			series1->Name = L"Series1";
			series1->Points->Add(dataPoint1);
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::FastPoint;
			series2->Color = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			series2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			series2->Legend = L"Legend1";
			series2->LegendText = L"Файл типа 2";
			series2->MarkerSize = 8;
			series2->MarkerStyle = System::Windows::Forms::DataVisualization::Charting::MarkerStyle::Square;
			series2->Name = L"Series2";
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::FastPoint;
			series3->Color = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			series3->Legend = L"Legend1";
			series3->LegendText = L"Пустой сектор";
			series3->MarkerSize = 8;
			series3->MarkerStyle = System::Windows::Forms::DataVisualization::Charting::MarkerStyle::Square;
			series3->Name = L"Series3";
			series4->ChartArea = L"ChartArea1";
			series4->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::FastPoint;
			series4->Color = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			series4->Legend = L"Legend1";
			series4->LegendText = L"Файлы типа 3";
			series4->MarkerSize = 8;
			series4->MarkerStyle = System::Windows::Forms::DataVisualization::Charting::MarkerStyle::Square;
			series4->Name = L"Series4";
			series5->ChartArea = L"ChartArea1";
			series5->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::FastPoint;
			series5->Color = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			series5->Legend = L"Legend1";
			series5->LegendText = L"Файлы типа 4";
			series5->MarkerSize = 8;
			series5->MarkerStyle = System::Windows::Forms::DataVisualization::Charting::MarkerStyle::Square;
			series5->Name = L"Series5";
			this->chart1->Series->Add(series1);
			this->chart1->Series->Add(series2);
			this->chart1->Series->Add(series3);
			this->chart1->Series->Add(series4);
			this->chart1->Series->Add(series5);
			this->chart1->Size = System::Drawing::Size(822, 227);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			title1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			title1->Name = L"Title1";
			title1->Text = L"Состояние жесткого диска";
			this->chart1->Titles->Add(title1);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(12, 148);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(210, 42);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Анализировать диск";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(345, 148);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(210, 42);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Дефрагментировать диск";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(125, 20);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Выберите диск";
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"Жесткий диск 1", L"Жесткий диск 2", L"Жесткий диск 3"});
			this->comboBox1->Location = System::Drawing::Point(16, 63);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(167, 28);
			this->comboBox1->TabIndex = 5;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBox1_SelectedIndexChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(13, 259);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 20);
			this->label2->TabIndex = 6;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(864, 483);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(105, 35);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Выход";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1004, 560);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->chart1);
			this->Name = L"Form1";
			this->Text = L"Имитатор дефрагментатора жестких дисков";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
				 button1->Enabled=false;
				 button2->Enabled=false;
				 srand(time(NULL));
				 chart1->Series[0]->Points->Clear();
				 chart1->Series[1]->Points->Clear();
				 chart1->Series[2]->Points->Clear();
				 chart1->Series[3]->Points->Clear();
				 chart1->Series[4]->Points->Clear();
				 disk1.setDisk();
				 disk2.setDisk();
				 disk3.setDisk();
			 }

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 double x,y=10;
				 chart1->Series[0]->Points->Clear();
				 chart1->Series[1]->Points->Clear();
				 chart1->Series[2]->Points->Clear();
				 chart1->Series[3]->Points->Clear();
				 chart1->Series[4]->Points->Clear();
				 button2->Enabled=true;
				 switch(comboBox1->SelectedIndex)
				 {
					case 0:
						for(int i=0;i<=19;i++)
						{
							x=0;
							for(int j=0;j<=66;j++)
							{
								switch(disk1.getDisk(i,j))
								{
									case 0:
										chart1->Series[2]->Points->AddXY(x,y);
									break;
									case 1:
										chart1->Series[0]->Points->AddXY(x,y);
									break;
									case 2:
										chart1->Series[1]->Points->AddXY(x,y);
									break;
									case 3:
										chart1->Series[3]->Points->AddXY(x,y);
									break;
									case 4:
										chart1->Series[4]->Points->AddXY(x,y);
									break;

								}
								x=x+0.15;
							}
							y=y-0.5;
						}
						label2->Text="Жесткий диск 1 проанализирован";
					break;
					case 1:
						for(int i=0;i<=19;i++)
						{
							x=0;
							for(int j=0;j<=66;j++)
							{
								switch(disk2.getDisk(i,j))
								{
									case 0:
										chart1->Series[2]->Points->AddXY(x,y);
									break;
									case 1:
										chart1->Series[0]->Points->AddXY(x,y);
									break;
									case 2:
										chart1->Series[1]->Points->AddXY(x,y);
									break;
									case 3:
										chart1->Series[3]->Points->AddXY(x,y);
									break;
									case 4:
										chart1->Series[4]->Points->AddXY(x,y);
									break;

								}
								x=x+0.15;
							}
							y=y-0.5;
						}
						label2->Text="Жесткий диск 2 проанализирован";
					break;
					case 2:
						for(int i=0;i<=19;i++)
						{
							x=0;
							for(int j=0;j<=66;j++)
							{
								switch(disk3.getDisk(i,j))
								{
									case 0:
										chart1->Series[2]->Points->AddXY(x,y);
									break;
									case 1:
										chart1->Series[0]->Points->AddXY(x,y);
									break;
									case 2:
										chart1->Series[1]->Points->AddXY(x,y);
									break;
									case 3:
										chart1->Series[3]->Points->AddXY(x,y);
									break;
									case 4:
										chart1->Series[4]->Points->AddXY(x,y);
									break;

								}
								x=x+0.15;
							}
							y=y-0.5;
						}
						label2->Text="Жесткий диск 3 проанализирован";
					break;
				 }
			 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 double x,y=10;
			 button1->Enabled=false;
			 button2->Enabled=false;
			 comboBox1->Enabled=true;
			 chart1->Series[0]->Points->Clear();
			 chart1->Series[1]->Points->Clear();
			 chart1->Series[2]->Points->Clear();
			 chart1->Series[3]->Points->Clear();
			 chart1->Series[4]->Points->Clear();
			 switch(comboBox1->SelectedIndex)
			 {
				case 0:
					disk1.Defrag();
					for(int i=0;i<=19;i++)
					{
						x=0;
						for(int j=0;j<=66;j++)
						{
							switch(disk1.getDisk(i,j))
								{
									case 0:
										chart1->Series[2]->Points->AddXY(x,y);
									break;
									case 1:
										chart1->Series[0]->Points->AddXY(x,y);
									break;
									case 2:
										chart1->Series[1]->Points->AddXY(x,y);
									break;
									case 3:
										chart1->Series[3]->Points->AddXY(x,y);
									break;
									case 4:
										chart1->Series[4]->Points->AddXY(x,y);
									break;

								}
							x=x+0.15;
						}
						y=y-0.5;
					}
					label2->Text="Жесткий диск 1 дефрагментирован";
				break;
				case 1:
					disk2.Defrag();
					for(int i=0;i<=19;i++)
					{
						x=0;
						for(int j=0;j<=66;j++)
						{
							switch(disk2.getDisk(i,j))
								{
									case 0:
										chart1->Series[2]->Points->AddXY(x,y);
									break;
									case 1:
										chart1->Series[0]->Points->AddXY(x,y);
									break;
									case 2:
										chart1->Series[1]->Points->AddXY(x,y);
									break;
									case 3:
										chart1->Series[3]->Points->AddXY(x,y);
									break;
									case 4:
										chart1->Series[4]->Points->AddXY(x,y);
									break;

								}
							x=x+0.15;
						}
						y=y-0.5;
					}
					label2->Text="Жесткий диск 2 дефрагментирован";
				break;
				case 2:
					disk3.Defrag();
					for(int i=0;i<=19;i++)
					{
						x=0;
						for(int j=0;j<=66;j++)
						{
							switch(disk3.getDisk(i,j))
								{
									case 0:
										chart1->Series[2]->Points->AddXY(x,y);
									break;
									case 1:
										chart1->Series[0]->Points->AddXY(x,y);
									break;
									case 2:
										chart1->Series[1]->Points->AddXY(x,y);
									break;
									case 3:
										chart1->Series[3]->Points->AddXY(x,y);
									break;
									case 4:
										chart1->Series[4]->Points->AddXY(x,y);
									break;

								}
							x=x+0.15;
						}
						y=y-0.5;
					}
					label2->Text="Жесткий диск 3 дефрагментирован";
					break;
				 }
			 
		 }
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 button1->Enabled=true;
			 button2->Enabled=false;
			 chart1->Series[0]->Points->Clear();
			 chart1->Series[1]->Points->Clear();
			 chart1->Series[2]->Points->Clear();
			 chart1->Series[3]->Points->Clear();
			 chart1->Series[4]->Points->Clear();
			 double y=10,x;
			 for(int i=0;i<=19;i++)
			 {
				x=0;
				for(int j=0;j<=66;j++)
				{
					chart1->Series[2]->Points->AddXY(x,y);
					x=x+0.15;
				}
				y=y-0.5;
			}
		}
		 
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 Close();
		 }
};
}

