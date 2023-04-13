/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddias-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 09:53:08 by ddias-ma          #+#    #+#             */
/*   Updated: 2023/02/05 14:59:34 by ddias-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_error_check(char *str);

int	main(int argc, char **argv)
{
	char	str[32];
	int		i;

	if (argc == 2)
	{
		i = 0;
		while (argv[1][i] != '\0')
		{
			str[i] = argv[1][i];
			i++;
		}
		ft_error_check(str);
	}
	else
		write (2, "Error!\nPlease enter only 'name file' and 'the parameters'.\n", 59);
}
