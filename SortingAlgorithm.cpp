//
// Created by Pablo Cabezas on 13-03-2022.
//

#include "SortingAlgorithm.h"

std::chrono::duration<double, std::milli> SortingAlgorithm::insertionSort(std::array<int, 20000> collection) {


    using std::chrono::high_resolution_clock;
    using std::chrono::duration_cast;
    using std::chrono::duration;
    using std::chrono::milliseconds;

    auto initialTime = high_resolution_clock::now();


    //Main function
    std::array<int, 20000> sorted_array;
    std::copy(std::begin(collection), std::end(collection), std::begin(sorted_array));

    for (int i = 0; i < 20000; i++)
    {
        if (i > 0)
        {
            int j = i - 1;
            int current = i;
            while(sorted_array[j] > sorted_array[current] && current != 0)
            {
                int saved_value = sorted_array[current];
                sorted_array[current] = sorted_array[j];
                sorted_array[j] = saved_value;
                j--;
                current--;
            }
        }
    }




    auto endingTime = high_resolution_clock::now();
    duration<double, std::milli> durationOfExecution = endingTime - initialTime;


    return durationOfExecution;
}


std::chrono::duration<double, std::milli> SortingAlgorithm::bubbleSort(std::array<int, 20000> collection) {

    using std::chrono::high_resolution_clock;
    using std::chrono::duration_cast;
    using std::chrono::duration;
    using std::chrono::milliseconds;

    auto initialTime = high_resolution_clock::now();


    //Main function
    std::array<int, 20000> sorted_array;
    std::copy(std::begin(collection), std::end(collection), std::begin(sorted_array));


    for(int i = 0; i < 20000; i++)
    {

        int leftValue = 0;
        int rightValue = 1;

        while(rightValue < 20000)
        {
            if(sorted_array[leftValue] > sorted_array[rightValue])
            {
                int rValue = sorted_array[rightValue];
                sorted_array[rightValue] = sorted_array[leftValue];
                sorted_array[leftValue] = rValue;
            }
            leftValue++;
            rightValue++;
        }

    }


    auto endingTime = high_resolution_clock::now();
    duration<double, std::milli> durationOfExecution = endingTime - initialTime;

    return durationOfExecution;

}