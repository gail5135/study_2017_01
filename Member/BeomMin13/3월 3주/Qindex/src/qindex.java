
public class qindex {
	public void qindex(int[] a){
		int k = 0;
		sort(a);
		for(int i = 0; i < a.length; i++) {
			for(int j = 0; j < a.length; j++) {
				if(a[i] != 0) {
					if(a[i] <= a[j]) {
						k++;
					}
			}
				else {
					if(a[i] < a[j]) {
						k++;
					}
				}
			}
			if (k == a[i]) {
				System.out.println(k);
				break;
			}
			else {
				k = 0;
			}
		}
	}
	public void insert(int[] a,int index, int num) {
		a[index] = num;
//		sort(a);
	}
	public void sort(int[] a) {
		for(int i = 0; i < a.length-1; i++) {
			for(int j = i+1; j<a.length; j++) {
				if(a[i] > a[j]) {
					int k = a[j];
					a[j] = a[i];
					a[i] = k;
				}
			}
		}
	}
	
}
