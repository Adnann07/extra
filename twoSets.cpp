#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Calculate the total sum of numbers from 1 to n
    long long total_sum = 1LL * n * (n + 1) / 2;

    // If total_sum is odd, division is not possible
    if (total_sum % 2 != 0) {
        cout << "NO" << endl;
        return 0;
    }

    // Target sum for each set
    long long target = total_sum / 2;

    vector<int> set1, set2;

    // Start from the largest number and work down
    for (int i = n; i >= 1; i--) {
        if (target >= i) {
            set1.push_back(i);
            target -= i;
        } else {
            set2.push_back(i);
        }
    }

    // Print the result
    cout << "YES" << endl;
    cout << set1.size() << endl;
    for (int num : set1) {
        cout << num << " ";
    }
    cout << endl;

    cout << set2.size() << endl;
    for (int num : set2) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
