    int tour(petrolPump p[],int n)
    {
        for(int i=0; i<n; i++){
            int count =1;
            int rem_gas = p[i].petrol-p[i].distance;
            int idx = i;
            if(rem_gas<0)
             continue;

             while(count<n){
                 idx = (idx+1)%n;
                 rem_gas +=p[idx].petrol-p[idx].distance;
                 if(rem_gas<0)
                 break;
                 count++;
             }

             if(count==n)
             return i;
        }
        return -1;
    }
