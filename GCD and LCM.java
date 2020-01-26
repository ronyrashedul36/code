package second;

import java.io.PrintWriter;
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Main {
	public static Scanner sc = new Scanner(System.in);
	public static PrintWriter p = new PrintWriter(System.out, true);

	public static long gcd(long a, long b) {
		return b > 0 ? gcd(b, a % b) : a;
	}

	

	public static void main(String[] args) {

		int t = sc.nextInt();
		long a, b;
		long lcm, g;
		int i, j, n;
		for (i = 0; i < t; i++) {
			a = sc.nextInt();
			b = sc.nextInt();
			g = gcd(a, b);
			lcm = (a*b)/g;
			System.out.println(g + " " + lcm);
		}
	}

}