/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zjamali <zjamali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 18:00:24 by zjamali           #+#    #+#             */
/*   Updated: 2021/03/15 14:21:36 by zjamali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "../src/libft/libft.h"
typedef enum e_token_type{
	NONE,
	WORD,
	SEMI,
	GREAT,
	LESS,
	DOUBLE_GREAT,
	PIPE,
	NEWLINE,
} t_token_type;

typedef struct s_token
{
	int index;
	t_token_type type;
	char *value;
	char *fields;
	struct s_token *next;
}t_token;

t_token	*ft_lexer(char *line);