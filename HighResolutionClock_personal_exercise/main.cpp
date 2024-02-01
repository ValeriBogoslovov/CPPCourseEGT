#include <iostream>
#include <chrono> // needed for high_resolution_clock
#include <vector> // needed for vector
#include <algorithm> // needed for sort()


// FIND THE SMALLEST ELEMENT IN RANDOM GENERATED NUMBERS IN VECTOR
int main()
{
    //The pseudo-random number generator is initialized using the argument passed as seed
    srand(time(0));

    std::vector<int> random_vec;
    // start the stopwatch
    auto startNoSort = std::chrono::high_resolution_clock::now();

    for (int i = 0; i <= 999; i++) {
        random_vec.push_back(i + rand() % 99999);
    }

    std::cout << "All unsorted elements in the vector: \n\n";

    for (int i : random_vec) {
        std::cout << i << " ";
    }

    std::cout << "\n\n";
    auto stopNoSort = std::chrono::high_resolution_clock::now();
    auto durationNoSort = std::chrono::duration_cast<std::chrono::milliseconds>(stopNoSort - startNoSort);
    std::cout << "Without sorting the vector, time in milliseconds: " << durationNoSort.count();
    std::cout << "\n\n";


    auto startSort = std::chrono::high_resolution_clock::now();
    for (int i = 0; i <= 999; i++) {
        random_vec.push_back(i + rand() % 99999);
    }

    std::cout << "All unsorted elements in the vector: \n\n";
    for (int i : random_vec) {
        std::cout << i << " ";
    }
    std::cout << "\n\n";

    sort(random_vec.begin(), random_vec.end());
    std::cout << "After sorting the vector.\n";
    std::cout << "Smallest element is equal to: " << random_vec[0] << std::endl;

    // stop the stopwatch
    auto stopSort = std::chrono::high_resolution_clock::now();

    std::cout << std::endl;
    // subtract the time in microseconds from stop to start
    // we can change from microseconds to milliseconds
    auto durationSort = std::chrono::duration_cast<std::chrono::milliseconds>(stopSort - startSort);
    std::cout << "Time taken to populate the vector print unsorted, sort it and print the smallest element: ";
    std::cout << durationSort.count() << " milliseconds\n";

    return 0;
}