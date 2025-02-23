#include <iostream>
#include <string>

class Books
{
public:
Books(); // конструктор по умолчанию
Books(const std::string& Book_name, int Number_pages, int Book_price) //конструктор перегрузки с параметрами
{
    book_name = Book_name;
    number_pages = Number_pages;
    book_price = Book_price;
}
~Books() // деструктор
{
    std::cout << "Object was deleted" << std::endl;
}
void average_price() // метод, выводящий на консоль ср.цену
{ 
    std::cout << "Its average price = " << get_average_price() << std::endl;
}
void price_increase () // метод использует stl функцию rfind, ищущую последнее вхождение подстроки в строку и возвращающее элемент, с которого это вхождение начинается
{
    if(book_name.rfind("Programming", 0) == 0) {
        book_price *= 2;
    }
}
void console() // выводит в консоль инфу о книге
{
    std::cout << "Book: " << book_name << ", its price : " << book_price << " , where quantity of pages = " << number_pages << std::endl;
}
private:
    std::string book_name;
    int number_pages;
    int book_price;

    double get_average_price() 
    {
        return book_price / number_pages ; 
    }
};



int main()
{
    std::string book_name;
    getline(std::cin, book_name);
    int number_pages; 
    std::cin >> number_pages;
    int book_price;
    std::cin >> book_price;
    Books* book = new Books(book_name, number_pages, book_price);
    book -> average_price();
    book -> price_increase();
    book -> console();

    return 0;
};
