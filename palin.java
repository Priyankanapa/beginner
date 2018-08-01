import java.io.*;
import java.util.*;
class Palin
{
public static void main(String args[])
{
String str, rev = "";
Scanner a = new Scanner(System.in);
str = a.nextLine();
int length = str.length();
for ( int i = length - 1; i >= 0; i-- )
      rev = rev + str.charAt(i);
       if (str.equals(rev))
         System.out.println("palindrome");
      else
         System.out.println("not a palindrome");
    }
}
