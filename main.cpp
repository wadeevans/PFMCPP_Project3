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
Part1 will be broken up into 5 separate steps
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
#if false
struct CarWash
{

};
#endif
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
 struct HairdressingSalon
 {
    // Number of Hairdressers
    int numHairdressers = 4;
    // Number of Colourists
    int numColourists = 2;
    // Number of Units of Shampoo
    int numUnitsShampoo = 84;
    // Number of Units of Hair Colour
    int numUnitsHairColour = 35;
    // Number of Customers
    int numCustomers = 5;

    struct Hairdresser
    {
        int yearsExperience = 5;
        int age = 27;
        bool qualifiedToColourHair = true;
        float haircutRate = 65.0f;
        std::string name = "Tracey";

        int getNumberOfPersonalClients();
        void cutCustomerHair();
        void takeBreak();
    };

    // Cut Hair
    void cutHair(Hairdresser hairdresser);
    // Colour Hair
    void colourHair(Hairdresser hairdresser);
    // Wash Hair
    void washHair(Hairdresser hairdresser);

 };

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

struct AudioCompLimiterEffect
{
    // Threshold for Compressor
    float compThreshold = -6.f;
    // Make Up Gain for Compressor
    float compMakeupGain = +3.f;
    // Threshold for Limiter
    float limiterThreshold = -3.f;
    // Amount of gain change
    float gainChange = 0.f;
    // Compression ratio
    float compRatio = 3.f;

    // Compress Audio
    void compressAudio();
    // Limit Audio
    void limitAudio();
    // Change Audio Gain
    void changeGain(float gainChange);


};

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

struct Gym 
{
    // Annual Fee
    float annualFee = 350.f;
    // Number of Customers
    int numberOfCustomers = 100;
    // Number of Running Machines
    int numberOfRunningMachines = 25;
    // Staff Wages
    float staffWages = 25000.f;
    // Annual Income
    float annualIncome = 35000.f;

    // Pay Staff
    void payStaff(std::string staffName);
    // Service Machines
    void serviceMachines(int machineId);
    // Invoice Customers
    void invoiceCustomer(std::string customerName);

};

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

struct Bicycle
{
    // Rear Tyre Pressure
    int rearTyrePressure = 45;
    // Front Tyre Pressure
    int frontTyrePressure = 45;
    // Height of Saddle
    float heightOfSaddle = 8.75f;
    // Height of Handlebars
    float heightOfHandlebars = 7.5f;
    // Wheel diameter
    int wheelDiameter = 28;

    // Adjust Tyre Pressure
    void adjustTyrePressure(float correctTyrePressure);
    // Adjust Saddle Height
    bool adjustSaddleHeight(float newSaddleHeight);
    // Turn Front Wheel
    void turnFrontWheel(float amount);
};

/*
Thing 5) Lights
5 properties:
    1) Counter Lights Dimmer Setting
    2) Main Lights Dimmer Setting
    3) Total Wattage
    4) Number of Bulbs
    5) Wattage of Bulb
3 things it can do:
    1) Light Counter 
    2) Adjust Counter Dimmer Setting
    3) Adjust Main Dimmer Setting
 */

struct Lights
{
    // Counter Lights Dimmer Setting
    int counterLightDimmerSetting = 75;
    // Main Lights Dimmer Setting
    int mainLightDimmerSetting = 100;
    // Total Wattage
    int TotalWattage = 300;
    // Number of Bulbs
    int numberOfBulbs = 5;
    // Wattage of Bulb
    int wattageOfBulb = 60;

    // Light Counter 
    void lightCounter();
    // Adjust Counter Dimmer Setting
    void adjustCounterDimmerSetting(float newCounterDimmerSetting);
    // Adjust Main Dimmer Setting
    void adjustMainDimmerSetting(float newMainDimmerSetting);
};

/*
Thing 6) Cooker
5 properties:
    1) Oven Temperature
    2) Cooking Time
    3) Oven Shelf Height Setting
    4) Cooker Height
    5) Cooker Width
3 things it can do:
    1) Set Oven Temperature
    2) Set Cooking Time
    3) Adjust Shelf Height
 */

struct Cooker
{
    // Oven Temperature
    int ovenTemperature = 200;
    // Cooking Time
    int cookingTime = 120;
    // Oven Shelf Height Setting
    int ovenShelfHeight = 3;
    // Cooker Height
    float cookerHeight = 90.f;
    // Cooker Width
    float cookerWidth = 60.f;

    // Set Oven Temperature
    void setOvenTemperature(int temperature);
    // Set Cooking Time
    void setCookingTime(int time);
    // Adjust Shelf Height
    void adjustShelfHeight(int height);
};

/*
Thing 7) Fridge
5 properties:
    1) Fridge Temperature
    2) Freezer Temperature
    3) Fridge Capacity
    4) Fridge Height
    5) Fridge Width
3 things it can do:
    1) Set Fridge Temperature
    2) Set Freezer Temperature
    3) Defrost
 */

struct Fridge 
{
    // Fridge Temperature
    int fridgeTemperature = 5;
    // Freezer Temperature
    int freezerTemperature = -18;
    // Fridge Capacity
    float fridgeCapacity = 450;
    // Fridge Height
    float fridgeHeight = 120;
    // Fridge Width
    float fridgeWidth = 60;

    // Set Fridge Temperature
    void setFridgeTemperature(int temperature);
    // Set Freezer Temperature
    void setFreezerTemperature(int temperature);
    // Defrost
    void defrost(int time);
};

/*
Thing 8) Sink
5 properties:
    1) Cold Water Flow
    2) Hot Water Flow
    3) Water Temperature
    4) Capacity
    5) Water Outflow Rate
3 things it can do:
    1) Adjust Water Temperature
    2) Set Cold Water Flow
    3) Set Hot Water Flow
 */

struct Sink
{
    // Cold Water Flow
    int coldWaterFlow = 8;
    // Hot Water Flow
    int hotWaterFlow = 6;
    // Water Temperature
    int waterTemperature = 40;
    // Capacity
    int capacity = 24;
    // Water Outflow Rate
    int waterOutflowRate = 13;

    // Adjust Water Temperature
    void adjustWaterTemperature(int temperature);
    // Set Cold Water Flow
    void setColdWaterFlow(int newFlow);
    // Set Hot Water Flow
    void setHotWaterFlow(int newFlow);
};

/*
Thing 9) Toaster
5 properties:
    1) Timer Setting
    2) Width 
    3) Height 
    4) Depth 
    5) Max Width of Toastable Objects
3 things it can do:
    1) Set Timer
    2) Raise Toast
    3) Lower Toast
 */

struct Toaster
{
    // Timer Setting
    int timerSetting = 30;
    // Width
    float width = 30.f; 
    // Height 
    float height = 20.f;
    // Depth 
    float depth = 22.f;
    // Max Width of Toastable Objects
    float maxWidth = 2.5;

    // Set Timer
    void setTimer(int time);
    // Raise Toast
    void raiseToast();
    // Lower Toast
    void lowerToast();
};




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

struct Kitchen
{
    Lights lights;
    Cooker cooker;
    Fridge fridge;
    Sink sink;
    Toaster toaster;

    // Wash Dishes
    void washDishes(Sink sink);
    // Cook Food
    void cookFood(Cooker cooker);
    // Cool Food
    void coolFood(Fridge fridge);
};

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
