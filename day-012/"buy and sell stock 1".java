int maxProfit(int[] prices) {
        int minele = prices[0];
        int maxProfit = 0;
        for(int i=1; i<prices.length; i++){
            minele = Math.min(minele , prices[i]);
            maxProfit = Math.max(maxProfit , prices[i]-minele);
        }
        return maxProfit;

    }
