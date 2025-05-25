#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <limits>
#include "ufo_functions.hpp"

int main() {
    srand(time(0)); 
    greet();

    std::vector<std::string> codewords = {
    "alien", "asteroid", "astronaut", "comet", "constellation",
    "cosmos", "crater", "debris", "eclipse", "exoplanet",
    "galaxy", "gravity", "interstellar", "jupiter", "launch",
    "lunar", "mars", "meteor", "nebula", "observatory",
    "airplane", "bicycle", "camera", "diamond", "elephant",
    "fireworks", "guitar", "hamburger", "island", "jungle",
    "kangaroo", "lighthouse", "mountain", "notebook", "octopus",
    "penguin", "quartz", "rainbow", "sandcastle", "telescope",
    "umbrella", "volcano", "waterfall", "xylophone", "yacht",
    "zeppelin", "ambulance", "bakery", "carnival", "dinosaur",
    "escalator", "festival", "giraffe", "honeybee", "igloo",
    "jigsaw", "keyboard", "lobster", "microscope", "nuclear",
    "oxygen", "parachute", "quadrangle", "reptile", "sapphire",
    "tornado", "universe", "vortex", "wavelength", "xenon",
    "yellow", "zodiac", "algorithm", "browser", "cyber",
    "database", "encrypt", "firewall", "gadget", "hacker",
    "internet", "javascript", "kernel", "linux", "malware",
    "network", "offline", "python", "quantum", "router",
    "server", "terminal", "upload", "virtual", "website",
    "android", "bluetooth", "cache", "digital", "ethernet",
    "framework", "google", "hyperlink", "iphone", "java",
    "kilobyte", "logistics", "metadata", "nanotech", "opensource"
 };

    char play_again = 'y';
    
    while(play_again == 'y' || play_again == 'Y') {
        std::string codeword = codewords[rand() % codewords.size()];
        std::string answer(codeword.length(), '_');
        int misses = 0;
        std::vector<char> incorrect;
        bool guess;
        char letter;

        while(answer != codeword && misses < 7) {
            display_misses(misses);
            display_status(incorrect, answer);

            std::cout << "\n\nPlease enter your guess: ";
            std::cin >> letter;
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //jika tidak ada ini terminal akan langsung menutup jika katanya benar

            guess = false;
            for(int i = 0; i < codeword.length(); i++) {
                if(letter == codeword[i]) {
                    answer[i] = letter;
                    guess = true;
                }
            }

            if(guess) {
                std::cout << "\nCorrect!\n";
            } else {
                std::cout << "\nIncorrect! The tractor beam pulls the person in further.\n";
                incorrect.push_back(letter);
                misses++;
            }
        }

        end_game(answer, codeword);
        
        std::cout << "\n\nPlay again? (y/n): ";
        std::cin >> play_again;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //jika tidak ada ini terminal akan langsung menutup jika katanya benar
    }

    std::cout << "\nThanks for playing!\n";
    return 0;
}