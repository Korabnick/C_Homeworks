#include <iostream>
#include <math.h>

using namespace std;

// 1. Дополни недостающую часть программы, чтобы программа заработала 
int main() {
  int n_guests;
  cin >> n_guests;
  cout << n_guests * 3 << endl;
  return 0;
}

// 2. Дополни недостающую часть программы, чтобы программа вывела общее число друзей
// int main() {
//   int school_friends, family_friends;
//   cin >> school_friends >> family_friends;
//   cout << school_friends + family_friends << endl;

//   return 0;
// }


// 3. Рассчитай затраты на вечеринку
// int main() {
//   int n, m;
//   cin >> n >> m;
//   cout << (n + m) / 2 << endl;

//   return 0;
// }


// 4. Торт кусочками 
// int main() {
//   int n;
//   cin >> n;
//   int piece_cakes = n % 8;
//   cout << "Количество отдельных кусков, которые нужно докупить: " << piece_cakes << endl;

//   return 0;
// }


// 5. Целые тортики
// int main() {
//   int n, cake_price;
//   cin >> n >> cake_price;
//   float full_cakes = ceil(n / 8.);
//   int full_price = full_cakes * cake_price;
//   cout << "Количество целых тортов: " << full_cakes << endl << "Стоимость всех тортов: " << full_price << endl;

//   return 0;
// }


// 6. Покупаем тортики
// int main() {
//   int n, cake_price, piece_price;
//   float full_price;
//   cout << "Введите общее кол-во кусков торта: " ;
//   cin >> n;
//   cout << endl << "Введите стоимость целого торта: ";
//   cin >> cake_price;
//   cout << endl << "Введите стоимость одного куска: ";
//   cin >> piece_price;
//   full_price = (n / 8) * cake_price + (n % 8) * piece_price;
//   cout << full_price << endl;
  
//   return 0;
// }


// 7. Угости котика.
// int main() {
//   int n;
//   cin >> n;
//   float eventually = 100 % n; 
//   cout << eventually << endl;

//   return 0;
// }