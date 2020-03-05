import java.util.Scanner;

public class stdinout
{
    public static void main(String[] args)
    {
        //input variables
        int intVal;
        double dblVal;
        String str;

        //Standard Input
        Scanner scan = new Scanner(System.in);
        intVal = scan.nextInt();
        dblVal = scan.nextDouble();
        
        scan.nextLine(); //Buffer Flush
        str = scan.nextLine();

        //Standard Output
        System.out.println("String: " + str);
        System.out.println("Double: " + dblVal);
        System.out.println("Int: " + intVal);
    }
}
