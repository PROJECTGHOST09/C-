#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    int vowel_count = 0;
    int consonant_count = 0;

    string s;
    string vowel = "AEIOUaeiou";

    cout << "Enter the string:\n";
    getline(cin, s);

    int l = s.length();

    for (int i = 0; i < l; i++) {

        if (isalpha(s[i])) {

            bool found = false;

            for (int k = 0; k < vowel.length(); k++) {

                if (s[i] == vowel[k]) {
                    found = true;
                    break;
                }
            }

            if (found) {
                vowel_count++;
            }
            else {
                consonant_count++;
            }
        }
    }

    cout << "Vowels in the string are: " << vowel_count << '\n';
    cout << "Consonants in the string are: " << consonant_count << '\n';

    return 0;
}