scanf("%d",&to);

    for(int i=0;i<n;i++){
        if(arr[i]==replace){
            arr[i]=to;
        }
        printf("%d\t",arr[i]);
    }