
#include <bits/stdc++.h>
using namespace std;

// Function to calculate factorial
long long factorial(int n) {
    long long fact = 1;
    for(int i = 2; i <= n; ++i)
        fact *= i;
    return fact;
}

// Function to calculate nCr
long long nCr(int n, int r) {
    if(r > n) return 0;
    return factorial(n) / (factorial(r) * factorial(n - r));
}

void pascalTriangle(int n) { 
    for(int i = 0; i < n; i++) {
        // Print spaces for formatting
        for (int space = 0; space < n - i - 1; ++space)
            cout << "  ";

        // Print values in the row
        for(int j = 0; j <= i; j++) {
            long long k = nCr(i, j);
            cout << k << "   ";
        }  
        cout << "\n";
    }
    
}

int main()
{
     int n = 5;  // You can change this value to print more rows
    pascalTriangle(n);
    return 0;
}
        
        