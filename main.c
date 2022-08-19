/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecabanas <ecabanas@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 11:52:47 by ecabanas          #+#    #+#             */
/*   Updated: 2022/08/19 11:53:17 by ecabanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	main(int argc, char **argv)
{
	int		fd;
	int		i;
	char	*line;

	(void)argc;
	fd = open(argv[1], O_RDONLY);
	line = "";
	i = 0;
	while (i < 20)
	{
		line = get_next_line(fd);
		if (!line)
			break ;
		printf("%s", line);
		i++;
	}
	fd = close(fd);
	return (0);
}
/*
int	main(void)
{
	printf("*************\n");
	char	*s = "HOLA";
	char	*res = ft_strdup(s);
	printf("ft_strdup:\t%s\n",res);

	printf("*************\n");
	char	*s1 = "STRING\n1";
	char	*s2 = "STRING2";
	char	*res2 = ft_strjoin(s1, s2);
	printf("ft_strdup: \t%s\n", res2);	
	

	printf("*************\n");
	char	*s3 = "Primera linea\nde";
	char	*res3 = get_before_newline(s3);
	printf("get_before_newline:\t%s\n", res3);

	printf("*************\n");
	char	*s4 = "Primera linea\nde";
	char	*res4 = get_after_newline(s4);
	printf("get_after_newline:\t%s\n", res4);

	return (0);
}*/
