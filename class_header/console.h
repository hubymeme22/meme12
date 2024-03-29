#include <iostream>
#include <iomanip>
#include "elements.h"
using namespace std;

class periodicConsole : public element {
	private:
		string ascii_art;
		string by_atomic_num;
		string by_name;
		string by_symbol;
		string error_in_flag;
	public:
		// constructor
		periodicConsole();

		void console_app();
		void display_ascii();
		void display_instruction();
		void interface_1();
		void interface_anum();
		void interface_symb();
		void interface_name();
		bool filter_search(string);
};

periodicConsole::periodicConsole() : element() {
	string x(24, ' ');
	string y(28, ' ');
	ascii_art = "    ______ _                           _     _____  _      _   _                              \n   |  ____| |                         | |   |  __ \\(_)    | | (_)                             \n   | |__  | | ___ _ __ ___   ___ _ __ | |_  | |  | |_  ___| |_ _  ___  _ __   __ _ _ __ _   _ \n   |  __| | |/ _ \\ \'_ ` _ \\ / _ \\ \'_ \\| __| | |  | | |/ __| __| |/ _ \\| \'_ \\ / _` | \'__| | | |\n   | |____| |  __/ | | | | |  __/ | | | |_  | |__| | | (__| |_| | (_) | | | | (_| | |  | |_| |\n   |______|_|\\___|_| |_| |_|\\___|_| |_|\\__| |_____/|_|\\___|\\__|_|\\___/|_| |_|\\__,_|_|   \\__, |\n                                                                                         __/ |\n                                                                                        |___/ ";
	by_atomic_num = "           ______     __        _______ ____  __  __ _____ _____   _   _ _    _ __  __   \n          |  _ \\ \\   / /     /\\|__   __/ __ \\|  \\/  |_   _/ ____| | \\ | | |  | |  \\/  |  \n          | |_) \\ \\_/ /     /  \\  | | | |  | | \\  / | | || |      |  \\| | |  | | \\  / |  \n          |  _ < \\   /     / /\\ \\ | | | |  | | |\\/| | | || |      | . ` | |  | | |\\/| |  \n          | |_) | | |     / ____ \\| | | |__| | |  | |_| || |____  | |\\  | |__| | |  | |_ \n          |____/  |_|    /_/    \\_\\_|  \\____/|_|  |_|_____\\_____| |_| \\_|\\____/|_|  |_(_)";
	by_name = y + "  ______     __  _   _          __  __ ______ \n" + x + "     |  _ \\ \\   / / | \\ | |   /\\   |  \\/  |  ____|\n" + x + "     | |_) \\ \\_/ /  |  \\| |  /  \\  | \\  / | |__   \n" + x + "     |  _ < \\   /   | . ` | / /\\ \\ | |\\/| |  __|  \n" + x + "     | |_) | | |    | |\\  |/ ____ \\| |  | | |____ \n" + x + "     |____/  |_|    |_| \\_/_/    \\_\\_|  |_|______|";
	by_symbol = "                           ____           _____                 _           _ \n" + x + " |  _ \\         / ____|               | |         | |\n" + x + " | |_) |_   _  | (___  _   _ _ __ ___ | |__   ___ | |\n" + x + " |  _ <| | | |  \\___ \\| | | | \'_ ` _ \\| \'_ \\ / _ \\| |\n" + x + " | |_) | |_| |  ____) | |_| | | | | | | |_) | (_) | |\n" + x +" |____/ \\__, | |_____/ \\__, |_| |_| |_|_.__/ \\___/|_|\n" + x + "         __/ |          __/ |                        \n" + x + "        |___/          |___/                         ";
}


void periodicConsole::console_app() {
	// setup part
	system("color F0");

	// variables needed
	char reusable_char[30];


	// Processes
//	cout << " =================================================================================================" << endl;
	system("cls");
//	system("clear");
	cout << "Before starting, make sure the window size of your commandline has width of at least 103." << endl << endl;
	system("pause");
//	cout << "Press enter to continue..." << endl;
//	system("read NULL");

	display_ascii();
	cout << setw(99) << "Before, searching for information about the element you want to search, we first need to display" << endl;
	cout << setw(99) << "some DETAILED instructions on how to use the program and some information about developers. (You" << endl;
	cout << setw(77) << "can skip the instruction if you want to by chosing \'n\')" << endl << endl;

	cout << "   Options :" << endl;
	cout << "     [y] (yes) Display instruction" << endl;
	cout << "     [n] (no) I have already read the instruction" << endl << endl;

	while (1) {
		cout << "   Display instruction? [y/n] : ";
		cin >> reusable_char;

		if (reusable_char[0] == 'y') {
			display_instruction();
			interface_1();
			break;
		} else if (reusable_char[0] == 'n') {
			interface_1();
			break;
		} else {
			cout << "[-] Invalid input." << endl;
		}
	}
}

void periodicConsole::display_ascii() {
	system("cls");
//	system("clear");
	// I used spaces instead of tabs since most of tabs are adjusting depending on terminal setting
	cout << setw(100) << "=================================================================================================" << endl;
	cout << ascii_art << endl << endl;
	cout << setw(56) << "  By : Team 6" << endl;
	cout << setw(63) << "  Created : Nov. 16-25 2020" << endl;
	cout << setw(100) << "=================================================================================================" << endl << endl;
}

void periodicConsole::display_instruction() {
	system("cls");
//	system("clear");
	display_ascii();
	cout << "Interface 1 : " << endl << endl;
	cout << "The next interface will ask for type of data the user will input. There are three common data in" << endl;
	cout << "periodic table users usually search: by atomic number, name or symbol--this program supports th-" << endl;
	cout << "-ese three. On next interface, you will choose which of these three will be used to search the" << endl;
	cout << "information about the element. You can enter one from the following :" << endl << endl;
	cout << "    \'a\' - Search by atomic number" << endl;
	cout << "    \'n\' - Search by name" << endl;
	cout << "    \'s\' - Search by symbol" << endl << endl;

	cout << "Interface 2 (Dictionary interface) :" << endl << endl;
	cout << "This  interface is the interface where you can enter the name/atomic-number/symbol of elements" << endl;
	cout << "you are looking for." << endl << endl;

	cout << "Changing type :" << endl << endl;
	cout << "After you enter the type of searching that the program will use, in some time you will be us-" << endl;
	cout << "-ing other type of searching. Instead of closing and re-opening the program, you can instead" << endl;
	cout << "search: \'exit\' and from dictionary interface then it will switch to Interface 1." << endl << endl;

	cout << "Developers :" << endl;
	cout << "    Amatus, Angelika" << endl;
	cout << "    Carurucan, John Mikko" << endl;
	cout << "    Espinola I, Hubert" << endl << endl << endl;
	system("pause");
//	cout << "Press enter to continue..." << endl;
//	system("read NULL");
}

void periodicConsole::interface_1() {
	char type[20];		// to avoid overflow

	while (true) {
		display_ascii();
		cout << setw(101) << "On this part, you will choose what type of searching the program will perform. Choose method below" << endl;
		cout << setw(64) << "[a] Search by atomic number" << endl;
		cout << setw(64) << "[n] Search by name         " << endl;
		cout << setw(64) << "[s] Search by symbol       " << endl << endl;

		cout << setw(64) << "[e] Exit progam            " << endl << endl << endl << endl;

		cout << setw(55) << "Search Type" << endl;
		cout << setw(50) << " ";
		cin >> type;

		// Different interfaces that will be used
		switch (type[0]) {
			case 'a':
				system("cls");
				set_flag('a');
				interface_anum();
				break;
			case 's':
				set_flag('s');
				system("cls");
				interface_symb();
				break;
			case 'n':
				set_flag('n');
				system("cls");
				interface_name();
				break;
			case 'e':
				exit(0);
			default:
				set_flag('n');
				system("cls");
				error_in_flag = "[error] Input not in selection, using type \'n\' instead";
				interface_name();
				break;
		}
	}
}

void periodicConsole::interface_anum() {
	string atm_num;
	bool breaker = 1;

	while (breaker) {
		system("cls");
//		system("clear");
		cout << setw(100) << "=================================================================================================" << endl;
		cout << by_atomic_num << endl << endl;
		cout << setw(70) << "Enter: \'exit\' to go back on previous interface." << endl;
		cout << setw(100) << "=================================================================================================" << endl;
		atm_num = search_filterA("ENTER ATOMIC NUMBER\n");

		breaker = filter_search(atm_num);
	}
}

void periodicConsole::interface_symb() {
	string symbol;
	bool breaker = 1;

	while (breaker) {
		system("cls");
//		system("clear");
		cout << setw(100) << "=================================================================================================" << endl;
		cout << by_symbol << endl << endl;
		cout << setw(75) << "Enter: \'exit\' to go back on previous interface." << endl;
		cout << setw(100) << "=================================================================================================" << endl;
		symbol = search_filterN("SYMBOL OF ATOM\n");

		breaker = filter_search(symbol);
	}
}

void periodicConsole::interface_name() {
	string name;
	bool breaker = 1;

	while (breaker) {
		system("cls");
//		system("clear");
		cout << setw(100) << "=================================================================================================" << endl;
		cout << by_name << endl << endl;
		cout << setw(75) << "Enter: \'exit\' to go back on previous interface." << endl;
		cout << setw(100) << "=================================================================================================" << endl;
		cout << error_in_flag << endl;
		name = search_filterN("NAME OF ATOM\n");

		breaker = filter_search(name);
	}
}

bool periodicConsole::filter_search(string srch) {
	if (srch == "exit" || srch == "Exit") {
		return 0;
	}

	// search
	interpret_index(search(srch));
//	cout << "Press enter to continue..." << endl;
//	system("read NULL");
	system("pause");
	return 1;
}
