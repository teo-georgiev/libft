/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_libft.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgeorgie <tgeorgie@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 10:19:02 by tgeorgie          #+#    #+#             */
/*   Updated: 2023/11/02 13:30:46 by tgeorgie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTS_LIBFT_H
# define TESTS_LIBFT_H
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <ctype.h>
# include "../libft.h"

// Libc functions
void	t_ft_checkchar(void);
void	t_ft_strlen(void);
void	t_ft_memset(void);
void	t_ft_bzero(void);
void	t_ft_memcpy(void);
void	t_ft_memmove(void);
void	t_ft_strlcpy(void);
void	t_ft_strlcat(void);
void	t_ft_strchr(void);
void	t_ft_strncmp(void);
void	t_ft_memchr(void);
void	t_ft_memcmp(void);
void	t_ft_strnstr(void);
void	t_ft_atoi(void);
void	t_ft_calloc(void);
void	t_ft_strdup(void);

// Additional functions
#endif
