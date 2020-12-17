#pragma  warning(disable :4996) 

#include <iostream>
#include <string>
#include <thread>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::getline;

int main()
{
    for (int i = 0; i < 11; i += 2)
    {
        std::cout << i << "\b";
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }

    std::cout << std::endl;

    return 0;
}
//
//void set_null(int arr[], char* arg, ...)
//{
//	va_list list;
//	va_start(list, arg);
//
//	while (arg != '\0')
//	{
//		
//	}
//}