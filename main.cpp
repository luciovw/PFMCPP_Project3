 /*
 Project 3 - Part 2 / 5
 Video: Chapter 2 Part 6
 Implementations tasks
 
Create a branch named Part2

 tasks
 0) delete all of the plain english pseudo-code you added in Part1.
   - you should be left with only your UDTs.

 1) write the definition for the Type that leftFoot and rightFoot are instantiations of.
    don't forget to define and implement the member functions 'stepForward()' and 'stepSize()'
    you should be able to deduce the return type of those functions based on their usage in Person::run()
    You'll need to insert the Person struct from the video in the space below.
 */





 /*
 2) provide implementations for the member functions you declared in your 10 user-defined types from the previous video outside of your UDT definitions.
    If you decide to write empty functions, you will need to fill them in with code in part 3.
 
 3) be sure to write the correct full qualified name for the nested type's member functions.
 
 4) After you finish defining each type/function, click the [run] button.  Clear up any errors or warnings as best you can.
 */


// 1
struct CodingLanguage
{
    //number of data types
    int numDataTypes = 7;
    //number of function/return types
    int numFunctionTypes = 3;
    //number of operators
    int numOperatorTypes = 6;
    //number of methods of punctuation
    int numPunctuationTypes = 5;
    //speed of compiler - bits/sec
    int compilerBit_Sec = 1000000;
    //3 things it can do:
    // 1)create functions and run functions from libraries
    int createIntFunction(int variable1, int variable2);
    // 2) create data structures to store info
    int createArray(float inputData, int arraySize);
    // 3) compile to machine code
    void compileCode(float code);
};
//2
struct RecordingStudio
{
    //number of channels on console
    int numConsoleChannels = 64;
    //number of compressors
    int numCompressors = 12;
    //number of time-based effects units
    int numTimeFXUnits = 8;
    //number of monitoring options
    int numMonitorPairs = 4;

    struct LiveRoom
    {
        //size in sqr feet
        double roomSize = 2010.4;
        //height in feet
        double ceilingHeight = 14.5;
        //reverb time seconds
        double RT60 = 1.001;
        //number of microphones
        int numMicrophones = 22;
        //mic stand height inches
        double micStandHeight = 40.5;

        void adjustMicStandHeight(double initHeight, double newHeight);
        void moveBaffle(double initPosition, double newPosition);
        void micDrumSet(int numDrums, int numMicrophones);
    };

    // 3 things it can do:
    //1) Record music
    void recordMusic(float music, int storageType);
    //2) Mix music
    void mixMusic (float channel1Data, float channel2Data, float channel3Data);
    //3) Host concerts
    void hostConcert (int numPerformers, int numGuests);

    LiveRoom roomA;
    LiveRoom roomB;
};


//3
struct ElectricGuitar
{
    //number of strings
    int numStrings = 6;
    //number of frets
    int numFrets = 20;
    //number of pick ups
    int numPickUps = 2;
    //number of pick up positions
    int numPickupPositions = 5;
    //number of knobs
    int numKnobs = 3;
    // 3 things it can do:
    //1) amplify sound from string vibrations
    float amplifyStringVibration(int stringNum, float stringFreq);
    //2) produce a warm tone
    float warmTone (float noteInfo);
    //3) produce a bright tone 
    float brightTone (float noteInfo);
};
//4
struct RefrigeratorFreezer
{
    //number of shelves
    int numShelves = 4;
    //number of drawers
    int numDrawers = 3;
    //temperature level value - celsius
    double tempVal = 7;
    //size of ice-machine - volume
    double sizeIceMachine = 40;
    //size of entire-unit - volume
    double sizeEntireUnit = 700;
    // 3 things it can do:
    //1) chill food
    void chillFood(double tempVal);
    //2) freeze food
    void freezeFood(double tempVal);
    //3) separate food
    int separateFood(int initDrawerNum, int newDrawerNum);
};
//5
struct MidiPads
{
    //velocity sensitive
    int padVelocity = 127;
    //hardness of rubber
    double padHardness  = 8.3;
    //size of pad
    double sizeOfPad = 3.3;
    //number of pads
    int numPads = 16;
    //pads' midi value
    std::string midiCC = "Midi CC #10";
    // 3 things it can do:
    //1) trigger sampler
    void triggerSample(int triggerInput, int channelDestination);
    //2) send note data
    void sendNoteData(int noteData, int channelDestination);
    //3) send velocity data
    void sendVelocityData(int velocityData, int channelDestination);
};
//6
struct TransportButtons
{
    //button size
    double buttonSize = 1.1;
    //button hardness
    double buttonHardness = 30.8;
    //button pressure resitance
    double buttonPressureResitance = 100.2;
    //button press message type
    int buttonMessageType = 0;
    //button response time
    double buttonResponseTime = 0.01;
    // 3 things it can do:
    //1) start session audio
    void startSessionAudio(int session, double playStart);
    //2) pause session audio
    void pauseSessionAudio(int session);
    //3) reset play head position to Bar 0
    void resetPlayhead(int session, double playheadPosition);
};
//7
struct Screen
{
    //brightness
    double screenBrightness = 8.5;
    //hue
    std::string hue = "Blue";
    //size
    double screenSize = 35.2;
    //Boarder perimeter width
    double boarderPerimeterWidth = 2.4;
    //touch sensitivity
    double touchSensitivity = 2.3;
    // 3 things it can do:
    //1) Scroll 
    void screenScroll(double screenPosition, double scrollSpeed);
    //2) click via touch
    bool touchClick (bool pressed);
    //3) control fx via touchbars sending midi cc's
    void controlCC(std::string midiCCNum, int ccData);
};
//8
struct AudioIO
{
    //analog to digital conversion
    float adc = -0.45f;
    //digital to analog conversion
    float dac = 1.2f;
    //sample rate
    int sampleRate= 44100;
    //buffer size
    int bufferSize = 128;
    //audio file type
    std::string fileType = ".wav";
    // 3 things it can do:
    //1) convert analog signal to digital signals
    void ADC (float analogSignal, float digitalSignal);
    //2) convert digital signal to analog signals
    void Dac (float digitalSignal, float analogSignal);
    //3) write converted analog signals to storage
    float storeSignal(float signalToStore, std::string fileType);
};
//9
struct AudioApplication
{
    //ratio
    float ratio = 5.5f;
    //threshold
    float threshold = -19.5f;
    //decay time
    float decayTime = 3.4f;
    //pre-delay
    float preDelay = 10.2f;
    //transpose
    int transpose = -7;
    // 3 things it can do:
    //1) control dynamic range
    float compress(float input, float ratio, float threshold);
    //2) emulate physical spaces
    float reverberate(float input, float roomSize);
    //3) transpose audio by semitones
    float semitoneTranspose(float input, int transposeVal);
};
//10
struct MPCLive
{
    //Midi Pads
    MidiPads midiPads16;
    //Menu/Transport Buttons
    TransportButtons transports;
    //Screen
    Screen smallScreen;
    //Audio I/O
    AudioIO coreAudio;
    //Audio aplication
    AudioApplication compVerb;
    //Sampler Audio application
    struct Sampler
    {
        std::string fileType = ".wav";
        int sliceNum = 1;
        int sliceLength = 3;
        float sliceData[3]{0.32f, -0.23f, 0.56f};
        int maxNumSlices = 128;

        float playSlice(int sliceNum, float outData);
        int switchSlice(int currentSlice, int targetSlice);
        float varispeedTransposeSlice(float inputData, int semitoneTranspose);

    };

    // 3 things it can do:
    //1) slice sampled audio
    int createNewSlice(float slicePosition, float sliceData);
    //2) make songs
    void makeSong(AudioApplication audioProgram, Sampler lilsampler, bool hasTaste);
    //3) effect audio
    float effectAudio(float inputSignal);
};

/*
Thing 1) Coding Language
5 properties:
    1) number of data types
    2) number of function/return types
    3) number of operators
    4) number of methods of punctuation
    5) speed of compiler - bits/sec
3 things it can do:
    1) create functions and run functions from libraries
    2) create data structures to store info
    3) compile to machine code
 */

/*
Thing 2) Recording Studio
5 properties:
    1) number of channels on console
    2) number of compressors
    3) number of time-based effects units
    4) number of monitoring options
    5) size of live room - square feet
3 things it can do:
    1) Record music
    2) Mix music
    3) Host concerts
 */

/*
Thing 3) Electric Guitar
5 properties:
    1) number of strings
    2) number of frets
    3) number of pick ups
    4) number of pick up positions
    5) number of knobs
3 things it can do:
    1) amplify sound from string vibrations
    2) produce a warm tone
    3) produce a bright tone 
 */

/*
Thing 4) Refrigerator/Freezer
5 properties:
    1) number of shelves
    2) number of drawers
    3) temperature level value - celsius
    4) size of ice-machine - volume
    5) size of entire-unit - volume
3 things it can do:
    1) chill food
    2) freeze food
    3) separate food
 */

/*
Thing 5) struct MidiPads
5 properties:
    1) velocity sensitive
    2) hardness of rubber
    3) size of pad
    4) number of pads
    5) pads' midi value
3 things it can do:
    1) trigger sampler
    2) send note data
    3) send velocity data
 */

/*
Thing 6) struct TransportButtons
5 properties:
    1) button size
    2) button hardness
    3) button pressure resitance
    4) button press message type
    5) button response time
3 things it can do:
    1) start session audio
    2) pause session audio
    3) reset play head position to Bar 0
 */

/*
Thing 7) struct Screen
5 properties:
    1) brightness
    2) hue
    3) size
    4) Boarder perimeter width
    5) touch sensitivity
3 things it can do:
    1) Scroll 
    2) click via touch
    3) control fx via touchbars sending midi cc's
 */

/*
Thing 8) struct AudioIO
5 properties:
    1) analog to digital conversion
    2) digital to analog conversion
    3) sample rate
    4) buffer size
    5) audio file type
3 things it can do:
    1) convert analog signal to digital signals
    2) convert digital signal to analog signals
    3) write converted analog signals to storage
 */

/*
Thing 9) struct AudioApplication
5 properties:
    1) ratio
    2) threshold
    3) decay time
    4) pre-delay
    5) transpose
3 things it can do:
    1) control dynamic range
    2) emulate physical spaces
    3) transpose audio by semitones
 */

/*
Thing 10) MPC Live Sampler
5 properties: 
    1) Midi Pads
    2) Menu/Transport Buttons
    3) Screen
    4) Audio I/O
    5) Audio applications
3 things it can do:
    1) slice sampled audio
    2) make songs
    3) effect audio
 */

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go!" << std::endl;
}
