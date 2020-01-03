
import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;

public class Main {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		sc.nextLine();
		int x,y,z;
		int xSum,ySum,zSum;
		xSum=ySum=zSum=0;
		for(int i=0;i<n;i++) {
			x = sc.nextInt();
			y = sc.nextInt();
			z = sc.nextInt();
			xSum+=x;
			ySum+=y;
			zSum+=z;
		}
		if(xSum==0 && ySum==0 && zSum==0)
			System.out.println("YES");
		else
			System.out.println("NO");
	}

}
