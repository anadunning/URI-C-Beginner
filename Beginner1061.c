#include <stdio.h>

int main(){

        int diaI, diaF, tempoDias;
		int horaI, horaF, tempoHoras;
		int minI, minF, tempoMins;
		int segI, segF, tempoSegs;
		char dp1[2], dp2[2], dp3[2], dp4[2];

		scanf("%*s %d", &diaI);

        scanf("%d %s %d %s %d", &horaI, dp1, &minI, dp2, &segI);

        scanf("%*s %d", &diaF);

        scanf("%d %s %d %s %d", &horaF, dp3, &minF, dp4, &segF);

        // Calculating time in days:
        tempoDias = diaF - diaI;

         // Calculating time in hours:
		if (horaF < horaI) {
			tempoHoras = horaF + 24 - horaI;
			tempoDias--;
		}
		else {
			tempoHoras = horaF - horaI;
		}

		// Calculating time in minutes:
		if (minF < minI) {
			tempoMins = minF + 60 - minI;
			tempoHoras--;
		}
		else {
			tempoMins = minF - minI;
		}

        // Calculating time in seconds:
		if (segF < segI) {
			tempoSegs = segF + 60 - segI;
			tempoMins--;
		}
		else {
			tempoSegs = segF - segI;
		}

        // Reset day:
		if (tempoDias < 0){
            tempoDias = 0;
		}

		printf("%d dia(s)\n", tempoDias);
        printf("%d hora(s)\n", tempoHoras);
        printf("%d minuto(s)\n", tempoMins);
        printf("%d segundo(s\n", tempoSegs);

        return 0;
}
