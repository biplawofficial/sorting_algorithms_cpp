
#include <iostream>
#include<vector>
using namespace std;
void sort(vector <int>&array, int num)
{
    int i,j;
    for(i=0;i<num-1;i++)
    {
        for(j=0;j<num-i-1;j++)
        {
            if(array[j]>array[j+1])
            {
                swap(array[j],array[j+1]);
            }
        }
    }
}
int main() {
  vector<int> arr{70,50,99,7,0,12,344,34};
  int size= arr.size();
  sort(arr,size);
  for(int j=0;j<size;j++)
  {
      cout<<" "<<arr[j];
  }
}