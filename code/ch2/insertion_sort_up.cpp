#include <iostream>
using namespace std;
template<class T>

int length(T& arr)
{
    return sizeof(arr) / sizeof(arr[0]);
}

void insertion_sort_up(int *A,int len){
    int num;
    int insert_num;
    if(len>1){
        for(int i=0; i<len-1; i++){
            if(A[i]>A[i+1]){
                num = A[i+1];
                for(int x=i;x>=0;x--){
                    if(num<A[x]){
                        insert_num = x;
                    }
                }
                for(int j=i;j>=insert_num;j--){
                    A[j+1] = A[j];
                }
                A[insert_num] = num;
            }
        }
    }
}

int main(){
    int A[] = {-1,9,8,7,6,5,4,3,2,-1,0};
    insertion_sort_up(A, length(A));
    for(int i=0; i<length(A);i++){
        cout<<A[i]<<" ";
    }
}