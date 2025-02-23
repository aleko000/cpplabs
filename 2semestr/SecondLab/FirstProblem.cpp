#include <iostream>

class Difference {
    public:
    Difference (double NumberOne, double NumberTwo) // конструктор для класса Difference
    {
        number_one = NumberOne;
        number_two = NumberTwo;
    }
   
    void console() //метод, для вывода в консоль полуразницы, обращается к private функции  
    { 
        std::cout << "Result = " << half_difference(number_one, number_two) << std::endl; 
    }
    private:
    double number_one;
    double number_two;
    double result;

    double half_difference(double number_one, double number_two) // вычисление полуразницы
    {
        return result = (number_one - number_two) / 2;
    }
};



int main()
{
    int number_one; std::cin >> number_one;
    int number_two; std::cin >> number_two;
Difference* problem = new Difference(number_one, number_two); // инициализация, вывод
problem -> console();
    return 0;
};
