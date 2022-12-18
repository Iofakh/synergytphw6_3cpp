#include<stdio.h>
#include<string.h>

main()
{
    char str[100];
    int q = 0;

    while ((q == 0) || (q > 99) )
    {    
        printf("Введите строку латиницей\n");
        gets(str);
        q  = strlen(str);
    }

    printf("\nВторой элемент строки: %c", str[1]);
    printf("\n\n");

    
    printf("Последний элемент строки.: %c", str[q-1]);
    printf("\n\n");

    int a, b;
    
    while (((a < 1) || (a > q)) || (b < 1) || (b > q))
    {
        printf("Всего элементов в строке: %i\n", q);
        printf("Веддите элементы строки, кторорые нужно поменять местами через Enter\n");
        printf("Нумерация начинается с единицы:\n");
        scanf("%i",&a);
        scanf("%i",&b);
    }

    char c = str[a-1];
    str[a-1] = str[b-1];
    str[b-1] = c;
    printf("Строка после перестановки элементов: \n");
    puts(str);

    int d = 0;
    while ((d < 1) || (d > q))
    {
        printf("\nВеддите элемент строки, который нужно удалить: ");
        scanf("%i",&d);
    }

    for (int j=d-1;j<q;j++)
    {
        str[j]=str[j+1];
    }
    printf("\nСтрока после удаления элемента: \n");
    puts(str);
    






    // puts(str);
}
