import java.io.*;
import java.util.*;

public class Solution
{
    public static void main(String[] args)
    {
        int numLine = 0;
        String str;

        Scanner scan = new Scanner(System.in);
        while(scan.hasNext())
        {
            str = scan.nextLine();
            numLine++;

            System.out.println(numLine + " " + str);
        }
    }
}