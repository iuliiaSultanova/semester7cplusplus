#include <iostream>
#include <string>

std::string encrypt_caesar(const std::string& text, int shift) {
    std::string result;
    shift = shift % 26;

    for (char c : text) {
        if (c >= 'A' && c <= 'Z') {
            char new_char = 'A' + (c - 'A' + shift) % 26;
            result += new_char;
        } 
        else if (c >= 'a' && c <= 'z') {
            char new_char = 'a' + (c - 'a' + shift) % 26;
            result += new_char;
        } 
        else {
            result += c;
        }
    }
    return result;
}

int main() {
    std::string text;
    int shift;

    std::cout << "Enter the text to encrypt: ";
    std::getline(std::cin, text); 

    std::cout << "Enter the shift (Code): ";
    std::cin >> shift;

    std::string encrypted_text = encrypt_caesar(text, shift);
    std::cout << "Encrypted Text: " << encrypted_text << std::endl;

    return 0;
}
