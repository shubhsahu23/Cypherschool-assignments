#include <iostream>
#include <string>

int stringLength(const std::string &str) {
    return str.length();  
}

int main() {
    std::string str1 = "Hello, World!";
    
    std::cout << "String: " << str1 << "\n";
    std::cout << "Length: " << stringLength(str1) << std::endl;

    std::string str2 = "C++ Programming";
    std::cout << "\nString: " << str2 << "\n";
    std::cout << "Length: " << stringLength(str2) << std::endl;

    std::string str3 = "OpenAI ChatGPT";
    std::cout << "\nString: " << str3 << "\n";
    std::cout << "Length: " << stringLength(str3) << std::endl;

    return 0;
}
