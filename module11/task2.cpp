#include <iostream>
#include <string>
#include <cctype>

bool isValidCharInLocalPart(char c) {
    std::string validChars = "!#$%&'*+-/=?^_`{|}~";
    return std::isalnum(c) || validChars.find(c) != std::string::npos || c == '.' || c == '-';
}

bool isValidCharInDomainPart(char c) {
    return std::isalnum(c) || c == '.' || c == '-';
}

std::string getLocalPart(const std::string& email) {
    return email.substr(0, email.find('@'));
}

std::string getDomainPart(const std::string& email) {
    return email.substr(email.find('@') + 1);
}

bool isValidLocalPart(const std::string& localPart) {
    if (localPart.empty() || localPart.size() > 64) return false;
    if (localPart.front() == '.' || localPart.back() == '.') return false;
    
    for (size_t i = 0; i < localPart.size(); ++i) {
        if (!isValidCharInLocalPart(localPart[i])) return false;
        if (i > 0 && localPart[i] == '.' && localPart[i - 1] == '.') return false;
    }
    return true;
}

bool isValidDomainPart(const std::string& domainPart) {
    if (domainPart.empty() || domainPart.size() > 63) return false;
    if (domainPart.front() == '.' || domainPart.back() == '.') return false;
    
    for (size_t i = 0; i < domainPart.size(); ++i) {
        if (!isValidCharInDomainPart(domainPart[i])) return false;
        if (i > 0 && domainPart[i] == '.' && domainPart[i - 1] == '.') return false;
    }
    return true;
}

bool isValidEmail(const std::string& email) {
    size_t atPos = email.find('@');
    
    if (atPos == std::string::npos || email.find('@', atPos + 1) != std::string::npos) return false;
    
    std::string localPart = getLocalPart(email);
    std::string domainPart = getDomainPart(email);
    
    return isValidLocalPart(localPart) && isValidDomainPart(domainPart);
}

int main() {
    std::string email;
    std::cout << "Enter email address: ";
    std::getline(std::cin, email);

    if (isValidEmail(email)) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }
    
    return 0;
}

