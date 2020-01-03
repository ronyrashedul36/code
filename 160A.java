
import java.util.Arrays;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		sc.nextLine();
		int[] a = new int[n];
		int sum=0;
		for(int i=0;i<n;i++) {
			a[i] = sc.nextInt();
			sum+=a[i];
		}
		Arrays.sort(a);
		int ans,count;
		ans=count=0;
		while(ans<=sum-ans) {
			ans+=a[--n];
			count++;
		}
		System.out.println(count);
	}

}
