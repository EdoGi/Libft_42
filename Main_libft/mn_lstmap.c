#include "libft.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void *ft_to_maj(void *str)
{
    int i;
    
    char *str2;
    str2 = (char *)str;
    i = 0;
    while (str2[i])
    {
        str2[i] = str2[i] - 32;
        i++;
    }
    return ((void *)str2);
}

void  ft_print_content(void *content)
{
    if (content)
      printf("%s\n", content);
    else
      printf("content is NULL\n\n");
}

int main()
{
    t_list *mylist;
    t_list *node;
    t_list *newlist;
    char **str;
    int i;
    
    str = NULL;
    str = malloc(sizeof(char *) * (4));
    str[0] = ft_strdup("bonjour");
    str[1] = ft_strdup("ciao");
    str[2] = ft_strdup("salam alyekoum");
    str[3] = ft_strdup("hello");
    mylist = ft_lstnew(str[3]);
    for (i = 0; i < 3; i++)
    {
        node = ft_lstnew(str[i]);
        ft_lstadd_back(&mylist, node);
    }
    ft_lstiter(mylist, &ft_print_content);
    newlist = ft_lstmap(mylist, &ft_to_maj, &free);
    ft_lstiter(newlist, &ft_print_content);
    ft_lstclear(&mylist, &free);
    ft_lstclear(&newlist, NULL);
    return (0);
}