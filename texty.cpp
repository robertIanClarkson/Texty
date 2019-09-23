#include <iostream>
#include <string>
using namespace std;

int GetNumOfNonWSCharacters(string text) {
    int sum = 0;
    for (int i = 0; i < text.length(); i++) {
        if (text.at(i) != ' ') {
            sum++;
        }
    }
    return sum;
}

int GetNumOfWords(string text) {
    int sum = 0;
    for (int i = 0; i < text.length(); i++) {
        if (text.at(i) == ' ') {
            sum++;
        }
    }
    return sum;
}

int FindText(string find, string text) {
    return 0;
}

void ReplaceExclamation(string &text) {

}

void ShortenSpace(string &text) {

}

void PrintMenu(string &text) {
    string pick;
    int result;
    while (pick != "q") {
        cout << "MENU" << endl;
        cout << "c - Number of non-whitespace characters" << endl;
        cout << "w - Number of words" << endl;
        cout << "f - Find text" << endl;
        cout << "r - Replace all !'s" << endl;
        cout << "s - Shorten spaces" << endl;
        cout << "q - Quit" << endl << endl;
        cout << "Choose an option: ";
        cin >> pick;

        if (pick == "c") { // Number of non-whitespace characters
            result = GetNumOfNonWSCharacters(text);
            cout << endl << "Number of non-whitespace characters: " << result << endl << endl;
        } else if (pick == "w") { // Number of words
            result = GetNumOfWords(text);
            cout << endl << "Number of words: " << result << endl << endl;
        } else if (pick == "f") { // Find text
            string find;
            cout << "Enter a word or phrase to be found: ";
            cin >> find;
            result = FindText(find, text);
            cout << endl << "\'" << find << "\' instances: " << result << endl << endl;
        } else if (pick == "r") { // Replace all !'s
            ReplaceExclamation(text);
            cout << endl << "Edited text: " << text << endl << endl;
        } else if (pick == "s") { // Shorten spaces
            ShortenSpace(text);
            cout << endl << "Edited text: " << text << endl << endl;
        }
    }
}

int main() {
    string text;
    cout << "Enter a sample text:" << endl;
    getline (cin, text);
    cout << endl << "You entered: " << text << endl << endl;
    PrintMenu(text);

    return 0;
}
