import java.util.Scanner;
public class Sum_n_using_loop {
static int n;
public static void main(String[] args){
	Scanner s=new Scanner(System.in);
	n=s.nextInt();
	int total = 0; 
	for (int i = 1; i <= n ; i++) {
	  total += i; 
	}
	 System.out.println("Total = " +total);
}
	
}
