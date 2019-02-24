#include <iostream>

void change(int first, int second,int third, std::string a, std::string b, int cube[8]) {
    if (cube[first] > cube[second]) {
        for (int i = 0; i < (cube[first] - cube[second]); i++) {
            std::cout << a << std::endl;
//            а это +
        }
        for (int i = 0; i < cube[first]; i++) {
            std::cout << b << std::endl;
//            b это -
        }
        cube[third] = cube[third]- cube[second]+cube[first];
        cube[second] = 0;
        cube[first] = 0;
    }
    else {
        for (int i = 0; i < (cube[second]-cube[first] ); i++) {
            std::cout << b << std::endl;
//            b это -
        }
        cube [second]= cube[second] - cube[first];
        cube [first] = 0;
    }
};

int main() {
    int cubik[8];
    for (int i = 0; i < 8; i++) {
        std::cin >> cubik[i];
    }
    if (cubik[0] + cubik[2] + cubik[5] + cubik[7] - cubik[1] - cubik[3] - cubik[4] - cubik[6] != 0) {
        std::cout << "IMPOSSIBLE" << std::endl;
    } else {
       change(0, 1, 2, "BC+", "AB-", cubik);
       change(1, 2, 3, "CD+", "BC-", cubik);
       change(2, 3, 7, "DH+", "CD-", cubik);
       change(4, 5, 6, "FG+", "EF-", cubik);
       change(5, 6, 7, "GH+", "FG-", cubik);
       change(6, 7, 3, "GH+", "DH-", cubik);
       change(3, 7, 0, "DH+", "DH-", cubik);
    }
    return 0;
}