#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


// void quicksort(int *arr, int left, int right){
//     int i, j, temp;
//     int pivot = arr[(left + right)/2];
//     while (i<=j){
//         while (arr[i] < pivot)
//             i++;
//         while (arr[j] > pivot)
//             j++;
//         if (i <= j){
//             temp = arr[i];
//             arr[i] = arr[j];
//             arr[j] = temp;
//             i++;
//             j--;
//         } 
//     }
//     if (left < j)
//         quicksort(arr,left,j);
//     if (right > i)
//         quicksort(arr,i,right);
// }



int Partition(vector<int>& data, int low, int high) {
    // Function : Partition the vector 
    // TODO : Please complete the function
    // Hint : Textbook page 171
    //start

   // cout<<(low+high)/2<<endl;
   int pivotindex = rand()%(high-low)+low;
   int pivot = data[pivotindex];
   swap(data[high],data[pivotindex]);

   int i=low;
   int j=low;
   for(int j=low;j<high;j++){
       if(data[j]<=pivot){
           swap(data[j],data[i]);
           i++;
       }
   }
   swap(data[high],data[i]);
   return i;
}

// Sort subvector (Quick sort)
void QuickSortSubVector(vector<int>& data, int low, int high) {
    // Function : Quick sort subvector
    // TODO : Please complete QuickSortSubVector code here
    // Hint : recursively call itself
    //        Partition function is needed
    // start
   
   if (low < high) {
     int pivot = Partition(data, low, high);
     QuickSortSubVector(data, low, pivot - 1);
     QuickSortSubVector(data, pivot + 1, high);
   }
    // end
}

// Quick sort method
void QuickSort(vector<int>& data){
    QuickSortSubVector(data, 0, data.size() - 1);
}


int main(){
    int size = 7;
    // vector<int> data{152,2,3,5125,2,400,4000};
    /*
    string arrOfString[3] =  {"a", "an", "the"};
vector<string> articles(std::begin(arrOfString), std::end(arrOfString));

    */
    int array[] = {6,1,300,4,5,6,21231,123123,123124,1242112,1241221,21512124,12421,24};
    vector<int> data(begin(array),end(array));
    
    for (int i = 0; i<data.size(); i++)
        {cout << data[i] << endl;}
    cout << "after qs" << endl;
    QuickSort(data);
    //sizeof(result)
    //sizeofresult.s
    for (int i = 0; i<data.size();i++)
        {cout << data[i] << endl;}

return 0;

}
