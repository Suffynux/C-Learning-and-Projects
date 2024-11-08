#include <iostream>
#include <string>
#include <array>

int main() {
    std::string userName = "Umme Kalsoom Asif";  // Replace with your name
    std::string uniqueID = "bc240207282";         // Replace with your VUID

    std::cout << userName << std::endl;
    std::cout << uniqueID << std::endl;

    std::string extractedID = uniqueID.substr(2); 
    extractedID = extractedID.substr(0, extractedID.size() - 2); 
    int extractedYear = std::stoi(extractedID.substr(extractedID.size() - 4));

    // Check if it's a leap year
    bool leapYear = (extractedYear % 4 == 0 && extractedYear % 100 != 0) || (extractedYear % 400 == 0);
    std::cout << "The year " << extractedYear << " is " << (leapYear ? "a leap year." : "not a leap year.") << std::endl;

    // Array to hold the number of days in each month
    std::array<int, 12> daysInMonth = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    int chosenMonth;
    do {
        std::cout << "Enter a month number (1-12) or -1 to exit: ";
        std::cin >> chosenMonth;

        if (chosenMonth == -1) {
            break; 
        }

        // Validate input and handle month selection
        if (chosenMonth >= 1 && chosenMonth <= 12) {
            int days = daysInMonth[chosenMonth - 1]; // Get days for the selected month
            if (chosenMonth == 2 && leapYear) {
                days++; // Add an extra day for leap year in February
            }
            std::cout << (chosenMonth == 2 ? "February has " : std::to_string(days) + " days.") << std::endl;
        } else {
            std::cout << "Invalid input! Please enter a number between 1 and 12." << std::endl;
        }
    } while (true);

    return 0;
}

