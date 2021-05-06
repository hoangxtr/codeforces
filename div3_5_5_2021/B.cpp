#include <iostream>

using namespace std;
int number_digits(int n){
    int ret = 0;
    while (n != 0){
        n = n / 10;
        ret += 1;
    }
    return ret;
}
int getFirstDigit(int n){
    while (n >= 10){
        n /= 10;
    }
    return n;
}
int get_responding_to_n(int firstDigit, int numberDigit){
    int ret = firstDigit;
    for (int i = 1; i < numberDigit; i ++)
        ret = ret*10 + firstDigit;
    return ret;
}

int main(){
    int n; 
    cin >> n;
    int numberDigit, add, temp, firstDigit;
    int* arr = new int[n];
    for (int i = 0; i < n; i ++)
        cin >> arr[i];

    for (int i = 0; i < n; i ++){
        numberDigit = number_digits(arr[i]);
        firstDigit = getFirstDigit(arr[i]);

        temp = get_responding_to_n(firstDigit, numberDigit);
        add = (arr[i] >= temp) ? 1 : 0;
        cout << 9 * (numberDigit -1) + firstDigit - 1 + add  << "\n";
    }
    

    

}