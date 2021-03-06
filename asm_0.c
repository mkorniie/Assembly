/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   asm_0.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorniie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 11:58:52 by mkorniie          #+#    #+#             */
/*   Updated: 2017/12/04 12:56:12 by mkorniie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main (void)
{
	int a;
	int b;
	int res;

	a = 2;
	b = 5;
	asm(
		"movl %[a],%%eax\n\t"
		"movl %[b],%%edx\n\t"
		"mull %%edx\n\t"
		:"=res"(res)
		:[a]"m"(a), [b]"m"(b)
		:"cc");	
	printf("res is %d\n", res);
	return (0);
}
