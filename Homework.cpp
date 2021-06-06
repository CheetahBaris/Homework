#include <iostream>
#include<iomanip>
#include<stdint.h>
#include <string>

int main()
{
    setlocale(LC_ALL, "Russian");

    int i;
    std::cout << "Здравствуйте, введите слово  : " << std::endl;
    std::string a;
    std::cin >> a;
    if (a.length() > 2) {
        std::cout << " Последний символ : " << a[a.size() - 1]<<std::endl;
        std::cout << " Первый символ : " << a[a.size() - a.length() + 0] << std:: endl;
    }
    else
    {
        std::cout<<" Введите другое слово  " << std::endl;
    }
    return 0;
}
 