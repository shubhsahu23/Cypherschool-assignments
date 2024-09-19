#include <iostream>
#include <string>

int countCharacter(const std::string &str, char ch) {
    int count = 0;
    for (char c : str) {
        if (c == ch) {
            count++;
        }
    }
    return count;
}

int main() {
    std::string str1 = "Hello, World!";
    char ch1 = 'l';
    
    std::cout << "String: " << str1 << "\n";
    std::cout << "Character: " << ch1 << "\n";
    std::cout << "Occurrences: " << countCharacter(str1, ch1) << std::endl;

    std::string str2 = "C++ Programming";
    char ch2 = 'm';
    std::cout << "\nString: " << str2 << "\n";
    std::cout << "Character: " << ch2 << "\n";
    std::cout << "Occurrences: " << countCharacter(str2, ch2) << std::endl;

    std::string str3 = "OpenAI ChatGPT";
    char ch3 = 'A';
    std::cout << "\nString: " << str3 << "\n";
    std::cout << "Character: " << ch3 << "\n";
    std::cout << "Occurrences: " << countCharacter(str3, ch3) << std::endl;

    return 0;
}
