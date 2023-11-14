#include <iostream>
using namespace std;

int main()
{
    // // concatenation of array
    // int A[]={1,2,3,4};
    // // int B[]={5,6,7,8,9};

    // int m=sizeof(A)/sizeof(int);
    // // int n=sizeof(B)/sizeof(int);

    // // int arr[m+n];
    // int arr[2*m];

    // // for (int i=0;i<m;i++)
    // // arr[i]=A[i];

    // for (int i=0;i<m;i++)
    // {
    //     arr[i]=A[i];
    //     arr[m+i]=A[i];
    // }

    // // for (int i=0;i<n;i++)
    // // arr[m+i]=B[i];

    // // for (int i=0;i<m+n;i++)
    // // printf("%d ",arr[i]);

    // for (int i=0;i<2*m;i++)
    // cout << arr[i] << " ";


    // // remove an element

    // int A[]={1,2,3,4,5,6};
    // int num;
    // int n=sizeof(A)/sizeof(int);

    // printf("Enter no to be removed: ");
    // scanf ("%d",&num);
    //  int temp[n];
    //  int counter=0;
    //  int j=0;

    // for (int i=0;i<n;i++)
    // {
        
    //     if (A[i]==num)
    //     {
    //         j=i-1;
    //         counter=1;
    //     }
    //     else
    //     temp[j]=A[i];

    //     j++;
    // }

    // printf("Element removed\n");
    // printf("New array: \n");

    // if (counter==0)
    // {
    //     for (int i=0;i<n;i++)
    //     printf("%d ",temp[i]);
    // }

    // if (counter==1)
    // {
    //     for (int i=0;i<n-1;i++)
    //     printf("%d ",temp[i]);
    // }

    
    // // sum of 3 elements = 0

    // int nums[]={-1,0,1,2,-1,-4};
    // int n=sizeof(nums)/sizeof(int);
    // int count=0;

    // for (int i=0;i<n;i++)
    // {
    //     for (int j=0;j<n;j++)
    //     {
    //         for (int k=0;k<n;k++)
    //         {
    //             if (nums[i]+nums[j]+nums[k]==0 && nums[i]!=nums[j] && nums[i]!=nums[k] && nums[j]!=nums[k])
    //             {
    //                 cout << nums[i] << " " << nums[j] << " " << nums[k] << endl;
    //                 count++;
    //             }

    //         }
    //     }
    // }
    // if (count !=0)
    // cout << endl << count << endl;

    // else
    // cout << "no such triplet exists";



    // // remove all the occurences of the given number and print count and value of rest of the elements
    // int A[]={1,2,3,3,2,4,1,5,6};
    // int *p1=A;
    // int n=sizeof(A)/sizeof(int);
    // int temp[n];
    // int *p2=temp,num=2,count=0,j=0;
    // // cout << "Enter no to be deleted: " ;
    // // cin >> num;

    // for (int i=0;i<n;i++)
    // {
    //     if (A[i]==num)
    //     {
    //         j=i-count;
    //         count++;
    //     }

    //     else
    //     {
    //         temp[j]=A[i];
    //         j++;
    //     }
    // }

    // int *t=p1;
    // p1=p2;
    // p2=t;

    // for (int i=0;i<n-count;i++)
    // {
    //     cout << *p1 << " ";
    //     p1++;
    // }


    // no of employees who met the target
    // int emp[]={3,4,7,8,9,10,6,11,13,8,7,9,8};
    // int target=8,n=sizeof(emp)/sizeof(int),count=0;

    // for (int i=0;i<n;i++)
    // {
    //     if (emp[i]>=target)
    //     count++;
    // }

    // cout << "no of employees who met the target are: " << count << endl;



//     // sum of min and max
//     int A[5] = {2, -5, 8, 10, 22};

//     int max = A[0];
//     int min = A[0];
//     int n = sizeof(A)/ sizeof(int);

//     for (int i = 1; i < n; i++)
//     {
//         if (A[i] > max)
//             max = A[i];
//         if (A[i] < min)
//             min = A[i];
//     }

//     cout << "sum of max and min = " << max+min << endl;
    
// }
