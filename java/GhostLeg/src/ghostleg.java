import java.util.Iterator;
import java.util.Scanner;

public class ghostleg {
public static void main(String[] args) {
	Scanner scrn=new Scanner(System.in);
	int n=scrn.nextInt();
	int count=scrn.nextInt();
	int output[]=new int[n+1];
	int rungs[]=new int[count+1];
	for (int i = 1; i < rungs.length; i++) {
		rungs[i]=scrn.nextInt();
	}
	for (int i = 1; i < output.length; i++) {
		int position=i;
		for (int j = 1; j < rungs.length; j++) {
			if(position==rungs[j])
				position++;
			else if(position==rungs[j]+1)
				position--;
		}
		output[position]=i;
	}
	for (int i = 1; i < output.length; i++) {
		System.out.println(output[i]);
	}
}
}
