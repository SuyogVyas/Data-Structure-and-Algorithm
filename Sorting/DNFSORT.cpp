#include<iostream>
using namespace std;
// DNA SORT 012 sort

void swap(int arr[],int a,int b)
{
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}


void DNASort(int arr[],int n)
{
    int low = 0;
    int high = n-1;
    int mid = 1;

    while(mid<=high)
    {
        if(arr[mid]==0)
        {
            swap(arr,mid,low);
            mid++;
            low++;
        }

        if(arr[mid]==1)
        {
            mid++;
        }

        if(arr[mid]==2)
        {
            swap(arr,mid,high);
            mid++;
            high--;
        }
    }

}

int main()
{
    int arr[] = {1,0,0,2,1,0,0,2,1};
    DNASort(arr,9);
    for(int i=0;i<9;i++)
    {
        cout<<arr[i]<<" ";
    }


}