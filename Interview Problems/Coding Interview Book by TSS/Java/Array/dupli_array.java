import java.util.Scanner;

class Main
{
    public static int[] rmvDuplis(int[] arr, int len)
    {
        //Function remove duplicate values
        int pointA, pointB;
        pointA = 0;
        for(pointB = 1; pointB < len; pointB++)
        {
            if(arr[pointA] == arr[pointB])
            {
                arr[pointB] = 0;
            }
            else
            {
                pointA++;
                arr[pointA] = arr[pointB];
                arr[pointB] = 0;
            }
        }
        return arr;
    }
    public static void main(String[] args)
    {
        int arrLen;
        Scanner scr = new Scanner(System.in);
        arrLen = scr.nextInt();

        int[] arr = new int[arrLen];

        //User Array Input
        for(int i = 0; i < arrLen; i++)
        {
            arr[i] = scr.nextInt();
        }

        arr = rmvDuplis(arr, arrLen);

        //Output Array
        for(int i = 0; i < arrLen; i++)
        {
            System.out.print(arr[i] + " ");
        }
    }
}