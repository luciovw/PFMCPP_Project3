/*
 Project 3 - Part 3 / 5
 video: Chapter 2 - Part 8
 Constructors tasks

 Create a branch named Part3

 On this new branch:

 1) Add a constructor for each User-Defined-Type.
 
 2) amend some of your UDT's member functions to print out something interesting via std::cout
 
 3) Instantiate 1 or 2 instances of each of your user-defined types in the main() function

 4) call some of your UDT's amended member functions in main().
 
 5) add some std::cout statements in main() that print out your UDT's member variable values or values returned from your UDT member functions (if they return values)
 
 After you finish defining each type/function:
 click the [run] button.  Clear up any errors or warnings as best you can.
 
 example:
 */

#include <iostream>
namespace Example 
{
struct UDT  // my user defined type named 'UDT'
{
    int a; //a member variable
    UDT();              //1) the constructor
    void printThing();  //the member function
};

//the function definitions are outside of the class
UDT::UDT()
{
    a = 0;
}

void UDT::printThing()
{
    std::cout << "UDT::printThing() " << a << std::endl;  //2) printing out something interesting
}

int main()
{
    UDT foo;              //3) instantiating a UDT named 'foo' in main()
    foo.printThing();     //4) calling a member function of the UDT instance.
    
    //5) a std::cout statement accessing foo's member variable.
    //It also demonstrates a 'ternary expression', which is syntactic shorthand for an 'if/else' expression
    std::cout << "Is foo's member var 'a' equal to 0? " << (foo.a == 0 ? "Yes" : "No") << "\n";
    
    return 0;
}
} //end namespace Example

//insert Example::main() into main() of user's repo.

// 1
struct CodingLanguage
{
    int numDataTypes = 7;
    int numFunctionTypes = 3;
    int numOperatorTypes = 6;
    int numPunctuationTypes = 5;
    int compilerBit_Sec = 1000000;

    float compileDCode = 0.0f;
    CodingLanguage();

    int createIntFunction(int variable1, int variable2);

    int createArray(int inputData, int index);

    void compileCode(float code);
};

CodingLanguage::CodingLanguage()
{
    CodingLanguage::numOperatorTypes = 5;
}

int CodingLanguage::createIntFunction(int variable1, int variable2)
{

    int add = variable1 + variable2;
    return add;
}

int CodingLanguage::createArray(int inputData, int index)
{
    int newArray [] = {inputData}; 
    std::cout << "New array of integers created" << std::endl;
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
    int numConsoleChannels = 64;
    int numCompressors = 12;
    int numTimeFXUnits = 8;
    int numMonitorPairs = 4;
    float recordedMusic = 0;
    float mixedSong = 0;
    int sizeOfConcert = 0;
    RecordingStudio(int numOutBoardGear);

    struct LiveRoom
    {
        double roomSize = 2010.4;
        double ceilingHeight = 14.5;
        double RT60 = 1.001;
        int numMicrophones = 22;
        int numDrums = 4;
        double micStandHeight = 40.5;
        double bafflePosition = 100;
        LiveRoom(double studioRoomSize);

        void adjustMicStandHeight(double initHeight, double amountAdjusted);
        void moveBaffle(double angle, double newPosition);
        void micDrumSet(int newNumDrums, int newNumMicrophones);
    };

    void recordMusic(float music);
    void mixMusic (float channel1Data, float channel2Data, float channel3Data);
    void hostConcert (int numPerformers, int numGuests);

    LiveRoom roomA{6.1};
    LiveRoom roomB{4.1};
};

RecordingStudio::RecordingStudio(int numOutBoardGear)
{
    RecordingStudio::numCompressors = numOutBoardGear/2;
    RecordingStudio::numTimeFXUnits = numOutBoardGear/2;
}

RecordingStudio::LiveRoom::LiveRoom(double studioRoomSize)
{
    LiveRoom::roomSize = studioRoomSize;
}

void RecordingStudio::LiveRoom::adjustMicStandHeight(double initHeight, double amountAdjusted)
{
    initHeight = micStandHeight;
    micStandHeight = initHeight+amountAdjusted;
    std::cout << "Mic Stand Height Adjusted" << std::endl;

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
    int numStrings = 6;
    int numFrets = 20;
    int numPickUps = 2;
    int numPickupPositions = 5;
    int numKnobs = 3;
    ElectricGuitar(int numBrokenStrings);

    float amplifyStringVibration(int stringNum, float stringFreq);
    float warmTone (float noteInfo);
    float brightTone (float noteInfo);
};

ElectricGuitar::ElectricGuitar(int numBrokenStrings)
{
    ElectricGuitar::numStrings-=numBrokenStrings;
}

float ElectricGuitar::amplifyStringVibration(int stringNum, float stringFreq)
{
    return stringNum*stringFreq;
}
float ElectricGuitar::warmTone (float noteInfo)
{
    float highshelf = -3.0f;
    std::cout << "Tone is now warmer!" << std::endl;
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
    int numShelves = 4;
    int numDrawers = 3;
    double tempVal = 7;
    double sizeIceMachine = 40;
    double sizeEntireUnit = 700;
    int foodLocation = 1;
    RefrigeratorFreezer();

    void chillFood(double newTempVal);
    void freezeFood(double newTempVal);
    void separateFood(int newDrawerNum);
};

RefrigeratorFreezer::RefrigeratorFreezer()
{

}

void RefrigeratorFreezer::chillFood(double newTempVal)
{
    tempVal = newTempVal;
    std::cout << "Fridge Temperature changed!" << std::endl;
}

void RefrigeratorFreezer::freezeFood(double newTempVal)
{
    tempVal = newTempVal;
    std::cout << "Freezer Temperature changed!" << std::endl;
}

void RefrigeratorFreezer::separateFood(int newDrawerNum)
{
    foodLocation = newDrawerNum;
}

//5
struct MidiPads
{
    int padVelocity = 127;
    double padHardness  = 8.3;
    double sizeOfPad = 3.3;
    int numPads = 16;
    std::string midiCC = "Midi CC #10";

    int triggerChannel = 0;
    int currentNote = 0;
    int currentVelocity = 0;
    MidiPads(int numBrokenPads);

    void triggerSample(bool triggerInput, int channelDestination);
    void sendNoteData(int noteData, int channelDestination);
    void sendVelocityData(int velocityData, int channelDestination);
};

MidiPads::MidiPads(int numBrokenPads)
{
    MidiPads::numPads -= numBrokenPads;
}

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
    std::cout << "Note Data Sent!" << std::endl;
}

void MidiPads::sendVelocityData(int velocityData, int channelDestination)
{
    currentVelocity = velocityData;
    triggerChannel = channelDestination;
}

//6
struct TransportButtons
{
    double buttonSize = 1.1;
    double buttonHardness = 30.8;
    double buttonPressureResitance = 100.2;
    int buttonMessageType = 0;
    double buttonResponseTime = 0.01;
    int sessionNumber = 0;
    double sessionPlayhead = 0;
    bool paused = true;

    TransportButtons();

    void startSessionAudio(int session, double playStart);
    void pauseSessionAudio(int session);
    void resetPlayhead(int session, double playheadPosition);
};

TransportButtons::TransportButtons()
{

}

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
    std::cout << "Session Paused" << std::endl;
}

void TransportButtons::resetPlayhead(int session, double playheadPosition = 0)
{
    sessionNumber = session;
    sessionPlayhead = playheadPosition;
}

//7
struct Screen
{
    double screenBrightness = 8.5;
    std::string hue = "Blue";
    double screenSize = 35.2;
    double boarderPerimeterWidth = 2.4;
    double touchSensitivity = 2.3;
    double currentPosition = 0;
    double currentSpeed = 0;
    bool clicking = false;

    Screen(double setDefaultScreenSize);

    void screenScroll(double screenPosition, double scrollSpeed);
    void touchClick (bool pressed);
    std::string controlCC(std::string midiCCNum);
};

Screen::Screen(double setDefaultScreenSize)
{
    screenSize = setDefaultScreenSize;
}

void Screen::screenScroll(double screenPosition, double scrollSpeed)
{
    currentPosition = screenPosition;
    currentSpeed = scrollSpeed;
}

void Screen::touchClick (bool pressed)
{
    clicking = pressed;
    std::cout << "Clicked!"<< std::endl;
}
std::string Screen::controlCC(std::string midiCCNum)
{
    std::cout << "Midi CC = " << midiCCNum << std::endl;
    return midiCCNum;
}

//8
struct AudioIO
{
    float adc = -0.45f;
    float dac = 1.2f;
    int sampleRate= 44100;
    int bufferSize = 128;
    std::string fileType = ".wav";
    float storedFile = 0;

    AudioIO(int setSamplerate, int setBufferSize);

    void ADC (float analogSignal, float digitalSignal);
    void DAC (float digitalSignal, float analogSignal);
    void storeSignal(float signalToStore);
};

AudioIO::AudioIO(int setSamplerate, int setBufferSize)
{
    AudioIO::sampleRate = setSamplerate;
    AudioIO::bufferSize = setBufferSize;
}

void AudioIO::ADC(float analogSignal, float digitalSignal)
{
    adc = analogSignal*digitalSignal;
    std::cout << "Analog signal converted to digital" << std::endl;
}

void AudioIO::DAC(float digitalSignal, float analogSignal)
{
    dac = digitalSignal*analogSignal;
}

void AudioIO::storeSignal(float signalToStore)
{
    storedFile = signalToStore;
    std::cout << "File stored" << std::endl;
}

//9
struct AudioApplication
{
    float initRatio = 5.5f;
    float initThreshold = -19.5f;
    float initDecayTime = 3.4f;
    float initPreDelay = 10.2f;
    int initTranspose = -7;
    AudioApplication();

    float compress(float input, float ratio, float threshold);
    float reverberate(float input, float roomSize);
    float semitoneTranspose(float input, int transposeVal);
};

AudioApplication::AudioApplication()
{

}

float AudioApplication::compress(float input, float ratio, float threshold)
{
    if (input>threshold)
    {
        std::cout << "Signal Compressed" << std::endl;
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
    std::cout << "Signal Transposed" << std::endl;
    return input * transposeVal;
}

//10
struct MPCLive
{
    MidiPads midiPads16 {16};
    TransportButtons transports;
    Screen smallScreen {48.4};
    AudioIO coreAudio{44100, 16};
    AudioApplication compVerb;
    MPCLive();

    struct Sampler
    {
        std::string fileType = ".wav";
        int currentSliceNum = 1;
        int currentSliceLength = 3;
        float sliceData[3]{0.32f, -0.23f, 0.56f};
        int maxNumSlices = 128;

        Sampler();

        float playSlice(int sliceNum, float outData);
        int switchSlice(int targetSlice);
        float varispeedTransposeSlice(float inputData, int semitoneTranspose);

    };

    float createNewSlice(float slicePosition, float sliceData);
    void makeSong(AudioApplication audioProgram, Sampler lilsampler, bool hasTaste);
    float effectAudio(float inputSignal);
};

MPCLive::Sampler::Sampler()
{

}

MPCLive::MPCLive()
{

}

float MPCLive::Sampler::playSlice(int sliceNum, float outData)
{
    currentSliceNum = sliceNum;
    std::cout << "Slice played" << std::endl;
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
    std::cout << "New slice created" << std::endl;
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
    Example::main();

    CodingLanguage LL;
    LL.createArray(10, 30);

    RecordingStudio daStu(100);
    daStu.roomB.adjustMicStandHeight(2.2, 4.4);

    ElectricGuitar strat(0);
    strat.warmTone(220);

    RefrigeratorFreezer daFridge;
    daFridge.chillFood(40.1);

    std::cout << "New Fridge Temperature: " << daFridge.tempVal << " degrees (F)" << std::endl;

    MidiPads twoBrokenPads(2);
    std::cout << twoBrokenPads.numPads << " Pads are working!" << std::endl;

    TransportButtons transports;
    transports.pauseSessionAudio(1);
    
    Screen verySmallScreen(1);
    verySmallScreen.touchClick(true);

    AudioIO converterHQ (96000, 32);
    converterHQ.ADC(0.32783546f, 0.389234579f);

    AudioApplication compressor1;
    std:: cout << compressor1.compress(3.3f, 5.0f, -22.2f) << " = new signal value!" << std::endl;

    MPCLive MPMP;

    MPMP.createNewSlice(4.4f, 3.3f);

    MPMP.coreAudio.storeSignal(5.5f);

    std::cout << "good to go!" << std::endl;
}
