#include <iostream>
 
using namespace std;
 
const int maxn = 30 + 5;
int x, cnt, a[maxn];
void print(int arr[], int Size) {
    for(int i = 0; i < Size; i++) {
        cout << arr[i] << " ";
    }
    cout << arr[Size] << endl;
}
int Partition(int arr[], int l, int r) {
    int i = l, j = r;
    int key = arr[l];
    while(i < j) {
        while(i < j && arr[j] > key) {
            j--;
        }
        arr[i] = arr[j];
        while(i < j && arr[i] < key) {
            i++;
        }
        arr[j] = arr[i];
    }
    arr[i] = key;
    return i;
}
void quicksort(int arr[], int l, int r) {
    if(l >= r) {
        return ;
    }
    int x = Partition(arr, l, r);
    print(arr, cnt - 1);
    quicksort(arr, l, x - 1);
    quicksort(arr, x + 1, r);
}
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    while(cin >> x) {
        a[cnt++] = x;
        if(cin.get() == '\n') {
            break;
        }
    }
    quicksort(a, 0, cnt - 1);
    return 0;
}
