import java.util.*;
public class A_Notelock {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int t = sc.nextInt();

    while(t-->0){
      int n = sc.nextInt();
      int k = sc.nextInt();

      String s = sc.next();

      int count = 0;
      int lastOne = -1000000;
      for(int i=0;i<n;i++){
        if(s.charAt(i) == '1') {
          if(i-lastOne >= k){
            count++;
          }
          lastOne = i;
        }
      }

      System.out.println(count);
    }

    sc.close();
  }
}
