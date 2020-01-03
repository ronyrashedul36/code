
import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;

public class Main {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);
		long n = sc.nextLong();
		long k = sc.nextLong();
		long ans = n / 2;
		if (n % 2 != 0)
			ans++;
		if (k > ans) {
			k -= ans;
			long x = k*2;
			System.out.println(x);
		} else {
			long x = k+(k-1);
			System.out.println(x);
		}
	}

}
