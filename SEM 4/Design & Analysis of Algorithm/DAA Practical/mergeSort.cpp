#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
vector<int> merge(vector<int> &array1, vector<int> &array2, int *&count)
{
    int lengthOfArray1 = array1.size();
    int lengthOfArray2 = array2.size();
    vector<int> res(lengthOfArray1 + lengthOfArray2);
    int leftPointer = 0;
    int rightPointer = 0;
    int resPointer = 0;
    while (leftPointer < lengthOfArray1 && rightPointer < lengthOfArray2)
    {
        if (array1[leftPointer] < array2[rightPointer])
        {
            res[resPointer] = array1[leftPointer];
            resPointer += 1;
            leftPointer += 1;
            *count += 1;
        }
        else
        {
            res[resPointer] = array2[rightPointer];
            resPointer += 1;
            rightPointer += 1;
            *count += 1;
        }
    }
    while (leftPointer < lengthOfArray1)
    {
        res[resPointer] = array1[leftPointer];
        resPointer += 1;
        leftPointer += 1;
        *count += 1;
    }
    while (rightPointer < lengthOfArray2)
    {
        res[resPointer] = array2[rightPointer];
        resPointer += 1;
        rightPointer += 1;
        *count += 1;
    }
    return res;
}
vector<int> mergeSort(vector<int> &array, int start, int end, int *&count)
{
    if (end - start == 0)
    {
        vector<int> r;
        r.push_back(array[start]);
        return r;
    }
    int mid = (start + end) / 2;
    vector<int> left = mergeSort(array, start, mid, count);
    vector<int> right = mergeSort(array, mid + 1, end, count);
    return merge(left, right, count);
}
int main(int argc, char const *argv[])
{
    ofstream MyFile("Data.txt");
    int *count = new int(0);
    cout << "Size of Array,No. of Comparisons\n";
    for (int x = 0; x < 100; ++x)
    {
        *count = 0;
        int n = rand() % 971 + 30;
        vector<int> vArray;
        for (int i = 0; i < n; ++i)
        {
            vArray.push_back(rand());
        }
        vector<int> res = mergeSort(vArray, 0, n - 1, count);
        MyFile << n << "," << *count << "\n";
        cout << n << "," << *count << endl;
    }
    MyFile.close();
    return 0;
}