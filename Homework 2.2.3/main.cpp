#include <iostream>

struct info {

	std::string country;
	std::string city;
	std::string street;
	int house;
	int flat;
	int index;
};

void new_info(info* person) {

	std::cout <<"Новый человек \n" << std::endl;
	std::cout << "Страна: ";
	std::cin >> person->country;
	std::cout << "Город: ";
	std::cin >> person->city;
	std::cout << "Улица: ";
	std::cin >> person->street;
	std::cout << "Дом: ";
	std::cin >> person->house;
	std::cout << "Квартира: ";
	std::cin >> person->flat;
	std::cout << "Индекс: ";
	std::cin >> person->index;
	std::cout << std::endl;


}


int main() {

	setlocale(LC_ALL, "Russian");

	info person1{};
	info person2{};
	info person3{};

	new_info(&person1);
	new_info(&person2);
	new_info(&person3);


	return 0;
}