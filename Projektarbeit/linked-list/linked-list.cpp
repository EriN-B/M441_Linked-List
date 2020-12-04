#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <windows.h> // for sleep()

int main()
{
    std::cout << "Searching for the best algorithm to use";
    while (true)
    {
        Sleep(100);
        std::cout << "." << std::flush;
        Sleep(100);
        std::cout << "." << std::flush;
        Sleep(100);
        std::cout << "." << std::flush;
        Sleep(100);
        std::cout << "\b\b\b   \b\b\b" << std::flush;
    }
    system("pause");
    return 0;
}