import java.util.Scanner;
public class Sum_of_Natural_Numbers_8 {
	public static void main(String args[])
	{
	  int n,total=0,i=1;
	  System.out.print("Enter the number:");
	  Scanner s = new Scanner(System.in);
	  n = s.nextInt();
	  while(i <= n)
	  {
	  total = total +i;
	  i++;
	  }
	  System.out.println(total);
	    } 
}
