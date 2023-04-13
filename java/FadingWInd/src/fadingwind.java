import java.util.Arrays;
import java.util.Scanner;

public class fadingwind {
	public static void main(String[] args) {
		
	
	Scanner scrn=new Scanner(System.in);
	int arr[]=Arrays.stream(scrn.nextLine().split(" ")).mapToInt(Integer::parseInt).toArray();
	int total=0;
	while(arr[0]>0) {
		arr[2]+=arr[3];
		arr[2]-=Math.max(1, (int)(arr[2]/10));
		if(arr[2]>=arr[1])
			arr[0]++;
		if(arr[2]>0&&arr[2]<arr[1]) {
			arr[0]--;
			if(arr[0]==0)
				arr[2]=0;		
		}
		if(arr[2]<=0) {
			arr[0]=0;
			arr[2]=0;
		}
		total+=arr[2];
		if(arr[3]>0) {
			arr[3]--;
		}
	}
	System.out.println(total);
	}
}
