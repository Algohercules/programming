#include<iostream>
using namespace std;

//sum of numbers from 1 to N


int sumN (int n) {
   int sum = 0;


for( int i = 1;  i<=n;  i++){
    sum = sum + i;
}

return sum;

}


int main(){
    cout << sumN(10) <<endl;
    cout << sumN(15) <<endl;
    return 0;
}