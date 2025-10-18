/*
Lottery Number Generator
Generates lottery numbers for the Mega Millions, Powerball, and Super Lotto draw games
*/

#include <iostream>
#include <string>
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
    int mm[5];
    int lenMM = sizeof(mm)/sizeof(mm[0]);
    for (int i = 0; i < lenMM; i++) { // loop to populate array with random numbers
        mm[i] = (rand() % 70) + 1;
        for (int j = 0; j < i; j++) { // loop to replace duplicates numbers
            if (mm[i] == mm[j]) {
                mm[i] = (rand() % 70) + 1;
            }
        }
    }
    sort (begin(mm), end(mm)); // sort numbers in ascending order
    cout << "Your winning \e[1;31;107mMega\e[1;38;5;45;48;5;255mMillions\e[0m numbers:" << endl;
    cout << "----------------------------------" << endl;
    for (int i = 0; i < lenMM; i++) { // loop to print numbers
        cout << "\e[1;30;107m" << mm[i] << "\e[0m ";
    }
    cout << "\e[1;97;43m" << (rand() % 24) + 1 << "\e[0m"; // generate and print Mega Millions number
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
    int pb[5];
    int lenPB = sizeof(pb)/sizeof(pb[0]);
    for (int i = 0; i < lenPB; i++) { // loop to populate array with random numbers
        pb[i] = (rand() % 69) + 1;
        for (int j = 0; j < i; j++) { // loop to replace duplicates numbers
            if (pb[i] == pb[j]) {
                pb[i] = (rand() % 69) + 1;
            }
        }
    }
    sort (begin(pb), end(pb)); // sort numbers in ascending order
    cout << "Your winning \e[1;30;107mPOWER\e[1;97;41mBALL\e[0m numbers:" << endl;
    cout << "-------------------------------" << endl;
    for (int i = 0; i < lenPB; i++) { // loop to print numbers
        cout << "\e[1;30;107m" << pb[i] << "\e[0m ";
    }
    cout << "\e[1;97;41m" << (rand() % 26) + 1 << "\e[0m"; // generate and print Powerball number
    cout << endl;
    cout << endl;
}

// Generate and print Super Lotto numbers
void superLotto() {
/*Super Lotto
5(1-47) + 1(1-27)
Odds: 1 in 41,416,353
*/
    int sl[5];
    int lenSL = sizeof(sl)/sizeof(sl[0]);
    for (int i = 0; i < lenSL; i++) { // loop to populate array with random numbers
        sl[i] = (rand() % 47) + 1;
        for (int j = 0; j < i; j++) { // loop to replace duplicates numbers
            if (sl[i] == sl[j]) {
                sl[i] = (rand() % 47) + 1;
            }
        }
    }
    sort (begin(sl), end(sl)); // sort numbers in ascending order
    cout << "Your winning \e[1;38;5;45;48;5;214mSuperLottoPLUS\e[0m numbers:" << endl;
    cout << "------------------------------------" << endl;
    for (int i = 0; i < lenSL; i++) { // loop to print numbers
        cout << "\e[1;30;107m" << sl[i] << "\e[0m ";
    }
    cout << "\e[1;97;44m" << (rand() % 27) + 1 << "\e[0m"; // generate and print Super Lotto number
    cout << endl;
    cout << endl;
}
