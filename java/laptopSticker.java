
import java.util.*;
public class laptopSticker {
	public static void main(String[] args) {
		
	Scanner scrn=new Scanner(System.in);
	int num=scrn.nextInt();
	int ans=1;
	int num2=scrn.nextInt();
	if(num<scrn.nextInt()+2)
		ans=0;
	if(num2<scrn.nextInt()+2)
		ans=0;
	System.out.println(ans);
}
}
