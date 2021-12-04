#include<iostream>
using namespace std;

int input_num(int num1){
    return num1;
}

int sum_num(int a, int b){
    return a+b;
}
int main(){
    cout<< sum_num(input_num(10),5);
return 0;
}
