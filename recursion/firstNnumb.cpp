#include <bits/stdc++.h>
using namespace std;
// int i=1;
void num(int i, int n ){
    if (n<i){
        return ;
    }
    cout << i;
    num(i + 1, n);
}
int main(){
    int n;
    cout << "Enter n : ";
    cin >> n;
    int i = 1;
    num(i, n);

}