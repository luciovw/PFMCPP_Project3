/*
Project 3 - Part 1c / 5
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

1) write the 10th UDT
    come up with an object that is made of 5 smaller parts.
    These parts will not be defined using Primitives, but instead will be their own UDTs you'll define in Part 1d
    
    Here is an example:
    Cell Phone

    A Cell Phone is made up of the following 5 properties:
        Display
        Memory
        CPU
        Radio
        Applications

    A Cell Phone has 3 things it can do:
        make a call
        send a text
        run an application.

    Notice that I did not use "has a display" or "Has memory" or "has a cpu" as one of the properties of the CellPhone
    
    Writing 'has a ___" checks whether or not your object **has the ability to do something**.
    Instead, I wrote "Display" or "CPU".  These are specific objects or amounts. 
    
    In C++ terms, this means to I want you to avoid using 'bool' (has a) as a member variable type.
    Instead, prefer the other primitive types.

    When you choose your 5 smaller parts, remember that each of these 5 Sub Objects will need 
    to be defined with 5 primitive properties and 3 actions EACH.  
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
Thing 3) Electrric Guitar
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
Thing 10)
5 properties:
    1)
    2)
    3)
    4)
    5)
3 things it can do:
    1)
    2)
    3)
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
