#include <iostream>
#include <random>

using namespace std;

int randomizer(int min, int max) {

    random_device rd;  // Non-deterministic random number generator
    mt19937 gen(rd()); // Mersenne Twister RNG
    uniform_int_distribution<> dis(min, max);

    return dis(gen);

}