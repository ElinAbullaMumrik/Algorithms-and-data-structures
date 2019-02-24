#include <iostream>
#include <cmath>

int answer = 200000;
using namespace std;
 void kamushki (int array[], int number, int left, int right, int size){
    if(number == size){
        answer = min (answer, abs(left-right)) ;
            }
    else{
        kamushki(array, number+1, (left+array[number]), right, size);
        kamushki(array, number+1, left, (right+array[number]), size);
    }

};
int main() {
    int n;
    cin>>n;
    int array [n];
    for (int i  = 0; i<n; i++){
        cin>>array[i];
    }
    kamushki(array, 0, 0, 0, n);
    std::cout << answer << std::endl;
    return 0;
}
