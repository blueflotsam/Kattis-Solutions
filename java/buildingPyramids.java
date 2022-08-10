
import java.util.*;
public class buildingPyramids {
	public static void main(String[] args) {
		
	Scanner scrn=new Scanner(System.in);

	long number=1;
	int height=0;
	long blocks=scrn.nextLong();
	while(number*number<=blocks) {
		blocks-=number*number;
		height++;
		number+=2;
	}
	System.out.println(height);
}
}
