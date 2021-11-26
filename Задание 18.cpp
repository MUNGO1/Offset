#include <iostream>
using namespace std;

const int size = 3;
char map[3][3];

bool xPlayerWin() {
    bool result = false;

    if (map[0][0] == 'X' && map[0][1] == 'X' && map[0][2] == 'X' ||
        map[1][0] == 'X' && map[1][1] == 'X' && map[1][2] == 'X' ||
        map[2][0] == 'X' && map[2][1] == 'X' && map[2][2] == 'X' ||
        map[0][0] == 'X' && map[1][0] == 'X' && map[2][0] == 'X' ||
        map[0][1] == 'X' && map[1][1] == 'X' && map[2][1] == 'X' ||
        map[0][2] == 'X' && map[1][2] == 'X' && map[2][2] == 'X' ||
        map[0][0] == 'X' && map[1][1] == 'X' && map[2][2] == 'X' ||
        map[2][0] == 'X' && map[1][1] == 'X' && map[0][2] == 'X') {
        result = true;
    }

    return result;
}

bool oPlayerWin() {
    bool result = false;

    if (map[0][0] == 'O' && map[0][1] == 'O' && map[0][2] == 'O' ||
        map[1][0] == 'O' && map[1][1] == 'O' && map[1][2] == 'O' ||
        map[2][0] == 'O' && map[2][1] == 'O' && map[2][2] == 'O' ||
        map[0][0] == 'O' && map[1][0] == 'O' && map[2][0] == 'O' ||
        map[0][1] == 'O' && map[1][1] == 'O' && map[2][1] == 'O' ||
        map[0][2] == 'O' && map[1][2] == 'O' && map[2][2] == 'O' ||
        map[0][0] == 'O' && map[1][1] == 'O' && map[2][2] == 'O' ||
        map[2][0] == 'O' && map[1][1] == 'O' && map[0][2] == 'O') {
        result = true;
    }

    return result;
}


void playGame() {
    int x = 0;
    int y = 0;

    while (xPlayerWin() == false && oPlayerWin() == false) {
        system("cls");


        cout << "  123\n\n"; //Вывод поля
        for (int i = 0; i < 3; i++) {
            cout << i + 1 << " ";
            for (int j = 0; j < 3; j++) {
                cout << map[j][i];
            }
            cout << "\n";
        }

        if (xPlayerWin() == false && oPlayerWin() == false) { //Ввод
            cout << "\nХод игрока X:\n\n";
            cout << "Введите координту [x]:\n";
            cin >> x;
            cout << "Введите координту [y]:\n";
            cin >> y;

            if (x < 4 && y < 4 && x > 0 && y > 0) { //Внесение в массив Х
                map[x - 1][y - 1] = 'X';
            }
        }
        system("cls");

        cout << "  123\n\n"; //Вывод поля
        for (int i = 0; i < 3; i++) {
            cout << i + 1 << " ";
            for (int j = 0; j < 3; j++) {
                cout << map[j][i];
            }
            cout << "\n";
        }

        if (xPlayerWin() == false && oPlayerWin() == false) { //Ввод
            cout << "\nХод игрока O:\n\n";
            cout << "Введите координту [x]:\n";
            cin >> x;
            cout << "Введите координту [y]:\n";
            cin >> y;

            if (x < 4 && y < 4 && x > 0 && y > 0) { //Внесение в массив Х
                map[x - 1][y - 1] = 'O';
            }
        }
    }

    if (xPlayerWin() == true) {
        cout << "\n\nПобедил игрок X!\n";
    }
    else  if (oPlayerWin() == true) {
        cout << "\n\nПобедил игрок O!\n";
    }

}

void textColorChange() {
    cout << "Выберите цвет текста\n[1] Зеленый\n[2] Красный\n[3] Синий\n";
    int colorText;
    cin >> colorText;
    switch (colorText) {
    case 1: system("Color 02");  break;
    case 2: system("Color 04"); break;
    case 3: system("Color 03"); break;
    }
}

void textBgChange() {
    cout << "Выберите цвет фона\n[1] Черный\n[2] Зеленый\n[3] Красный\n[4] Синий\n";
    int colorBg;
    cin >> colorBg;
    switch (colorBg) {
    case 1: system("Color 40"); break;
    case 2: system("Color 42"); break;
    case 3: system("Color 41"); break;
    case 4: system("Color 44"); break;
    }
}

void settings() {
    cout << "[1] Изменить цвет текста\n[2] Изменить цвет фона\n";
    int choise;
    cin >> choise;

    switch (choise) {
    case 1: textColorChange(); break;
    case 2: textBgChange(); break;
    }
}

int main()
{
    setlocale(0, "");

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            map[i][j] = '*';
        }
    }

    cout << "[1] Игра\n[2] Правила\n[3] Настройки\nВыберите действие: ";
    int choise;
    cin >> choise;
    cout << "\n";

    switch (choise) {
    case 1: playGame(); break;
    case 2: cout << "Правила"; break;
    case 3: settings(); break;
    default: 0;
    }


    int _; cin >> _;
}
1
2