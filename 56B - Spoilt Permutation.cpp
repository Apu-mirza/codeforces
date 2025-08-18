#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    // Fast I/O
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n;
    std::cin >> n;

    std::vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }
    int l = -1;
    for (int i = 0; i < n; ++i) {
        if (a[i] != i + 1) {
            l = i;
            break;
        }
    }
    if (l == -1) {
        std::cout << "0 0\n";
        return 0;
    }
    int r = -1;
    for (int i = n - 1; i >= 0; --i) {
        if (a[i] != i + 1) {
            r = i;
            break;
        }
    }
    std::reverse(a.begin() + l, a.begin() + r + 1);

    bool sorted = true;
    for (int i = 0; i < n; ++i) {
        if (a[i] != i + 1) {
            sorted = false;
            break;
        }
    }

    if (sorted) {
        std::cout << l + 1 << " " << r + 1 << "\n";
    } else {
        std::cout << "0 0\n";
    }

    return 0;
}
