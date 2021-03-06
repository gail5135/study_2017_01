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

    // q-index를 체크 하는 메소드
    public void calcuQ(int[] Q){
        int count = 0;
        for(int i = 1; i <= Q.length; i++){
            for(int j = 0; j < Q.length; j++) {
                if (i <= Q[j]) {
                    count++;
                }
            }
            if (i == count) {
                System.out.println(count);
                return;
            }
            count = 0;
        }
        // q-index가 없을 시 화면에 0 출력하고 메소드 종료
        System.out.println(0);
    }
}
