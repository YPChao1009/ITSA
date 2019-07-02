/*
 * 陣列元素.java
 * Author:Yun Pei Chao 
 */
import java.util.*;

public class Main {

	public static void main(String[] args) {
		Scanner scn = new Scanner(System.in);
		String str = scn.nextLine(), s[] = str.split(" ");
		int count = 1;
		for (int i = 0; i < s.length; i++) {
			count = 1;
			for (int j = i + 1; j < s.length; j++) {
				if (s[i].equals(s[j])) {
					count++;
				}
			}
			if (count > s.length / 2) {
				System.out.println(s[i]);
				break;
			}
		}
		if (count == 1)
			System.out.println("n/a");
	}
	
}