#pragma warning (disable : 4996)
#include <stdio.h>

int main() {
	//표준입출력함수
	//printf, scanf, putc, getc, puts, gets


	//fopen()
	//기본적으로 현재 프로그램 파일이 있는 폴더에서 파일을 검색한다.
	//하드디스크로부터 파일을 읽어들여서 FILE Stream 의 버퍼에 등록하는 함수
	//
	//파일 개방 모드
	//r : 읽기 전용(read mode) : 파일이 없으면 에러
	//w : 쓰기 전용(write mode) : 파일이 없으면 생성
	//a : 덧붙여쓰기 전용(append mode) : 파일이 없으면 생성
	//r+ : 읽기/쓰기 다 가능 : 파일이 없으면 에러
	//w+ : 읽기/쓰기 다 가능 : 파일이 없으면 생성
	//a+ : 읽기/덧붙여쓰기 다 가능 : 파일이 없으면 에러
	//rb : 바이너리 파일 읽기 전용 :
	//wb : 바이너리 파일 쓰기 전용 :
	//ab : 바이너리 파일 덧붙여 쓰기 전용 :
	FILE* tp1 = fopen("a.txt", "r");
	// read mod에서 FILE*가 NULL이면 파일을 못찾았다는 의미 
	if (tp1 == NULL) {
		printf("failed to open a txt");
		exit(1);
	}
	printf("%c\n", fgetc(tp1));
	printf("%c\n", fgetc(tp1));
	fclose(tp1);
	//FILE Stream 의 버퍼에 등록되어있는 해당 파일을 등록 해제시키는 함수
	FILE* tp2 = fopen("b.txt", "r");
	if (tp2 == NULL)
	{
		printf("faile to create b.txt");
		exit(1);

	}
	char doOverwrite = 'N';
	printf("b.txt 를 덮어 쓰시겠습니까 ? 기존 내용은 모두 삭제됩니다 (Y/N)");
	scanf("%c", &doOverwrite);
	if (doOverwrite != 'Y') {
		printf("b.txt에 덮어쓰기를 취소하였습니다. 프로그램을 종료합니다.");
		fclose(tp2);
			exit(0);
	}
	
	
	//write mode로 파일을 열면 원래 내용이 모두 삭제됨.
	//write mode로 파일을 여는데 실패하면 해당 파일을 새로 생성함.
	tp2 = fopen("b.txt", "w");
	//write mode 에서 FILE*가 NULL이면 파일을 생성하지 못했다는 의미.
	if (tp1 == NULL) {
		printf("failed to create a txt");
		exit(1);
	}
	fputc('c', tp2);
	fclose(tp2);//쓰기모드에서 버퍼에 들어있는 파일의 내용 수정이 끝나자마자 fclose를 호출하는것이 안전하다
	//버퍼에서 해제되기 전까지는 하드디스크에 수정한 내용이 반영이 안되기 때문.

	
	//append mode
	// 파일이 없으면 생성함
	FILE* tp3 = fopen("c.txt", "a");
	if (tp3 == NULL) {
		printf("failed to create c. txt");
		exit(1);
	}
	fputc('c', tp3);
	fclose(tp3);

	//다양한 형태의 문자열 입출력
	FILE* tp4;
	FILE* tp5;

	char name[20] = "chulsu";
	int korean = 10, english = 20, math = 30;
	double averge;

	tp4 = fopen("chulsu.txt", "r");
	if (tp4==NULL)
	{
		printf("failed to open chulsu txt exit program");
		exit(0);

	}
	tp5 = fopen("youngheui", "w");
	if (tp5==NULL)
	{
		printf("failed to create youngheui. txt. exit program");
		exit(1);

	}

	fscanf(tp4, "%s %d %d %d", name, &korean, &english, &math);
	printf("%s %d %d %d", name, korean, english, math);
	fclose(tp4);

	fprintf(tp5, "%s %d %d %d", name, korean, english, math);
	fclose(tp5);
	

	//대용량 데이터의 입출력을 빠르게 해야한다면
	//fscanf 나 fprintf 처럼 서식에 맞게 입출력하는 함수 말고
	//바이너리 파일 그대로 입출력하는 fread나 fwrite 함수를 사용한다.
	FILE* tp6;
	tp6 = fopen("binarry.txt", "wb");
	char a[] = "fsdafdsafdsafdsa";
	fwrite(a, sizeof(a), 1, tp6);
	fclose(tp6);

	return 0; 
}