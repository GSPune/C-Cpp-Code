
import java.util.*;
import java.io.BufferedReader;
import java.io.IOException;
public class matrixExpo
{
    static class Matrix{
        long[][] m = new long[2][2];
            public Matrix(){
                for(int i = 0; i < 2; ++i){
                    for(int j = 0; j < 2; ++j){
                       m[i][j] = 0; 
                    }
            }
        }
    }

    public Matrix identity(){
        Matrix T = new Matrix();
        T.m[0][0] = 1;
        T.m[0][1] = 0;
        T.m[1][0] = 0;
        T.m[1][1] = 1;
        return T;
    }
    
    public Matrix mul(Matrix a,Matrix b){
        Matrix c = new Matrix();
           for(int i = 0; i < 2; ++i){
                    for(int j = 0; j < 2; ++j){
                        for(int k = 0; k < 2; ++k){
                           c.m[i][j] += a.m[i][k]*b.m[k][j]; 
                    }
                }
            }
        return c;
    }
    
    
    public Matrix pow(Matrix a,int b){
        if(b==0) return identity();
        Matrix ans = pow(a,b/2);
        ans = mul(ans,ans);
        if(b%2!=0) ans = mul(ans,a);
        return ans;
    }
    
    public static void main(String args[]) throws IOException
    {
        //int[] A = {18,24,19,36,4};
        //int B[] = new int[5];
        matrixExpo ob = new matrixExpo();
        Matrix M = new Matrix(),C = new Matrix();
        M.m[0][0] = 2;
        M.m[0][1] = 3;
        M.m[1][0] = 1;
        M.m[1][1] = 2;
        C = ob.pow(M,6);
        for(int i = 0; i < 2; ++i){
                for(int j = 0; j < 2; ++j){
                   System.out.print(C.m[i][j]+" ");
                }
             System.out.println();
        }
    }
}
