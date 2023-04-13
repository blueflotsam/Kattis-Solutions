import java.util.Scanner;

public class Pokechat {
	public static void main(String[] args) {
		String output="";
		Scanner scrn=new Scanner(System.in);
		String input=scrn.nextLine();
		String number=scrn.nextLine();
		for(int i=0;i<number.length();i+=3) {
			int num=Integer.parseInt(number.substring(i,i+3))-1;
			System.err.println(num);
			output+=input.charAt(num);
		}
		System.out.println(output);
	}
}
