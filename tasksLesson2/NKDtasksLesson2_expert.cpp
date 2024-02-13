#include <iostream>
#include <math.h>
#include <string>

using namespace std;


// 1. Разгадай тайну философского камня чтобы превратить воду в колу
int main() {
    int a, b;
    cin >> a >> b;    
    int c = 1;
    while (a != b) {
        cout << "Кол-во операций:" << c << endl;
        c += 1;
        if (10 * a + 1 > b) {
            a *= 2;
        }
        else {
            a = 10 * a + 1;
        }
        if (a > b) {
            cout << "Невозможно" << endl;

            return 0;
        }
    }
    cout << "Возможно" << endl;

    return 0;
}


// 2. Продвинутый таймер вечеринки
// int main() {
//     int n, h, m, s;
//     cin >> n;
//     h = n / 3600;
//     n %= 3600;
//     m = n / 60;
//     s = n % 60;

//     if (h < 10) cout << "0";
//     cout << h << ":";
//     if (m < 10) cout << "0";
//     cout << m << ":";
//     if (s < 10) cout << "0";
//     cout << s << endl;

//     return 0;
// }


// 3. Разрезаем целый торт по кускам
// int main() {
//     int n, len;
//     int buf = 1;
//     cin >> n;
//     string str = to_string(n); 
//     len = size(str);
//     if (len >= 10) cout << "Превышен лимит длины числа";
//     else {
//         for (int i=0; i<len; i++) {
//             if (i == 0) {
//                 cout << n % 10;
//             }
//             else {
//                 buf *= 10;
//                 cout << " " << n / buf % 10;
//             }
//         }
//     }

//     return 0;
// }