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

	std::cout <<"����� ������� \n" << std::endl;
	std::cout << "������: ";
	std::cin >> person->country;
	std::cout << "�����: ";
	std::cin >> person->city;
	std::cout << "�����: ";
	std::cin >> person->street;
	std::cout << "���: ";
	std::cin >> person->house;
	std::cout << "��������: ";
	std::cin >> person->flat;
	std::cout << "������: ";
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