#include <iostream>
#include <string>


int main() {
    float start_speed = 0, delta_speed = 0;
    char speedometer[100];

    do {
      std::cout << "Enter the speed delta: ";
      std::cin >> delta_speed;
      start_speed += delta_speed;
      std::sprintf(speedometer, "Speed: %.1f", start_speed);
        std::cout << speedometer << std::endl;
    }while(start_speed > 0);


    return 0;
}
