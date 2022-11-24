#include "Parser.hpp"
#include "lib/Additor.hpp"

int main(int argc, char** argv) {
    std::cout << Add(ParseTwoInts(argc, argv)) << std::endl;

    return 0;
}