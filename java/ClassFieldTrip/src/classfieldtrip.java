import java.util.Arrays;
import java.util.Scanner;
public class classfieldtrip {
	public static void main(String[] args) {
		Scanner scrn=new Scanner(System.in);
		String input=scrn.nextLine()+scrn.nextLine();
		char arr[]=input.toCharArray();
		Arrays.sort(arr);
		System.out.println(new String(arr));
	}
}
