import java.util.Scanner;

public class main {
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		qindex q = new qindex();
		Scanner s = new Scanner(System.in);
		int index, num;
		int[] a;
		
		index = s.nextInt();
		a = new int[index];
		
		for(int i = 0; i < a.length; i++) {
			num = s.nextInt();
			q.insert(a,i,num);
		}
		q.qindex(a);
//		for (int i =0; i<a.length; i++)
//		System.out.println(a[i]);
		
	}

}
