#include <iostream>
#include <string>
#include <regex>

using namespace std;

int main() {
    string password;
    int score = 0;

    getline(cin, password);

    if (password.find(' ') != string::npos) {
        cout << 0 << endl;
        return 0;
    }

    if (password.length() >= 8 && password.length() <= 34) {
        score++;
    }

    regex lowercase_pattern("[a-z]");
    if (regex_search(password, lowercase_pattern)) {
        score++;
    }

    regex uppercase_pattern("[A-Z]");
    if (regex_search(password, uppercase_pattern)) {
        score++;
    }

    regex digit_pattern("[0-9]");
    if (regex_search(password, digit_pattern)) {
        score++;
    }

    regex special_char_pattern(R"([!@#$%^&*(),.?":{}|<>])");
    if (regex_search(password, special_char_pattern)) {
        score++;
    }

    cout << score << endl;

    return 0;
}