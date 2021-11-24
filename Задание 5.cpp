#include <iostream> 
using namespace std;

int main()
{
    setlocale(0, "");
    cout << "Hello, select a language! \n Ur language: \n 1 - rus \n 2 - eng \n";
    int a;
    cin >> a;
    switch (a)
    {
    case 1:
        cout << "Выберите слово: \n1 - В \n2 - нашей \n3 - старенькой  \n4 - деревне \n5 - зимой \n6 - сильный \n7 - мороз \n8 - сковал \n9 - нашу \n10 - любимую \n11 - речку \n12 - сделав \n13 - ее \n14 - прекрасным \n15 - катком\n";
        int b;
        cin >> b;
        switch (b)
        {
        case 1:
            cout << "In";
            break;
        case 2:
            cout << "our";
            break;
        case 3:
            cout << "old";
            break;
        case 4:
            cout << "village";
            break;
        case 5:
            cout << "in winter";
            break;
        case 6:
            cout << "a severe";
            break;
        case 7:
            cout << "frost";
            break;
        case 8:
            cout << "bound";
            break;
        case 9:
            cout << "our";
            break;
        case 10:
            cout << "beloved";
            break;
        case 11:
            cout << "river";
            break;
        case 12:
            cout << "making";
            break;
        case 13:
            cout << "it  ";
            break;
        case 14:
            cout << "wonderful";
            break;
        case 15:
            cout << "skating rink";
            break;
        default:
            cout << "Некорректный выбор";
            break;
        }
        cout << "\n До встречи  \n";
        break;
    case 2:
        cout << "Choose the word: \n1 - In \n2 - our \n3 - old \n4 - village \n5 - in winter \n6 - a severe \n7 - frost \n8 - bound \n9 - our \n10 - beloved \n11 - river \n12 - making \n13 - it a wonderful \n14 -skating rink \\n";
        int c;
        cin >> c;
        switch (c)
        {
        case 1:
            cout << "В";
            break;
        case 2:
            cout << "нашей";
            break;
        case 3:
            cout << "старенькой";
            break;
        case 4:
            cout << "деревне";
            break;
        case 5:
            cout << "зимой";
            break;
        case 6:
            cout << "сильный";
            break;
        case 7:
            cout << "мороз";
            break;
        case 8:
            cout << "сковал";
            break;
        case 9:
            cout << "нашу";
            break;
        case 10:
            cout << "любимую";
            break;
        case 11:
            cout << "речку";
            break;
        case 12:
            cout << "сделав";
            break;
        case 13:
            cout << "ее";
            break;
        case 14:
            cout << "прекрасным";
            break;
        case 15:
            cout << "катком";
            break;
        default:
            cout << "Некорректный выбор";
            break;
        }
        cout << "\n see you  \n";
        break;
    default:
        cout << "Incorrect number";
        break;
    }


    return 0;
}