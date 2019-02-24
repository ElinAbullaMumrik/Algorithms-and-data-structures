#include <iostream>
#include <cmath>

using namespace std;
int p = 1;

void make_array(int size, int x_start, int y_start, int x_empty, int y_empty, int **array) {
    if (size == 2) {
        if (x_empty != x_start || y_empty != y_start) {
            array[x_start][y_start] = p;
        }
        if (x_empty != (x_start + 1) || y_empty != y_start) {
            array[x_start + 1][y_start] = p;
        }
        if (x_empty != x_start || y_empty != (y_start + 1)) {
            array[x_start][y_start + 1] = p;
        }
        if (x_empty != (x_start + 1) || y_empty != (y_start + 1)) {
            array[x_start + 1][y_start + 1] = p;
        }
        p++;
    } else {
        int new_size = size / 2;
        if (x_empty < new_size + x_start) {
            if (y_empty < new_size + y_start) {
                array[x_start + new_size][y_start + new_size - 1] = p;
                array[x_start + new_size - 1][y_start + new_size] = p;
                array[x_start + new_size][y_start + new_size] = p;
                p = p + 1;
                make_array(new_size, x_start, y_start, x_empty, y_empty, array);
                make_array(new_size, x_start + new_size, y_start + new_size, x_start + new_size, y_start + new_size,
                           array);
                make_array(new_size, x_start, y_start + new_size, x_start + new_size - 1, y_start + new_size, array);
                make_array(new_size, x_start + new_size, y_start, x_start + new_size, y_start + new_size - 1, array);
            } else {
                array[x_start + new_size - 1][y_start + new_size - 1] = p;
                array[x_start + new_size][y_start + new_size - 1] = p;
                array[x_start + new_size][y_start + new_size] = p;
                p = p + 1;
                make_array(new_size, x_start, y_start, x_start + new_size - 1, y_start + new_size - 1, array);
                make_array(new_size, x_start + new_size, y_start + new_size, x_start + new_size, y_start + new_size,
                           array);
                make_array(new_size, x_start, y_start + new_size, x_empty, y_empty, array);
                make_array(new_size, x_start + new_size, y_start, x_start + new_size, y_start + new_size - 1, array);
            }
        } else {
            if (y_empty < new_size + y_start) {
                array[x_start + new_size - 1][y_start + new_size - 1] = p;
                array[x_start + new_size - 1][y_start + new_size] = p;
                array[x_start + new_size][y_start + new_size] = p;
                p = p + 1;
                make_array(new_size, x_start, y_start, x_start + new_size - 1, y_start + new_size - 1, array);
                make_array(new_size, x_start + new_size, y_start + new_size, x_start + new_size, y_start + new_size,
                           array);
                make_array(new_size, x_start, y_start + new_size, x_start + new_size - 1, y_start + new_size, array);
                make_array(new_size, x_start + new_size, y_start, x_empty, y_empty, array);
            } else {
                array[x_start + new_size - 1][y_start + new_size - 1] = p;
                array[x_start + new_size][y_start + new_size - 1] = p;
                array[x_start + new_size - 1][y_start + new_size] = p;
                p = p + 1;
                make_array(new_size, x_start, y_start, x_start + new_size - 1, y_start + new_size - 1, array);
                make_array(new_size, x_start + new_size, y_start + new_size, x_empty, y_empty, array);
                make_array(new_size, x_start, y_start + new_size, x_start + new_size - 1, y_start + new_size, array);
                make_array(new_size, x_start + new_size, y_start, x_start + new_size, y_start + new_size - 1, array);
            }
        }
    }
}

int main() {
    int arr_size, x_choord, y_choord;
    cin >> arr_size;
    cin >> x_choord;
    x_choord = x_choord - 1;
    cin >> y_choord;
    y_choord = y_choord - 1;
    int t = (int) (pow(2, arr_size));

    int **my_array = new int *[t]; // аааааааааааааааа... как-то сложно память выделяется
    for (int i = 0; i < t; i++)
        my_array[i] = new int[t];

    make_array(t, 0, 0, x_choord, y_choord, my_array);
    my_array[x_choord][y_choord] = 0;

    for (int i = 0; i < t; i++) { // вывод результата программы
        for (int j = 0; j < t; ++j) {
            cout << my_array[i][j] << "\t";
        }
        cout << endl;
    }
    for (int count = 0; count < t; count++)
        delete[] my_array[count]; // вроде как освобождается память
    return 0;
}