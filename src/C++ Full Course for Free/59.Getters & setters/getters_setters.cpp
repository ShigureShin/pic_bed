#include <iostream>

class Stove{
    private:
        int my_temperature = 0;

    public:
        int temperature = 0;
    
    int getTemperature(){
        return my_temperature;
    } // readable from outside

    void setTemperature(int temperature){
        if(temperature < 0){
            this->my_temperature = 0;
        }
        else if(temperature >= 10){
            this->my_temperature = 10;
        }
        else{
            this->my_temperature = temperature;
        }
    } // settable from outside

};

int main(){

    // Abstraction = hiding unnecessary data from outside a class
    // getter = function that makes a private attribute READABLE
    // setter = function that makes a private attribute WRITEABLE

    Stove stove;

    stove.temperature = 10000000;

    // stove.my_temperature = 10; // can't get private variable
    stove.setTemperature(5);

    std::cout << "The temperature setting is: " << stove.getTemperature();

    return 0;
}