#include "Parser.hpp"

std::pair<int, int> ParseTwoInts(int argc, char** argv) {
    if (argc > 3) {
        return {std::atoi(argv[0]), std::atoi(argv[1])};
    }
    return {0, 0};
}