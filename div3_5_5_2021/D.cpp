#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    vector<int> lengths;
    int t, n;
    cin >> t;
    int** arr = new int*[t];
    for (int i = 0; i < t; i ++){
        cin >> n;
        arr[i] = new int[n];
        lengths.push_back(n);
        for (int j = 0; j < n; j ++)
            cin >> arr[i][j];
    }
    int count = 0;
    for (int test = 0; test < t; test ++){
        count = 0;
        for (int j = 0; j < lengths[test]-1; j ++){
            for (int c = j + 1; c < lengths[test]; c ++){
                if (arr[test][c] - arr[test][j] == c-j) count += 1;
            }
        }
        cout << count << "\n";
            
    }

    
}