#include "wx/wxprec.h"

#include "wx/wx.h"

const wxString appTitle = "ShutdownTimer";

class STApp : public wxApp {
public:
	virtual bool OnInit() wxOVERRIDE;
};

class STFrame : public wxFrame {
public:
	STFrame(const wxString &title);
	void onPressed(wxCommandEvent &event);


private:
	wxChoice *secCho;
	wxChoice *minuCho;
	wxChoice *houCho;
	wxCheckBox *forceMode;
	wxButton *applyProcessBtn;

	wxDECLARE_EVENT_TABLE();
};

wxBEGIN_EVENT_TABLE(STFrame, wxFrame)
EVT_BUTTON(wxID_ANY, STFrame::onPressed)
wxEND_EVENT_TABLE()

bool STApp::OnInit() {
	if(!wxApp::OnInit())
		return false;

	STFrame *stFrame = new STFrame(appTitle);

	stFrame->Show(true);

	return true;
}

STFrame::STFrame(const wxString& title):
	wxFrame(NULL, wxID_ANY, title) {
	wxPanel *panel = new wxPanel( this, wxID_ANY);
	wxBoxSizer *stSizer = new wxBoxSizer( wxVERTICAL );

	wxArrayString str;
	str.Add("No selection");
	str.Add("1");
	str.Add("2");
	str.Add("3");
	str.Add("4");
	str.Add("5");
	str.Add("6");
	str.Add("7");
	str.Add("8");
	str.Add("9");
	str.Add("10");
	str.Add("11");
	str.Add("12");
	str.Add("13");
	str.Add("14");
	str.Add("15");
	str.Add("16");
	str.Add("17");
	str.Add("18");
	str.Add("19");
	str.Add("20");
	str.Add("21");
	str.Add("22");
	str.Add("23");
	str.Add("24");
	str.Add("25");
	str.Add("26");
	str.Add("27");
str.Add("28");
	str.Add("29");
	str.Add("30");
	str.Add("31");
	str.Add("32");
str.Add("33");
str.Add("34");
str.Add("35");
str.Add("36");
str.Add("37");
str.Add("38");
str.Add("39");
str.Add("40");
str.Add("41");
str.Add("42");
str.Add("43");
str.Add("44");
str.Add("45");
str.Add("46");
str.Add("47");
str.Add("48");
str.Add("49");
str.Add("50");
str.Add("51");
str.Add("52");
str.Add("53");
str.Add("54");
str.Add("55");
str.Add("56");
str.Add("57");
str.Add("58");
str.Add("59");
str.Add("60");

	wxStaticText *secLabel = new wxStaticText(panel, wxID_ANY, "Choose second:");
	this->secCho = new wxChoice(panel, wxID_ANY, wxDefaultPosition, wxDefaultSize, str);
	this->secCho->SetSelection(0);
	stSizer->Add(secLabel);
	stSizer->Add(this->secCho);

	wxStaticText *minuLabel = new wxStaticText(panel, wxID_ANY, "Choose minute:");
	this->minuCho = new wxChoice(panel, wxID_ANY, wxDefaultPosition, wxDefaultSize, str);
	this->minuCho->SetSelection(0);
	stSizer->Add(minuLabel);
	stSizer->Add(this->minuCho);

	wxStaticText *houLabel = new wxStaticText(panel, wxID_ANY, "Choose hour:");
	this->houCho = new wxChoice(panel, wxID_ANY, wxDefaultPosition, wxDefaultSize, str);
	this->houCho->SetSelection(0);
	stSizer->Add(houLabel);
	stSizer->Add(this->houCho);

	this->forceMode = new wxCheckBox(panel, wxID_ANY, "Force mode (this mode is closes active processes)");
	stSizer->Add(forceMode );

	this->applyProcessBtn = new wxButton(panel, wxID_ANY, "Start shutdown timer");
	stSizer->Add(applyProcessBtn);

	panel->SetSizer( stSizer);

// 	CreateStatusBar(2);
// 	SetStatusText("");
}


void STFrame::onPressed(wxCommandEvent &event) {
	int sec = this->secCho->GetCurrentSelection();
		int minu = this->minuCho->GetCurrentSelection();
		int hou = this->houCho->GetCurrentSelection();
	int total = 0;
	if(sec == 0 && minu == 0 && hou == 0) {
		wxMessageBox("You must make a choice");
		return;
	}

	if(sec != 0) {
		total += sec;
	}
	if(minu != 0) {
		total += minu*60;
	}
	if(hou != 0) {
		total += hou*60*60;
	}
	wxString command = "shutdown ";
	if(this->forceMode->IsChecked()) {
		command += "/f ";
	}
	command += "/s /t %d";

	system(wxString::Format(command, total));
}

	wxIMPLEMENT_APP(STApp);


