/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zraunio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/05 12:29:44 by zraunio           #+#    #+#             */
/*   Updated: 2020/06/08 15:17:48 by zraunio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

#define BUF_SIZE 4999

void	print_file(char *name)
{
	int		fd;
	int		red;
	char	*buf[BUF_SIZE];

	fd = open(name, O_RDONLY);
	if (name < 0)
		return ;
	while ((red = read(fd, buf, BUF_SIZE)) != 0)
		write(1, buf, red);
	close(*name);
}

int		main(int argc, char **argv)
{
	if (argc == 1)
		write(2, "File name missing.\n", 19);
	if (argc > 2)
		write(2, "Too many arguments.\n", 20);
	if (argc == 2)
		print_file(argv[1]);
	return (0);
}
