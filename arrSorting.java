import java.util.*;
public class arrSorting{
// index = basic sorting,sorting algorithms.
    public static void reverseArr(){
        int a[] = {1,2,3,4,5};
        int n = a.length;
        //to reverse order
        for(int i = n-1; i >= 0; i--){
            System.out.print(a[i]+","+"\s");
        }
        }
    public static void indexSearch(){
        Scanner in = new Scanner(System.in);
        int indexInput = in.nextInt();
        int b [] = {1,2,3,4,5};
        System.out.println("in the b arr, the index number " + indexInput + " is " + b[indexInput] + " of the b arr.");
        in.close();
    }
    public static void linearSearch(){
        // solve index of c array issue l8r
        int c [] = {10,50,30,40,60};
        int key = 50;
        for(int i = 0; i < c.length; i++){
            if(c[i] == key){
                System.out.println("The number: " + key + " has been found! It was on index number: "+ c[i]);
            }
            
        }
    }
    public static void iterBinarySearch(){
        
    }
    public static void recurBinarySearch(){

    }
    
    public static void main(String[] args){
        //reverseArr();
        //indexSearch();
        //linearSearch();
        //iterBinarySearch();
        //recurBinarySearch();

    }
}
/* TODO: for 4/9/21
`1. FINISH ITERATIVE SEARCH
2. FINISH RECURSIVE SEARCH
*/