```cpp
#include <iostream>
#include <algorithm>
#include <string>

bool isScramble(std::string s1, std::string s2) {
    if (s1.length() != s2.length()) {
        return false;
    }
    if (s1 == s2) {
        return true;
    }
    std::sort(s1.begin(), s1.end());
    std::sort(s2.begin(), s2.end());
    if (s1 != s2) {
        return false;
    }
    for (int i = 1; i < s1.length(); i++) {
        if (isScramble(s1.substr(0, i), s2.substr(0, i)) && isScramble(s1.substr(i), s2.substr(i))) {
            return true;
        }
        if (isScramble(s1.substr(0, i), s2.substr(s2.length() - i)) && isScramble(s1.substr(i), s2.substr(0, s2.length() - i))) {
            return true;
        }
    }
    return false;
}

int main() {
    std::string s1, s2;
    std::cout << "Enter first string: ";
    std::cin >> s1;
    std::cout << "Enter second string: ";
    std::cin >> s2;
    if (isScramble(s1, s2)) {
        std::cout << "Yes, one string is a scrambled version of another." << std::endl;
    } else {
        std::cout << "No, one string is not a scrambled version of another." << std::endl;
    }
    return 0;
}
```