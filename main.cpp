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

// 1
struct CodingLanguage
{
    int numDataTypes = 7;
    int numFunctionTypes = 3;
    int numOperatorTypes = 6;
    int numPunctuationTypes = 5;
    int compilerBit_Sec = 1000000;

    float compileDCode = 0.0f;

    int createIntFunction(int variable1, int variable2);

    int createArray(int inputData, int index);

    void compileCode(float code);
};

int CodingLanguage::createIntFunction(int variable1, int variable2)
{

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
    int numConsoleChannels = 64;
    int numCompressors = 12;
    int numTimeFXUnits = 8;
    int numMonitorPairs = 4;
    float recordedMusic = 0;
    float mixedSong = 0;
    int sizeOfConcert = 0;

    struct LiveRoom
    {
        double roomSize = 2010.4;
        double ceilingHeight = 14.5;
        double RT60 = 1.001;
        int numMicrophones = 22;
        int numDrums = 4;
        double micStandHeight = 40.5;
        double bafflePosition = 100;

        void adjustMicStandHeight(double initHeight, double amountAdjusted);
        void moveBaffle(double angle, double newPosition);
        void micDrumSet(int newNumDrums, int newNumMicrophones);
    };

    void recordMusic(float music);
    void mixMusic (float channel1Data, float channel2Data, float channel3Data);
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
    int numStrings = 6;
    int numFrets = 20;
    int numPickUps = 2;
    int numPickupPositions = 5;
    int numKnobs = 3;

    float amplifyStringVibration(int stringNum, float stringFreq);
    float warmTone (float noteInfo);
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
    int numShelves = 4;
    int numDrawers = 3;
    double tempVal = 7;
    double sizeIceMachine = 40;
    double sizeEntireUnit = 700;
    int foodLocation = 1;
    void chillFood(double newTempVal);
    void freezeFood(double newTempVal);
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
    int padVelocity = 127;
    double padHardness  = 8.3;
    double sizeOfPad = 3.3;
    int numPads = 16;
    std::string midiCC = "Midi CC #10";

    int triggerChannel = 0;
    int currentNote = 0;
    int currentVelocity = 0;

    void triggerSample(bool triggerInput, int channelDestination);
    void sendNoteData(int noteData, int channelDestination);
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
    double buttonSize = 1.1;
    double buttonHardness = 30.8;
    double buttonPressureResitance = 100.2;
    int buttonMessageType = 0;
    double buttonResponseTime = 0.01;
    int sessionNumber = 0;
    double sessionPlayhead = 0;
    bool paused = true;

    void startSessionAudio(int session, double playStart);
    void pauseSessionAudio(int session);
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
    double screenBrightness = 8.5;
    std::string hue = "Blue";
    double screenSize = 35.2;
    double boarderPerimeterWidth = 2.4;
    double touchSensitivity = 2.3;
    double currentPosition = 0;
    double currentSpeed = 0;
    bool clicking = false;

    void screenScroll(double screenPosition, double scrollSpeed);
    void touchClick (bool pressed);
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
    float adc = -0.45f;
    float dac = 1.2f;
    int sampleRate= 44100;
    int bufferSize = 128;
    std::string fileType = ".wav";
    float storedFile = 0;

    void ADC (float analogSignal, float digitalSignal);
    void DAC (float digitalSignal, float analogSignal);
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
    float initRatio = 5.5f;
    float initThreshold = -19.5f;
    float initDecayTime = 3.4f;
    float initPreDelay = 10.2f;
    int initTranspose = -7;

    float compress(float input, float ratio, float threshold);
    float reverberate(float input, float roomSize);
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
    MidiPads midiPads16;
    TransportButtons transports;
    Screen smallScreen;
    AudioIO coreAudio;
    AudioApplication compVerb;

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

    float createNewSlice(float slicePosition, float sliceData);
    void makeSong(AudioApplication audioProgram, Sampler lilsampler, bool hasTaste);
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
