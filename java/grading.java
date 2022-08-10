
import java.util.*;
public class grading {
	public static void main(String[] args) {
		
	Scanner scrn=new Scanner(System.in);
	int arr[]=new int[6];
	for(int i=0;i<5;i++) {
		arr[i]=scrn.nextInt();
	}
	arr[5]=-1;
	int grade=scrn.nextInt();
	for(int i=0;i<arr.length;i++) {
		if(grade>=arr[i]) {
			System.out.println((char)('A'+i));
			break;
		}
	}
	
}
}
