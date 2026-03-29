#include <iostream>
#include <string>

#include <Windows.h>

#include <greeter.h>

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	my_namespace::Greeter g;
	std::string name{ "" };
	std::cout << "Введите имя: ";
	std::cin >> name;
	std::cout << g.greet(name);
}
