int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int currGas = 0;
        int start =0;
        int deficit = 0;

        for(int i=0; i<gas.size(); i++){
            currGas +=gas[i]-cost[i];
            if(currGas<0){
                start = i+1;
                deficit+=currGas;
                currGas = 0;
            }
        }
        if(deficit+currGas>=0)
        return start;
        else return -1;
    }
