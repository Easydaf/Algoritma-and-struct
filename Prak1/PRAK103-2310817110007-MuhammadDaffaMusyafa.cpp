#include <iostream>

struct temp
{
    char huruf;
    char kata[10];
    int angka;
};

int main()
{
    temp data;
    std::cout << "Masukkan sebuah huruf =    ";
    std::cin >> data.huruf;
    std::cout << "Masukkan sebuah kata =     ";
    std::cin >> data.kata;
    std::cout << "Masukkan angka =         ";
    std::cin >> data.angka;

    std::cout << "Huruf yang dimasukkan adalah = " << data.huruf << std::endl;
    std::cout << "Kata yang dimasukkan adalah = " << data.kata << std::endl;
    std::cout << "Angka yang dimasukkan adalah = " << data.angka << std::endl;
}