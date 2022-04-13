/*
Нарисовать равнобедренный треугольник из символов ^. 
Высоту выбирает пользователь. 
Например: высота = 5, на экране
     ^
    ^^^
   ^^^^^
  ^^^^^^^^
 ^^^^^^^^^^
*/

#include <iostream>

using namespace std;

int main()
{
    int height, k = 0;

    cout << "Type height: "; cin >> height;

    for (height; height !=0 ; height--)
    {

        for (int i = 0; i < height; i++)
            cout << ' ';
        
        for (int i = height - 2 * k; i <= height - 2; i++)
            cout << '^'; k++;
     
        cout << endl;
    }

    return 0;
}
