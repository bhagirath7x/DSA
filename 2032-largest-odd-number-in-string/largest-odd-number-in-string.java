class Solution {
    public String largestOddNumber(String num) {
        //  int z=Integer.parseInt(num);
        // if(z%2!=0){
            
        //     return num;
        // }
        


        return length(num);
    }
    // static String length(String p,String n){


    //     if(n.isEmpty()){
    //         return p;
    //     }
    //     int z=Integer.parseInt(n);
    //     if(z%2!=0 && p.isEmpty()){
    //         p=n;

    //         return p;
    //     }

    //     int largest=0;
        
    //     char ch=n.charAt(0);
    //     int num= (int)(ch+'0');
    //     if(num%2!=0){
    //         largest=Math.max(largest,num);
    //       return length(p+ch,n.substring(1));

    //     }
    //     return length(p,n.substring(1));
        
    // }
    static String length(String str){
        for(int i=str.length()-1;i>=0;i--){
            // String s=str.substring(0,i+1);
            char ch=str.charAt(i);
            int z=(int)(ch-'0');
           
            if(z%2!=0){
                return str.substring(0,i+1);
            }
           
        }
        return "";
    } 
}