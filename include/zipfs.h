#ifndef ZIPFS_H
#define ZIPFS_H

#include <vector>
#include <string>
#include <map>
#include <set>
#include <multimap>

namespace session17 {

    /**
     * @brief Reads a book file and returns only alphabetic characters.
     * 
     * This function reads the contents of a file, removes non-alphabetic
     * characters, and returns a vector of alphabetic characters in lowercase.
     * 
     * @param fileName The name of the file to read.
     * @return std::vector<char> A vector containing only alphabetic characters.
     */
    std::vector<char> readBook(const std::string &fileName);

    /**
     * @brief Computes the frequency of each word in the book.
     * 
     * This function takes a vector of characters (representing a book) and
     * counts the occurrences of each word, storing them in a map.
     * 
     * @param book A vector of characters representing the book.
     * @return std::map<std::string, int> A map with words as keys and frequencies as values.
     */
    std::map<std::string, int> computeWordFrequency(const std::vector<char> &book);

    /**
     * @brief Counts the number of unique words in the book.
     * 
     * This function counts the unique words in a vector of characters using a set.
     * 
     * @param book A vector of characters representing the book.
     * @return int The number of unique words.
     */
    int countUniqueWords(const std::vector<char> &book);
}

namespace session19 {

    /**
     * @brief Sorts the frequencies in descending order.
     * 
     * This function takes a map of word frequencies and sorts them into a multimap
     * with frequencies as keys and words as values, in descending order.
     * 
     * @param frequencies A map with words as keys and frequencies as values.
     * @return std::multimap<int, std::string> A sorted multimap with frequencies as keys.
     */
    std::multimap<int, std::string> sortFrequencies(const std::map<std::string, int> &frequencies);

    /**
     * @brief Outputs sorted word frequencies to a file.
     * 
     * This function outputs the sorted word frequencies along with their ranks to a file.
     * Each line in the file contains the rank, frequency, and word.
     * 
     * @param sortedFreqs A multimap with frequencies as keys and words as values.
     * @param outputFile The name of the file to write the output.
     */
    void outputFrequenciesToFile(const std::multimap<int, std::string> &sortedFreqs, const std::string &outputFile);
}

#endif
