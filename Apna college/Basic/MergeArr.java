public class MergeArr {
    public static void main(String[] args) {
        
        int arrA[]={1,2,3};
        int arrB[]={4,5};

        int c= arrA.length+ arrB.length;
        int arrNew[]= new int[c];

        // inserting elements of first arr
        for(int i=0; i<arrA.length; i++){
            arrNew[i]= arrA[i];
        }

        for(int i=0; i<arrB.length; i++){
            arrNew[(arrA.length)+i]=arrB[i];
        }

        for(int i=0; i<arrNew.length; i++){
            System.out.println(arrNew[i]+" ");
        }

    }
}
