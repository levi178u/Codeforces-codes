#include <iostream>
#include <string>
#include <cmath>
using namespace std;

long long nth_palindrome(long long n) {
    if (n <= 9) {
        return n;
    }

    long long length = 1;
    long long count = 9;
    long long add_count;

    while (n > count) {
        length++;
        if (length % 2 == 0) {
            add_count = 9 * pow(10, (length / 2) - 1);
        } else {
            add_count = 9 * pow(10, length / 2);
        }
        count += add_count;
    }

    count -= add_count;
    long long offset = n - count - 1;

    string first_half;
    if (length % 2 == 0) {
        first_half = to_string(pow(10, (length / 2) - 1) + offset);
    } else {
        first_half = to_string(pow(10, length / 2) + offset);
    }

    string palindrome_str;
    if (length % 2 == 0) {
        palindrome_str = first_half + string(first_half.rbegin(), first_half.rend());
    } else {
        palindrome_str = first_half + string(first_half.rbegin() + 1, first_half.rend());
    }

    return stoll(palindrome_str);
}

int main() {
    long long N;
    cin >> N;
    cout << nth_palindrome(N) << endl;
    return 0;
}
