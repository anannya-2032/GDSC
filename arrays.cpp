#include <iostream>
using namespace std;
int main() {
    // to concatenate an array
    // int a[]= {1,2,3};
    // int m=sizeof(a)/sizeof(int);

    // int b[2*m];

    // for (int i=0 ; i < m ; i++) {
    //     b[i]=a[i];
    //     b[m+i]=a[i];
    // }
    // for (int i=0 ; i < 2*m ; i++){
    //     cout << b[i] << " "; 
    // }

    // int nums[]={-1, 2, -3, 0, 1, -2, 3, -4};
    // int m=sizeof(nums)/sizeof(int);

    // to add 3 umbers such that all are different numbers and sums up to 0
    // for (int i=0 ; i<m ; i++){
    //     for(int j=0 ; j<m ; j++){
    //         for(int k=0 ; k<m ; k++){

    //             int a=nums[i];
    //             int b=nums[j];
    //             int c=nums[k];

    //             if (a!=b && b!=c && c!=a && a+b+c==0){
    //                 cout<< a << " " << b << " " << c << endl;
    //             }

    //         }
    //     }
    // }

    //to remove an element
    int nums[]={0,1,2,2,3,0,4,2};
    int val=2;
    int m=sizeof(nums)/sizeof(int);
    int i = 0, j = 0;
        while(j != m){
            if(nums[j] == val) 
                j++;
            else 
                nums[i++] = nums[j++];
        }
        int n = sizeof(nums)/sizeof(int);
        cout << i << endl;
        for (int i=0;i<n ; i++){
            cout<<nums[i]<< " ";
        }



}