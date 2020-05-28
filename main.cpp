/*
Project 3 - Part 1e / 5
Video:  Chapter 2 Part 5
User-Defined Types

Continue your work on branch Part1

Purpose: The entire purpose of this 5-part project is to get you writing C++ code that compiles and to 
reinforce the syntax habits that C++ requires.  
What you create in this project will be used as the basis of Project 5 in the course.   

************************
Part1 purpose:  Learn to write UDTs

You are going to write 10 UDTs in project3.  
    Part 1a: you will learn to think about an object in terms of its sub-objects.
    Part 1b: you will write 4 un-related UDTs in plain english
    Part 1c: you will write 1 UDT in plain english that will be made of 5 related sub-objects
    Part 1d: you will write plain-english UDTs for the 5 sub-objects that form the UDT defined in Part 1c
    Part 1e: you will convert those 10 plain-english UDTs into code that runs.
************************

Convert your 10 Plain-english UDTs into code.

I recommend compiling after finishing each one and making sure it compiles 
without errors or warnings before moving on to writing the next UDT. 

1) define an empty struct for each of your 10 types. i.e.:
*/
struct CellPhone
{

};
/*
2) Copy your 5 properties & 3 actions into the empty struct body.
    - comment them out.
    
3) declare your member variables and member functions underneath each plain-english comment in your struct's body.
    - give the member variables relevant data types
 
4) make the function parameter list for those member functions use some of your User-Defined Types
    - You'll write definitions/implementations for these functions in Project3 Part2
    - you'll call each of these functions in Project3 part3
 
5) make 2 of the 10 user-defined types have a nested class.  
    - this nested class also needs 5 properties and 3 actions.
    - these nested classes are not considered one of your 10 UDTs.
    - this nested class must be related to the class it is nested inside
 
6) your 10th UDT's properties should be instances of your #5-#9 UDTs.   
    - No primitives allowed!
 
7) After you finish defining each type, click the [run] button.  
    Clear up any errors or warnings as best you can. 
 */

/*
 example:  

Thing: Car Wash   
    5 properties:
        - number of vacuum cleaners
        - number of eco-friendly cleaning supplies
        - stores the amount of water used per week.
        - stores amount of profit made per week
        - number of cars serviced per day
    3 things it can do:
        - wash and wax car
        - charge customer
        - detail the car interior
 */

#include <iostream>
#include <string>

struct CarWash //                                   1) define an empty struct for each of your 10 types.       
{
    //number of vacuum cleaners                     2) copied and commented-out plain-english property
    int numVacuumCleaners = 3; //                   3) member variables with relevant data types.
    //number of eco-friendly cleaning supplies      
    int numEcoFriendlyCleaningSupplies = 20;     
    //stores the amount of water used per week.     
    float waterUsedPerWeek = 200.f;            
    //stores amount of profit made per week         
    float profitPerWeek = 495.95f;               
    //number of cars serviced per day               
    int numberOfCarsServiced = 10;               
    
    struct Car //5)                                 Note that the nested type 'Car' is related to the 'CarWash' 
    {
        //2) member variables with relevant data types.  the names are appropriate for the U.D.T.'s purpose.
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        //3) a member function whose parameter has a default value.
        //the parameter name is related to the work the function will perform.
        void fillTank(double fuelAmountInGallons = 2.0);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips);
    };

    //wash and wax car
    void washAndWaxCar( Car car ); //4) a member function whose parameter is a UDT.
    //charge customer
    float chargeCustomer(float discountPercentage);
    //detail the car interior
    void detailInterior( Car car );
    
    //5) a member variable whose type is a UDT.
    Car carBeingServiced;  
};

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
//     number of channels on console
int numConsoleChannels = 64;
//     number of compressors
int numCompressors = 12;
//     number of time-based effects units
int numTimeFXUnits = 8;
//     number of monitoring options
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
//     1) Record music
void recordMusic(float music, int storageType);
//     2) Mix music
void mixMusic (float channel1Data, float channel2Data, float channel3Data);
//     3) Host concerts
void hostConcert (int numPerformers, int numGuests);

LiveRoom roomA;
LiveRoom roomB;
};


//3
struct ElectricGuitar
{
//     number of strings
int numStrings = 6;
//     number of frets
int numFrets = 20;
//     number of pick ups
int numPickUps = 2;
//     number of pick up positions
int numPickupPositions = 5;
//     number of knobs
int numKnobs = 3;
// 3 things it can do:
//     1) amplify sound from string vibrations
float amplifyStringVibration(int stringNum, float stringFreq);
//     2) produce a warm tone
float warmTone (float noteInfo);
//     3) produce a bright tone 
float brightTone (float noteInfo);
};
//4
struct RefrigeratorFreezer
{
//     number of shelves
int numShelves = 4;
//     number of drawers
int numDrawers = 3;
//     temperature level value - celsius
double tempVal = 7;
//     size of ice-machine - volume
double sizeIceMachine = 40;
//     size of entire-unit - volume
double sizeEntireUnit = 700;
// 3 things it can do:
//     1) chill food
void chillFood(double tempVal);
//     2) freeze food
void freezeFood(double tempVal);
//     3) separate food
int separateFood(int initDrawerNum, int newDrawerNum);
};
//5
struct MidiPads
{
//     velocity sensitive
int padVelocity = 127;
//     hardness of rubber
double padHardness  = 8.3;
//     size of pad
double sizeOfPad = 3.3;
//     number of pads
int numPads = 16;
//     pads' midi value
std::string midiCC = "Midi CC #10";
// 3 things it can do:
//     1) trigger sampler
void triggerSample(int triggerInput, int channelDestination);
//     2) send note data
void sendNoteData(int noteData, int channelDestination);
//     3) send velocity data
void sendVelocityData(int velocityData, int channelDestination);
};
//6
struct TransportButtons
{
//     button size
double buttonSize = 1.1;
//     button hardness
double buttonHardness = 30.8;
//     button pressure resitance
double buttonPressureResitance = 100.2;
//     button press message type
int buttonMessageType = 0;
//     button response time
double buttonResponseTime = 0.01;
// 3 things it can do:
//     1) start session audio
void startSessionAudio(int session, double playStart);
//     2) pause session audio
void pauseSessionAudio(int session);
//     3) reset play head position to Bar 0
void resetPlayhead(int session, double playheadPosition);
};
//7
struct Screen
{
//     brightness
double screenBrightness = 8.5;
//     hue
std::string hue = "Blue";
//     size
double screenSize = 35.2;
//     Boarder perimeter width
double boarderPerimeterWidth = 2.4;
//     touch sensitivity
double touchSensitivity = 2.3;
// 3 things it can do:
//     1) Scroll 
void screenScroll(double screenPosition, double scrollSpeed);
//     2) click via touch
bool touchClick (bool pressed);
//     3) control fx via touchbars sending midi cc's
void controlCC(std::string midiCCNum, int ccData);
};
//8
struct AudioIO
{
//     analog to digital conversion
float adc = -0.45f;
//     digital to analog conversion
float dac = 1.2f;
//     sample rate
int sampleRate= 44100;
//     buffer size
int bufferSize = 128;
//     audio file type
std::string fileType = ".wav";
// 3 things it can do:
//     1) convert analog signal to digital signals
void ADC (float analogSignal, float digitalSignal);
//     2) convert digital signal to analog signals
void Dac (float digitalSignal, float analogSignal);
//     3) write converted analog signals to storage
float storeSignal(float signalToStore, std::string fileType);
};
//9
struct AudioApplication
{
//     ratio
float ratio = 5.5f;
//     threshold
float threshold = -19.5f;
//     decay time
float decayTime = 3.4f;
//     pre-delay
float preDelay = 10.2f;
//     transpose
int transpose = -7;
// 3 things it can do:
//     1) control dynamic range
float compress(float input, float ratio, float threshold);
//     2) emulate physical spaces
float reverberate(float input, float roomSize);
//     3) transpose audio by semitones
float semitoneTranspose(float input, int transposeVal);
};
//10
struct MPCLive
{
//     Midi Pads
MidiPads midiPads16;
//     Menu/Transport Buttons
TransportButtons transports;
//     Screen
Screen smallScreen;
//     Audio I/O
AudioIO coreAudio;
//     Audio aplication
AudioApplication compVerb;
//     Sampler Audio application
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
//     1) slice sampled audio
int createNewSlice(float slicePosition, float sliceData);
//     2) make songs
void makeSong(AudioApplication audioProgram, Sampler lilsampler, bool hasTaste);
//     3) effect audio
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
