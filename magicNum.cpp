#include <iostream>
using namespace std;

int digitSum(int n){
    int sum = 0;
    int cnt =0;
    while(n>0){
        sum += n%10;
        n= n/10;
    }
    int temp = sum;
     while(temp > 0){
        temp = temp/10;
        cnt++;
    }
    if(cnt >1) {
        sum = digitSum(sum);
    }
    return sum;
}

int main(){
    int n;
    cout << "enter num: " << endl;
    cin >> n;
    int sum = digitSum(n);

    if (sum ==1) {
        cout << "num is magic num" << endl;
    }
    else{
        cout << "num is not magic num " << endl;
    }
    return 0;
}
