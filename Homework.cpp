#include <iostream>
#include<iomanip>
#include<stdint.h>
#include <string>

int main()
{
    setlocale(LC_ALL, "Russian");

    int i;
    std::cout << "������������, ������� �����  : " << std::endl;
    std::string a;
    std::cin >> a;
    if (a.length() > 2) {
        std::cout << " ��������� ������ : " << a[a.size() - 1]<<std::endl;
        std::cout << " ������ ������ : " << a[a.size() - a.length() + 0] << std:: endl;
    }
    else
    {
        std::cout<<" ������� ������ �����  " << std::endl;
    }
    return 0;
}
 