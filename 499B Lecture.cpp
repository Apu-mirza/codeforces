#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    unordered_map<string, string> dictionary;
    string language1, language2;

    for (int i = 0; i < m; i++) {
        cin >> language1 >> language2;
        dictionary[language1] = language2;
    }

    string lectureWord;
    string colNote = "";

    for (int i = 0; i < n; i++) {
        cin >> lectureWord;
        if (dictionary.find(lectureWord) != dictionary.end()) {
            if (lectureWord.length() <= dictionary[lectureWord].length()) {
                colNote += lectureWord + " ";
            } else {
                colNote += dictionary[lectureWord] + " ";
            }
        } else {
            colNote += lectureWord + " ";
        }
    }

    if (!colNote.empty() && colNote[colNote.length() - 1] == ' ') {
        colNote.pop_back();
    }

    cout << colNote << endl;

    return 0;
}

