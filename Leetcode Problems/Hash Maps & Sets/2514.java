import java.util.*;
import java.io.BufferedReader;
import java.io.IOException;
public class countAnagrams
{  public int MOD = (int) (1e9 + 7);// 1000000007;
    public int N = (int) (1e5+1);
    public long[] f = new long[N];
    public long[] fi = new long[N];

    public long pow(int a, int b){
        if(b==0)
            return 1;
        long ans = pow(a, b/2);
        ans = (ans*ans)%MOD;
        if (b%2==1)  ans = (ans*a)%MOD;
        return ans;
    }

    public long mod_inv(int a){
        return pow(a,MOD-2);
    }

    public void precompute() {
        f[0] = 1;
        for (int i = 1; i < (N); ++i) {
            f[i] = (i * f[i - 1]) % MOD;
        }
        fi[N-1] = mod_inv((int)f[N-1]);
        // System.out.println(fi[N-1]);
        for(int j = N-2; j > -1; --j){
            fi[j] = ((j+1)*fi[j+1])%MOD;
        }
        // for(int j = 0; j < 11; ++j){
        //     System.out.println(fi[j]);
        // }
    }

    public long totalPermutations(String st) {
        long prm = f[st.length()];
        // System.out.println(prm);
        char[] strArray = st.toCharArray();
        HashMap<Character, Integer> freq = new HashMap<Character, Integer>();
        for (char c : strArray) {
            if (freq.containsKey(c)) {
                freq.put(c, freq.get(c) + 1);
            } else {
                freq.put(c, 1);
            }
        }
        for (int t : freq.values()) {
            if (t > 1)
                prm = (prm * fi[t])%MOD;
        }
        // System.out.println(prm);
        return prm;
    }

    public int countAnagrams(String s) {
        precompute();
        long ans = 1;
        String[] arr = s.split(" ");
        for (String st : arr) {
            ans = (ans*totalPermutations(st))%MOD;
        }
        return (int)ans;
    }
 
  public static void main(String args[]) throws IOException
    {
        String s = "tootz hotz";
        //int B[] = new int[5];
        countAnagrams obj = new countAnagrams();
        System.out.println("Distinct Permutations : "+obj.countAnagrams(s));
    }
}

