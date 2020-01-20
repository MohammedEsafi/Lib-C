/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   graph.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mesafi <mesafi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 13:18:53 by mesafi            #+#    #+#             */
/*   Updated: 2020/01/15 15:03:53 by mesafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GRAPH_H

/*
 * Definitions
*/

# define GRAPH_H

/*
 * Includes
*/

# include "../libft.h"

/*
 * Structures
*/

typedef struct	s_graph
{
	unsigned int	num_vertices;
	struct s_node	**lists;
}				t_graph;

typedef struct	s_node
{
	unsigned int	vertex;
	struct s_node	*next;
}				t_node;

/*
 * Graph Functions
*/

t_graph			*create_graph(unsigned int vertices);
void			add_edge(t_graph *graph, unsigned int src, unsigned int dest);
void			print_graph(t_graph *graph);

# endif
