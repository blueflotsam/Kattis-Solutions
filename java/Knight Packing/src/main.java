import java.util.Scanner;
public class main {
public static void main(String [] args) {
	Scanner scrn=new Scanner(System.in);
	int input=scrn.nextInt();
	if(input%2==0)
		System.out.println("second");
	else
		System.out.println("first");
	scrn.close();
}
}
