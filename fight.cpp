// Little Mac is an interplanetary space boxer, who is trying to win championship belts for various weight categories on other planets within the solar system.
#include <iostream>

//allowing strings
#include <string>

int main()
{

    double enemyWeight;
    int choice;
    std::string planetName; //string for planet name

    std::cout << "Please enter your current earth weight: ";
    std::cin >> enemyWeight;

    std::cout << "\nI have information for the following planets:\n\n" << "   1. Venus   2. Mars    3. Jupiter\n" << "   4. Saturn  5. Uranus  6. Neptune\n\n";

    std::cout << "Which planet are you visiting? ";
    std::cin >> choice;
    
    switch (choice) {
        case 1:
            enemyWeight *= 0.78;
            planetName = "Venus";
            break;
        case 2:
            enemyWeight *= 0.39;
            planetName = "Mars";
            break;
        case 3:
            enemyWeight *= 2.65;
            planetName = "Jupiter";
            break;
        case 4:
            enemyWeight *= 1.17;
            planetName = "Saturn";
            break;
        case 5:
            enemyWeight *= 1.05;
            planetName = "Uranus";
            break;
        case 6:
            enemyWeight *= 1.23;
            planetName = "Neptune";
            break;
        default:
            std::cout << "Invalid choice.\n";
            break;
    }
    

    std::cout << "\nEnemy weight on " << planetName << ": " << enemyWeight << "\n";
}