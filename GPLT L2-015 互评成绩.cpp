#include <stdio.h>
#include <algorithm>
#define MAX 10000
using namespace std;

int n, k, m;
double score[MAX] = {0};
double grade[MAX] = {0};

bool cmp(double a, double b){
	return a > b;
}

int main(){
	scanf("%d %d %d", &n, &k, &m);
	for(int i = 0; i < n; i++){
		double sum = 0;
		for(int j = 0; j < k; j++){
			scanf("%lf", &grade[j]);
		}
		sort(grade, grade+k, cmp);
		for(int j = 1; j < k-1; j++) sum += grade[j];
		score[i] = sum/(double)(k-2);
	}
	sort(score, score+n, cmp);
	for(int i = m-1; i >= 0; i--){
		printf("%.3f", score[i]);
		if(i != 0) printf(" ");
	}
	return 0;
}
