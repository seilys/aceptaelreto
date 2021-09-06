#include <stdio.h>

int main()
{
	int casosDeUso = 0;
	scanf("%i", &casosDeUso);

	for (int i = 0; i < casosDeUso; i++) {

		int calendariosEncontrados = 0;
		scanf("%i", &calendariosEncontrados);
		
		int years[60];
		for (int j = 0; j < calendariosEncontrados; j++) {
			int anio;
			scanf("%i", &anio);
			years[j] = anio;
		}
      
	      	int temporal;
		for (int i = 0; i < calendariosEncontrados; i++){
			for (int j = 0; j < calendariosEncontrados; j++){
				if (j == 0)
					continue;
				if (years[j] < years[j - 1]){
					temporal = years[j];
					years[j] = years[j - 1];
					years[j - 1] = temporal;
				}
			}
        	}
      
	      	printf("%i\n", (years[calendariosEncontrados-1] - years[0] + 1) - calendariosEncontrados);
	}
	return 0;
}
