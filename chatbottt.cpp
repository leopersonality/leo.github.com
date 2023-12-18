#include <iostream>
#include <string>
#include <map>

// Function to get AI's response based on user input
std::string getAIResponse(const std::string& userInput) {
    // Predefined responses (you can expand this with more responses)
    std::map<std::string, std::string> responses = {
        {"hi", "Hello! How can I assist you?"},
        {"how are you", "I'm just a computer program, but thanks for asking!"},
        {"bye", "Goodbye! Have a great day!"}
        // Add more predefined responses here
    };

    // Convert user input to lowercase for case-insensitive comparison
    std::string input = userInput;
    for (char& c : input) {
        c = std::tolower(c);
    }

    // Search for a response based on user input
    auto it = responses.find(input);
    if (it != responses.end()) {
        return it->second; // Return the corresponding AI response
    } else {
        return "I'm not sure how to respond to that.";
    }
}

int main() {
    std::string userInput;
    std::cout << "AI: Hello! How can I assist you?\nUser: ";

    while (std::getline(std::cin, userInput)) {
        if (userInput == "exit") {
            std::cout << "AI: Goodbye!\n";
            break;
        }

        std::string response = getAIResponse(userInput);
        std::cout << "AI: " << response << "\nUser: ";
    }

    return 0;
}
