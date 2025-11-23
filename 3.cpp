#include <iostream>
#include <vector>

//typedef std::vector<std::pair<std::string, int>> pairlist_t;
//typedef std::string text_t;
using text_t = std::string;
using pairlist_t = std::vector<std::pair<std::string, int>>;


int main () {

    //typedef = reserved keyword used to create an additional name (alias) for another data type. 
    //          New identifier for an existing type
    //          Helps with readablility and reduces typos
    //          Use when ther is a clear benefit
    //          Replaced with 'using' (work better w/ templates)
    std::vector<std::pair<std::string, int>> pairlist;
    pairlist_t pairlist2;

    text_t name = "insu";
    std::cout << "name: " << name << std::endl;
    return 0;
}