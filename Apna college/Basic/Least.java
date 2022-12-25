public class Least{
    public static void main(String[] args) {
        
        int mark[]={2,3,45,6,7,8,1,4,5};

        int min=mark[0];
        int max =Integer.MIN_VALUE;
        // System.out.println(max);
        int indexa=0;
        for(int i=0; i<mark.length; i++){
            if(min>mark[i]){
                min=mark[i];
            //    indexa=i;
                
            }

            else if(max<mark[i]){
                max=mark[i];
            };
        }
        System.out.println(min+""+indexa);
        System.out.println(max+""+indexa);
    }
}