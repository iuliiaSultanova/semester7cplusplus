#include <iostream>
#include <string>
#include <vector>
#include <cctype>

bool isValidOctet(const std::string& octet) {
    if (octet.empty() || octet.size() > 3) return false;
    if (!std::isdigit(octet[0]) || (octet.size() > 1 && octet[0] == '0')) return false;

    for (char ch : octet) {
        if (!std::isdigit(ch)) return false;
    }

    int num = std::stoi(octet);
    return num >= 0 && num <= 255;
}

std::vector<std::string> splitIP(const std::string& ip) {
    std::vector<std::string> octets;
    std::string currentOctet;

    for (char ch : ip) {
        if (ch == '.') {
            octets.push_back(currentOctet);
            currentOctet.clear();
        } else {
            currentOctet += ch;
        }
    }
    octets.push_back(currentOctet);
    return octets;
}

bool isValidIP(const std::string& ip) {
    std::vector<std::string> octets = splitIP(ip);

    if (octets.size() != 4) return false;

    for (const std::string& octet : octets) {
        if (!isValidOctet(octet)) return false;
    }
    return true;
}

int main() {
    std::string ip;
    std::cout << "Enter IP address: ";
    std::cin >> ip;

    if (isValidIP(ip)) {
        std::cout << "Valid" << std::endl;
    } else {
        std::cout << "Invalid" << std::endl;
    }

    return 0;
}
