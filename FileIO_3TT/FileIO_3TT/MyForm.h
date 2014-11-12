
/**************************************************************
***************************************************************
***************************************************************

ID INFORMATION

Programmers		        :Laithe Marshall, Denmar Leonardo, John Carlos, Sean? 
Assignment #		    :3TT
Assignment Name		    :Team Tutorial
Course # and Title		:CISC 192 - C++
Class Meeting Time		:MW 9:35 - 12:45
Instructor			    :Professor Forman
Hours			        :#
Difficulty			    :#
Completion Date		    :Month/DD/YYYY
Project Name		    :FileIO_3TT

***************************************************************
***************************************************************
CUSTOM DEFINED FUNCTIONS



***************************************************************
***************************************************************
EVENT-DRIVEN FUNCTIONS


***************************************************************
***************************************************************
PROGRAM DESCRIPTION



***************************************************************
***************************************************************

CREDITS

Acknowledge those who helped you and whom you helped
Remember the “triangle of learning”

Thanks for assistance and inspiration from:

Thanks to Professor Forman for creating TDHOs.

Thanks for the opportunity to assist and inspire:



***************************************************************
***************************************************************

MEDIA

Music

Images

***************************************************************
***************************************************************
**************************************************************/

#pragma once

namespace FileIO_3TT {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  labelWelcome;
	protected:

	protected:

	private: System::Windows::Forms::RichTextBox^  IOTextboxOutput;
	private: System::Windows::Forms::TextBox^  IOTextboxInput;
	protected:







	private: System::Windows::Forms::Button^  SubmitNameButton;

	private: System::Windows::Forms::Button^  ReadFromFile;


	private: System::Windows::Forms::Button^  ExitButton;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialogFilePath;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialogFilePath;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  newToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  openToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  specialToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  seToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  deleteNameToolStripMenuItem;
	private: System::Windows::Forms::PictureBox^  pictureBoxAlignment;

	private: System::Windows::Forms::Label^  labelDescription;


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
			this->labelWelcome = (gcnew System::Windows::Forms::Label());
			this->IOTextboxOutput = (gcnew System::Windows::Forms::RichTextBox());
			this->IOTextboxInput = (gcnew System::Windows::Forms::TextBox());
			this->SubmitNameButton = (gcnew System::Windows::Forms::Button());
			this->ReadFromFile = (gcnew System::Windows::Forms::Button());
			this->ExitButton = (gcnew System::Windows::Forms::Button());
			this->saveFileDialogFilePath = (gcnew System::Windows::Forms::SaveFileDialog());
			this->openFileDialogFilePath = (gcnew System::Windows::Forms::OpenFileDialog());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->newToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->specialToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->seToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->deleteNameToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pictureBoxAlignment = (gcnew System::Windows::Forms::PictureBox());
			this->labelDescription = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxAlignment))->BeginInit();
			this->SuspendLayout();
			// 
			// labelWelcome
			// 
			this->labelWelcome->AutoSize = true;
			this->labelWelcome->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelWelcome->Location = System::Drawing::Point(446, 44);
			this->labelWelcome->Name = L"labelWelcome";
			this->labelWelcome->Size = System::Drawing::Size(116, 31);
			this->labelWelcome->TabIndex = 0;
			this->labelWelcome->Text = L"FILE I/O";
			// 
			// IOTextboxOutput
			// 
			this->IOTextboxOutput->Location = System::Drawing::Point(393, 166);
			this->IOTextboxOutput->Name = L"IOTextboxOutput";
			this->IOTextboxOutput->Size = System::Drawing::Size(223, 251);
			this->IOTextboxOutput->TabIndex = 1;
			this->IOTextboxOutput->Text = L"";
			// 
			// IOTextboxInput
			// 
			this->IOTextboxInput->Location = System::Drawing::Point(393, 123);
			this->IOTextboxInput->Name = L"IOTextboxInput";
			this->IOTextboxInput->Size = System::Drawing::Size(223, 20);
			this->IOTextboxInput->TabIndex = 3;
			// 
			// SubmitNameButton
			// 
			this->SubmitNameButton->Location = System::Drawing::Point(765, 166);
			this->SubmitNameButton->Name = L"SubmitNameButton";
			this->SubmitNameButton->Size = System::Drawing::Size(86, 45);
			this->SubmitNameButton->TabIndex = 7;
			this->SubmitNameButton->Text = L"Write Name";
			this->SubmitNameButton->UseVisualStyleBackColor = true;
			this->SubmitNameButton->Click += gcnew System::EventHandler(this, &MyForm::SubmitNameButton_Click);
			// 
			// ReadFromFile
			// 
			this->ReadFromFile->Location = System::Drawing::Point(765, 229);
			this->ReadFromFile->Name = L"ReadFromFile";
			this->ReadFromFile->Size = System::Drawing::Size(86, 45);
			this->ReadFromFile->TabIndex = 9;
			this->ReadFromFile->Text = L"Read File";
			this->ReadFromFile->UseVisualStyleBackColor = true;
			this->ReadFromFile->Click += gcnew System::EventHandler(this, &MyForm::ReadFromFile_Click);
			// 
			// ExitButton
			// 
			this->ExitButton->Location = System::Drawing::Point(798, 455);
			this->ExitButton->Name = L"ExitButton";
			this->ExitButton->Size = System::Drawing::Size(89, 36);
			this->ExitButton->TabIndex = 12;
			this->ExitButton->Text = L"Exit";
			this->ExitButton->UseVisualStyleBackColor = true;
			this->ExitButton->Click += gcnew System::EventHandler(this, &MyForm::ExitButton_Click);
			// 
			// saveFileDialogFilePath
			// 
			this->saveFileDialogFilePath->Filter = L"Text Files (.txt)| *.txt*\"";
			// 
			// openFileDialogFilePath
			// 
			this->openFileDialogFilePath->Filter = L"Text Files (.txt)| *.txt*";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->fileToolStripMenuItem,
					this->specialToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1008, 24);
			this->menuStrip1->TabIndex = 13;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->newToolStripMenuItem,
					this->openToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// newToolStripMenuItem
			// 
			this->newToolStripMenuItem->Name = L"newToolStripMenuItem";
			this->newToolStripMenuItem->Size = System::Drawing::Size(103, 22);
			this->newToolStripMenuItem->Text = L"New";
			this->newToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::newToolStripMenuItem_Click);
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->Size = System::Drawing::Size(103, 22);
			this->openToolStripMenuItem->Text = L"Open";
			this->openToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::openToolStripMenuItem_Click);
			// 
			// specialToolStripMenuItem
			// 
			this->specialToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->seToolStripMenuItem,
					this->deleteNameToolStripMenuItem
			});
			this->specialToolStripMenuItem->Name = L"specialToolStripMenuItem";
			this->specialToolStripMenuItem->Size = System::Drawing::Size(56, 20);
			this->specialToolStripMenuItem->Text = L"Special";
			// 
			// seToolStripMenuItem
			// 
			this->seToolStripMenuItem->Name = L"seToolStripMenuItem";
			this->seToolStripMenuItem->Size = System::Drawing::Size(162, 22);
			this->seToolStripMenuItem->Text = L"Search for Name";
			this->seToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::seToolStripMenuItem_Click);
			// 
			// deleteNameToolStripMenuItem
			// 
			this->deleteNameToolStripMenuItem->Name = L"deleteNameToolStripMenuItem";
			this->deleteNameToolStripMenuItem->Size = System::Drawing::Size(162, 22);
			this->deleteNameToolStripMenuItem->Text = L"Delete Name";
			this->deleteNameToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::deleteNameToolStripMenuItem_Click);
			// 
			// pictureBoxAlignment
			// 
			this->pictureBoxAlignment->BackColor = System::Drawing::Color::Transparent;
			this->pictureBoxAlignment->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBoxAlignment->Location = System::Drawing::Point(0, 0);
			this->pictureBoxAlignment->Name = L"pictureBoxAlignment";
			this->pictureBoxAlignment->Size = System::Drawing::Size(1008, 742);
			this->pictureBoxAlignment->TabIndex = 14;
			this->pictureBoxAlignment->TabStop = false;
			// 
			// labelDescription
			// 
			this->labelDescription->AutoSize = true;
			this->labelDescription->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelDescription->Location = System::Drawing::Point(12, 123);
			this->labelDescription->MaximumSize = System::Drawing::Size(350, 300);
			this->labelDescription->Name = L"labelDescription";
			this->labelDescription->Size = System::Drawing::Size(280, 62);
			this->labelDescription->TabIndex = 15;
			this->labelDescription->Text = L"No Textfile created or opened.";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1008, 742);
			this->Controls->Add(this->labelDescription);
			this->Controls->Add(this->ExitButton);
			this->Controls->Add(this->ReadFromFile);
			this->Controls->Add(this->SubmitNameButton);
			this->Controls->Add(this->IOTextboxInput);
			this->Controls->Add(this->IOTextboxOutput);
			this->Controls->Add(this->labelWelcome);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->pictureBoxAlignment);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->ShowIcon = false;
			this->Text = L"Project 3TT #6";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxAlignment))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		///////////////////////////////////////////////////////////////////////////

		//			GLOBAL OBJECT/VARIABLE DECLARATIONS

		///////////////////////////////////////////////////////////////////////////

		System::IO::StreamWriter^	WriteStuff;
		System::IO::StreamReader^	ReadStuff;
		String^ filePath;
		String^ fileName;

		bool writeModeActivated = false;

		///////////////////////////////////////////////////////////////////////////

private: System::Void SubmitNameButton_Click(System::Object^  sender, System::EventArgs^  e)
{
	WriteToFile();
}

private: System::Void ReadFromFile_Click(System::Object^  sender, System::EventArgs^  e) 
{
	ReadFile();
}

private: System::Void ExitButton_Click(System::Object^  sender, System::EventArgs^  e) 
{
	Close();
}



		 void AppendFile(String^ newFile)
		 {


			 ////////////////////////////////////////////////////////////////////
			 //
			 //				DECLARE LOCAL VARIABLES/OBJECTS
			 //
			 ////////////////////////////////////////////////////////////////////

			 Windows::Forms::DialogResult buttonClicked;

			 ////////////////////////////////////////////////////////////////////

				 if (filePath != nullptr)
				 {
					 buttonClicked = MessageBox::Show("Would you like to append to the file? " +
						 "\n(if not you will be overwriting it)",
						 "File Exists",
						 MessageBoxButtons::YesNoCancel,
						 MessageBoxIcon::Question,
						 MessageBoxDefaultButton::Button2);

					 if (buttonClicked == Windows::Forms::DialogResult::Yes)
					 {


						 WriteStuff = gcnew StreamWriter(newFile, true);

						 MessageBox::Show("Appending to file, write in the big textbox to add names to the file.");
					 }

					 else if (buttonClicked == Windows::Forms::DialogResult::No)
					 {


						 WriteStuff = gcnew StreamWriter(newFile, false);

						 MessageBox::Show("File has been Cleared, write in the big textbox to create a list of names.");
					 }
				 }
		 }

	//user enters a name in the Big Textbox
	void WriteToFile()
	{
		///////////////////////////////////////////////////////////////////////////

		//			LOCAL OBJECT/VARIABLE DECLARATIONS

		///////////////////////////////////////////////////////////////////////////

		String^ userInput;

		/////////////////////////////////////////////////////////////////////////// 
		
		try
		{
			if (!writeModeActivated)
			{

				AppendFile(filePath);

				writeModeActivated = true;
				IOTextboxOutput->Clear();
			}

			userInput = IOTextboxInput->Text;

			//'end' is the sentinel
			if (userInput->ToLower() != "end")
			{
				userInput = IOTextboxInput->Text;

				WriteStuff->WriteLine(userInput);

				IOTextboxOutput->Text += userInput + "\n";
				labelDescription->Text = Path::GetFileName(filePath) + " is being written to.";

			}

			else
			{
				//closes the streamwriter and informs the user about it
				WriteStuff->Close();

				MessageBox::Show("Disk Writing Complete!");

				//Clears textbox
				IOTextboxOutput->Text = "";
			}
		}
		catch (Exception ^ e)
		{
			MessageBox::Show("Please open or create a text file", "ERROR");
			writeModeActivated = false;
		}

		
	}
			 
	/*********************************************
					
					START READ

	*********************************************/											


	//simply reads from the file
	void ReadFile()
	{
		///////////////////////////////////////////////////////////////////////////

		//			LOCAL OBJECT/VARIABLE DECLARATIONS

		///////////////////////////////////////////////////////////////////////////

		String^ readString;

		/////////////////////////////////////////////////////////////////////////// 
		try
		{
			ReadStuff = gcnew StreamReader(filePath);

			labelDescription->Text = Path::GetFileName(filePath) + " has being read.";
			//Reads every line and echoes
			do
			{
				readString = ReadStuff->ReadLine();

				IOTextboxOutput->Text += readString + "\n";

				//Do not want the Blank line to be echoed!
			} while (readString != nullptr);

			// While implementation of the above
			/*while ((fileUserName = ReadStuff->ReadLine()) != nullptr)
			{
			IOTextbox2->Text += fileUserName + "\n";
			}

			ReadSTuff->Close();*/

			//Can also do this to read the whole file
			//This way you won't need a do while loop!
			/*fileUserName = ReadStuff->ReadToEnd();*/

			ReadStuff->Close();
		}

		catch (Exception^ e)
		{
			MessageBox::Show("Please open or create a text file", "ERROR");
		}
	}

	//Searches for a name in the file
	void SearchName()
	{
		///////////////////////////////////////////////////////////////////////////

		//			LOCAL OBJECT/VARIABLE DECLARATIONS

		///////////////////////////////////////////////////////////////////////////

		String^ searchName;
		String^ fileUserName;
		bool searchDone = false;

		/////////////////////////////////////////////////////////////////////////// 

		searchName = IOTextboxInput->Text;

		while (!searchDone)
		{
			fileUserName = ReadStuff->ReadLine();
					 
			MessageBox::Show(searchName + " : " + fileUserName);
					 
			if ((fileUserName = ReadStuff->ReadLine()) == fileUserName)
			{
				searchDone = true;
				MessageBox::Show("Found a match: " + fileUserName);

				ReadStuff->Close();
			}
			else if (fileUserName == nullptr)
			{
				searchDone = true;
				MessageBox::Show("Sorry, but we did not find a match.");
					 
				ReadStuff->Close();
			}
		}
	}

	//Laithe
	void deleteName(String^ userInput)
	{
		////////////////////////////////////////////////////////////////////
		//
		//				DECLARE LOCAL VARIABLES/OBJECTS
		//
		////////////////////////////////////////////////////////////////////

		ArrayList textFile;
		String^ tempString;
		int counter = 0;

		////////////////////////////////////////////////////////////////////

	try
		{
			ReadStuff = gcnew StreamReader(filePath);

			while ((tempString = ReadStuff->ReadLine()) != nullptr)
			{
				textFile.Add(tempString);
				counter++;
			}

			ReadStuff->Close();

			textFile.Remove(userInput);

			if (counter > textFile.Count)
			{
				WriteStuff = gcnew StreamWriter(filePath);

				for (int i = 0; i < (textFile.Count); i++)
				{
					WriteStuff->WriteLine(textFile[i]);
				}
				MessageBox::Show(userInput + " has been deleted from the file.");
			}
			else
			{
				MessageBox::Show(userInput + " was not found in the text file.");
			}

			WriteStuff->Close();
		}

		catch (Exception^ e)
		{
			MessageBox::Show("No file Selected", "ERROR");
		}
	}

	void openTextFile()
	{
		///////////////////////////////////////////////////////////////////////////

		//			LOCAL OBJECT/VARIABLE DECLARATIONS

		///////////////////////////////////////////////////////////////////////////

		/*String^ newFile;*/

		/////////////////////////////////////////////////////////////////////////// 

		openFileDialogFilePath->ShowDialog();
		filePath = openFileDialogFilePath->FileName;

		labelDescription->Text = Path::GetFileName(filePath) + " has been opened.";
		this->Text = Path::GetFileName(filePath) + " - " + "Project 3TT #6";


		//IOTextbox2->Text = "";

		//newFile = SimpleTextbox2->Text; 
		//
		//try
		//{
		//	ReadStuff = gcnew StreamReader(newFile + ".txt");

		//	MessageBox::Show("Starting Disk Read!");
		//}
		//
		////If the user enters a file that does not exists, the program will catch it
		//catch (Exception^ e)
		//{
		//	MessageBox::Show("Sorry, but we could not find that file!");
		//}
	}

	void createTextFile()
	{
		saveFileDialogFilePath->ShowDialog();
		filePath = saveFileDialogFilePath->FileName;
		if (filePath->IndexOf(".txt") > -1) // IndexOf will return a -1 if .txt is not in the string
		{
			WriteStuff = gcnew StreamWriter(filePath);
		}
		else
		{
			filePath += ".txt";
			WriteStuff = gcnew StreamWriter(filePath);
		}

		WriteStuff->Close();
		if (filePath != nullptr)
		{
			labelDescription->Text = Path::GetFileName(filePath) + " has been created.";
			this->Text = Path::GetFileName(filePath) + " - " +  "Project 3TT #6";
		}
	}

private: System::Void newToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
{
	createTextFile();
}

private: System::Void openToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
{
	openTextFile();
}
private: System::Void deleteNameToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
{
	////////////////////////////////////////////////////////////////////
	//
	//				DECLARE LOCAL VARIABLES/OBJECTS
	//
	////////////////////////////////////////////////////////////////////

	String^ userInput = "I should not see this.";

	////////////////////////////////////////////////////////////////////
	
	userInput = IOTextboxInput->Text;
	deleteName(userInput);
}
private: System::Void seToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
{
	SearchName();
}
};
}
