import java.io.*;
import java.util.*;
import java.math.*;

public class Solution
{
    public static void main(String[] args)
    {
        int givenInt;

        Scanner scanner = new Scanner(System.in);
        givenInt = scanner.nextInt();

        //Control Flow Statement
        if((givenInt % 2 != 0) || (givenInt >= 6 && givenInt <= 20))
        {
            System.out.println("Weird");
        }
        else
        {
            System.out.println("Not Weird");
        }
    }
}