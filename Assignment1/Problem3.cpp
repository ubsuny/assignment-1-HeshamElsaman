#include <iostream>


template <typename T>
T series(T n) {
    if (n == 0) {
        return 2;
    } else {
        T nxt = series(n - 1);
        return nxt * nxt;
    }
}

template <typename T>
void find_max(const std::string &type_name) {
    T n = 0, result = 0, prev = 0;
    
    while (true) {
        result = series<T>(n);
        if (result > prev) {
            prev = result;
            n++;
        } else {
            break;
        }
    }

    std::cout << "The maximum for " << type_name << " is: " << prev << std::endl;
    std::cout << "The maximum n for " << type_name << " is: " << n - 1 << std::endl << std::endl;
}

int main() {
    find_max<int>("int");
    find_max<long int>("long int");
    find_max<unsigned long int>("unsigned long int");

    return 0;
}
