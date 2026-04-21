int temp=1;
    if(count==count2){
        for(int i=0;i<count;i++){
            if(name[i] != name2[i]){
                temp = 0;
                break;
            }
        }
    }
    printf("%d", temp);