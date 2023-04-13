import java.util.Scanner;

public class arrangement {
	public static void main(String[] args) {
		Scanner scrn=new Scanner(System.in);
		int rooms=scrn.nextInt();
		int teams=scrn.nextInt();
		int min=(int)teams/rooms;
		int remainder=teams%rooms;
		String print="";
		for (int i = 0; i < min; i++) {
			print+="*";
		}
		for (int i = 0; i < rooms; i++) {
			if(i<remainder)
				System.out.print("*");
			System.out.println(print);
		}
	}
}
