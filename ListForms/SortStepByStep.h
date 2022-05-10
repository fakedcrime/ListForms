#pragma once
#include "Queue.h"
using namespace std;
int* sortsbs(string* arr, int n, int sf) {
	int max = 0;
	for (int i = 0; i < n; i++) { //находит максимальную длину элементов
		if (max < arr[i].length()) {
			max = arr[i].length();
		}
	}
	for (int i = 0; i < n; i++) { // добавляет нули
		while (arr[i].length() < max) {
			arr[i] = "0" + arr[i];
		}
	}
	Queue b[10];
	int m = 0;
	int i = (max - 1) - sf;
	int* larr = new int[10];
	//for (int i = (max - 1); i >= 0; i--) { //добавление в очередь и формирование таблицы
	if (i >= 0) {
		for (int j = 0; j < n; j++) {
			int m = arr[j][i];
			int k = m - 48;
			int d = stoi(arr[j]);
			b[k].Add(d);
		}
		int l = 0;
		for (int k = 0; k < 10; k++) {
			while (b[k].IsEmpty() == 1) {
				int v = b[k].GetInfo();
				arr[l++] = to_string(v);
				larr[m++] = k;
			}
		}
		for (int f = 0; f < l; f++) {
			while (arr[f].length() < max) {
				arr[f] = "0" + arr[f];
			}
		}
	}
		return larr;
	//}
}