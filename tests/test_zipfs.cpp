#include "zipfs.h"  // Include your header file
#include <gtest/gtest.h>

// Example test for readBook function
TEST(ZipfsTest, ReadBook) {
    auto book = session17::readBook("moby_dick.txt");  
    EXPECT_GT(book.size(), 0);  
}

// Example test for computeWordFrequency function
TEST(ZipfsTest, ComputeWordFrequency) {
    std::vector<char> book = {'t', 'e', 's', 't', ' ', 't', 'e', 's', 't'};
    auto frequencies = session17::computeWordFrequency(book);
    EXPECT_EQ(frequencies["test"], 2);  
}


