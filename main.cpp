 /*
 Project 3 - Part 2 / 5
 Video: Chapter 2 Part 6
 Implementations tasks
 
Create a branch named Part2

 tasks
 0) delete all of the plain english pseudo-code you added in Part1.
   don't forget to remove the blank lines left behind after you remove your comments
   - you should be left with only your UDTs.
*/
// example:
// if you had something like this at the end of Part1e:
/*
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
namespace Part1eVersion 
{
struct CarWash        
{
    //number of vacuum cleaners                     
    int numVacuumCleaners = 3; 
    //number of eco-friendly cleaning supplies      
    int numEcoFriendlyCleaningSupplies = 20;     
    //stores the amount of water used per week.     
    float waterUsedPerWeek = 200.f;            
    //stores amount of profit made per week         
    float profitPerWeek = 495.95f;               
    //number of cars serviced per day               
    int numberOfCarsServiced = 10;               
    
    struct Car  
    {
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        void fillTank(double fuelAmountInGallons = 2.0);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips);
    };

    //wash and wax car
    void washAndWaxCar( Car car ); 
    //charge customer
    float chargeCustomer(float discountPercentage);
    //detail the car interior
    void detailInterior( Car car );
    
    Car carBeingServiced;  
};
}

//this is what I want to see after the code is cleaned up: 
namespace Part2Version
{
struct CarWash        
{
    int numVacuumCleaners = 3; 
    int numEcoFriendlyCleaningSupplies = 20;     
    float waterUsedPerWeek = 200.f;            
    float profitPerWeek = 495.95f;               
    int numberOfCarsServiced = 10;               
    
    struct Car  
    {
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        void fillTank(double fuelAmountInGallons = 2.0);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips);
    };

    void washAndWaxCar( Car car ); 
    float chargeCustomer(float discountPercentage);
    void detailInterior( Car car );
    
    Car carBeingServiced;  
};
}
  /*
    The above snippet is just an example showing you how to clean up your code.  
    Do not put your cleaned up code into a namespace like I have done here.

 1) write the definition for the Type that leftFoot and rightFoot are instantiations of.
    don't forget to define and implement the member functions 'stepForward()' and 'stepSize()'
    you should be able to deduce the return type of those functions based on their usage in Person::run()
    You'll need to insert the Person struct from the video in the space below.
 */

struct Person 
{
    int age;
    int height;
    float hairLength;
    float GPA; // I have no idea what this is!!
    unsigned int SATScore;
    int distanceTravelled;

    struct Limb
    {
        int sizeOfStep;


        void stepForward();
        int stepSize();

    };

    Limb leftFoot;
    Limb rightFoot;

    void Run(int howFast, bool startWithLeftFoot);
};

void Person::Limb::stepForward()
{

}

int Person::Limb::stepSize()
{
    return sizeOfStep;
}

void Person::Run(int howFast, bool startWithLeftFoot)
{
    if (startWithLeftFoot == true)
    {
        leftFoot.stepForward();
        rightFoot.stepForward();
        distanceTravelled += leftFoot.stepSize() + rightFoot.stepSize();
    }
    else
    {
        rightFoot.stepForward();
        leftFoot.stepForward();
    }
    int overallStepSize = leftFoot.stepSize() + rightFoot.stepSize();

    distanceTravelled *= howFast * overallStepSize;

}

 /*
 2) provide implementations for the member functions you declared in your 10 user-defined types from the previous video outside of your UDT definitions.
    If you have warnings about 'unused parameter', you aren't using one of your function parameters in your implementation.
    use the parameter in your implementation.
    If you have warnings about 'overshadow', a local variable in the function has the same name as a class member.
    change the name of your local variable so it is different from the class member's name.
 
 3) be sure to write the correct full qualified name for the nested type's member functions.
 
 4) After you finish defining each type/function, click the [run] button.  Clear up any errors or warnings as best you can.
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
 struct HairdressingSalon
 {
    int numHairdressers = 4;
    int numColourists = 2;
    int numUnitsShampoo = 84;
    int numUnitsHairColour = 35;
    int numCustomers = 5;

    struct Hairdresser
    {
        int yearsExperience = 5;
        int age = 27;
        bool qualifiedToColourHair = true;
        float haircutRate = 65.0f;
        std::string name = "Tracey";
        int numberOfPersonalClients = 1;

        int getNumberOfPersonalClients();
        void cutCustomerHair();
        void takeBreak();
    };

    void cutHair(Hairdresser hairdresser);
    void colourHair(Hairdresser hairdresser);
    void washHair(Hairdresser hairdresser);

 };

 int HairdressingSalon::Hairdresser::getNumberOfPersonalClients()
 {
     return numberOfPersonalClients;
 }

 void HairdressingSalon::Hairdresser::cutCustomerHair()
 {

 }
        
void HairdressingSalon::Hairdresser::takeBreak()
{

}

void HairdressingSalon::cutHair(Hairdresser hairdresser)
{
    hairdresser.numberOfPersonalClients += 1;
}
    
void HairdressingSalon::colourHair(Hairdresser hairdresser)
{
    hairdresser.numberOfPersonalClients += 1;
}

void HairdressingSalon::washHair(Hairdresser hairdresser)
{
    hairdresser.numberOfPersonalClients += 1;
}





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
    float compThreshold = -6.f;
    float compMakeupGain = +3.f;
    float limiterThreshold = -3.f;
    float gainChange = 0.f;
    float compRatio = 3.f;

    void compressAudio(float compRatio, float compThreshold);
    void limitAudio();
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
    float annualFee = 350.f;
    int numberOfCustomers = 100;
    int numberOfRunningMachines = 25;
    float staffWages = 25000.f;
    float annualIncome = 35000.f;

    void payStaff(std::string staffName);
    void serviceMachines(int machineId);
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
    int rearTyrePressure = 45;
    int frontTyrePressure = 45;
    float heightOfSaddle = 8.75f;
    float heightOfHandlebars = 7.5f;
    int wheelDiameter = 28;

    struct Pannier
    {
        bool isFrontPannier = true;
        bool isRearPannier = false;
        float pannierHeight = 25;
        float pannierWidth = 30;
        float pannierLength = 45;

        void openPannier();
        void closePannier();
        void removePannier();
    };

    void adjustTyrePressure(float rearTyrePressure, float frontTyrePressure);
    bool adjustSaddleHeight(float newSaddleHeight);
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
