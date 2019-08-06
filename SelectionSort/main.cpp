 #include <iostream>

using namespace std;

void selectionSort (int arr[], int n){
    for (int i = 0; i < n; i++){
        //寻找[1,n)区间的最小值
        int minIndex = i; 
        for (int j = i+1; j < n; j++)
            if (arr[j] < arr[minIndex])
                minIndex = j;
        swap(arr[i],arr[minIndex]);
    }
}

int main(){
    int a[5] = {5,4,3,2,1};
    int n = 5;
    selectionSort(a,n);
    for (int i = 0; i < n; i++)
       cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}