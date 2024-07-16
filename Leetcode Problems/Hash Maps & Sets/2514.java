import java.util.*;
import java.io.BufferedReader;
import java.io.IOException;
public class countAnagrams
{
  public int countAnagrams(String s) {
        String[] arr = s.split(" ");
        for(String st:arr){
            System.out.println(st);
        }   
 }
    
  public static void main(String args[]) throws IOException
    {
        int[] A = {18,24,19,36,4};
        //int B[] = new int[5];
        goodArray obj = new goodArray();
        System.out.println("Result:: "+obj.isGoodArray(A));
    }
}
