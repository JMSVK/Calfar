#include <iostream>
#include <string>

int main() {
        int fahrenheit = 32;
        std::cout<<"Calculador de grados farenhait"<<'\n';
        std::cout<<"Introduce los grados celsius y se hacen farenhait"<<'\n';
        std:: string respuesta;
        std::getline(std::cin >> std::ws, respuesta);
        int rtn = std::stoi(respuesta);
        int result = rtn / 5;
        result = result * 9;
        result = result + 32;
        std::string resultado = std::to_string(result);
        std::cout<<"la respuesta es " + resultado<<'\n';
        return 0;
}
