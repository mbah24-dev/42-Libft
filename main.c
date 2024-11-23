/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbah <mbah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 17:23:13 by mbah              #+#    #+#             */
/*   Updated: 2024/11/20 17:23:25 by mbah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>

int	ft_atoi(const char *nptr);

static void atoi_unit_test(char *value);
static void	increment_buffer(char *buffer);
static void	decrement_buffer(char *buffer);

int main(void) {
	char buffer[200];

	sprintf(buffer, "%d", INT_MAX - 100);
	for (size_t i = 0; i < 200; ++i) {
		atoi_unit_test(buffer);
		increment_buffer(buffer);		
	}
	sprintf(buffer, "%d", INT_MIN + 100);
	for (size_t i = 0; i < 200; ++i) {
		atoi_unit_test(buffer);
		decrement_buffer(buffer);		
	}
	sprintf(buffer, "%zu", SIZE_MAX - 100);
	for (size_t i = 0; i < 200; ++i) {
		atoi_unit_test(buffer);
		increment_buffer(buffer);		
	}
	sprintf(buffer, "%zu", LONG_MAX - 100);
	for (size_t i = 0; i < 200; ++i) {
		atoi_unit_test(buffer);
		increment_buffer(buffer);		
	}
	sprintf(buffer, "%ld", LONG_MIN + 100);
	for (size_t i = 0; i < 200; ++i) {
		atoi_unit_test(buffer);
		decrement_buffer(buffer);		
	}
	printf("🎉 All tests passed! 🎉\n");
	return (0);
}

static void atoi_unit_test(char *value) {
	int ft = ft_atoi(value);
	int og = atoi(value);
	if (ft != og) {
		printf("%s ❌\n Output differs!\nft_atoi=%d\n   atoi=%d\n", value, ft, og);
		exit(1);
	}
	printf("%s ✅\n", value);
}

static void	increment_buffer(char *buffer) {
	char *ptr = strrchr(buffer, '\0');

	char c = *--ptr;
	while (c == '9') {
		*(ptr) = '0';
		c = *--ptr;
	}
	(*ptr)++;
}

static void	decrement_buffer(char *buffer) {
	char *ptr = strrchr(buffer, '\0');

	char c = *--ptr;
	while (c == '0') {
		*(ptr) = '9';
		c = *--ptr;
	}
	(*ptr)--;
}
