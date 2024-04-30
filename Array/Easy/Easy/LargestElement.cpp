int findLargestElement(int *a;int size)
{
    if(size==0)
       return -1;
    int largest=a[i];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>largest)
            largest=arr[i];
    }
    return largest;
}