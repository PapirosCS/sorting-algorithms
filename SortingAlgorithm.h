//
// Created by Pablo Cabezas on 13-03-2022.
//

#ifndef SORTINGALGORITHMS_SORTINGALGORITHM_H
#define SORTINGALGORITHMS_SORTINGALGORITHM_H
#include <thread>
#include <chrono>
#include <algorithm>
#include <iostream>

class SortingAlgorithm {
public:
    //Constructor
    SortingAlgorithm()
    {

    }

    //Sorting algorithms return execution time.
    //Both insertionSort and BubbleSort have a worst-time complexity
    //of Big O n^2. However, insertion sort usually performs better.
    std::chrono::duration<double, std::milli> insertionSort(std::array<int, 20000> collection);
    std::chrono::duration<double, std::milli> bubbleSort(std::array<int, 20000> collection);
};
#endif //SORTINGALGORITHMS_SORTINGALGORITHM_H
