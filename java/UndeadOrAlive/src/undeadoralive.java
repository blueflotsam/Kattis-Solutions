import java.util.Scanner;
public class undeadoralive {
	public static void main(String[] args) {
		
	
	Scanner scrn=new Scanner(System.in);
	String input=scrn.nextLine();
	if(input.contains(":)")&&input.contains(":("))
		System.out.println("double agent");
	else if (input.contains(":)"))
		System.out.println("alive");
	else if(input.contains(":("))
		System.out.println("undead");
	else
		System.out.println("machine");
	}
}
