#include <stdio.h>
int main(){
	int tab[350000];
	int wys, ile_kr, i, j;
	int krazki[350000];
	int koniec;
	int check=0;

	scanf("%d", &wys);
	scanf("%d", &ile_kr);

	for(i=0; i<wys; i++){
		scanf("%d", &tab[i]);
	}

	for(i=0; i<ile_kr; i++){
		scanf("%d", &krazki[i]);
	}

	for(i=0; i<ile_kr; i++){
        check = 0;

        if(i == 0 || krazki[i] > krazki[i-1]){
            for(j=0; j<wys; j++){

                if(krazki[i] > tab[j]){
                    wys = j;
                    check = 1;
                    break;
                }
            }
        }

		if(check == 0){
            wys--;
		}

		if(wys <= 0){
            break;
		}
	}
	if(wys < 0){
        printf("0");
	}else{
        printf("%d", wys);
	}
	return 0;
}
