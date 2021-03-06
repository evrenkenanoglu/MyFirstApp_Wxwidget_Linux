/***************************************************************
 * Name:      MyFirstAppMain.h
 * Purpose:   Defines Application Frame
 * Author:     ()
 * Created:   2021-05-11
 * Copyright:  ()
 * License:
 **************************************************************/

#ifndef MYFIRSTAPPMAIN_H
#define MYFIRSTAPPMAIN_H

#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif

#include "MyFirstAppApp.h"

typedef struct
{
    float prev_temp;
    float current_temp;
} tsTemperatureData;

class MyFirstAppFrame : public wxFrame
{
public:
    MyFirstAppFrame(wxFrame* frame, const wxString& title);
    ~MyFirstAppFrame();

private:
    enum
    {
        idMenuQuit = 1000,
        idMenuAbout,
        idButton0,
        idButton1,
        idPanel0,
        idTimer0,
        idTimer1,
        idTimer2,
        idTextCtrl0,
        idTextCtrl0,
        idStaticText0,
        idStaticText1,
        idStaticText2,
        idStaticText3,
        idStaticText4,
        idStaticText5
    };

    enum {
        eModeGreater,
        eModeEqual,
        eModeLower,
    }teModes;

    tsTemperatureData tempPacket;

    wxColour* ColourButtonOFF;
    wxColour* ColourButtonON;

    wxColour* ColourRGB_OFF;

    wxColour* ColourLightGrey;
    wxColour* ColourGreen;
    wxColour* ColourRed;
    wxColour* ColourYellow;

    wxButton* myButton0;
    // wxButton* myButton1;

    wxPanel* myPanel0;

    wxTimer* myTimer0;
    wxTimer* myTimer1;
    wxTimer* myTimer2;

    // wxSlider* mySlider0;

    wxTextCtrl* myTextCtrl0;
    wxTextCtrl* myTextCtrl1;

    wxStaticText* myStaticText0;
    wxStaticText* myStaticText1;
    wxStaticText* myStaticText2;
    // wxStaticText* myStaticText3;
    // wxStaticText* myStaticText4;
    // wxStaticText* myStaticText5;

    void OnClose(wxCloseEvent& event);
    void OnQuit(wxCommandEvent& event);
    void OnAbout(wxCommandEvent& event);

    void init_modules(void);

    void LED0(wxCommandEvent& event);
    void LED1(wxCommandEvent& event);

    void Timer0(wxTimerEvent& event);
    void Timer1(wxTimerEvent& event);
    void Timer2(wxTimerEvent& event);
    void timer_create_start();

    void Slider0(wxScrollEvent& event);

    void PWM_Start(double frequency, double dutyCycle, unsigned int counts, unsigned int mode);
    // void PWM_Change_Freq(double frequency, double dutyCycle, unsigned int counts, unsigned int mode);

    DECLARE_EVENT_TABLE()
};

#endif // MYFIRSTAPPMAIN_H
