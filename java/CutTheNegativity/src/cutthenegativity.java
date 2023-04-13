import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.Scanner;
public class cutthenegativity {
	int arrival;
	int departure;
	int cost;
	
	public cutthenegativity(int arrival, int departure, int cost) {
		super();
		this.arrival = arrival;
		this.departure = departure;
		this.cost = cost;
	}

	@Override
	public String toString() {
		return Integer.toString(arrival+1)+" "+Integer.toString(departure+1)+" "+Integer.toString(cost);
	}

	public static void main(String[] args) {
		Scanner scrn=new Scanner(System.in);
		int cities=Integer.parseInt(scrn.nextLine());
		ArrayList<cutthenegativity> output=new ArrayList<cutthenegativity>();
		for (int i = 0; i < cities; i++) {
			int arr[]=Arrays.stream(scrn.nextLine().split(" ")).mapToInt(Integer::parseInt).toArray();
			
			for (int j = 0; j < cities; j++) {
				if (arr[j]!=-1) {
					cutthenegativity obj=new cutthenegativity(i,j,arr[j]);
					output.add(obj);
				}
			}
		}
		Collections.sort(output,new Sort());
		System.out.println(output.size());
		for (int i = 0; i < output.size(); i++) {
			System.out.println(output.get(i));
		}
	}
}

class Sort implements Comparator<cutthenegativity> {
	 
    // Method
    // Sorting in ascending order of roll number
    public int compare(cutthenegativity a, cutthenegativity b)
    {
    	if(a.arrival==b.arrival)
    		return a.departure-b.departure;
        return a.arrival - b.arrival;
    }
}
