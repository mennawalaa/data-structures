#include <iostream>

long long int get_fibonacci_last_digit_naive(int n) {
    if (n <= 1)
        return n;

    long long int previous = 0;
    long long int current  = 1;

    for (int i = 0; i < n - 1; ++i) {
        int tmp_previous = previous;
        previous = current;
        current = tmp_previous + current;
        if (current >=10){
           current= current % 10;
        }
        if(previous >=10){
            previous=previous %10;
        }
       // current = tmp_previous + current;
       // std::cout<<current<<"\n";
        
    }

    return current % 10;
}

int main() {
    int n;
    std::cin >> n;
    long long int c = get_fibonacci_last_digit_naive(n);
    std::cout << c << '\n';
    }