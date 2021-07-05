/*
 Project 3 - Part 3 / 5
 video: Chapter 2 - Part 8
 Constructors tasks

 Create a branch named Part3

 On this new branch:

 0) if you opted to not fill in any of your member functions in part2, 
    fill in ALL of your member functions
    
 1) Add a constructor for each User-Defined-Type.
 
 2) For each User-Defined-Type:
        amend some of the member functions to print out something interesting via std::cout
 
 3) Instantiate 1 or 2 instances of each of your user-defined types in the main() function.

 4) For each instantiated UDT: 
        call some of those amended member functions in main().
 
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

    HairdressingSalon(); // The Constructor

    struct Hairdresser
    {
        int yearsExperience = 5;
        int age = 27;
        bool qualifiedToColourHair = true;
        float haircutRate = 65.0f;
        std::string name = "Tracey";
        int numberOfPersonalClients = 1;

        Hairdresser(); // The Constructor

        int getNumberOfPersonalClients();
        void cutCustomerHair();
        void takeBreak();
    };

    void cutHair(Hairdresser hairdresser);
    void colourHair(Hairdresser hairdresser);
    void washHair(Hairdresser hairdresser);
};

HairdressingSalon::HairdressingSalon()
{
    numHairdressers = 4;
}

HairdressingSalon::Hairdresser::Hairdresser()
{
    haircutRate = 65.f;
}

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

    AudioCompLimiterEffect(); // The Constructor

    void compressAudio(float compressionRatio, float compressionThreshold);
    void limitAudio();
    void changeGain(float newGain);


};

AudioCompLimiterEffect::AudioCompLimiterEffect()
{
    compThreshold = 0.f;
}

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

    Gym(); // The Constructor

    void payStaff(std::string staffName);
    void serviceMachines(int machineId);
    void invoiceCustomer(std::string customerName);

};

Gym::Gym() 
{
    annualFee = 350.f;
}

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

        Pannier();

        void openPannier();
        void closePannier();
        void removePannier();
    };

    Bicycle();

    void adjustTyrePressure(int newRearTyrePressure, int newFrontTyrePressure);
    bool adjustSaddleHeight(float newSaddleHeight);
    void turnFrontWheel(float amount);
};

Bicycle::Pannier::Pannier()
{

}

void Bicycle::Pannier::openPannier()
{

}

void Bicycle::Pannier::closePannier()
{

}
        
void Bicycle::Pannier::removePannier()
{

}

Bicycle::Bicycle()
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

    Lights();
 
    void lightCounter();
    void adjustCounterDimmerSetting(int newCounterDimmerSetting);
    void adjustMainDimmerSetting(int newMainDimmerSetting);
};

Lights::Lights()
{
    TotalWattage = 0;
}

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

    Cooker();

    void setOvenTemperature(int temperature);
    void setCookingTime(int time);
    void adjustShelfHeight(int height);
};

Cooker::Cooker()
{
    ovenTemperature = 200;
    cookingTime = 0;
}

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

    Fridge();

    void setFridgeTemperature(int temperature);
    void setFreezerTemperature(int temperature);
    void defrost(int time);
};

Fridge::Fridge()
{
    fridgeTemperature = 5;
}

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

    Sink();

    void adjustWaterTemperature(int temperature);
    void setColdWaterFlow(int newFlow);
    void setHotWaterFlow(int newFlow);
};

Sink::Sink()
{
    coldWaterFlow = 0;
    hotWaterFlow = 0;
}

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

    Toaster();

    void setTimer(int time);
    void raiseToast();
    void lowerToast();
};

Toaster::Toaster()
{

}

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

    Kitchen();

    void washDishes(Sink& sink);
    void cookFood(Cooker& cooker);
    void coolFood(Fridge& fridge);
};

Kitchen::Kitchen()
{
    
}

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
    Example::main();
    std::cout << "good to go!" << std::endl;
}
