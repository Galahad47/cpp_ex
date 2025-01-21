#include <iostream> 


int main()
{
    setlocale(LC_ALL, "");
    std::string text;
    std::cout<<"Введите текст.\n";
    std::cin >>text;
    for(auto i = text.rbegin(); i != text.rend();++i){
        std::cout<<*i<<std::endl;
    }
}
