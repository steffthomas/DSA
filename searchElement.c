int search(int arr[], int N, int X)
{
     int i;  
    for(i=0;i<N;i++)
    {
        if(arr[i]==X)
        {
            return i;
        }
    }
    return -1;
}