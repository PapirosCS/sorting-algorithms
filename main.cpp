#include <iostream>
#include <random>
#include <algorithm>
#include <array>
#include "SortingAlgorithm.h"

int main() {

    //Random Setup
    std::random_device dev;
    std::mt19937 rng(dev());
    std::uniform_int_distribution<std::mt19937::result_type> randomDistribution(1,100);

    //Importante Variables
    const int array_size = 20000;
    std::cout << "Sorting Algorithms: Creating long array...\n" << std::endl;

    //Fill the set of numbers
    std::array<int, array_size> numbersInSet;

    //Sorting Algorithm Object
    SortingAlgorithm *algorithms = new SortingAlgorithm();
    std::cout << "Insertion Sorting Array..." << std::endl;
    std::chrono::duration<double, std::milli> insertionTime =  algorithms->insertionSort(numbersInSet);
    std::cout << "Bubble Sorting Array..." << std::endl;
    std::chrono::duration<double, std::milli> bubbleTime =  algorithms->bubbleSort(numbersInSet);

    //Ending of sorting
    std::cout << "End of sorting..." << std::endl << std::endl;

    //Print results
    std::cout << "Time elapsed for insertion algorithm: " << insertionTime.count() / 1000.0 << " s" << std::endl;
    std::cout << "Time elapsed for bubble sort algorithm: " << bubbleTime.count() / 1000.0 << " s" << std::endl;


    return 0;
}
