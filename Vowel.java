import java.io.*;
import java.util.*;
class Vowel
{
    public static void main(String args[])
    {
      String x;
        int i,count=0;
        Scanner sc=new Scanner(System.in);
        x=sc.next();
        for(i=0;i<x.length();i++)
        {
            switch(x.charAt(i))
            {
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                case 'A':
                case 'E':
                case 'I':
                case 'O':
                case 'U':
                count=1;
                break;
                default:
    }
        }
          if(count==1)
        {
            System.out.print("Yes"); 
        }
        else
        {
            System.out.print("No");
        }
         
    }
}
