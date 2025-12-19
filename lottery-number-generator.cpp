/*
Lottery Number Generator
Generates lottery numbers for the Mega Millions, Powerball, and Super Lotto draw games
*/

#include <iostream>
#include <string>
#include <set>
#include <random>
using namespace std;

// Title header
void titleBar();

// Description
void description();

// Menu choices
void menuMain();

// Generate and print Mega Millions numbers
void megaMillions();

// Generate and print Powerball numbers
void powerBall();

// Generate and print Super Lotto numbers
void superLotto();

// Global variables
time_t now = time(NULL);

int main() {

    int choice = 0;
    srand(time(NULL)); // Seed random number generator function with system time

    system("clear");
    titleBar();
    description();
    do {
        menuMain();
        cout << "Make your selection: ";
        cin >> choice;
        cout << endl;
        switch (choice) {
            case 1:
                system("clear");
                titleBar();
                description();
                megaMillions();
                cout << "Numbers generated on " << ctime(&now);
                cout << endl;
                break;
            case 2:
                system("clear");
                titleBar();
                description();
                powerBall();
                cout << "Numbers generated on " << ctime(&now);
                cout << endl;
                break;
            case 3:
                system("clear");
                titleBar();
                description();
                superLotto();
                cout << "Numbers generated on " << ctime(&now);
                cout << endl;
                break;
            case 4:
                system("clear");
                titleBar();
                description();
                megaMillions();
                powerBall();
                superLotto();
                cout << "Numbers generated on " << ctime(&now);
                cout << endl;
                break;
            case 5:
                cout << "Exiting program..." << endl;
                cout << endl;
                exit(0);
                break;
            default:
                system("clear");
                titleBar();
                cout << "\e[1;31mYour input is invald. See the menu below for valid options.\e[0m" << endl;
                cout << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                break;
        }
    } while (choice != -1);

    return 0;
}

// Title header - displays colorful banner
void titleBar() {
    cout << "\e[38;5;214m******************************************\e[0m" << endl;
    cout << "\e[38;5;214m*\e[38;5;45mWelcome to the LOTTERY NUMBER GENERATOR!\e[38;5;214m*\e[0m" << endl;
    cout << "\e[38;5;214m******************************************\e[0m" << endl;
    cout << endl;
}

// Description
void description() {
    //cout << endl;
    cout << "This program will generate random numbers for the Mega Millions, Powerball, and Super Lotto draw games." << endl;
    cout << "Play responsibly!" << endl;
    cout << endl;
}

// Menu choices - displays program options
void menuMain() {
    cout << "\e[38;5;214m------------------------\e[0m" << endl;
    cout << "\e[38;5;45mChoose an choice below:\e[0m" << endl;
    cout << "\e[38;5;214m------------------------\e[0m" << endl;
    cout << "\e[38;5;214m(\e[38;5;45m1\e[38;5;214m)\e[0m \e[1;31;107mMega\e[1;38;5;45;48;5;255mMillions\e[0m" << endl;
    cout << "\e[38;5;214m(\e[38;5;45m2\e[38;5;214m)\e[0m \e[1;30;107mPOWER\e[1;97;41mBALL\e[0m" << endl;
    cout << "\e[38;5;214m(\e[38;5;45m3\e[38;5;214m)\e[0m \e[1;38;5;45;48;5;214mSuperLottoPLUS\e[0m" << endl;
    cout << "\e[38;5;214m(\e[38;5;45m4\e[38;5;214m)\e[0m \e[1mAll games\e[0m" << endl;
    cout << "\e[38;5;214m(\e[38;5;45m5\e[38;5;214m)\e[0m \e[1;31mQuit\e[0m" << endl;
    cout << "\e[38;5;214m------------------------\e[0m" << endl;
}

// Generate and print Mega Millions numbers
void megaMillions() {
/*
Mega Millions
5(1-70) + 1(1-24)
Odds: 1 in 290,472,336
*/
    set<int> numbers;
    int mm_number;

    // Random number setup
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist(1, 70);
    uniform_int_distribution<> dist_mm(1, 24);

    // Generate 5 unique random numbers
    while (numbers.size() < 5) {
        numbers.insert(dist(gen));
    }

    // Generate 1 unique random number
    mm_number = (dist_mm(gen));

    cout << "Your winning \e[1;31;107mMega\e[1;38;5;45;48;5;255mMillions\e[0m numbers:" << endl;
    cout << "----------------------------------" << endl;
    for (int num : numbers) { // Loop to print main numbers
        cout << "\e[1;30;107m" << num << "\e[0m ";
    }
    cout << "\e[1;97;43m" << mm_number << "\e[0m"; // Generate and print Mega Millions number
    cout << endl;
    cout << endl;
}

// Generate and print Powerball numbers
void powerBall() {
/*
Powerball
5(1-69) + 1(1-26)
Odds: 1 in 292,201,338
*/
    set<int> numbers;
    int pb_number;

    // Random number setup
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist(1, 69);
    uniform_int_distribution<> dist_pb(1, 26);

    // Generate 5 unique random numbers
    while (numbers.size() < 5) {
        numbers.insert(dist(gen));
    }

    // Generate 1 unique random number
    pb_number = (dist_pb(gen));

    cout << "Your winning \e[1;30;107mPOWER\e[1;97;41mBALL\e[0m numbers:" << endl;
    cout << "-------------------------------" << endl;
    for (int num : numbers) { // Loop to print main numbers
        cout << "\e[1;30;107m" << num << "\e[0m ";
    }
    cout << "\e[1;97;41m" << pb_number << "\e[0m"; // Generate and print Powerball number
    cout << endl;
    cout << endl;
}

// Generate and print Super Lotto numbers
void superLotto() {
/*Super Lotto
5(1-47) + 1(1-27)
Odds: 1 in 41,416,353
*/
    set<int> numbers;
    int sl_number;

    // Random number setup
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist(1, 47);
    uniform_int_distribution<> dist_sl(1, 27);

    // Generate 5 unique random numbers
    while (numbers.size() < 5) {
        numbers.insert(dist(gen));
    }

    // Generate 1 unique random number
    sl_number = (dist_sl(gen));

    cout << "Your winning \e[1;38;5;45;48;5;214mSuperLottoPLUS\e[0m numbers:" << endl;
    cout << "------------------------------------" << endl;
    for (int num : numbers) { // Loop to print main numbers
        cout << "\e[1;30;107m" << num << "\e[0m ";
    }
    cout << "\e[1;97;44m" << sl_number << "\e[0m"; // Generate and print Super Lotto number
    cout << endl;
    cout << endl;
}
