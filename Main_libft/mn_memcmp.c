int main()
{
    int ret = 0;
    int ret2 = 0;
    If s1 and s2 equal
    ret = ft_memcmp("banana split","banana split",13);
    ret2 = memcmp("banana split","banana split",13);
    printf("ret = %d\n",ret);
    printf("ret2 = %d\n\n",ret2);
    if first char of s1 is large to s2
    ret = ft_memcmp("Caramel beurre sale","Caramal beur",15);
    ret2 = memcmp("Caramel beurre sale","Caramal beur",15);
    printf("ret = %d\n",ret);
    printf("ret2 = %d\n\n",ret2);
    if first char of s1 is small to s2
    ret = ft_memcmp("banana","banant",1000);
    ret2 = memcmp("banana","banant",100);
    printf("ret = %d\n",ret);
    printf("ret2 = %d\n\n",ret2);
    return 0;
}