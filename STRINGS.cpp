#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    // //reverse string
    // // char str[] = "poonam";
    // // char *p1=str;
    // const int n = sizeof(str);
    // char temp[n], *p2=temp;

    // for (int i = n-1; i >= 0; i--)
    // {
    //     temp[n-i-1]=str[i];
    // }

    // char *t=p1;
    // p1=p2;
    // p2=t;

    // for(int i=0;i<n;i++)
    // {
    //     cout << *p1 << " ";
    //     p1++;
    // }

    // // to lowercase
    // char str[]="IgdTUw";
    // int i=0,n=sizeof(str);
    // for (int i=0;i<n;i++)
    // {
    //     if (str[i]>='a' && str[i] <= 'z')
    //     cout << str[i] << " ";

    //     else
    //     {
    //         char l= (char) ((int)str[i]+32);
    //         cout << l << " ";
    //     }
    // }

    // // valid palindrome
    // // char str[]="A man,a plan, a canal: Panama";
    // // char str[]=" ";
    // char str[]="race a car";
    // int n=sizeof(str);
    // char temp[n];
    // int count=0,j=0;

    // for (int i=0;i<n;i++)
    // {
    //     if (str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z' || str[i]>=0 && str[i]<=9)
    //     {
    //         temp[j]=str[i];
    //         j++;
    //     }
    //     else
    //     {
    //         j=i-count;
    //         count++;
    //     }
    // }

    // int found=0;

    // for (int i=0;i<n-count;i++)
    // {
    //     cout << temp[i] << endl;
    //     if (temp[i]!=temp[n-i-1])
    //     {
    //         cout << "not a palindrome" ;
    //         found=1;
    //         break;
    //     }
    // }

    // if (found==0)
    // cout << "palindrome";

    // // add strings ?????
    // char nums1[]="1234";
    // char nums2[]="67";
    // int m=sizeof(nums1),n=sizeof(nums2);

    // if (n>m)
    // swap(m,n);

    // if (m>n)
    // {
    //     char sum[m];
    //     int i=0;
    //     while(i<n)
    //     {
    //         int n1=nums1[m-i-1];
    //         int n2=nums2[n-i-1];
    //         int sum =(n1-48)+(n2-48);
    //         cout << n1 << " " << n2 << " " << sum << endl;
    //         // sum[m-i-1]=nums1[m-i-1]+nums2[n-i-1];
    //         // cout << nums1[m-i-1] + nums2[n-i-1] << endl;
    //         // cout << sum[m-i-1] << endl;
    //         i++;
    //     }

    //     for (int i=0;i<m-n;i++)
    //     {
    //         if (sizeof(nums1)==m)
    //         sum[i]=nums1[i];

    //         else
    //         sum[i]=nums2[i];
    //     }

    //     for (int i=0;i<m;i++)
    //     cout << sum[i] << " " ;

    // }

//     // to return the length of the longest substring without repeating characters
//     char str[] = "pwwkew";
//     int length = 0, n = sizeof(str);
//     int count = 0;

//     for (int i = 0; i < n; i++)
//     {

//         // for (int j=i+1;j<n;j++)
//         // {
//         //     if (str[i]!=str[j])
//         //     count++;

//         //     else
//         //     break;

//         // }

//         if (str[i] != str[i + 1])
//             count++;

//         else
//             count = 0;

//         cout << count << endl;

//         if (count > length)
//             length = count;
//     }

//     // cout << length;
// }
