public static void pattern1(int row , int col){
        if(row==0)
        return;

        if(row==col){
            System.out.println();
            pattern((row-1), 0);
        }
        else{
            System.out.print("* ");
            pattern(row,( col+1));
            }
    }


public static void pattern2(int row , int col){
        if(row==0)
        return;

        if(row==col){
            pattern((row-1), 0);
            System.out.println();
        }
        else{
            pattern(row,( col+1));
            System.out.print("* ");
        }
    }
