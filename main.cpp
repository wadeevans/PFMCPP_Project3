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
 */

struct AudioCompLimiterEffect
{
    float compThreshold = -6.f;
    float compMakeupGain = +3.f;
    float limiterThreshold = -3.f;
    float gainChange = 0.f;
    float compRatio = 3.f;

    void compressAudio(float compressionRatio, float compressionThreshold);
    void limitAudio();
    void changeGain(float newGain);


};

void AudioCompLimiterEffect::compressAudio(float compressionRatio, float compressionThreshold)
{
    compRatio = compressionRatio;
    compThreshold = compressionThreshold;
}

void AudioCompLimiterEffect::limitAudio()
{

}

void AudioCompLimiterEffect::changeGain(float newGain)
{
    gainChange = newGain;
}



/*
Thing 3) Gym
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

void Gym::payStaff(std::string staffName)
{
    if (staffName == "Rachel")
    {

    }
    else
    {

    }
}
    
void Gym::serviceMachines(int machineId)
{
    if (machineId == 1)
    {

    }
}
    
void Gym::invoiceCustomer(std::string customerName)
{
    if (customerName == "Rachel")
    {

    }
    else
    {

    }
}

/*
Thing 4) Bicycle
 */

struct Bicycle
{
    int rearTyrePressure = 45;
    int frontTyrePressure = 45;
    float heightOfSaddle = 8.75f;
    float heightOfHandlebars = 7.5f;
    int wheelDiameter = 28;
    float frontWheelAngle = 0.f;

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

    void adjustTyrePressure(int newRearTyrePressure, int newFrontTyrePressure);
    bool adjustSaddleHeight(float newSaddleHeight);
    void turnFrontWheel(float amount);
};

void Bicycle::Pannier::openPannier()
{

}

void Bicycle::Pannier::closePannier()
{

}
        
void Bicycle::Pannier::removePannier()
{

}

void Bicycle::adjustTyrePressure(int newRearTyrePressure, int newFrontTyrePressure)
{
    rearTyrePressure = newRearTyrePressure;
    frontTyrePressure = newFrontTyrePressure;
}
    
bool Bicycle::adjustSaddleHeight(float newSaddleHeight)
{
    heightOfSaddle = newSaddleHeight;
    return true;
}
    
void Bicycle::turnFrontWheel(float amount)
{
    frontWheelAngle += amount;
}

/*
Thing 5) Lights
 */

struct Lights
{
    int counterLightDimmerSetting = 75;
    int mainLightDimmerSetting = 100;
    int TotalWattage = 300;
    int numberOfBulbs = 5;
    int wattageOfBulb = 60;
 
    void lightCounter();
    void adjustCounterDimmerSetting(int newCounterDimmerSetting);
    void adjustMainDimmerSetting(int newMainDimmerSetting);
};

void Lights::lightCounter()
{

}
    
void Lights::adjustCounterDimmerSetting(int newCounterDimmerSetting)
{
    counterLightDimmerSetting = newCounterDimmerSetting;
}
    
void Lights::adjustMainDimmerSetting(int newMainDimmerSetting)
{
    mainLightDimmerSetting = newMainDimmerSetting;
}

/*
Thing 6) Cooker
 */

struct Cooker
{
    int ovenTemperature = 200;
    int cookingTime = 120;
    int ovenShelfHeight = 3;
    float cookerHeight = 90.f;
    float cookerWidth = 60.f;

    void setOvenTemperature(int temperature);
    void setCookingTime(int time);
    void adjustShelfHeight(int height);
};

void Cooker::setOvenTemperature(int temperature)
{
    ovenTemperature = temperature;
}
    
void Cooker::setCookingTime(int time)
{
    cookingTime = time;
}
    
void Cooker::adjustShelfHeight(int height)
{
    ovenShelfHeight = height;
}

/*
Thing 7) Fridge
 */

struct Fridge 
{
    int fridgeTemperature = 5;
    int freezerTemperature = -18;
    float fridgeCapacity = 450;
    float fridgeHeight = 120;
    float fridgeWidth = 60;
    int defrostTime = 60;

    void setFridgeTemperature(int temperature);
    void setFreezerTemperature(int temperature);
    void defrost(int time);
};

void Fridge::setFridgeTemperature(int temperature)
{
    fridgeTemperature = temperature;
}

void Fridge::setFreezerTemperature(int temperature)
{
    freezerTemperature = temperature;
}

void Fridge::defrost(int time)
{
    defrostTime = time;
}

/*
Thing 8) Sink
 */

struct Sink
{
    int coldWaterFlow = 8;
    int hotWaterFlow = 6;
    int waterTemperature = 40;
    int capacity = 24;
    int waterOutflowRate = 13;

    void adjustWaterTemperature(int temperature);
    void setColdWaterFlow(int newFlow);
    void setHotWaterFlow(int newFlow);
};

void Sink::adjustWaterTemperature(int temperature)
{
    waterTemperature = temperature;
}
    
void Sink::setColdWaterFlow(int newFlow)
{
    coldWaterFlow = newFlow;
}
    
void Sink::setHotWaterFlow(int newFlow)
{
    hotWaterFlow = newFlow;
}

/*
Thing 9) Toaster
 */

struct Toaster
{
    int timerSetting = 30;
    float width = 30.f; 
    float height = 20.f; 
    float depth = 22.f;
    float maxWidth = 2.5;

    void setTimer(int time);
    void raiseToast();
    void lowerToast();
};

void Toaster::setTimer(int time)
{
    timerSetting = time;
}
    
void Toaster::raiseToast()
{

}
    
void Toaster::lowerToast()
{

}




/*
Thing 10) Kitchen
 */

struct Kitchen
{
    Lights kitchenLights;
    Cooker kitchenCooker;
    Fridge kitchenFridge;
    Sink kitchenSink;
    Toaster toaster;

    void washDishes(Sink& sink);
    void cookFood(Cooker& cooker);
    void coolFood(Fridge& fridge);
};

void Kitchen::washDishes(Sink& sink)
{
    sink.adjustWaterTemperature(42);
}
    
void Kitchen::cookFood(Cooker& cooker)
{
    cooker.setOvenTemperature(180);
}
    
void Kitchen::coolFood(Fridge& fridge)
{
    fridge.setFridgeTemperature(5);
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
