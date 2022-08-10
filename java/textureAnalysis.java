
import java.util.*;
public class textureAnalysis {
    public static void main(String[] args) {
        
    Scanner scrn=new Scanner(System.in);
    String s="";
    int counter=1;
    while(true) {
        boolean b=true;
        s=scrn.nextLine();
        if(s.equals("END")) {
            break;
        }
        String pattern="*";
        for (int i=1;i<s.length();i++) {
            char c=s.charAt(i);
            if(c=='*')
                break;
            pattern+=c;
        }
        /*
        for(int i=pattern.length();i<s.length();i+=pattern.length()) {
            if(i+pattern.length()>s.length()) {
                String compare=s.substring(i-pattern.length()+1);
                System.err.println(compare);
                if(!compare.equals("*")) {
                    b=false;
                }
                continue;
            }
            String compare=s.substring(i,i+pattern.length());
            if(!compare.equals(pattern)) {
                b=false;
                break;
            }
        }*/
        s=s.replace(pattern, "");
        //System.err.println(pattern);
        if(s.equals("*")||s.equals("")) {
            System.out.println(counter++ +" EVEN");
        }
        else {
            System.out.println(counter++ +" NOT EVEN");
        }
    }
}
}
