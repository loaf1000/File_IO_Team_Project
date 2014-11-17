
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
Hours			        : Laithe 10, John #, Denmar #
Difficulty			    : Laithe 4, John #, Denmar #
Completion Date		    :November/16/2014
Project Name		    :FileIO_3TT

***************************************************************
***************************************************************

CREDITS

Acknowledge those who helped you and whom you helped
Remember the “triangle of learning”

Thanks for assistance and inspiration from:

Streamwriter
http://msdn.microsoft.com/en-us/library/system.io.streamwriter%28v=vs.110%29.aspx

Streamreader
http://msdn.microsoft.com/en-us/library/system.io.stringreader%28v=vs.110%29.aspx

Thanks for the opportunity to assist and inspire:



***************************************************************
***************************************************************

MEDIA

None

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
	private: System::Windows::Forms::Button^  buttonWrite;
	private: System::Windows::Forms::Button^  buttonRead;
	private: System::Windows::Forms::Button^  buttonExit;
	protected:













	private: System::Windows::Forms::SaveFileDialog^  saveFileDialogFilePath;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialogFilePath;
	private: System::Windows::Forms::MenuStrip^  menuStrip;

	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  newToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  openToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  specialToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  seToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  deleteNameToolStripMenuItem;
	private: System::Windows::Forms::PictureBox^  pictureBoxAlignment;

	private: System::Windows::Forms::Label^  labelDescription;
	private: System::Windows::Forms::ToolStripMenuItem^  read5CharsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  readCharacterToolStripMenuItem;



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
			this->buttonWrite = (gcnew System::Windows::Forms::Button());
			this->buttonRead = (gcnew System::Windows::Forms::Button());
			this->buttonExit = (gcnew System::Windows::Forms::Button());
			this->saveFileDialogFilePath = (gcnew System::Windows::Forms::SaveFileDialog());
			this->openFileDialogFilePath = (gcnew System::Windows::Forms::OpenFileDialog());
			this->menuStrip = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->newToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->specialToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->seToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->deleteNameToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->read5CharsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->readCharacterToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pictureBoxAlignment = (gcnew System::Windows::Forms::PictureBox());
			this->labelDescription = (gcnew System::Windows::Forms::Label());
			this->menuStrip->SuspendLayout();
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
			// buttonWrite
			// 
			this->buttonWrite->Location = System::Drawing::Point(765, 166);
			this->buttonWrite->Name = L"buttonWrite";
			this->buttonWrite->Size = System::Drawing::Size(86, 45);
			this->buttonWrite->TabIndex = 7;
			this->buttonWrite->Text = L"Write Name";
			this->buttonWrite->UseVisualStyleBackColor = true;
			this->buttonWrite->Click += gcnew System::EventHandler(this, &MyForm::buttonWrite_Click);
			// 
			// buttonRead
			// 
			this->buttonRead->Location = System::Drawing::Point(765, 229);
			this->buttonRead->Name = L"buttonRead";
			this->buttonRead->Size = System::Drawing::Size(86, 45);
			this->buttonRead->TabIndex = 9;
			this->buttonRead->Text = L"Read File";
			this->buttonRead->UseVisualStyleBackColor = true;
			this->buttonRead->Click += gcnew System::EventHandler(this, &MyForm::ReadFromFile_Click);
			// 
			// buttonExit
			// 
			this->buttonExit->Location = System::Drawing::Point(907, 694);
			this->buttonExit->Name = L"buttonExit";
			this->buttonExit->Size = System::Drawing::Size(89, 36);
			this->buttonExit->TabIndex = 12;
			this->buttonExit->Text = L"Exit";
			this->buttonExit->UseVisualStyleBackColor = true;
			this->buttonExit->Click += gcnew System::EventHandler(this, &MyForm::ExitButton_Click);
			// 
			// saveFileDialogFilePath
			// 
			this->saveFileDialogFilePath->Filter = L"Text Files (.txt)| *.txt*\"";
			// 
			// openFileDialogFilePath
			// 
			this->openFileDialogFilePath->Filter = L"Text Files (.txt)| *.txt*";
			// 
			// menuStrip
			// 
			this->menuStrip->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->fileToolStripMenuItem,
					this->specialToolStripMenuItem
			});
			this->menuStrip->Location = System::Drawing::Point(0, 0);
			this->menuStrip->Name = L"menuStrip";
			this->menuStrip->Size = System::Drawing::Size(1008, 24);
			this->menuStrip->TabIndex = 13;
			this->menuStrip->Text = L"menuStrip1";
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
			this->specialToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->seToolStripMenuItem,
					this->deleteNameToolStripMenuItem, this->read5CharsToolStripMenuItem, this->readCharacterToolStripMenuItem
			});
			this->specialToolStripMenuItem->Name = L"specialToolStripMenuItem";
			this->specialToolStripMenuItem->Size = System::Drawing::Size(56, 20);
			this->specialToolStripMenuItem->Text = L"Special";
			this->specialToolStripMenuItem->Visible = false;
			this->specialToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::specialToolStripMenuItem_Click);
			// 
			// seToolStripMenuItem
			// 
			this->seToolStripMenuItem->Name = L"seToolStripMenuItem";
			this->seToolStripMenuItem->Size = System::Drawing::Size(168, 22);
			this->seToolStripMenuItem->Text = L"Search for Name";
			this->seToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::searchToolStripMenuItem_Click);
			// 
			// deleteNameToolStripMenuItem
			// 
			this->deleteNameToolStripMenuItem->Name = L"deleteNameToolStripMenuItem";
			this->deleteNameToolStripMenuItem->Size = System::Drawing::Size(168, 22);
			this->deleteNameToolStripMenuItem->Text = L"Delete Name";
			this->deleteNameToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::deleteNameToolStripMenuItem_Click);
			// 
			// read5CharsToolStripMenuItem
			// 
			this->read5CharsToolStripMenuItem->Name = L"read5CharsToolStripMenuItem";
			this->read5CharsToolStripMenuItem->Size = System::Drawing::Size(168, 22);
			this->read5CharsToolStripMenuItem->Text = L"Read 5 Characters";
			this->read5CharsToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::readByIndexToolStripMenuItem_Click);
			// 
			// readCharacterToolStripMenuItem
			// 
			this->readCharacterToolStripMenuItem->Name = L"readCharacterToolStripMenuItem";
			this->readCharacterToolStripMenuItem->Size = System::Drawing::Size(168, 22);
			this->readCharacterToolStripMenuItem->Text = L"Read Character";
			this->readCharacterToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::readCharacterToolStripMenuItem_Click);
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
			this->Controls->Add(this->buttonExit);
			this->Controls->Add(this->buttonRead);
			this->Controls->Add(this->buttonWrite);
			this->Controls->Add(this->IOTextboxInput);
			this->Controls->Add(this->IOTextboxOutput);
			this->Controls->Add(this->labelWelcome);
			this->Controls->Add(this->menuStrip);
			this->Controls->Add(this->pictureBoxAlignment);
			this->MainMenuStrip = this->menuStrip;
			this->Name = L"MyForm";
			this->ShowIcon = false;
			this->Text = L"Project 3TT #6";
			this->menuStrip->ResumeLayout(false);
			this->menuStrip->PerformLayout();
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

//John Carlos
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
						 // To append a file instead of rewriting it using StreamWriter use the StreamWriter constructor 
						 // with two paramaters. 
						 //								file path, bool to append 
						 WriteStuff = gcnew StreamWriter(newFile, true);

						 MessageBox::Show("Appending to file.");
					 }

					 else if (buttonClicked == Windows::Forms::DialogResult::No)
					 {

						 //								file path, bool to append
						 WriteStuff = gcnew StreamWriter(newFile, false);

						 MessageBox::Show("File has been Cleared.");
					 }
				 }
		 }

//John Carlos, Laithe Marshall
void createTextFile()
{
	saveFileDialogFilePath->ShowDialog(); // opens the save file dialog box
	filePath = saveFileDialogFilePath->FileName; // sets filepath to the file name text box in the dialog box

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
		labelDescription->Text = Path::GetFileName(filePath) + " has been created."; //takes the full path of a file and returns just the file name
		this->Text = Path::GetFileName(filePath) + " - " + "Project 3TT #6";
		specialToolStripMenuItem->Visible = true;
	}
}

//Laithe Marshall
void deleteName(String^ userInput)
{
	////////////////////////////////////////////////////////////////////
	//
	//				DECLARE LOCAL VARIABLES/OBJECTS
	//
	////////////////////////////////////////////////////////////////////

	// An ArrayList is similar to an array execpt it can dynamically change
	// in size and can have different types of objects in it.
	ArrayList textFile; 
	String^ tempString;
	int counter = 0;

	////////////////////////////////////////////////////////////////////

	try //We are going to "try" the following code. If we get an error we go to the "catch".
	{
		ReadStuff = gcnew StreamReader(filePath);

		while ((tempString = ReadStuff->ReadLine()) != nullptr)
		{
			textFile.Add(tempString); // Adds tempString to the next position in the ArrayList.
			counter++;
		}

		ReadStuff->Close();

		textFile.Remove(userInput); // Removes the name entered by the user.

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

	catch (Exception^ e) //Here we "catch" the error code(Execption^ e) and display it.
	{
		MessageBox::Show("No file Selected", "ERROR");
	}
}

//John Carlos, Laithe Marshall
void openTextFile()
{
	openFileDialogFilePath->ShowDialog(); // opens the open file dialog box
	filePath = openFileDialogFilePath->FileName; // sets filepath to the file name text box in the dialog box

	if (filePath != nullptr)
	{
		labelDescription->Text = Path::GetFileName(filePath) + " has been opened.";
		this->Text = Path::GetFileName(filePath) + " - " + "Project 3TT #6";
		specialToolStripMenuItem->Visible = true;
	}

}

//Laithe Marshall
void readChar()
{

	try //We are going to "try" the following code. If we get an error we go to the "catch".
	{
		ReadStuff = gcnew StreamReader(filePath);

		IOTextboxOutput->Clear();

		labelDescription->Text = Path::GetFileName(filePath) + " has been read.";
		
		// The peek method returns an integer value of the next character to be read or a -1 if there are no more characters.
		//IOTextboxOutput->Text = ((Char)ReadStuff->Peek()).ToString();

		
		while (ReadStuff->Peek() > -1)
		{
			
			//Read method returns the unicode code of the character read, we cast it to Char to get the character instead of the code. 
			// http://unicode-table.com/en/ will give you codes for each character.

			IOTextboxOutput->Text += ((Char)ReadStuff->Read()) + "\n";

			//Try removing the cast and see if the code matches the character
		}
		ReadStuff->Close();
	}
	catch (Exception^ e) //Here we "catch" the error code(Execption^ e) and display it.
	{
		MessageBox::Show("Error: " + e, "ERROR");
	}

}

//John Carlos, Laithe Marshall
void readFile()
{
	///////////////////////////////////////////////////////////////////////////

	//			LOCAL OBJECT/VARIABLE DECLARATIONS

	///////////////////////////////////////////////////////////////////////////

	String^ readString;

	/////////////////////////////////////////////////////////////////////////// 
	try //We are going to "try" the following code. If we get an error we go to the "catch".
	{
		ReadStuff = gcnew StreamReader(filePath);

		IOTextboxOutput->Clear();

		labelDescription->Text = Path::GetFileName(filePath) + " has being read.";
		//Reads every line and echoes
		do
		{
			readString = ReadStuff->ReadLine();

			IOTextboxOutput->Text += readString + "\n";

			//Do not want the Blank line to be echoed!
		} while (readString != nullptr);

		// While implementation of the above
		/*while ((readString = ReadStuff->ReadLine()) != nullptr)
		{
		IOTextboxOutput->Text += readString + "\n";
		}


		//Can also do this to read the whole file
		//This way you won't need a loop!
		/*
		readString = ReadStuff->ReadToEnd();
		IOTextboxOutput->Text = readString;
		*/

		ReadStuff->Close();
	}

	catch (Exception^ e) //Here we "catch" the error code(Execption^ e) and display it.
	{
		MessageBox::Show("Error: " + e, "ERROR");
	}
}

//Laithe Marshall
void readNumberOfChars()
{
	String^ readString;
	// creates a new Char array and sets it length to 5 change
	array<Char>^ charArray = gcnew array<Char>(5);

	try //We are going to "try" the following code. If we get an error we go to the "catch".
	{
		ReadStuff = gcnew StreamReader(filePath);

		IOTextboxOutput->Clear();

		labelDescription->Text = Path::GetFileName(filePath) + " has been read.";

		// The peek method returns an integer value of the next character to be read or a -1 if there are no more characters.
		//IOTextboxOutput->Text = ((Char)ReadStuff->Peek()).ToString();
	
		while (ReadStuff->Peek() > -1)
		{ 
			//array characters are stored in, index start of the array, end index of the array
			ReadStuff->Read(charArray, 0, charArray->Length);
			
			//creates a string from the array
			readString = gcnew String(charArray); 
			

			IOTextboxOutput->Text += readString + "\n";

		}
		ReadStuff->Close();
	}

	catch (Exception^ e) //Here we "catch" the error code(Execption^ e) and display it.
	{
		MessageBox::Show("Error: " + e, "ERROR");
	}
}

//John Carlos
void searchName()
{
	///////////////////////////////////////////////////////////////////////////

	//			LOCAL OBJECT/VARIABLE DECLARATIONS

	///////////////////////////////////////////////////////////////////////////

	String^ searchName;
	String^ fileUserName;
	bool searchDone = false;

	/////////////////////////////////////////////////////////////////////////// 

	try //We are going to "try" the following code. If we get an error we go to the "catch".
	{
		searchName = IOTextboxInput->Text;

		ReadStuff = gcnew StreamReader(filePath);

		while (!searchDone)
		{
			fileUserName = ReadStuff->ReadLine();

			MessageBox::Show(searchName + " : " + fileUserName);

			if ((fileUserName = ReadStuff->ReadLine()) == fileUserName)
			{
				searchDone = true;
				MessageBox::Show("Found a match: " + fileUserName);


			}
			else
			{
				searchDone = true;
				MessageBox::Show("Sorry, but we did not find a match.");
			}
		}

		ReadStuff->Close();
	}
	catch (Exception^ e) //Here we "catch" the error code(Execption^ e) and display it.
	{
		MessageBox::Show("Error: " + e, "ERROR");
	}
}

//John Carlos, Laithe Marshall
void writeToFile()
	{
		///////////////////////////////////////////////////////////////////////////

		//			LOCAL OBJECT/VARIABLE DECLARATIONS

		///////////////////////////////////////////////////////////////////////////

		String^ userInput;

		/////////////////////////////////////////////////////////////////////////// 
		
		try //We are going to "try" the following code. If we get an error we go to the "catch".
		{
			////////////////////////////////////////////////////////////////////
			//
			//				DECLARE LOCAL VARIABLES/OBJECTS
			//
			////////////////////////////////////////////////////////////////////

			String^ phrase = "Please enter something to write to a textfile. Enter \"end\" in the textbox to finish writing.";

			////////////////////////////////////////////////////////////////////

			userInput = IOTextboxInput->Text;

			
			if (writeModeActivated)
			{
				if (IOTextboxOutput->Text == phrase)
				{
					IOTextboxOutput->Clear();
				}

				//end is the sentinel
				if (userInput->ToLower() != "end")
				{
					userInput = IOTextboxInput->Text;

					WriteStuff->WriteLine(userInput); //What happens if we use Write instead of WriteLine?
					//WriteStuff->Write(userInput);

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

				if (!writeModeActivated)
				{

					AppendFile(filePath);

					writeModeActivated = true;
					IOTextboxOutput->Text = phrase;

				}
			}
		}
		catch (Exception ^ e) //Here we "catch" the error code(Execption^ e) and display it, we can put other code here as well.
		{
			MessageBox::Show("Error: " + e , "ERROR");
			writeModeActivated = false;
		}

		
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

private: System::Void ExitButton_Click(System::Object^  sender, System::EventArgs^  e)
{
	Close();
}

private: System::Void newToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
{
	createTextFile();
}

private: System::Void openToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
{
	openTextFile();
}

private: System::Void searchToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
{
	searchName();
}

private: System::Void readByIndexToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
{
	readNumberOfChars();
}

private: System::Void buttonWrite_Click(System::Object^  sender, System::EventArgs^  e)
{
	writeToFile();
}

private: System::Void ReadFromFile_Click(System::Object^  sender, System::EventArgs^  e)
{
	readFile();
}

private: System::Void readCharacterToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
{
	readChar();
}
private: System::Void specialToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
{
	if (labelDescription->Text->IndexOf("\n") < -1)
	{
		labelDescription->Text += "\nPlease enter a name to search for to delete a name or search for a name.";
	}
}
};
}

/*///////////////////////////////////////////////////////////////////

If you spend too much time thinking about a thing, you'll never get it done.

							Bruce Lee
Added by Laithe
///////////////////////////////////////////////////////////////////*/