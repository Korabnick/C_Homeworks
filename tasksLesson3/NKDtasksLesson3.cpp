#include <iostream>

using namespace std;

// 1. Вход в меню
int main() {
    int n;
    cin >> n;
    (n == 20)? cout << "sys_enter_level" << endl: cout << "sys_idle" << endl;

    return 0;
}



// 2. Выбор сложности
// int main() {
//     int n;
//     cin >> n;
//     (n > 0)? cout << "sys_easy" << endl: cout << "";
//     (n < 0)? cout << "sys_hard" << endl: cout << "";
// }



// 3. Выбор уровня
// int main() {
//     int n;
//     cin >> n;
//     (n % 2 != 0)? cout << "sys_success" << endl: cout << "sys_reload" << endl;

//      return 0;
// }



// 4. Выбор бонусного уровня
// int main() {
//     int n, i;
//     cin >> n >> i;
//     (n % i == 0)? cout << "sys_reload" << endl: cout << "sys_success" << endl;

//     return 0;
// }

// 5. Верхний предел
// int main() {
//     int x, y, z;
//     cin >> x >> y >> z;
//     (x + y > z)? cout << "sys_cat_success" << endl: cout << "sys_idle" << endl;

//     return 0;
// }



// 6. Секретные пасхалки
// int main() {
//     int w, m;
//     cin >> w >> m;
//     (w < 1000 * m)? cout << "sys_cat_success" << endl: cout  << "sys_idle" << endl;

//     return 0;
// }



// 7. Крафтим механический книжный шкаф
// int main() {
//     int n, k;
//     cin >> n >> k;
//     (n >= 10 && k >= 20)? cout << "The bookcase has been crafted" << endl: cout << "Not enough materials" << endl;

//     return 0;
// }


// 8. Покупка товара
// int main() {
//     int n_gold, n_silv;
//     cin >> n_gold >> n_silv;
//     (n_gold >= 2 || n_silv >= 40)? cout << "OK" << endl: cout << "Not enough" << endl;

//     return 0;
// }



// 9. Проникаем в замок
// int main() {
//     int mag, dex, vis;
//     cin >> mag >> dex >> vis;
//     (mag > 70 || dex > 90 || vis < 15)? cout << "The player is inside the castle" << endl: cout << "The player cannot get into the castle" << endl;

//     return 0;
// }



// 10. Находим клад
// int main() {
//     int level, coins, force;
//     cin >> level >> coins >> force;
//     (level > 25 || (coins >= 500 && force > 70))? cout << "The sword is yours" << endl: cout << "Leave the sword" << endl;

//     return 0;
// }


// 11. Игровые достижения
// int main() {
//     int n, m, k;
//     cin >> n >> m >> k;
//     (n <= 3 && (m <= 60 || k > 1000))? cout << "Achievement unlocked" << endl: cout << "No new achievement" << endl;

//     return 0; 
// }



/*
Экспертные задачи!
Экспертные задачи!
Экспертные задачи!
*/



// 12. Спортивный симулятор
// int main() {
//     int ball_x, p_left, p_right;
//     cin >> ball_x >> p_left >> p_right;
//     (p_left < ball_x && ball_x < p_right)? cout << "YES" << endl: cout << "NO" << endl;
    
//     return 0;
// }



// 13. Головоломка
// int main() {
//     int food_x, food_y, wall_x, wall_y;
//     cin >> food_x >> food_y >> wall_x >> wall_y;
//     (food_x < wall_x && food_y < wall_y)? cout << "YES" << endl: cout << "NO" << endl;
    
//     return 0;
// }



// 14. Платформер
// int main() {
//     int hero_x, p1_right, p2_left, p2_right;
//     cin >> hero_x >> p1_right >> p2_left >> p2_right;
//     (hero_x <= p1_right || (hero_x >= p2_left && hero_x <= p2_right))? cout << "YES" << endl: cout << "NO" << endl;

//     return 0;
// }



// 15. Кликер
// int main() {
//     int click_x, click_y, sh_x1, sh_x2, sh_y1, sh_y2;
//     cin >> click_x >> click_y >> sh_x1 >> sh_x2 >> sh_y1 >> sh_y2;
//     ((click_x >= sh_x1 && click_x <= sh_x2) && (click_y >= sh_y1 && click_y <= sh_y2))? cout << "YES" << endl: cout << "NO" << endl;

//     return 0;
// }



// 16. Прячем сокровища
// int main() {
//     int treas_x, treas_y, coor_x, coor_y1, coor_y2;
//     cin >> treas_x >> treas_y >> coor_x >> coor_y1 >> coor_y2;
//     if (treas_y > coor_y1 && treas_y < coor_y2) cout << "YES" << endl;
//     else if (treas_x > coor_x) cout << "YES" << endl;
//     else cout << "NO" << endl;

//     return 0;
// }



// 17. Стратегия
// int main() {
//     int base_x, base_y, sea_x, swamp_x, swamp_y;
//     cin >> base_x >> base_y >> sea_x >> swamp_x >> swamp_y;
//     ((base_x > sea_x && base_x < swamp_x) || (base_x > sea_x && base_y < swamp_y))? cout << "YES" << endl: cout << "NO" << endl;

//     return 0;
// }



// 18. Квест
// int main(){
//     int click_x, click_y, win_x1, win_x2, win_y1, win_y2, table_x, table_y1, table_y2;
//     cin >> click_x >> click_y >> win_x1 >> win_x2 >> win_y1 >> win_y2 >> table_x >> table_y1 >> table_y2;
//     if ((click_x <= table_x) && (click_y >= table_y1) && (click_y <= table_y2)) cout << "YES" << endl;
//     else if ((click_x >= win_x1 && click_x <= win_x2) && (click_y >= win_y1 && click_y <= win_y2)) cout << "YES" << endl;
//     else cout << "NO" << endl;

//     return 0;
// }