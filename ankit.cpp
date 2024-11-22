#include <iostream>
#include <cmath>
using namespace std;

int encryptCode(int S, int N, int M) {
    long long base = static_cast<long long>(pow(S, N)) % 10;
    long long encryptedCode = static_cast<long long>(pow(base, M)) % 1000000007;
    return encryptedCode;
}

int main() {
    int S, N, M;
    
    cout << "Enter the secret code S: ";
    cin >> S;
    
    cout << "Enter the key value N: ";
    cin >> N;
    
    cout << "Enter the key value M: ";
    cin >> M;
    
    long long encrypted = encryptCode(S, N, M);
    
    cout << "Encrypted code: " << encrypted << endl;
    
    return 0;
}
