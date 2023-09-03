#include<stdio.h>

//실패1
/*
int main(void) {

	int num = 0;

	printf("이 프로그램은 0부터 당신이 원하는 수까지의 범위에 있는 소수를 구해주는 프로그램 입니다!\n");
	printf("어떤 수 가지의 소수를 원하시나요?\n");
	printf("숫자를 적어주세요!\n\n");
	printf("* 주의사항!\n");
	printf("너무 큰 수를 적으면 컴퓨터가 맛이 갈 수도 있습니다!\n");
	printf("양의 정수로 적어주세요!\n");
	printf("당신의 답변 : ");

	scanf_s("%d", &num);

	printf("\n\n");
	printf("당신은 0부터 %d 사이에 있는 소수를 알고싶군요!\n", num);
	printf("제가 금방 구해드릴게요!\n\n");

	printf("\nㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");

	if (num == 0 || num == 1 || num == 2) {

		printf("\n0부터 %d 사이에 소수는 존재하지 않습니다.\n\n", num);

	}

	


		for (int i = 0; i <= num; i++) {

			int sum = 0;

			for (int j = 0; j <= num; j++) {


				if (i % j == 0) {

					sum = sum + 1;

				}

			}

			if (sum == 2) {

				printf("%d", i);

			}
			
		}

	

	printf("\n0부터 %d 사이에 있는 소수를 모두 구했습니다!\n\n",num);

	return 0;

}
*/

//실패2
/*
int main(void) {
	
	int fn = 0;
	int dn = 0;

	printf("양의 정수 입력해\n");
	scanf_s("%d", &fn);
	printf("수 = %d\n\n", fn);

	for (int i = 1; i <= fn; i++) {

		dn = 0;

		for (int j = 1; j <= fn; j++) {

			if (i % j == 0) {
				dn = dn + 1;
			}

		}

		if (dn == 2) {
			printf("%d", i);
		}

	}

	return 0;

}
*/

//성공, 근데 N 까지 나옴
/*
int main(void) {

	//프로그램 설명
	printf("\nㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
	printf("\n안녕하세요!\n");
	printf("이 프로그램은 0부터 N 사이에 있는 소수를 알려주는 프로그램입니다~!\n\n");
	printf("N의 값을 입력해주세요!\n\n");
	printf("* 주의사항 *\n");
	printf("  * 꼭 자연수를 입력해주세요.\n");
	printf("  * 너무 큰 수를 입력하면 컴퓨터에 부담이 올 수 있어요.\n\n");
	printf("N의 값 : ");

	//N값 받기
	int N = 0;
	scanf_s("%d", &N);

	printf("\nㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n\n\n");
	printf("0부터 %d 사이에 있는 소수는\n\n", N);

	//소수 없을 때
	if (N == 1 || N == 2 || N == 3) {
		printf("없어요!");
	}
	//소수 있을 때
	//소수 찾는 방법  ->  A / ( '0' ~ 'A-1' ) 의 나머지가 0인 것의 개수가 2개면 소수
	else {

		//0부터 N 사이의 숫자
		for (int i = 1; i <= N; i++) {

			int sum = 0;

			//나누는 숫자
			for (int j = 1; j <= N; j++) {

				if (i % j == 0) {
					sum = sum + 1;
				}

			}

			if (sum == 2) {
				printf("%d, ", i);
			}

		}

		printf("\n\n입니다!");

	}

	printf("\n\n\n");
	printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ");
	printf("\n\n\n");

	return 0;

}
*/

//성공!
/*
int main(void) {

	//프로그램 설명
	printf("\nㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
	printf("\n안녕하세요!\n");
	printf("이 프로그램은 0부터 N 사이에 있는 소수를 알려주는 프로그램입니다~!\n\n");
	printf("N의 값을 입력해주세요!\n\n");
	printf("* 주의사항 *\n");
	printf("  * 꼭 자연수를 입력해주세요.\n");
	printf("  * 너무 큰 수를 입력하면 컴퓨터에 부담이 올 수 있어요.\n\n");
	printf("N의 값 : ");

	//N값 받기
	int N = 0;
	scanf_s("%d", &N);

	printf("\nㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n\n\n");
	printf("0부터 %d 사이에 있는 소수는\n\n", N);

	//소수 없을 때
	if (N == 1 || N == 2 || N == 3) {
		printf("없어요!");
	}
	//소수 있을 때
	//소수 찾는 방법  ->  A / ( '0' ~ 'A-1' ) 의 나머지가 0인 것의 개수가 2개면 소수 
	else {

		//0부터 N 사이의 숫자
		//0부터 N 사이의 소수니까 N 은 소수여도 포함하지 않는다!  ->  0 ~ N-1
		for (int i = 1; i <= N-1; i++) {

			int sum = 0;

			//나누는 숫자
			for (int j = 1; j <= N-1; j++) {

				if (i % j == 0) {
					sum = sum + 1;
				}

			}

			if (sum == 2) {
				printf("%d, ", i);
			}

		}

		printf("\n\n입니다!");

	}

	printf("\n\n\n");
	printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ");
	printf("\n\n\n");

	return 0;

}
*/

//진짜 성공! ( 글 바꾸기 )
int main(void) {

	//프로그램 설명
	printf("\nㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
	printf("\n안녕하세요!\n");
	printf("이 프로그램은 P = { x | 0<x<N, x는 소수 } 인 집합을 원소나열법으로 알려주는 프로그램입니다~!\n\n");
	printf("N의 값을 입력해주세요!\n\n");
	printf("* 주의사항 *\n");
	printf("  * 꼭 자연수를 입력해주세요.\n");
	printf("  * 너무 큰 수를 입력하면 컴퓨터에 부담이 올 수 있어요.\n\n");
	printf("N의 값 : ");

	//N값 받기
	int N = 0;
	scanf_s("%d", &N);

	printf("\nㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n\n\n");

	//소수 없을 때
	if (N == 1 || N == 2) {
		printf("P는 공집합 입니다!");
	}
	//소수 있을 때
	//소수 찾는 방법  ->  A / ( '0' ~ 'A-1' ) 의 나머지가 0인 것의 개수가 2개면 소수 
	else {

		printf("P = { ");

		//0부터 N 사이의 숫자
		//0부터 N 사이의 소수니까 N 은 소수여도 포함하지 않는다!  ->  0 ~ N-1
		for (int i = 1; i <= N - 1; i++) {

			int sum = 0;

			//나누는 숫자
			for (int j = 1; j <= N - 1; j++) {

				if (i % j == 0) {
					sum = sum + 1;
				}

			}

			if (sum == 2) {

				printf("%d,", i);

			}

		}
		system("pause");
		printf("} 입니다!");
		
	}

	printf("\n\n\n");
	printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ");
	printf("\n\n\n");

	return 0;

}
