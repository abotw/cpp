/*
 * File: daffodil.cpp
 * ------------------
 * 输出100～999中的所有水仙花数。
 * 若3位数ABC满足ABC＝A^3＋B^3＋C^3，则称其为水仙花数。
 * 例如153＝1^3＋5^3＋3^3，所以153是水仙花数。
 * -------------------------------------
 * Updated: Thu Nov  7 09:44:11 CST 2024
 */

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    for (int i = 100; i < 1000; ++i) {
        if (i == pow(i/100,3) + pow(i/10%10,3) + pow(i%10,3)) {
            cout << i << '\t';
        }
    }
    
    return 0;
}