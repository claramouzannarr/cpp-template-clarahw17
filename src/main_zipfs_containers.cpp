#include "zipfs.h"
#include <iostream>
#include <fstream>
#include <sstream>

namespace session17 {

// Milestone 1: Read the book file
std::vector<char> readBook(const std::string &fileName) {
    std::vector<char> book;
    std::ifstream file(fileName);
    if (!file.is_open()) {
        std::cerr << "Failed to open file." << std::endl;
        return book;
    }

    char ch;
    while (file.get(ch)) {
        if (std::isalpha(ch)) {
            book.push_back(std::tolower(ch));
        } else {
            book.push_back(' ');
        }
    }
    return book;
}

// Milestone 2: Compute word frequencies
std::map<std::string, int> computeWordFrequency(const std::vector<char> &book) {
    std::map<std::string, int> frequencies;
    std::stringstream ss(std::string(book.begin(), book.end()));
    std::string word;

    while (ss >> word) {
        ++frequencies[word];
    }
    return frequencies;
}

// Milestone 3: Count unique words
int countUniqueWords(const std::vector<char> &book) {
    std::set<std::string> uniqueWords;
    std::stringstream ss(std::string(book.begin(), book.end()));
    std::string word;

    while (ss >> word) {
        uniqueWords.insert(word);
    }
    return uniqueWords.size();
}

}  // namespace session17

int main() {
    std::string filename = "moby_dick.txt"; // Replace with the actual path to your text file
    auto book = session17::readBook(filename);

    auto frequencies = session17::computeWordFrequency(book);
    int uniqueWordCount = session17::countUniqueWords(book);

    std::cout << "Total unique words: " << uniqueWordCount << std::endl;
    return 0;
}
