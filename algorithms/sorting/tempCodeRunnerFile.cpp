    int arr[]={2,8,7,1,3,5,2,4};
    int n = sizeof(arr)/sizeof(arr[0]);

    quicksort(arr,0,n-1);

    for(int i=0;i<n;++i)
        cout<<arr[i]<<" ";
    cout<<endl;