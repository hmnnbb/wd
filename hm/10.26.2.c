#include <stdio.h>

#ifdef _WIN32
#include <windows.h>
#endif

int main()
{
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
#endif
	int score;
	printf("please enter your score (0~100):");
	scanf("%d", &score);
	if (score >= 90 && score <= 100)
		printf("excellent\n");
	else if (score >= 80)
		printf("good\n");
	else if (score >= 70)
		printf("fair\n");
	else if (score >= 60)
		printf("pass\n");
	else if (score >= 0)
		printf("fail\n");
		else
		printf("invalid score\n");
	return 0;
}
