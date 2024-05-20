
#include <iostream>
int function(std::string& str, int forbidden_length)  {
    size_t numlengtch = str.length();
    try {
       
        if (numlengtch == forbidden_length) {
            throw std::runtime_error("вы ввели слово запретной длины, пока!\n");
           
        }
        std::cout << "Длина слова: " << str << " " << numlengtch;
        std::cout << std::endl;
        return 0;

    }
    catch (std::runtime_error & e) {

        std::cerr << e.what() << std::endl;
        return -1;
        
    }
}
int main()
{
    std::string str;
    int leng;
    std::cout << "Введите запретную длинну\n";
    std::cin >> leng;
    while (true) {
        
        std::cout << "Введите слово\n";
        std::cin >> str;
        if (function(str, leng) < 0) {
            break;
        }

    }
    
}
