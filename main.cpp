/*
Project 3 - Part 1d / 5
Video:  Chapter 2 Part 5
User-Defined Types

Create a branch named Part1

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

    The goal of this step is to get you to think about breaking down an object into smaller and smaller objects, 
    until the smallest object is made of up only C++ primitives. 

    Continuing the previous example:  Cell Phone

    A Cell Phone is made up of the following 5 properties/sub-objects and 3 actions:
        Display
        Memory
        CPU
        Radio
        Applications
    3 actions:
        make a call
        send a text
        run an application.

    These 5 properties can be broken down into their own sub-objects and properties. 

    If we break down the first property 'Display' into its 5 properties we get:
        brightness
        amount of power consumed.
        pixels
        width in cm
        height in cm

    the Display's brightness can be represented with a Primitive, such as a double. 

    The amount of power consumed can also be represented with a Primitive, such as a float or integer (i.e. 250mWa)
    
    The 'pixels' property must be represented with an array of Pixel instances, as the screen has more than 1 row of pixels.
        Arrays have not been discussed and can't be used in this project.
        Instead, we can use an Integer primitive to store the Number of Pixels:

    Display:
        Number of Pixels
        Amount of Power consumed (milliwatt-hours)
        Brightness
        width in cm
        height in cm
************************

1) Fill in #5 - #9 with plain-english UDTs for the 5 properties you created for UDT #10
*/

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
    1) record button
    2) play button
    3) stop button
    4) fast forward button
    5) rewind button
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
    1) compressor
    2) sampler
    3) reverb
    4) digital synthesizer
    5) pitch shifter
3 things it can do:
    1) control dynamic range
    2) trigger samples of audio
    3) emulate physical spaces
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
