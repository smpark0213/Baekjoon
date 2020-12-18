#include <stdio.h> //미완성

int main() {
	int x, y;
	int qocn;
	int count;
	int temp1[50] = { 0 };
	int temp2[50] = { 0 };
	int arr[50][50] = { 0 };
	int wlfjddl;

	scanf("%d", &count);

	for (int i = 0; i < count; i++) {
		scanf("%d %d %d", &x, &y, &qocn);
		for (int j = 0; j < qocn; j++) {
			scanf("%d %d", &temp1[j], &temp2[j]);
			arr[temp1[j]][temp2[j]] = 1;
		}

		for (int a = 0; a < qocn; a++) {
			for (int b = 0; b < qocn; b++) {
				if (temp1[a] == temp1[b]) {
					if ((temp2[a] - temp2[b]) == 1 || (temp2[a] - temp2[b]) == -1) {
						wlfjddl++;
					}
				}
			}
		}

	}


	return 0;
}