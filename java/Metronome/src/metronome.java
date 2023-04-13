import java.util.Scanner;
public class metronome {
	public static void main(String[] args) {
		Scanner scrn=new Scanner(System.in);
		double input=scrn.nextDouble()/4;
		System.out.printf("%.2f", input);
	}
}
