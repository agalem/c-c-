#include <stdio.h>
#include <vector>
#include <queue>

using namespace std;

int tab[1000];
int P=0;
int K=0;

int k_front() {
	return tab[P];
}

void k_push(int x) {
	tab[K]=x;
	K++;
}

bool k_empty() {
	if (P==K) return true;
	else return false;
}
void k_pop(){
	P++;
}

int main() {

	int n, m, k, l, gaz, i;
	int visited[100], lvl[100];
	vector <int> wektor[100];
	queue <int> kolejka;

    scanf("%d %d %d", &n,  &m, &gaz);

    if( 2>=n<=100 && 1>=m<=100 && 1>=k<=n  ){
        for (i=0; i<m; i++){
            scanf("%d %d", &k, &l);
            wektor[k].push_back(l);
            wektor[l].push_back(k);
        }
        for (i=1; i<=n; i++)
            visited[i] = 0;

        k_push(gaz);
        visited[gaz] = 1;
        lvl[gaz]=0;

        while(!k_empty()){
            int node = k_front();
            k_pop();
            for(i=0; i<wektor[node].size(); i++){
                if (visited[wektor[node][i]]==0){
                    visited[wektor[node][i]] = 1;
                    k_push(wektor[node][i]);
                    lvl[wektor[node][i]] = lvl[node]+1;
                }
            }
        }
        for (i=1; i<=n; i++)
            printf("%d %d\n", i, lvl[i]);
        }
return 0;
}
