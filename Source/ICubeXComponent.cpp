/*
  ==============================================================================

  This is an automatically generated GUI class created by the Introjucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Introjucer version: 3.1.1

  ------------------------------------------------------------------------------

  The Introjucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright 2004-13 by Raw Material Software Ltd.

  ==============================================================================
*/

//[Headers] You can add your own extra header files here...
//[/Headers]

#include "ICubeXComponent.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
ICubeXComponent::ICubeXComponent ()
{
    //[Constructor_pre] You can add your own custom stuff here..
    //[/Constructor_pre]

    addAndMakeVisible (comboBoxMidiIn = new ComboBox ("midi in box"));
    comboBoxMidiIn->setTooltip (TRANS("list of MIDI inputs"));
    comboBoxMidiIn->setEditableText (false);
    comboBoxMidiIn->setJustificationType (Justification::centredLeft);
    comboBoxMidiIn->setTextWhenNothingSelected (TRANS("select input"));
    comboBoxMidiIn->setTextWhenNoChoicesAvailable (TRANS("(no ports available)"));
    comboBoxMidiIn->addListener (this);

    addAndMakeVisible (comboBoxMidiOut = new ComboBox ("midi out box"));
    comboBoxMidiOut->setTooltip (TRANS("list of MIDI outputs"));
    comboBoxMidiOut->setEditableText (false);
    comboBoxMidiOut->setJustificationType (Justification::centredLeft);
    comboBoxMidiOut->setTextWhenNothingSelected (TRANS("select output"));
    comboBoxMidiOut->setTextWhenNoChoicesAvailable (TRANS("(no ports available)"));
    comboBoxMidiOut->addListener (this);

    addAndMakeVisible (textButtonRefreshPorts = new TextButton ("refresh port button"));
    textButtonRefreshPorts->setTooltip (TRANS("refresh MIDI ports"));
    textButtonRefreshPorts->setButtonText (TRANS("Refresh Ports"));
    textButtonRefreshPorts->addListener (this);

    addAndMakeVisible (toggleButtonSensors = new ToggleButton ("sensors toggle button"));
    toggleButtonSensors->setTooltip (TRANS("toggle sensors here"));
    toggleButtonSensors->setButtonText (TRANS("sensors active"));
    toggleButtonSensors->addListener (this);

    addAndMakeVisible (textButtonAutoConnect = new TextButton ("auto connect button"));
    textButtonAutoConnect->setTooltip (TRANS("automatically try connect to ICubeX port"));
    textButtonAutoConnect->setButtonText (TRANS("Auto Connect"));
    textButtonAutoConnect->addListener (this);

    addAndMakeVisible (labelSensor1 = new Label ("new label",
                                                 TRANS("sensor")));
    labelSensor1->setFont (Font (15.00f, Font::plain));
    labelSensor1->setJustificationType (Justification::centredLeft);
    labelSensor1->setEditable (false, false, false);
    labelSensor1->setColour (Label::textColourId, Colours::blue);
    labelSensor1->setColour (TextEditor::textColourId, Colours::black);
    labelSensor1->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (labelSensor2 = new Label ("new label",
                                                 TRANS("sensor")));
    labelSensor2->setFont (Font (15.00f, Font::plain));
    labelSensor2->setJustificationType (Justification::centredLeft);
    labelSensor2->setEditable (false, false, false);
    labelSensor2->setColour (Label::textColourId, Colours::green);
    labelSensor2->setColour (TextEditor::textColourId, Colours::black);
    labelSensor2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (labelSensor3 = new Label ("new label",
                                                 TRANS("sensor")));
    labelSensor3->setFont (Font (15.00f, Font::plain));
    labelSensor3->setJustificationType (Justification::centredLeft);
    labelSensor3->setEditable (false, false, false);
    labelSensor3->setColour (Label::textColourId, Colours::blueviolet);
    labelSensor3->setColour (TextEditor::textColourId, Colours::black);
    labelSensor3->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (labelSensor4 = new Label ("new label",
                                                 TRANS("sensor")));
    labelSensor4->setFont (Font (15.00f, Font::plain));
    labelSensor4->setJustificationType (Justification::centredLeft);
    labelSensor4->setEditable (false, false, false);
    labelSensor4->setColour (Label::textColourId, Colours::cornflowerblue);
    labelSensor4->setColour (TextEditor::textColourId, Colours::black);
    labelSensor4->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (labelSensor5 = new Label ("new label",
                                                 TRANS("sensor")));
    labelSensor5->setFont (Font (15.00f, Font::plain));
    labelSensor5->setJustificationType (Justification::centredLeft);
    labelSensor5->setEditable (false, false, false);
    labelSensor5->setColour (Label::textColourId, Colour (0xff2ab483));
    labelSensor5->setColour (TextEditor::textColourId, Colours::black);
    labelSensor5->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (labelSensor6 = new Label ("new label",
                                                 TRANS("sensor")));
    labelSensor6->setFont (Font (15.00f, Font::plain));
    labelSensor6->setJustificationType (Justification::centredLeft);
    labelSensor6->setEditable (false, false, false);
    labelSensor6->setColour (Label::textColourId, Colours::brown);
    labelSensor6->setColour (TextEditor::textColourId, Colours::black);
    labelSensor6->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (labelSensor7 = new Label ("new label",
                                                 TRANS("sensor")));
    labelSensor7->setFont (Font (15.00f, Font::plain));
    labelSensor7->setJustificationType (Justification::centredLeft);
    labelSensor7->setEditable (false, false, false);
    labelSensor7->setColour (Label::textColourId, Colour (0xffe81dd5));
    labelSensor7->setColour (TextEditor::textColourId, Colours::black);
    labelSensor7->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (labelSensor8 = new Label ("new label",
                                                 TRANS("sensor")));
    labelSensor8->setFont (Font (15.00f, Font::plain));
    labelSensor8->setJustificationType (Justification::centredLeft);
    labelSensor8->setEditable (false, false, false);
    labelSensor8->setColour (TextEditor::textColourId, Colours::black);
    labelSensor8->setColour (TextEditor::backgroundColourId, Colour (0x00000000));


    //[UserPreSize]

    //init device manager
    myDeviceManager = new AudioDeviceManager();
    myDeviceManager->initialise(2, 2, 0, true, String::empty, 0);

    //start mapper interface
    myMapperInterface = new MapperInterface();
    DBG("starting mapper thread...\n");
    myMapperInterface->startThread();
    DBG("... started!\n");

    //colour for plots
    //NamedValueSet props = labelSensor1->getProperties();
    //Colour* col = (Colour*)props.getVarPointerAt(Label::textColourId);
    //mySigPlotter->SetPlotColour(0, *col);

    //other init stuff here
    RefreshPorts();

    //[/UserPreSize]

    setSize (600, 200);


    //[Constructor] You can add your own custom stuff here..
    //[/Constructor]
}

ICubeXComponent::~ICubeXComponent()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    comboBoxMidiIn = nullptr;
    comboBoxMidiOut = nullptr;
    textButtonRefreshPorts = nullptr;
    toggleButtonSensors = nullptr;
    textButtonAutoConnect = nullptr;
    labelSensor1 = nullptr;
    labelSensor2 = nullptr;
    labelSensor3 = nullptr;
    labelSensor4 = nullptr;
    labelSensor5 = nullptr;
    labelSensor6 = nullptr;
    labelSensor7 = nullptr;
    labelSensor8 = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    if (myMapperInterface != NULL)
    {
        DBG("quit called from main window\n");
        myMapperInterface->stopThread(2000);
        DBG("mapperInterface thread stopped\n");
        //delete myMapperInterface;
    }
    myMidiOut = nullptr;
    myDeviceManager = nullptr;
    //[/Destructor]
}

//==============================================================================
void ICubeXComponent::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colours::white);

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void ICubeXComponent::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    comboBoxMidiIn->setBounds (8, 8, 150, 24);
    comboBoxMidiOut->setBounds (8, 40, 150, 24);
    textButtonRefreshPorts->setBounds (168, 8, 95, 24);
    toggleButtonSensors->setBounds (24, 122, 150, 24);
    textButtonAutoConnect->setBounds (168, 40, 95, 24);
    labelSensor1->setBounds (8, 68, 64, 24);
    labelSensor2->setBounds (72, 68, 64, 24);
    labelSensor3->setBounds (136, 68, 64, 24);
    labelSensor4->setBounds (200, 68, 64, 24);
    labelSensor5->setBounds (8, 92, 64, 24);
    labelSensor6->setBounds (72, 92, 64, 24);
    labelSensor7->setBounds (136, 92, 64, 24);
    labelSensor8->setBounds (200, 92, 64, 24);
    //[UserResized] Add your own custom resize handling here..

    //[/UserResized]
}

void ICubeXComponent::comboBoxChanged (ComboBox* comboBoxThatHasChanged)
{
    //[UsercomboBoxChanged_Pre]
    //[/UsercomboBoxChanged_Pre]

    if (comboBoxThatHasChanged == comboBoxMidiIn)
    {
        //[UserComboBoxCode_comboBoxMidiIn] -- add your combo box handling code here..

        int idx = comboBoxMidiIn->getSelectedItemIndex();
        SelectMidiIn(idx);
        //[/UserComboBoxCode_comboBoxMidiIn]
    }
    else if (comboBoxThatHasChanged == comboBoxMidiOut)
    {
        //[UserComboBoxCode_comboBoxMidiOut] -- add your combo box handling code here..
        int idx = comboBoxMidiOut->getSelectedItemIndex();
        SelectMidiOut(idx);
        //[/UserComboBoxCode_comboBoxMidiOut]
    }

    //[UsercomboBoxChanged_Post]
    //[/UsercomboBoxChanged_Post]
}

void ICubeXComponent::buttonClicked (Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == textButtonRefreshPorts)
    {
        //[UserButtonCode_textButtonRefreshPorts] -- add your button handler code here..

        RefreshPorts();

        //[/UserButtonCode_textButtonRefreshPorts]
    }
    else if (buttonThatWasClicked == toggleButtonSensors)
    {
        //[UserButtonCode_toggleButtonSensors] -- add your button handler code here..
        for (int i=0; i<kNUM_ICUBEX_SENSORS; i++)
        {
            SendStream(!my_digitizer_state_.GetIsSensorOnState(0), i);
        }
        //[/UserButtonCode_toggleButtonSensors]
    }
    else if (buttonThatWasClicked == textButtonAutoConnect)
    {
        //[UserButtonCode_textButtonAutoConnect] -- add your button handler code here..
        //[/UserButtonCode_textButtonAutoConnect]
    }

    //[UserbuttonClicked_Post]
    //[/UserbuttonClicked_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...

void ICubeXComponent::RefreshPorts()
{
    comboBoxMidiIn->clear();
    comboBoxMidiOut->clear();
    for (int i=0; i<MidiInput::getDevices().size(); i++)
    {
        AddMidiIn(MidiInput::getDevices()[i]);
    }
    for (int i=0; i<MidiOutput::getDevices().size(); i++)
    {
        AddMidiOut(MidiOutput::getDevices()[i]);
    }
}

void ICubeXComponent::AddMidiIn(const juce::String &name)
{
    comboBoxMidiIn->addItem(name, comboBoxMidiIn->getNumItems()+1);
}

void ICubeXComponent::AddMidiOut(const juce::String &name)
{
    comboBoxMidiOut->addItem(name, comboBoxMidiOut->getNumItems()+1);
}

void ICubeXComponent::SelectMidiIn(int idx)
{
    const StringArray list(MidiInput::getDevices());
    const String newInput(list[idx]);

    if (! myDeviceManager->isMidiInputEnabled(newInput)) {
        myDeviceManager->setMidiInputEnabled(newInput, true);
        myDeviceManager->addMidiInputCallback(newInput, this);

    }

    DBG("added midi input callback to " + newInput + "\n");
}

void ICubeXComponent::SelectMidiOut(int idx)
{
    const StringArray list(MidiOutput::getDevices());
    const String newOutput(list[idx]);

    myDeviceManager->setDefaultMidiOutput(newOutput);

//    myDeviceManager->getDefaultMidiOutput();
//    MidiMessage msg(0xff);
//    if (myMidiOut != nullptr)
//        myMidiOut->sendMessageNow(msg);
    SendReset();

    DBG("selected midi out " + newOutput);
}

void ICubeXComponent::handleIncomingMidiMessage (MidiInput* source, const MidiMessage& message)
{
    if (message.isSysEx())
    {
        std::vector<unsigned char> data;
        data.reserve(message.getSysExDataSize()+2);
        data.insert(data.begin(), 0xF0);
        for (int i=0; i<message.getSysExDataSize(); i++)
        {
            data.insert(data.end(), message.getSysExData()[i]);
            //DBG(String((unsigned int)(message.getSysExData()[i]))+ " ");
        }
        data.insert(data.end(), 0xF7);
        ParseSysEx(data);
    }

    //this is some needless array/vector data conversion right here
    std::vector<int> newVec;
    unsigned arraySize = kNUM_ICUBEX_SENSORS;
    newVec.insert(newVec.end(), &my_digitizer_state_.GetSensorValsArray()[0], &my_digitizer_state_.GetSensorValsArray()[arraySize]);
    myMapperInterface->updateVals(newVec);
    //mySigPlotter->updateSigs(my_digitizer_state_.GetSensorValsArray());


    //we only have 8 fixed sensors...
    //but still should probably auto generate GUI elements in the future and do away
    //with this terrible hardcoding...


    MessageManagerLock mml;
    if (mml.lockWasGained()) {
        labelSensor1->setText(String(my_digitizer_state_.GetSensorValState(0)), dontSendNotification);
        labelSensor2->setText(String(my_digitizer_state_.GetSensorValState(1)), dontSendNotification);
        labelSensor3->setText(String(my_digitizer_state_.GetSensorValState(2)), dontSendNotification);
        labelSensor4->setText(String(my_digitizer_state_.GetSensorValState(3)), dontSendNotification);
        labelSensor5->setText(String(my_digitizer_state_.GetSensorValState(4)), dontSendNotification);
        labelSensor6->setText(String(my_digitizer_state_.GetSensorValState(5)), dontSendNotification);
        labelSensor7->setText(String(my_digitizer_state_.GetSensorValState(6)), dontSendNotification);
        labelSensor8->setText(String(my_digitizer_state_.GetSensorValState(7)), dontSendNotification);
    }
    //DBG("\nmidi msg received: \n");

}

void ICubeXComponent::handlePartialSysexMessage(MidiInput* input, const uint8 *msg, int numBytesSoFar, double timestamp)
{
    //send it off to the I-CubeX parser here!!
    DBG("sysex msg received\n");
}

void ICubeXComponent::sendSysExCmd()
{
    std::vector<unsigned char> sendBuff = getSysExBuffer();
    unsigned char* ptrData = new unsigned char[sendBuff.size()];
    for (int i=0; i<sendBuff.size(); i++) {
        ptrData[i] = sendBuff.at(i);
    }
    DBG("size of data =" + String((int)sendBuff.size()));
    MidiMessage msg(ptrData, sendBuff.size()); //living dangerously
    if (myDeviceManager->getDefaultMidiOutput() != nullptr)
        myDeviceManager->getDefaultMidiOutput()->sendMessageNow(msg);
}
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Introjucer information section --

    This is where the Introjucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="ICubeXComponent" componentName=""
                 parentClasses="public Component, public ICubeXInterface, public MidiInputCallback"
                 constructorParams="" variableInitialisers="" snapPixels="8" snapActive="1"
                 snapShown="1" overlayOpacity="0.330" fixedSize="0" initialWidth="600"
                 initialHeight="200">
  <BACKGROUND backgroundColour="ffffffff"/>
  <COMBOBOX name="midi in box" id="6d56b5526b211a0b" memberName="comboBoxMidiIn"
            virtualName="" explicitFocusOrder="0" pos="8 8 150 24" tooltip="list of MIDI inputs"
            editable="0" layout="33" items="" textWhenNonSelected="select input"
            textWhenNoItems="(no ports available)"/>
  <COMBOBOX name="midi out box" id="7d9929464830b002" memberName="comboBoxMidiOut"
            virtualName="" explicitFocusOrder="0" pos="8 40 150 24" tooltip="list of MIDI outputs"
            editable="0" layout="33" items="" textWhenNonSelected="select output"
            textWhenNoItems="(no ports available)"/>
  <TEXTBUTTON name="refresh port button" id="9393238952627389" memberName="textButtonRefreshPorts"
              virtualName="" explicitFocusOrder="0" pos="168 8 95 24" tooltip="refresh MIDI ports"
              buttonText="Refresh Ports" connectedEdges="0" needsCallback="1"
              radioGroupId="0"/>
  <TOGGLEBUTTON name="sensors toggle button" id="3771bf04353d3be1" memberName="toggleButtonSensors"
                virtualName="" explicitFocusOrder="0" pos="24 122 150 24" tooltip="toggle sensors here"
                buttonText="sensors active" connectedEdges="0" needsCallback="1"
                radioGroupId="0" state="0"/>
  <TEXTBUTTON name="auto connect button" id="b54ab90f08d157a3" memberName="textButtonAutoConnect"
              virtualName="" explicitFocusOrder="0" pos="168 40 95 24" tooltip="automatically try connect to ICubeX port"
              buttonText="Auto Connect" connectedEdges="0" needsCallback="1"
              radioGroupId="0"/>
  <LABEL name="new label" id="96fa6019cd20e93" memberName="labelSensor1"
         virtualName="" explicitFocusOrder="0" pos="8 68 64 24" textCol="ff0000ff"
         edTextCol="ff000000" edBkgCol="0" labelText="sensor" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="e3902ee2234690f9" memberName="labelSensor2"
         virtualName="" explicitFocusOrder="0" pos="72 68 64 24" textCol="ff008000"
         edTextCol="ff000000" edBkgCol="0" labelText="sensor" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="4d2ec8bc35a78fda" memberName="labelSensor3"
         virtualName="" explicitFocusOrder="0" pos="136 68 64 24" textCol="ff8a2be2"
         edTextCol="ff000000" edBkgCol="0" labelText="sensor" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="ef80babd10d6f897" memberName="labelSensor4"
         virtualName="" explicitFocusOrder="0" pos="200 68 64 24" textCol="ff6495ed"
         edTextCol="ff000000" edBkgCol="0" labelText="sensor" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="705c5368a7bf0b51" memberName="labelSensor5"
         virtualName="" explicitFocusOrder="0" pos="8 92 64 24" textCol="ff2ab483"
         edTextCol="ff000000" edBkgCol="0" labelText="sensor" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="c3939c3b937756aa" memberName="labelSensor6"
         virtualName="" explicitFocusOrder="0" pos="72 92 64 24" textCol="ffa52a2a"
         edTextCol="ff000000" edBkgCol="0" labelText="sensor" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="5af2718dd3fc93d7" memberName="labelSensor7"
         virtualName="" explicitFocusOrder="0" pos="136 92 64 24" textCol="ffe81dd5"
         edTextCol="ff000000" edBkgCol="0" labelText="sensor" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="539233305d9aeeb5" memberName="labelSensor8"
         virtualName="" explicitFocusOrder="0" pos="200 92 64 24" edTextCol="ff000000"
         edBkgCol="0" labelText="sensor" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
