/*
 * 找出唯一2元樹.java
 * Author:Yun Pei Chao 
 */
import java.util.Scanner;

public class Main{
    public static void main(String[] args) throws Exception{
        Scanner in = new Scanner(System.in);
        
        String pre="",mid="";
        if(in.hasNextLine())
        {
            pre = in.nextLine();
            mid = in.nextLine();
        }
        
        //String pre = "2 1 4 3 5";
        pre.replace(" ", "");
        
        
        
        
        //String mid = "1 2 3 4 5";
        mid.replace(" ", "");
        
        
        String result;
        result=postOrder(pre,mid);
        int length = result.length();  
        char[] value = new char[length << 1];  
        for (int i=0, j=0; i<length; ++i, j = i << 1) {  
        	value[j] = result.charAt(i);  
            if(i==length-1)
            	break;
            else
        	    value[1 + j] =' ';
        }  
        
        //System.out.println(value);
        
        
        System.out.println(postOrder(pre,mid)+" ");
        
        
    }
    private static String postOrder(String pre, String mid) throws Exception{
        if(pre.length() == 1)
            return pre;
        else if(pre.length() == 0)
            return "";
        int m = mid.indexOf(pre.charAt(0));
        return postOrder(pre.substring(1,m+1 ),mid.substring(0, m)) + postOrder(pre.substring(m+1),mid.substring(m+1))+ pre.charAt(0);
    }
}