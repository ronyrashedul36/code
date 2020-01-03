
import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;

/*
4
3 1 2 3
2 2 4
*/
public class Main {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		sc.nextLine();
		int[] a = new int[n];
		for(int i=0;i<n;i++)
			a[i] = sc.nextInt();
		
		int count=0;
		if(n>0) count = 1;
		for(int i=1;i<n;i++)
		{
			if(a[i-1]!=a[i]) count++;
		}
		System.out.println(count);
	}

}
