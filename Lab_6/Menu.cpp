#include "Menu.h"

Body body;
Country country;
Engine engine;


void instruction_to_use() {
	system("cls");
	std::cout << "|              Инструкция            |" << std::endl;
	std::cout << "|------------------------------------|" << std::endl;
	std::cout << "|     'Arrow UP'     - курсор вверх  |" << std::endl;
	std::cout << "|     'Arrow Down'   - курсор вниз   |" << std::endl;
	std::cout << "|     'Enter'        - выбрать пункт |" << std::endl;
	std::cout << "|                                    |" << std::endl;
	std::cout << "|                      отменить      |" << std::endl;
	std::cout << "|     'ESC'          -   или         |" << std::endl;
	std::cout << "|                       выйти        |" << std::endl;
	std::cout << "|____________________________________|" << std::endl;
	std::cout << "Нажмите любую клавишу для продолжения..." << std::endl;
	_getch();
	system("cls");
}

int menu_navigation(int amount_of_func) {                         //function return value of menu point                   
	char word;
	COORD position;
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	position.X = 0;
	position.Y = 0;
	SetConsoleCursorPosition(hConsole, position);
	do {
		word = _getch();
		if (word == 80)
			if (position.Y < amount_of_func)
				if (position.Y == amount_of_func - 1) {
					SetConsoleCursorPosition(hConsole, position);
					std::cout << "   " << std::endl;
					position.Y = 0;
					SetConsoleCursorPosition(hConsole, position);
					std::cout << "-> " << std::endl;
				}
				else {
					SetConsoleCursorPosition(hConsole, position);
					std::cout << "   " << std::endl;
					position.Y++;
					SetConsoleCursorPosition(hConsole, position);
					std::cout << "-> " << std::endl;
				}
		if (word == 72)
			if (position.Y > 0) {
				SetConsoleCursorPosition(hConsole, position);
				std::cout << "   " << std::endl;
				position.Y--;
				SetConsoleCursorPosition(hConsole, position);
				std::cout << "-> " << std::endl;
			}
			else {
				SetConsoleCursorPosition(hConsole, position);
				std::cout << "   " << std::endl;
				position.Y = amount_of_func - 1;
				SetConsoleCursorPosition(hConsole, position);
				std::cout << "-> " << std::endl;
			}
		if (word == 13) {
			break;
		}
		if (word == 27)
			return 0;
	} while (1);
	system("cls");
	return position.Y + 1;
}

int menu() {
	while (loop) {
		switch (menu_descrip()) {
		case 1: {
			Car car;
			if (menu_building_country() == 0)
				break;
			if (menu_building_body() == 0)
				break;
			if (menu_building_engine() == 0)
				break;
			car.add_data(country, body, engine);
			system("cls");
			car.print_data();
			std::cout << std::endl;
			std::cout << "Нажмите любую клавишу для продолжения..." << std::endl;
			_getch();
			system("cls");
			switch (menu_descrip_ride()) {
			case 1: {
				Human human;
				Interface* ptr;
				ptr = &car;
				human.open_door(car);
				while (loop) {
					switch (menu_descrip_ride_2()) {
					case 1: {
						system("cls");
						human.turn_on(car);
						break;
					}
					case 2: {
						system("cls");
						human.turn_off(car);
						break;
					}
					case 3: {
						system("cls");
						human.acceleration(car);
						break;
					}
					case 4: {
						system("cls");
						human.braking(car);
						break;
					}
					case 5: {
						system("cls");
						human.turn_left(car);
						break;
					}
					case 6: {
						system("cls");
						human.turn_right(car);
						break;
					}
					case 7: {
						system("cls");
						human.open_door(car);
						return 0;
					}
					default: {
						system("cls");
						human.open_door(car);
						return 0;
					}
					}
				}
			}
			case 2: {
				system("cls");
				break;
			}
			default: {
				system("cls");
				break;
			}
			}
			break;
		}
		case 2: {
			system("cls");
			return 0;
		}
		default: {
			system("cls");
			return 0;
		}
		}
	}
}

int menu_building_country() {
	while (loop) {
		switch (menu_descrip_1()) {
		case 1: {
			system("cls");
			boolean door = false;
			do {
				switch (menu_descrip_2_1()) {
				case 1: {
					system("cls");
					switch (menu_descrip_3_1()) {
					case 1: {
						system("cls");
						country.add_data("Германия", "BMW", "3-ser", 1.2);
						return 1;
					}
					case 2: {
						system("cls");
						country.add_data("Германия", "BMW", "5-ser", 1.2);
						return 1;
					}
					case 3: {
						system("cls");
						country.add_data("Германия", "BMW", "7-ser", 1.2);
						return 1;
					}
					case 4: {
						system("cls");
						break;
					}
					default: {
						system("cls");
						break;
					}
					}
					break;
				}
				case 2: {
					system("cls");
					switch (menu_descrip_3_2()) {
					case 1: {
						system("cls");
						country.add_data("Германия", "Audi", "A5", 1.2);
						return 1;
					}
					case 2: {
						system("cls");
						country.add_data("Германия", "Audi", "A6", 1.2);
						return 1;
					}
					case 3: {
						system("cls");
						country.add_data("Германия", "Audi", "A7", 1.2);
						return 1;
					}
					case 4: {
						system("cls");
						break;
					}
					default: {
						system("cls");
						break;
					}
					}
					break;
				}
				case 3: {
					system("cls");
					switch (menu_descrip_3_3()) {
					case 1: {
						system("cls");
						country.add_data("Германия", "VW", "Golf", 1.2);
						return 1;
					}
					case 2: {
						system("cls");
						country.add_data("Германия", "VW", "Passat", 1.2);
						return 1;
					}
					case 3: {
						system("cls");
						country.add_data("Германия", "VW", "Touareg", 1.2);
						return 1;
					}
					case 4: {
						system("cls");
						break;
					}
					default: {
						system("cls");
						break;
					}
					}
					break;
				}
				case 4: {
					system("cls");
					door = true;
					break;
				}
				default: {
					system("cls");
					door = true;
					break;
				}
				}
				if (door == true)
					break;
			} while (loop);
			break;
		}
		case 2: {
			system("cls");
			boolean door = false;
			do {
				switch (menu_descrip_2_2()) {
				case 1: {
					system("cls");
					switch (menu_descrip_3_4()) {
					case 1: {
						system("cls");
						country.add_data("Япония", "Toyota", "Camry", 1.1);
						return 1;
					}
					case 2: {
						system("cls");
						country.add_data("Япония", "Toyota", "Mark", 1.1);
						return 1;
					}
					case 3: {
						system("cls");
						break;
					}
					default: {
						system("cls");
						break;
					}
					}
					break;
				}
				case 2: {
					system("cls");
					switch (menu_descrip_3_5()) {
					case 1: {
						system("cls");
						country.add_data("Япония", "Nissan", "GTR-R35", 1.1);
						return 1;
					}
					case 2: {
						system("cls");
						country.add_data("Япония", "Nissan", "GTR-R34", 1.1);
						return 1;
					}
					case 3: {
						system("cls");
						break;
					}
					default: {
						system("cls");
						break;
					}
					}
					break;
				}
				case 3: {
					system("cls");
					switch (menu_descrip_3_6()) {
					case 1: {
						system("cls");
						country.add_data("Япония", "Mitsubishi", "3000-GT", 1.1);
						return 1;
					}
					case 2: {
						system("cls");
						country.add_data("Япония", "Mitsubishi", "Starion", 1.1);
						return 1;
					}
					case 3: {
						system("cls");
						break;
					}
					default: {
						system("cls");
						break;
					}
					}
					break;
				}
				case 4: {
					system("cls");
					door = true;
					break;
				}
				default: {
					system("cls");
					door = true;
					break;
				}
				}
				if (door == true)
					break;
			} while (loop);
			break;
		}
		case 3: {
			system("cls");
			return 0;
		}
		default: {
			system("cls");
			return 0;
		}
		}
	}
}

int menu_building_body() {
	while (loop) {
		switch (menu_descrip_4()) {
		case 1: {
			system("cls");
			body.add_data("Хэтчбек");
			return 1;
		}
		case 2: {
			system("cls");
			body.add_data("Седан");
			return 1;
		}
		case 3: {
			system("cls");
			body.add_data("Универсал");
			return 1;
		}
		case 4: {
			system("cls");
			return 0;
		}
		default: {
			system("cls");
			return 0;
		}
		}
	}
}

int menu_building_engine() {
	while (loop) {
		switch (menu_descrip_5()) {
		case 1: {
			system("cls");
			engine.add_data("Рядная четверка", 150);
			return 1;
		}
		case 2: {
			system("cls");
			engine.add_data("Рядная шестерка", 225);
			return 1;
		}
		case 3: {
			system("cls");
			engine.add_data("V8", 280);
			return 1;
		}
		case 4: {
			system("cls");
			return 0;
		}
		default: {
			system("cls");
			return 0;
		}
		}
	}
}

int menu_descrip() {  //Country
	int choice;
	system("cls");
	std::cout << "-> Конструктор авто" << std::endl;
	std::cout << "   Выход" << std::endl;
	choice = menu_navigation(2);
	return choice;
}

int menu_descrip_1() {  //Country
	int choice;
	system("cls");
	std::cout << "-> Германия" << std::endl;
	std::cout << "   Япония" << std::endl;
	std::cout << "   Выход" << std::endl;
	choice = menu_navigation(3);
	return choice;
}

int menu_descrip_2_1() {  //Manufacturer
	int choice;
	system("cls");
	std::cout << "-> BMW" << std::endl;
	std::cout << "   Audi" << std::endl;
	std::cout << "   VW" << std::endl;
	std::cout << "   Выход" << std::endl;
	choice = menu_navigation(4);
	return choice;
}

int menu_descrip_2_2() {  //Manufacturer
	int choice;
	system("cls");
	std::cout << "-> Toyota" << std::endl;
	std::cout << "   Nissan" << std::endl;
	std::cout << "   Mitsubishi" << std::endl;
	std::cout << "   Выход" << std::endl;
	choice = menu_navigation(4);
	return choice;
}

int menu_descrip_3_1() {  //Car_model BMW
	int choice;
	system("cls");
	std::cout << "-> 3-s" << std::endl;
	std::cout << "   5-s" << std::endl;
	std::cout << "   7-s" << std::endl;
	std::cout << "   Выход" << std::endl;
	choice = menu_navigation(4);
	return choice;
}

int menu_descrip_3_2() {  //Car_model Audi
	int choice;
	system("cls");
	std::cout << "-> A5" << std::endl;
	std::cout << "   A6" << std::endl;
	std::cout << "   A7" << std::endl;
	std::cout << "   Выход" << std::endl;
	choice = menu_navigation(4);
	return choice;
}

int menu_descrip_3_3() {  //Car_model VW
	int choice;
	system("cls");
	std::cout << "-> Golf" << std::endl;
	std::cout << "   Passat" << std::endl;
	std::cout << "   Touareg" << std::endl;
	std::cout << "   Выход" << std::endl;
	choice = menu_navigation(4);
	return choice;
}

int menu_descrip_3_4() {  //Car_model Toyota
	int choice;
	system("cls");
	std::cout << "-> Camry" << std::endl;
	std::cout << "   Mark" << std::endl;
	std::cout << "   Выход" << std::endl;
	choice = menu_navigation(3);
	return choice;
}

int menu_descrip_3_5() {  //Car_model Nissan
	int choice;
	system("cls");
	std::cout << "-> GTR-R35" << std::endl;
	std::cout << "   GTR-R34" << std::endl;
	std::cout << "   Выход" << std::endl;
	choice = menu_navigation(3);
	return choice;
}

int menu_descrip_3_6() {  //Car_model Mitsubishi
	int choice;
	system("cls");
	std::cout << "-> 3000-GT" << std::endl;
	std::cout << "   Starion" << std::endl;
	std::cout << "   Выход" << std::endl;
	choice = menu_navigation(3);
	return choice;
}

int menu_descrip_4() {
	int choice;
	system("cls");
	std::cout << "-> Хэтчбек" << std::endl;
	std::cout << "   Седан" << std::endl;
	std::cout << "   Универсал" << std::endl;
	std::cout << "   Выход" << std::endl;
	choice = menu_navigation(4);
	return choice;
}

int menu_descrip_5() {
	int choice;
	system("cls");
	std::cout << "-> Рядная четверка" << std::endl;
	std::cout << "   Рядная шестерка" << std::endl;
	std::cout << "   V8" << std::endl;
	std::cout << "   Выход" << std::endl;
	choice = menu_navigation(4);
	return choice;
}

int menu_descrip_ride() {
	int choice;
	system("cls");
	std::cout << "-> Прокатиться на авто" << std::endl;
	std::cout << "   Выход" << std::endl;
	choice = menu_navigation(2);
	return choice;
}

int menu_descrip_ride_2() {
	int choice;
	system("cls");
	std::cout << "-> Завести авто" << std::endl;
	std::cout << "   Заглушить авто" << std::endl;
	std::cout << "   Разогнаться" << std::endl;
	std::cout << "   Затормозить" << std::endl;
	std::cout << "   Поворот налево" << std::endl;
	std::cout << "   Поворот направо" << std::endl;
	std::cout << "   Выход" << std::endl;
	choice = menu_navigation(7);
	return choice;
}