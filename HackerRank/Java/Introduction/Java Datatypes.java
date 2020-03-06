import java.util.*;
import java.io.*;

public class solution
{
    public static void main(String[] args)
    {
        //Input variables - test case & value
        int t;
        long n;

        //Standard Input
        Scanner scan = new Scanner(System.in);
        t = scan.nextInt();

        while(t > 0)
        {
            try
            {
                n = scan.nextLong();
                System.out.println(n + " can be fitted in:");

                if(n >= Byte.MIN_VALUE && n <= Byte.MAX_VALUE)
                {
                    System.out.println("* byte");
                }

                if(n >= Short.MIN_VALUE && n <= Short.MAX_VALUE)
                {
                    System.out.println("* short");
                }

                if(n >= Integer.MIN_VALUE && n <= Integer.MAX_VALUE)
                {
                    System.out.println("* int");
                }

                if(n >= Long.MIN_VALUE && n <= Long.MAX_VALUE)
                {
                    System.out.println("* long");
                }
            }
            catch(Exception e)
            {
                System.out.println(scan.next() + " can't be fitted anywhre.");
            }

            t--;
        }
    }
}