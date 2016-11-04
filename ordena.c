#include<stdio.h>

void bubble_sort(int *a, int len)
{
	int i, temp;

	for(i=0;i<len-1;i=i+1){
		if(*(a+i)>*(a+i)){
			temp = *(a+i);
    		*(a+i) = *(a+i+1);
    		*(a+i) = temp;
		}
	}

}

main()
{
	int a[5] = {3,1,2,4,5};
	int *b = a;
	int i;

    for (i=0;i<5;i++){
    	printf("Sin ordenar %d \n", *(a+i));
    }

    bubble_sort(b,5);

    for (i=0;i<5;i++){
    	printf("Ordenado %d \n", *(a+i));
    }
}