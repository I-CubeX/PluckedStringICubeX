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

#ifndef __JUCE_HEADER_B370AAF803B10112__
#define __JUCE_HEADER_B370AAF803B10112__

//[Headers]     -- You can add your own extra header files here --
#include "JuceHeader.h"
#include "MapperInterface.h"
#include "ICubeXInteface.h"
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Introjucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class ICubeXComponent  : public Component,
                         public ICubeXInterface,
                         public MidiInputCallback,
                         public ComboBoxListener,
                         public ButtonListener
{
public:
    //==============================================================================
    ICubeXComponent ();
    ~ICubeXComponent();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    void RefreshPorts();
    void AddMidiIn(const String& name);
    void AddMidiOut(const String& name);
    void handleIncomingMidiMessage (MidiInput* source,
                                         const MidiMessage& message);
    void handlePartialSysexMessage(MidiInput* source,
                                   const uint8* messageData,
                                   int numBytesSoFar,
                                   double timestamp);

    static AudioDeviceManager& getSharedAudioDeviceManager();
    void SelectMidiIn(int idx);
    void SelectMidiOut(int idx);
    void sendSysExCmd() override;
    //[/UserMethods]

    void paint (Graphics& g);
    void resized();
    void comboBoxChanged (ComboBox* comboBoxThatHasChanged);
    void buttonClicked (Button* buttonThatWasClicked);



private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    ScopedPointer<MapperInterface> myMapperInterface;
    ScopedPointer<MidiInput> myMidiIn;
    ScopedPointer<MidiOutput> myMidiOut;
    ScopedPointer<AudioDeviceManager> myDeviceManager;
    //[/UserVariables]

    //==============================================================================
    ScopedPointer<ComboBox> comboBoxMidiIn;
    ScopedPointer<ComboBox> comboBoxMidiOut;
    ScopedPointer<TextButton> textButtonRefreshPorts;
    ScopedPointer<ToggleButton> toggleButtonSensors;
    ScopedPointer<TextButton> textButtonAutoConnect;
    ScopedPointer<Label> labelSensor1;
    ScopedPointer<Label> labelSensor2;
    ScopedPointer<Label> labelSensor3;
    ScopedPointer<Label> labelSensor4;
    ScopedPointer<Label> labelSensor5;
    ScopedPointer<Label> labelSensor6;
    ScopedPointer<Label> labelSensor7;
    ScopedPointer<Label> labelSensor8;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (ICubeXComponent)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

#endif   // __JUCE_HEADER_B370AAF803B10112__
