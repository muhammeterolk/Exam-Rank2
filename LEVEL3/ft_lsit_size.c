
#include "list.h"
int	ft_list_size(t_list *begin_list)
{
	int i = 0;
	while(begin_list)
	{
		begin_list= begin_list->next;
		i++;
	}
	return (i);
}
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// 3 elemanlı basit bir liste oluşturalım
	t_list *n1 = malloc(sizeof(t_list));
	t_list *n2 = malloc(sizeof(t_list));
	t_list *n3 = malloc(sizeof(t_list));

	n1->data = "ilk";
	n1->next = n2;

	n2->data = "ikinci";
	n2->next = n3;

	n3->data = "üçüncü";
	n3->next = NULL;

	printf("Listenin eleman sayısı: %d\n", ft_list_size(n1));

	// Belleği serbest bırak
	free(n1);
	free(n2);
	free(n3);

	return 0;
}