#include <iostream>
#include <string>

std::string concatenateStrings(const std::string &str1, const std::string &str2) {
    return str1 + str2; 
}

int main() {
   
    std::string str1 = "Hello, ";
    std::string str2 = "World!";
    std::cout << "Concatenated String: " << concatenateStrings(str1, str2) << std::endl;

    std::string str3 = "C++ ";
    std::string str4 = "Programming";
    std::cout << "Concatenated String: " << concatenateStrings(str3, str4) << std::endl;

    std::string str5 = "OpenAI ";
    std::string str6 = "ChatGPT";
    std::cout << "Concatenated String: " << concatenateStrings(str5, str6) << std::endl;

    return 0;
}
