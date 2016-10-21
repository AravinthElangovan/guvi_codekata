import java.util.Scanner;
public class Count_Digits_10 {
public static void main(String[] args){
	int n;
	Scanner s=new Scanner(System.in);
	n=s.nextInt();
	int length = String.valueOf(n).length();
	System.out.println(length);
}
}
