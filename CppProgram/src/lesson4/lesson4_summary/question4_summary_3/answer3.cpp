#include <iostream>

const double GRAVITY=9.8;

double calculateHeight(double sec, double height)
{
    return height-(GRAVITY*sec*sec/2);
}
int main()
{
    std::cout<<"Enter the height of the tower: ";
    double height {};
    std::cin>>height;

    if(calculateHeight(0, height)>0){
        std::cout<<"At 0 seconds, the ball is at height: "<<calculateHeight(0, height)<<" meters\n";
    }
    else{
        std::cout<<"At 0 seconds, the ball is on the ground\n";
    }

    if(calculateHeight(1, height)>0){
        std::cout<<"At 1 seconds, the ball is at height: "<<calculateHeight(1, height)<<" meters\n";
    }
    else{
        std::cout<<"At 1 seconds, the ball is on the ground\n";
    }

    if(calculateHeight(2, height)>0){
        std::cout<<"At 2 seconds, the ball is at height: "<<calculateHeight(2, height)<<" meters\n";
    }
    else{
        std::cout<<"At 2 seconds, the ball is on the ground\n";
    }

    if(calculateHeight(3, height)>0){
        std::cout<<"At 3 seconds, the ball is at height: "<<calculateHeight(3, height)<<" meters\n";
    }
    else{
        std::cout<<"At 3 seconds, the ball is on the ground\n";
    }

    if(calculateHeight(4, height)>0){
        std::cout<<"At 4 seconds, the ball is at height: "<<calculateHeight(4, height)<<" meters\n";
    }
    else{
        std::cout<<"At 4 seconds, the ball is on the ground\n";
    }

    if(calculateHeight(5, height)>0){
        std::cout<<"At 5 seconds, the ball is at height: "<<calculateHeight(5, height)<<" meters\n";
    }
    else{
        std::cout<<"At 5 seconds, the ball is on the ground\n";
    }
}