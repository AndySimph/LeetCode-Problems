//Andy Simphaly

#include <iostream>
#include <string>

int main() {

    std::string input = "This is the string";

    //Counter
    int ctr = 0;

    //Loop through each char
    for (int i = 0; i < input.size(); i++) {
        //Check if the input is not a space
        if (input[i] != ' ') {
            //Re-assign char accordingly
            input[ctr++] = input[i];
        }
    }

    //Remove space
    input[ctr] = '\0';

    //Output
    std::cout << input << std::endl;

    return 0;
}