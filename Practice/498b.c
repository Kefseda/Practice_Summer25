
#include <stdio.h>

/* �����: �������� �.�.
 * ������ 481
 * ��� ���������� ���� f. ����� ����� ������� �����
 * ����� ����, ������ ����� ������� ���� e; ���� ���� � ����������
 * ������� ���������, �� ����� ���������. ���� ����� ���� ��� ������,
 * �� �������� �� ����. ������ ��� ������:
 * ��� ����������� �� ���� �������� � �����.
 */

void Start498b() {
	char* path = "C:/Users/Ivan/Desktop/haha.txt";
	char buffer[256];
	FILE* fp;
	char* p1;
	char* p2 = NULL;

	//��������� ���� ��� ������
	fopen_s(&fp, path, "r");
	if (fp == NULL) {
		puts("���� ������ �������");
		exit(1);
	}

	printf("���� ����� ������� ����� �� ������ ������ � � ������:\n");
	// ���� �� ������ �� �����, ��������� �� 256 ����
	while ((fgets(buffer, 256, fp)) != NULL)
	{
		printf("%s", buffer);
	}

	int maxLen = 0, len;
	//strtok - ��������� ������ �� ��������� �����
	p1 = strtok(buffer, " ");
	while (p1 != NULL) {
		//strlen - ������ ������
		len = strlen(p1);
		if (maxLen <= len && p1[1] == 'e') {
			//strdup - ������ ����� ��������� ����-��������������� ������ � ���� (��������� malloc) � ���������� ��������� �� ��
			p2 = strdup(p1);
			maxLen = len;
		}
		p1 = strtok(NULL, " ");
	}

	if(p2 == NULL) printf("\n����� ���� ��� ������");
	else printf("\n�����: '%s'", p2);

	free(p2);

	fclose(fp);

}