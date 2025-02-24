#include <iostream>
#include <fstream>
#include <time.h>

float randomFloat() //функция, генерирующая вещественные числа
{
    return (float)(rand()) / (float)(rand()); 
}



int main()
{
    srand(time(0)); //инициализация генератора
    std::ofstream out("C:\\Games\\a.txt"); //поток для записи
    int n;
    std::cout << "The number of digits in the file:" << std::endl;
    std::cin >> n;
    for(int i = 0; i < n; i++) //запись в файл
    {
        out << randomFloat() << " ";
    }
    out.close();
    double positive_number = 0; //счетчик для положительных чисел
    double umnog = 1; // произведение чисел больших 0 и меньших 0
    std::ifstream in("C:\\Games\\a.txt"); // поток чтения
    for(int i = 0; i < n; i++) // считывание файла и счет положительных чисел
    {
        double b; in >> b;
        if(b > 0)
        {
            positive_number += b;
            
            if(b < 1) 
            {
                umnog *= b;
            }
        }       
        
    }

    std::cout << "The number of positive digits: " << positive_number << std::endl;
    std::cout << "The multiply: " << umnog << std::endl;
    return 0;
};
