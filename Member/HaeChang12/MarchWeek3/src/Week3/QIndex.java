package Week3;

/**
 * Created by gail5135 on 2017. 3. 22..
 */
import java.lang.reflect.Array;
import java.util.Arrays;
import java.util.Scanner;

/**
 * Created by gail5135 on 2017. 3. 21..
 */
public class QIndex {
    private int numOfThesis;
    private int[] quote;

    private Scanner scan = new Scanner(System.in);

    public QIndex() {
        // 논문의 갯수를 입력 받음
        numOfThesis = Integer.parseInt(scan.nextLine());

        // 논문들을 담을 quote 생성
        quote = new int[numOfThesis];

        // 각각의 인용된 횟수를 입력하고 quote에 넣음
        inputNum();

        // 인용된 횟수를 오름차순으로 정렬
        Arrays.sort(quote);

        // q-index를 구하고 화면에 출력
        calcuQ(quote);
    }

    // 각각 인용된 횟수를 입력 받고 quote에 담는 메소드
    public void inputNum(){
        for(int a = 0; a < quote.length; a++) {
            quote[a] = scan.nextInt();
            // quote[a] = Integer.parseInt(scan.nextLine());
        }
    }

    // q-index를 체크하는 메소드
    public void calcuQ(int[] Q){
        for(int i = 0; i < Q.length; i++){
            if(Q[i] == (Q.length-i)) {
                System.out.println(Q[i]);
                return;
            }
        }
        System.out.println(0);
    }
}
