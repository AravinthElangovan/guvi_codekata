import java.util.Scanner;
public class Decreasing_Array_15 {
	 public static void main(String[] args) {
	        float a[]=new float[6];
	        int n;
	        Scanner s=new Scanner(System.in);
	        System.out.println("Enter the Size of N");
	        n=s.nextInt();
	        System.out.println("Enter the Input");
	        for(int i=1;i<=n;i++){
	            a[i]=s.nextFloat();
	        }
	        for(int i=1;i<=n;i++){
	            for(int j=i;j<=n;j++){
	                if(a[i]<a[j]){
	                    float  temp=a[i];
	                    a[i]=a[j];
	                    a[j]=temp;
                }
	            }
	        }
	        for(int j=1;j<=n;j++){
	            System.out.println(a[j]);
	        }
		    }
}
