import java.util.*;
public class countingclauses{
//itterates over all possible solutions (recursive)
public static void iterate(boolean[] arr, int pos, int ePos, int[][] pass){
   if(pos==ePos){
      if(check(arr,pass)){
         System.out.println("satisfactory");
         System.exit(0);
      }
      arr[pos]=true;
      if(check(arr,pass)){
         System.out.println("satisfactory");
         System.exit(0);
      }
      return;
   }
   arr[pos]=false;
   iterate(arr,pos+1,ePos,pass);
   arr[pos]=true;
   iterate(arr,pos+1,ePos,pass);
}

public static boolean check(boolean[] ans, int[][] password){
   for(int i=0;i<password.length;i++){
      int[] sat=new int[3];
      sat[0]=password[i][0];
      sat[1]=password[i][1];
      sat[2]=password[i][2];
      boolean[] boo=new boolean[3];
      for(int j=0;j<3;j++){
         if(sat[j]<0){
            boo[j]=switchb(ans[Math.abs(sat[j])]);
         }
         else{
            boo[j]=ans[Math.abs(sat[j])];
         }
         
      if(!(boo[0]||boo[1]||boo[2])){
         return false;
      }
      }
   }
   return true;
   
   
     
}

public static boolean switchb(boolean b){
   if(b)
      return false;
   return true;
}


public static void main(String [] args){

Scanner scrn=new Scanner(System.in);
int clauses=scrn.nextInt();
int variables=scrn.nextInt();
scrn.nextLine();
boolean[] solution=new boolean[variables+1];//0 is unused
int[][] cList=new int[clauses][3];
for(int i=0;i<clauses;i++){
   String[] temp=scrn.nextLine().split(" ");
   cList[i][0]=Integer.parseInt(temp[0]);
   cList[i][1]=Integer.parseInt(temp[1]);
   cList[i][2]=Integer.parseInt(temp[2]);
}
iterate(solution,0,variables-1, cList);
System.out.println("unsatisfactory");

}
}