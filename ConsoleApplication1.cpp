
#include <iostream>
#include <string>
using std::string;
using std::cout;
#include "CarsFactory.h";

int main()
{
setlocale(LC_ALL,"");
    try {
        string str{ "Седан" };
        auto c = FactoryCars::GetCars(str);
        c->print();
    }
    catch (std::runtime_error& e) {
        std::cerr << e.what() << "\n";
    }
            try {
                string str{ "Хэтчбэк" };
                auto c = FactoryCars::GetCars(str);
                c->print();
            }
            catch (std::runtime_error& e) {
                std::cerr << e.what() << "\n";
            }
                    try {
                        string str{ "Кабриолет" };
                        auto c = FactoryCars::GetCars(str);
                        c->print();
                    }
                    catch (std::runtime_error& e) {
                        std::cerr << e.what() << "\n";
                    }
}
