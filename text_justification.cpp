#include <iostream>
#include <vector>
#include <string>
#include <cctype>  // For ispunct() and tolower()

using namespace std;

// Function to remove punctuation from the end of a word
string removePunctuation(string word) {
    if (!word.empty() && ispunct(word.back())) {
        word.pop_back();  // Removing the last character if it's punctuation
    }
    return word;
}

// Function to format and justify text
void justifyText(vector<string>& words, int maxWidth) {
    string line;         // Stores the current line
    int lineLength = 0;  // Tracks the current line length

    for (string word : words) {
        word = removePunctuation(word);  // Removing punctuation before processing

        // If adding the next word exceeds maxWidth, print the current line
        if (lineLength + word.length() + (line.empty() ? 0 : 1) > maxWidth) {
            if (!line.empty()) {
                line[0] = tolower(line[0]);  // Converting the first letter to lowercase
            }
            cout << line << endl;
            line.clear();
            lineLength = 0;
        }

        // Adding the current word to the line
        if (!line.empty()) {
            line += " ";  // Adding space before the word (except for the first word)
        }
        line += word;
        lineLength = line.length();
    }

    // Printing the last line if it exists
    if (!line.empty()) {
        line[0] = tolower(line[0]);  // Converting first letter to lowercase
        cout << line << endl;
    }
}

int main() {
    // Example input
    vector<string> words = {"This", "is", "an", "example", "of", "text", "justification."};
    int maxWidth = 10;  // Maximum width of each line

    // Calling function to format text
    justifyText(words, maxWidth);

    return 0;
}
