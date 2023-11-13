#include <iostream>

using namespace std;
int main()
{
    int N = 5;
    int A[N] = {1, 2, 3, 4, 5};
    int B[N];
    for (int i = 0; i<N; ++i){
        B[i] = A[i];
        cout<< B[i] << '\t';
    }
}