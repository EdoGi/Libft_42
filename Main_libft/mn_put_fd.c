#include <fcntl.h>
#include <unistd.h>
#include "libft.h"

int main()
{
    int fd;
    
    fd = open("test_putchar_fd", O_RDWR | O_CREAT | S_IRUSR | S_IWUSR);
    ft_putchar_fd('c', fd);
    ft_putstr_fd("Salut petit enfant", fd);
    ft_putchar_fd('\n', fd);
    ft_putendl_fd("Yo mannnnn it's working !", fd);
    ft_putnbr_fd(2152463, fd);
    ft_putchar_fd('\n', fd);
    ft_putnbr_fd(-2389, fd);
    ft_putchar_fd('\n', fd);
    ft_putnbr_fd(0, fd);
    ft_putchar_fd('\n', fd);
    ft_putnbr_fd(-2147483648, fd);
    ft_putchar_fd('\n', fd);
    ft_putnbr_fd(2147483647, fd);
    ft_putchar_fd('\n', fd);
    ft_putendl_fd("Finished !", fd);
    return (0);
}