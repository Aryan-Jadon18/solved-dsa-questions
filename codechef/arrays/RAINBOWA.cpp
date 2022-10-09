/*
Problem
Read problems statements in mandarin chinese, russian and vietnamese as well.
Chef likes all arrays equally. But he likes some arrays more equally than others. In particular, he loves Rainbow Arrays.

An array is Rainbow if it has the following structure:

First a1 elements equal 1.
Next a2 elements equal 2.
Next a3 elements equal 3.
Next a4 elements equal 4.
Next a5 elements equal 5.
Next a6 elements equal 6.
Next a7 elements equal 7.
Next a6 elements equal 6.
Next a5 elements equal 5.
Next a4 elements equal 4.
Next a3 elements equal 3.
Next a2 elements equal 2.
Next a1 elements equal 1.
ai can be any non-zero positive integer.
There are no other elements in array.

Help Chef in finding out if the given array is a Rainbow Array or not.

Input
The first line of the input contains an integer T denoting the number of test cases.
The first line of each test case contains an integer N, denoting the number of elements in the given array.
The second line contains N space-separated integers A1, A2, ..., AN denoting the elements of array.
Output
For each test case, output a line containing "yes" or "no" (without quotes) corresponding to the case if the array is rainbow array or not.
*/
#include<iostream>
int main()
{
    long t;
    std::cin>>t;
    while(t--)
    {
        int n,i;
        std::cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        {
            std::cin>>a[i];
        }
        bool rainbow=true;
        int low=0,high=n-1,num=1;
        while(low<=high)
        {
            if(a[low]!=num || a[high]!=num)
            {
                rainbow=false;
                break;
            }
            if(a[low+1]!=a[low])
            {
                num++;
            }
            low++;
            high--;
        }
        if(rainbow==true && (num==8 || num==7))
        {
            std::cout<<"yes"<<std::endl;
        }
        else
        {
            std::cout<<"no"<<std::endl;
        }
    }
    return 0;
}
//https://www.codechef.com/problems/RAINBOWA