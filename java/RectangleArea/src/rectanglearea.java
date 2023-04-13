import java.util.Scanner;

public class rectanglearea {
	public static void main(String[] args) {
		Scanner scrn=new Scanner(System.in);
		double x=scrn.nextDouble();
		double y=scrn.nextDouble();
		x=Math.abs(x-scrn.nextDouble());
		y=Math.abs(y-scrn.nextDouble());
		System.out.println(x*y);
	}
}
