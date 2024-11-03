#include "zipfs.h"
#include <iostream>
#include <fstream>

namespace session19 {

// Milestone 4: Sort frequencies using multimap
std::multimap<int, std::string> sortFrequencies(const std::map<std::string, int> &frequencies) {
    std::multimap<int, std::string, std::greater<>> sortedFrequencies;
    for (const auto &pair : frequencies) {
        sortedFrequencies.emplace(pair.second, pair.first);
    }
    return sortedFrequencies;
}

// Milestone 5: Output sorted frequencies to file
void outputFrequenciesToFile(const std::multimap<int, std::string> &sortedFreqs, const std::string &outputFile) {
    std::ofstream outFile(outputFile);
    int rank = 1;
    for (const auto &[freq, word] : sortedFreqs) {
        outFile << rank++ << " " << freq << " " << word << "\n";
    }
}

}  // namespace session19

int main() {
    std::string filename = "moby_dick.txt";  // Replace with the actual path to your text file
    std::string outputFilename = "output.txt";

    auto book = session17::readBook(filename);
    auto frequencies = session17::computeWordFrequency(book);

    auto sortedFreqs = session19::sortFrequencies(frequencies);
    session19::outputFrequenciesToFile(sortedFreqs, outputFilename);

    std::cout << "Output written to " << outputFilename << std::endl;
    return 0;
}
