/*
Project 3 - Part 1c / 5
Video:  Chapter 2 Part 5
User-Defined Types

Continue your work on branch Part1

Purpose: The entire purpose of this 5-part project is to get you writing C++ code that compiles and to 
reinforce the syntax habits that C++ requires.  
What you create in this project will be used as the basis of Project 5 in the course.   

************************
Part1 purpose:  Learn to write UDTs

You are going to write 10 UDTs in project3.  
Part1 will be broken up into 5 separate steps
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
Thing 1) Hairdressing Salon
5 properties:
    1) Number of Hairdressers
    2) Number of Colourists
    3) Number of Units of Shampoo
    4) Number of Units of Hair Colour
    5) Number of Customers
3 things it can do:
    1) Cut Hair
    2) Colour Hair
    3) Wash Hair
 */

/*
Thing 2) Audio Compressor Limiter Effect
5 properties:
    1) Threshold for Compressor
    2) Make Up Gain for Compressor
    3) Threshold for Limiter
    4) Amount of Gain Change
    5) Compression ratio
3 things it can do:
    1) Compress Audio
    2) Limit Audio 
    3) Change Audio Gain
 */

/*
Thing 3) Gym
5 properties:
    1) Annual Fee
    2) Number of Customers
    3) Number of Running Machines
    4) Staff Wages
    5) Annual Income
3 things it can do:
    1) Pay Staff
    2) Service Machines
    3) Invoice Customers
 */

/*
Thing 4) Bicycle
5 properties:
    1) Rear Tyre Pressure
    2) Front Tyre Pressure
    3) Height of Saddle
    4) Height of Handlebars
    5) Wheel diameter
3 things it can do:
    1) Adjust Tyre Pressure
    2) Adjust Saddle Height
    3) Turn Front Wheel
 */

/*
Thing 10) Kitchen
5 properties:
    1) Lights
    2) Cooker
    3) Fridge
    4) Sink
    5) Toaster
3 things it can do:
    1) Wash Dishes
    2) Cook Food
    3) Cool Food
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
