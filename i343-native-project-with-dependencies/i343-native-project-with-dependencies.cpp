// i343-native-project-with-dependencies.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

//#include <i343/dynamic_math/mathematics.h>
#include <i343/static_math/mathematics.h>

int main()
{
    const double sum = i343::static_math::mathematics::add(42.0, 67.2);

    //const double difference = i343::dynamic_math::mathematics::subtract(128.0, 48.0);

    std::cout << sum;
    //std::cout << '\n'
	//std::cout << difference;
	std::cout << std::endl;

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
