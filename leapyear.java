import java.util.Scanner;
public class Leap_Year_6 {
		public static void main(String[] args) {
int n;
Scanner s=new Scanner(System.in);
n=s.nextInt();
if((n % 400 == 0) || ((n % 4 == 0) && (n % 100 != 0)))
	System.out.println("Entered Year " + n + " is a leap year");
else
	System.out.println("Entered Year " + n + " is not a leap year");
		}
	}

