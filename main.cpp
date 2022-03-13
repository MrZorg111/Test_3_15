#include <iostream>
#include <vector>
std::vector<int> expansion(std::vector<int> vec, int a) {
    std::vector<int> temp(vec.size() + 1);
    for ( int r = 0; r < temp.size(); r++) {
        temp[r] = vec[r];
        temp[vec.size() + 1]  = a;
    }
}

int main() {
    //С клавиатуры вводятся числа.
    // Когда пользователь вводит -1 -- необходимо выводить на экран пятое по возрастанию число среди введённых.
    // Когда пользователь вводит -2 -- программа завершает работу.
    //
    //Пример:
    //
    //ввод: 7 5 3 1 2 4 6 -1
    //
    //вывод: 5 (в отсортированном виде массив выглядит так: {1,2,3,4,5,6,7})
    //
    //ввод: 1 1 1 -1
    //
    //вывод: 2 (в отсортированном виде массив выглядит так: {1,1,1,1,2,3,4,5,6,7})
    //
    //ввод -2
    //
    //завершение программы
    int n = 0;
   std::vector<int> vec(n);
    for (int i = -1; i < vec.size(); i++) {
        std::cout << "Enter number: ";
        std::cin >> n;
        if (n == -2) {
            std::cout << "Completion of the program.";
            return 0;
        }
        if (n != -1) {
            vec[i] = expansion(vec(), n);
        }else {
            for (int t = 0; t < vec.size(); t++) {
                for (int j = 0; j < vec.size() - t - 1; j++) {
                    if (vec[j] > vec[j + 1]) {
                        int tempo = vec[j];
                        vec[j] = vec[j + 1];
                        vec[j + 1] = tempo;
                    }
                }
            }
           std::cout << vec[4] << "\n";
            for (int a = 0; a < vec.size(); a++) {
                std::cout << vec[a] << " ";
            }
        }

    }

}
