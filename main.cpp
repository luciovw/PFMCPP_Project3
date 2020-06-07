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
#include <iostream>
using namespace std;

struct Person
{
    int age;
    int height;
    float hairLength;
    float GPA;
    unsigned int SATScore;
    int distanceTraveled;

    struct Foot
        {
            int numSteps = 0;
            void stepForward();
            int stepSize();
        };

    void run(int howFast, bool startWithLeftFoot, Foot leftFoot, Foot rightFoot);

};

void Person::Foot::stepForward()
{
    ++numSteps;
}

int Person::Foot::stepSize()
{
    return 0;
}

void Person::run(int howFast, bool startWithLeftFoot, Foot leftFoot, Foot rightFoot)
{
    if(startWithLeftFoot == true)
    {
        leftFoot.stepForward();
        rightFoot.stepForward();
    } 
    else
    {
        rightFoot.stepForward();
        leftFoot.stepForward();
    }
    howFast = 10;
    distanceTraveled += (rightFoot.stepSize() + leftFoot.stepSize()) * (rightFoot.numSteps + leftFoot.numSteps);
}

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
    //initialize
    float compileDCode = 0.0f;
    //3 things it can do:
    // 1)create functions and run functions from libraries
    int createIntFunction(int variable1, int variable2);
    // 2) create data structures to store info
    int createArray(int inputData, int index);
    // 3) compile to machine code
    void compileCode(float code);
};

int CodingLanguage::createIntFunction(int variable1, int variable2)
{
    //int multiply = variable1 * variable2;
    int add = variable1 + variable2;
    return add;
}

int CodingLanguage::createArray(int inputData, int index)
{
    int newArray [] = {inputData}; 
    return newArray[index];
}

void CodingLanguage::compileCode(float code)
{
    int numOfThingsACompilerDoes = 1000000;
    compileDCode = code * numOfThingsACompilerDoes;
}
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
    //init recorded music - mixed song - and size of concert
    float recordedMusic = 0;
    float mixedSong = 0;
    int sizeOfConcert = 0;

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
        // init num drums
        int numDrums = 4;
        //mic stand height inches
        double micStandHeight = 40.5;
        //init bafflePosition
        double bafflePosition = 100;

        void adjustMicStandHeight(double initHeight, double amountAdjusted);
        void moveBaffle(double angle, double newPosition);
        void micDrumSet(int newNumDrums, int newNumMicrophones);
    };

    // 3 things it can do:
    //1) Record music
    void recordMusic(float music);
    //2) Mix music
    void mixMusic (float channel1Data, float channel2Data, float channel3Data);
    //3) Host concerts
    void hostConcert (int numPerformers, int numGuests);

    LiveRoom roomA;
    LiveRoom roomB;
};

void RecordingStudio::LiveRoom::adjustMicStandHeight(double initHeight, double amountAdjusted)
{
    initHeight = micStandHeight;
    micStandHeight = initHeight+amountAdjusted;

}
void RecordingStudio::LiveRoom::moveBaffle(double angle, double newPosition)
{
    bafflePosition = angle + newPosition;
}
void RecordingStudio::LiveRoom::micDrumSet(int newNumDrums, int newNumMicrophones)
{
    numDrums = newNumDrums;
    numMicrophones = newNumMicrophones;
}
void RecordingStudio::recordMusic(float music)
{
    recordedMusic = music;
}
void RecordingStudio::mixMusic(float channel1Data, float channel2Data, float channel3Data)
{
    mixedSong = (channel1Data * 0.33f) + 
                (channel2Data * 0.33f) + 
                (channel3Data * 0.33f);
}
void RecordingStudio::hostConcert(int numPerformers, int numGuests)
{
    sizeOfConcert = numPerformers + numGuests;
}

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
float ElectricGuitar::amplifyStringVibration(int stringNum, float stringFreq)
{
    return stringNum*stringFreq;
}
float ElectricGuitar::warmTone (float noteInfo)
{
    float highshelf = -3.0f;
    return noteInfo * highshelf;
}
float ElectricGuitar::brightTone (float noteInfo)
{
    float highshelf = 3.0f;
    return noteInfo * highshelf;
}

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
    //init foodLocation
    int foodLocation = 1;
    // 3 things it can do:
    //1) chill food
    void chillFood(double newTempVal);
    //2) freeze food
    void freezeFood(double newTempVal);
    //3) separate food
    void separateFood(int newDrawerNum);
};

void RefrigeratorFreezer::chillFood(double newTempVal)
{
    tempVal = newTempVal;
}
void RefrigeratorFreezer::freezeFood(double newTempVal)
{
    tempVal = newTempVal;
}
void RefrigeratorFreezer::separateFood(int newDrawerNum)
{
    foodLocation = newDrawerNum;
}

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

    //init sound controls
    int triggerChannel = 0;
    int currentNote = 0;
    int currentVelocity = 0;

    // 3 things it can do:
    //1) trigger sampler
    void triggerSample(bool triggerInput, int channelDestination);
    //2) send note data
    void sendNoteData(int noteData, int channelDestination);
    //3) send velocity data
    void sendVelocityData(int velocityData, int channelDestination);
};

void MidiPads::triggerSample(bool triggerInput, int channelDestination)
{
    if(triggerInput==true)
    {
        triggerChannel= channelDestination;
    }
}

void MidiPads::sendNoteData(int noteData, int channelDestination)
{
    currentNote = noteData;
    triggerChannel = channelDestination;
}
void MidiPads::sendVelocityData(int velocityData, int channelDestination)
{
    currentVelocity = velocityData;
    triggerChannel = channelDestination;
}

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
    // init transports
    int sessionNumber = 0;
    double sessionPlayhead = 0;
    bool paused = true;


    // 3 things it can do:
    //1) start session audio
    void startSessionAudio(int session, double playStart);
    //2) pause session audio
    void pauseSessionAudio(int session);
    //3) reset play head position to Bar 0
    void resetPlayhead(int session, double playheadPosition);
};
void TransportButtons::startSessionAudio(int session, double playStart)
{
    if (paused==true)
    {
        sessionNumber = session;
        sessionPlayhead = playStart;
    }
}
void TransportButtons::pauseSessionAudio(int session)
{
    if (paused==false)
    {
        sessionNumber = session;
        paused = true;
    }
}
void TransportButtons::resetPlayhead(int session, double playheadPosition = 0)
{
    sessionNumber = session;
    sessionPlayhead = playheadPosition;
}

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

    //init screen
    double currentPosition = 0;
    double currentSpeed = 0;
    bool clicking = false;

    // 3 things it can do:
    //1) Scroll 
    void screenScroll(double screenPosition, double scrollSpeed);
    //2) click via touch
    void touchClick (bool pressed);
    //3) control fx via touchbars sending midi cc's
    std::string controlCC(std::string midiCCNum);
};

void Screen::screenScroll(double screenPosition, double scrollSpeed)
{
    currentPosition = screenPosition;
    currentSpeed = scrollSpeed;
}
void Screen::touchClick (bool pressed)
{
    clicking = pressed;
}
std::string Screen::controlCC(std::string midiCCNum)
{
    return midiCCNum;
}

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
    //init stored file
    float storedFile = 0;
    // 3 things it can do:
    //1) convert analog signal to digital signals
    void ADC (float analogSignal, float digitalSignal);
    //2) convert digital signal to analog signals
    void DAC (float digitalSignal, float analogSignal);
    //3) write converted analog signals to storage
    void storeSignal(float signalToStore);
};

void AudioIO::ADC(float analogSignal, float digitalSignal)
{
    adc = analogSignal*digitalSignal;
}
void AudioIO::DAC(float digitalSignal, float analogSignal)
{
    dac = digitalSignal*analogSignal;
}
void AudioIO::storeSignal(float signalToStore)
{
    storedFile = signalToStore;
}

//9
struct AudioApplication
{
    //ratio
    float initRatio = 5.5f;
    //threshold
    float initThreshold = -19.5f;
    //decay time
    float initDecayTime = 3.4f;
    //pre-delay
    float initPreDelay = 10.2f;
    //transpose
    int initTranspose = -7;
    // 3 things it can do:
    //1) control dynamic range
    float compress(float input, float ratio, float threshold);
    //2) emulate physical spaces
    float reverberate(float input, float roomSize);
    //3) transpose audio by semitones
    float semitoneTranspose(float input, int transposeVal);
};
float AudioApplication::compress(float input, float ratio, float threshold)
{
    if (input>threshold)
    {
        return input * (0.1f*ratio);
    } 
    else
    {
        return input;
    }
}
float AudioApplication::reverberate(float input, float roomSize)
{
    float delayTimeMS = 10.0f * roomSize;
    return input * delayTimeMS;
}
float AudioApplication::semitoneTranspose(float input, int transposeVal)
{
    return input * transposeVal;
}

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
        int currentSliceNum = 1;
        int currentSliceLength = 3;
        float sliceData[3]{0.32f, -0.23f, 0.56f};
        int maxNumSlices = 128;

        float playSlice(int sliceNum, float outData);
        int switchSlice(int targetSlice);
        float varispeedTransposeSlice(float inputData, int semitoneTranspose);

    };
    // 3 things it can do:
    //1) slice sampled audio
    float createNewSlice(float slicePosition, float sliceData);
    //2) make songs
    void makeSong(AudioApplication audioProgram, Sampler lilsampler, bool hasTaste);
    //3) effect audio
    float effectAudio(float inputSignal);
};

float MPCLive::Sampler::playSlice(int sliceNum, float outData)
{
    currentSliceNum = sliceNum;
    return outData;
}
int MPCLive::Sampler::switchSlice(int targetSlice)
{
    currentSliceNum = targetSlice;
    return targetSlice;
}
float MPCLive::Sampler::varispeedTransposeSlice(float inputData, int semitoneTranspose)
{
    return inputData*semitoneTranspose;
}
float MPCLive::createNewSlice(float slicePosition, float sliceData)
{
    return slicePosition + sliceData;
}
void MPCLive::makeSong(AudioApplication audioProgram, Sampler lilsampler, bool hasTaste)
{
    if (hasTaste == true)
    {
        audioProgram.compress(.05f, 6.2f, -20.0f);
        lilsampler.varispeedTransposeSlice(0.4f, 4);
    }
}
float MPCLive::effectAudio(float inputSignal)
{
    float effect = 0.2f;
    return inputSignal * effect;
}

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
