
#include <iostream>

int main()
{
    std::string Update[4] = {"2X clcik (20)", "Rebirth (40)","pet(50)"};
    for (int i = 0; i < 4;i++) {
        std::cout << Update[i] << std::endl;
    }
    std::string clicker;
    int getclick = 1;
    int click = 0;

    while (true) {
        std::cout << "click: " << click<< std::endl;
        std::cout << "input <<click>> for get click" << std::endl;
        std::cin >> clicker;
      
        if (clicker == "click") {
            std::cout <<  "you got click +1" << std::endl;
            click += getclick;
        }
        else if (clicker == "2xclick" && click >= 5) {
            click -= 5;
            getclick = 2;
        }
        else  {
            std::cout << "please input click text";
        }
        system("cls");

   }            

}
