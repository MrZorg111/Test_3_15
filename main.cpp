#include <iostream>
#include <vector>

int main() {
    int n = 0;
    std::vector<int> vec(n);
    do {
        std::cout << "Enter number: ";
        std::cin >> n;
        if (n != -1) {
            vec.resize(vec.size() + 1);
            vec[vec.size() - 1] = n;
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
        }
    }while (n != - 2);
    std::cout << "Completion of the program.";
}
