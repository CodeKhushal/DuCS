#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void displayArray(double* &array,int size){
    cout<<"Displaying Your Array..."<<endl;
    for (int i = 0; i < size; i++){
        cout<<array[i]<<" ";
    }
    cout<<endl<<endl;
}
void bucketSort(double* &array,int size){
    vector<vector<double>> buckets(10);
    for (int i = 0; i < size; i++){
        int index = (int)array[i]%10;
        buckets[index].push_back(array[i]);
    }
    for (int i = 0; i < 10; i++){
        sort(buckets[i].begin(),buckets[i].end());
    }
    int index = 0;
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < buckets[i].size(); j++){
            array[index++] = buckets[i][j];
        }
    }
}

int main(){
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    double arr[n] = {};
    double a;
    for(int i=0; i<n;i++){
        cout<<"Enter element no. "<<i+1<<":  ";
        cin>>a;
        cout<<endl;
        arr[i]=a;
    }
    double * array = arr;
    int size = sizeof(arr)/sizeof(double);

    displayArray(array,size);
    bucketSort(array,size);
    displayArray(array,size);
    
    return 0;
}