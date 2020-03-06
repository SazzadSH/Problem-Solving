import java.util.*;
import java.io.*;
import java.lang.Math;

public class Solution
{
    public static void main(String[] args)
    {
        int q, a, b, n, res = 0;

        Scanner scan = new Scanner(System.in);
        q = scan.nextInt();

        while(q > 0)
        {
            a = scan.nextInt();
            b = scan.nextInt();
            n = scan.nextInt();

            res = a;
            for(int i = 0; i < n; i++)
            {
                res += (Math.pow(2, i) * b);
                System.out.print(res + " ");
            }

            System.out.printf("\n");

            q--;
        }
    }
}