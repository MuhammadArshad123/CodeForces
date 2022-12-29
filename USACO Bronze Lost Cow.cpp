// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
		freopen("lostcow.in", "r", stdin);
	freopen("lostcow.out", "w", stdout);
	int x,y; cin >> x >> y;
	int jPos=x;
	int moves=0;
	int walk=1;
	int distance=0;
	while(!(jPos==y)){
		if(moves==0){
			jPos+=1;
			distance++;
			moves++; 
		}else{
			walk=walk*2;
			if(moves%2==0){
				while(!(jPos==x+walk || jPos==y)){
					distance++;
					jPos++;
				}
				moves++;
			}else{
				while(!(jPos==x-walk || jPos==y)){
					distance++;
					jPos--;
				}
				moves++;
			}
		}
	}
	cout << distance;
}
