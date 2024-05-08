#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

vector<string> split(const string &s) {
    vector<string> tokens;
    stringstream ss(s);
    string token;
    while (ss >> token) {
        tokens.push_back(token);
    }
    return tokens;
}

bool search_word(const string &sentence, const string &word) {
    vector<string> words = split(sentence);
    for (const auto &w : words) {
        if (w == word) {
            return true;
        }
    }
    return false;
}

int main() {
    string sentence;
    cout << "Masukkan kalimat: ";
    getline(cin, sentence);

    string word;
    cout << "Masukkan kata yang ingin dicari: ";
    cin >> word;

    if (search_word(sentence, word)) {
        cout << "Kata '" << word << "' ditemukan dalam kalimat." << endl;
    } else {
        cout << "Kata '" << word << "' tidak ditemukan dalam kalimat." << endl;
    }

    return 0;
}
