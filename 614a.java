package second;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		sc.nextLine();
		while (t > 0) {
			int n, s, k;
			n = sc.nextInt();
			s = sc.nextInt();
			k = sc.nextInt();
			int x;
			List<Integer> list = new ArrayList<>();
			for (int i = 0; i < k; i++) {
				x = sc.nextInt();
				list.add(x);
			}
			int cnt = 0;
			while(true) {
				if(s+cnt<=n && !list.contains(s+cnt)) 
					break;
				
				if(s-cnt>=1 && !list.contains(s-cnt)) break;
				cnt++;
			}
			System.out.println(cnt);
			t--;
		}

	}

}