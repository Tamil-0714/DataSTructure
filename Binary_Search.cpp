#include<iostream>
using namespace std;
int Search(int a[],int n, int target)
{
    int Start=0,End=n;
    bool asc=false;
    if(a[Start]<a[End])
        asc=true;
    while(Start<=End)
    {
        int mid=(Start+End)/2;
        if(asc)
        {
            if(target>a[mid])
                Start=mid+1;
            else if (target<a[mid])
                End=mid-1;
            else
                return mid;
        }
        else
        {
            if(target>a[mid])
                End=mid-1;
            else if (target<a[mid])
                Start=mid+1;
            else
                return mid;
        }
    }
    return -1;
}
int main()
{
    int a[]= {32,33,34,42,56,61,77,89,90,110};
    cout<< "Index : "<<Search(a,10,42)<<endl;
    int b[]={90,77,66,54,32,12,10};
    cout<< "Index : "<<Search(b,7,32)<<endl;
}
