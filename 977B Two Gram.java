package codeforces;

import java.util.Scanner;

public class Codeforces {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String result = null;
        
        int ans = 0, n, c, i, j;
        n = scanner.nextInt();
        String s;
        s = scanner.next();
        for(i=0; i<n-1; i++){
            c = 0;
            for(j=0; j<n-1; j++){
                if(s.charAt(i) == s.charAt(j) && s.charAt(i+1) == s.charAt(j+1)){
                    c++;
                }
            }
            if(ans < c){
                ans = Math.max(ans, c);
                result = String.valueOf(s.charAt(i)) + String.valueOf(s.charAt(i + 1));
            }
        }
        System.out.println(result);
    }
}

