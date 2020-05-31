#include <stdio.h>

int howmanystudent;
int student[30][3];
long double top1=0, top2 = 0, top3 = 0, bottom1 = 0, bottom2 = 0, bottom3 = 0,average1 = 0, average2 = 0, average3 = 0;
long double studentaverage[30];
long double studentaverageaverage = 0, studentaveragetop = 0, studentaveragebottom = 0;//%.2Lf

void scan() {
	printf("총학생수는?");
	scanf_s("%d", &howmanystudent);
	for (int i = 0; i < howmanystudent; i++) {

		printf("학생%d의 국어점수는?", i+1);
		scanf_s("%d", &student[i][0]);
		printf("학생%d의 수학점수는?", i+1);
		scanf_s("%d", &student[i][1]);
		printf("학생%d의 영어점수는?", i+1);
		scanf_s("%d", &student[i][2]);

	}
}
void average() {
	for (int i = 0; i < howmanystudent; i++) {
		average1 += student[i][0];
		average2 += student[i][1];
		average3 += student[i][2];
	}
	average1 = average1 / howmanystudent;
	average2 = average2 / howmanystudent;
	average3 = average3 / howmanystudent;
	printf("\n국어 평균 : %.2Lf\n수학 평균: %.2Lf\n영어평균 : %.2Lf\n", average1, average2, average3);
}
void top() {	
		long double toptemp = student[0][0];
		long double bottomtemp = student[0][0];
		for (int i = 0; i < howmanystudent; i++) {
			if (student[i][0] > toptemp) {
				toptemp = student[i][0];
			}
			if (student[i][0] < bottomtemp) {
				bottomtemp = student[i][0];
			}
		}
		top1 = toptemp;
		bottom1 = bottomtemp;


		toptemp = student[0][1];
		bottomtemp = student[0][01];

		for (int i = 0; i < howmanystudent; i++) {
			if (student[i][0] > toptemp) {
				toptemp = student[i][1];
			}
			if (student[i][0] < bottomtemp) {
				bottomtemp = student[i][1];
			}
		}
		top2 = toptemp;
		bottom2 = bottomtemp;


		toptemp = student[0][2];
		bottomtemp = student[0][2];

		for (int i = 0; i < howmanystudent; i++) {
			if (student[i][0] > toptemp) {
				toptemp = student[i][2];
			}
			if (student[i][0] < bottomtemp) {
				bottomtemp = student[i][2];
			}
		}
		top3 = toptemp;
		bottom3 = bottomtemp;

		printf("\n국어 최대점수 : %.2Lf\n국어 최저점수 : %.2Lf\n수학 최대점수 : %.2Lf\n수학 최저점수 : %.2Lf\n영어 최대점수 : %.2Lf\n영어 최저점수 : %.2Lf\n", top1,bottom1, top2, bottom2, top3, bottom3);
	}
void studentaveragefunc() {
	for (int i = 0; i < howmanystudent; i++) {
		studentaverage[i] = (student[i][0] + student[i][1] + student[i][2]) / 3;
		studentaverageaverage += studentaverage[i];
		studentaverageaverage = studentaverageaverage / howmanystudent;
	}
	

		long double toptemp = studentaverage[0];
		long double bottomtemp = studentaverage[0];

		for (int i = 0; i < howmanystudent; i++) {
			if (studentaverage[i] > toptemp) {
				toptemp = studentaverage[i];
			}
			if (studentaverage[i] < bottomtemp) {
				bottomtemp = studentaverage[i];
			}
		}
		studentaveragetop = toptemp;
		studentaveragebottom = bottomtemp;

		printf("\n학생 평균의 평균 : %.2Lf\n학생 평균의 최대값 : %.2Lf\n학생 평균의 최소값 : %.2Lf\n", studentaverageaverage,studentaveragetop, studentaveragebottom);
}

int main() {
	scan();
	average();
	top();
	studentaveragefunc();
	return 0;
}