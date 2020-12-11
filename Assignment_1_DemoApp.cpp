
#include <cpp_api/navigation_bridge.h>
#include <iostream>


int main(int argc, char *argv[])
{
    Navigation nav;

   
    //Taking Off
    std::cout<<"\nSending TakeOff command to vehicle\n";
    if(nav.take_off(5.0))
    {
        std::cout<<"\nTakeOff Failed.. exiting\n"; 
        exit(0); 
    }
    
    //Sending Position Setpoints
    std::cout<<"\nSending Position Setpoint(6.5,0,-5) command to vehicle\n";
    if(nav.position_set(6.5,0,-5))
    {
        std::cout<<"\nFailed to reach position setpoint.. exiting\n";
        exit(0);
    }

    std::cout<<"\nSending Position Setpoint(6.5,6.5,-5) command to vehicle\n";
    if(nav.position_set(6.5,6.5,-5)){
        std::cout<<"\nFailed to reach position setpoint.. exiting\n";
        exit(0);
    }

    std::cout<<"\nSending Position Setpoint(0,6.5,-5) command to vehicle\n";
    if(nav.position_set(0,6.5,-5)){
        std::cout<<"\nFailed to reach position setpoint.. exiting\n";
        exit(0);
    }

    std::cout<<"\nSending Position Setpoint(0,0,-5) command to vehicle\n";
    if(nav.position_set(0,0,-5)){
        std::cout<<"\nFailed to reach position setpoint.. exiting\n";
        exit(0);
    }
    
    //Landing
    std::cout<<"\nSending Land command to vehicle\n";
    if(nav.land(false))
    {
        std::cout<<"\nLand Failed.. exiting\n";
        exit(0);
    }

}
