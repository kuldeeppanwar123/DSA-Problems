static ArrayList<Integer> leaders(int a[], int n){
       
        ArrayList<Integer>ans = new ArrayList<>();
          int currLeader = a[n-1];
          ans.add(currLeader);
          for(int i=n-2; i>=0;i--)
          {
              if(a[i]>=currLeader)
              {
                  currLeader = a[i];
                  ans.add(currLeader);
              }
          }
         Collections.reverse(ans);
         return ans;
    }
