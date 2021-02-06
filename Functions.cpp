#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include "Functions-classes.h"

std::string dog1_name;
std::string dog1_likes;
std::string dog1_dislikes;
int dog1_legs;
int dog1_tails;
std::string dog1_owner_name;

std::string dog2_name;
std::string dog2_likes;
std::string dog2_dislikes;
int dog2_legs;
int dog2_tails;
std::string dog2_owner_name;

std::string dog3_name;
std::string dog3_likes;
std::string dog3_dislikes;
int dog3_legs;
int dog3_tails;
std::string dog3_owner_name;


class dog {
    public:
    
    std::string name;
    std::string likes;
    std::string dislikes;
    
    int legs;
    int tails;
    
    std::string owner_name;

    dog(){

    }

    dog(std::string name, std::string likes, std::string dislikes, int legs, int tails,std::string owner_name){
        this->name = name;
        this->likes = likes;
        this->dislikes = dislikes;
        this->legs = legs;
        this->tails = tails;
        this->owner_name = owner_name;

    }
};

dog dog1("Puppers", "Fish, Friends", "Water, Mean people", 4, 2, "Maxwell Huang");

void Ask_for_info(){
    dog dog2;
    dog dog3;


    std::cout << "Type your hypothetical dog's name: " << "\n";
    std::cin >> dog2_name;
    std::cout << "Type what your hypothetical dog likes: " << "\n";
    std::cin >> dog2.likes;
    std::cout << "Type what your hypothetical dog dislikes: " << "\n";
    std::cin >> dog2.dislikes;
    std::cout << "Type how many legs your hypothetical dog has: " << "\n";
    std::cin >> dog2.legs;
    std::cout << "Type how many tails your hypothetical dog has: " << "\n";
    std::cin >> dog2.tails;
    std::cout << "Type your name: " << "\n";
    std::cin >> dog2.owner_name;
    std::cin >> dog3.owner_name;
    
    std::cout << "Type your second hypothetical dog's name: " << "\n";
    std::cin >> dog3_name;
    std::cout << "Type what your second hypothetical dog likes: " << "\n";
    std::cin >> dog3.likes;
    std::cout << "Type what your second hypothetical dog dislikes: " << "\n";
    std::cin >> dog3.dislikes;
    std::cout << "Type how many legs your second hypothetical dog has: " << "\n";
    std::cin >> dog3.legs;
    std::cout << "Type how many tails your second hypothetical dog has: " << "\n";
    std::cin >> dog3.tails;
    dog1_name = dog1.name;


dog1_likes = dog1.likes;
dog1_dislikes = dog1.dislikes;
dog1_legs = dog1.legs;
dog1_tails = dog1.tails;
dog1_owner_name = dog1.owner_name;

dog2_name = dog2.name;
dog2_likes = dog2.likes;
dog2_dislikes = dog2.dislikes;
dog2_legs = dog2.legs;
dog2_tails = dog2.tails;
dog2_owner_name = dog2.owner_name;

dog3_name = dog3.name;
dog3_likes = dog3.likes;
dog3_dislikes = dog3.dislikes;
dog3_legs = dog3.legs;
dog3_tails = dog3.tails;
dog3_owner_name = dog3.owner_name;
}

void swap(){
    
    srand(time(NULL));

std::string The_Dog;
int The_Dog2;

int Number1 = rand() % 6;
int Number2 = rand() % 6;
int Number3 = rand() % 3;

    if (Number1 == 1 || Number2 == 1)
    {
        
        if(Number3 == 1){
        The_Dog = dog1_likes;
        dog1_likes = dog2_likes;
        dog2_likes = The_Dog;
        }
        else if(Number3 == 2){
        The_Dog = dog1_likes;
        dog1_likes = dog3_likes;
        dog3_likes = The_Dog;
        }
    
    }
    
    
     else if (Number1 == 2 || Number2 == 2)
    {
        
        if (Number3 == 1)
        {
        The_Dog = dog1_dislikes;
        dog1_dislikes = dog2_dislikes;
        dog2_dislikes = The_Dog;
        }
        
        else if( Number3 == 2){
        The_Dog = dog1_dislikes;
        dog1_dislikes = dog3_dislikes;
        dog3_dislikes = The_Dog;
        }
    
    }
    
    
     else if (Number1 == 3 || Number2 == 3)
    {
        if (Number3 == 1)
        {
        The_Dog2 = dog1_legs;
        dog1_legs = dog2_legs;
        dog2_legs = The_Dog2;
        }
        
        else if( Number3 == 2){
        The_Dog2 = dog1_legs;
        dog1_legs = dog3_legs;
        dog3_legs = The_Dog2;
        }
    
    }
    
    
    else if (Number1 == 4 || Number2 == 4)
    {
        if (Number3 == 1)
        {
        The_Dog2 = dog1_tails;
        dog1_tails = dog2_tails;
        dog2_tails = The_Dog2;
        }
        
        else if( Number3 == 2){
        The_Dog2 = dog1_tails;
        dog1_tails = dog3_tails;
        dog3_tails = The_Dog2;
        }
    
    }
    
    
    else if (Number1 == 5 || Number2 == 5)
    {
                if (Number3 == 1)
        {
        The_Dog = dog1_owner_name;
        dog1_owner_name = dog2_owner_name;
        dog2_owner_name = The_Dog;
        }
        
        else if( Number3 == 2){
        The_Dog = dog1_owner_name;
        dog1_owner_name = dog3_owner_name;
        dog3_owner_name = The_Dog;
        }
    
    }
    


};

void output() {
std::cout << dog1_name << std::endl;
std::cout << dog1_likes << std::endl;
std::cout << dog1_dislikes << std::endl;
std::cout << dog1_legs << std::endl;
std::cout << dog1_tails << std::endl;
std::cout << dog1_owner_name << std::endl;

std::cout << "\n";

std::cout << dog2_name << std::endl;
std::cout << dog2_likes << std::endl;
std::cout << dog2_dislikes << std::endl;
std::cout << dog2_legs << std::endl;
std::cout << dog2_tails << std::endl;
std::cout << dog2_owner_name << std::endl;

std::cout << "\n";

std::cout << dog3_name << std::endl;
std::cout << dog3_likes << std::endl;
std::cout << dog3_dislikes << std::endl;
std::cout << dog3_legs << std::endl;
std::cout << dog3_tails << std::endl;
std::cout << dog3_owner_name << std::endl;

std::cout << "\n";

};