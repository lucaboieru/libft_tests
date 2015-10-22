/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vplaton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/21 14:50:01 by vplaton           #+#    #+#             */
/*   Updated: 2015/10/22 16:53:26 by vplaton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

int ok = 1;

void    test_strnstr(const char *s1, const char *s2, size_t n)
{
    char    *our_res = ft_strnstr(s1, s2, n);
    char    *lib_res = strnstr(s1, s2, n);


    if (!our_res || !lib_res)
    {
        if (our_res != lib_res)
            printf(" > test: %s %s %d\n > expected: %s but got: %s\n", s1, s2, n, lib_res, our_res), ok = 0;
    }
    else
    {
	    if (strcmp(our_res, lib_res))
            printf(" > test: %s %s %d\n > expected: %s but got: %s\n", s1, s2, n, lib_res, our_res), ok = 0;
    }
}

int		main(void)
{
	printf("Testing ft_atoi:\n");
	if (atoi("0") != ft_atoi("0")) printf("0\n"), ok = 0;
	if (atoi("    -42") != ft_atoi("   -42")) printf("-42\n"), ok = 0;
	if (atoi("     +42") != ft_atoi("     +42")) printf("    +42\n"), ok = 0;
	if (atoi("     +-42") != ft_atoi("     +-42")) printf("    +-42\n"), ok = 0;
	if (atoi("-2147483648") != ft_atoi("-2147483648")) printf("-2147483648\n"), ok = 0;
	if (atoi("2147483647") != ft_atoi("2147483647")) printf("2147483647\n"), ok = 0;
	if (ok == 1) printf("Succes!\n"); else printf("Failure!\n");
	
    ok = 1;
	printf("Testing ft_isalnum:\n");
	if (isalnum(0) != ft_isalnum(0)) printf("0\n"), ok = 0;
	if (isalnum('0') != ft_isalnum('0')) printf("character 0\n"), ok = 0;
	if (isalnum('z') != ft_isalnum('z')) printf("z\n"), ok = 0;
	if (ok == 1) printf("Succes!\n"); else printf("Failure!\n");
	
    ok = 1;
	printf("Testing ft_isalpha:\n");
	if (isalpha(0) != ft_isalpha(0)) printf("0\n"), ok = 0;
	if (isalpha('0') != ft_isalpha('0')) printf("character 0\n"), ok = 0;
	if (isalpha('z') != ft_isalpha('z')) printf("z\n"), ok = 0;
	if (ok == 1) printf("Succes!\n"); else printf("Failure!\n");
	
    ok = 1;
	printf("Testing ft_isascii:\n");
	if (isascii(0) != ft_isascii(0)) printf("0\n"), ok = 0;
	if (isascii('0') != ft_isascii('0')) printf("character 0\n"), ok = 0;
	if (isascii('z') != ft_isascii('z')) printf("z\n"), ok = 0;
	if (ok == 1) printf("Succes!\n"); else printf("Failure!\n");
	
    ok = 1;
	printf("Testing ft_isdigit:\n");
	if (isdigit(0) != ft_isdigit(0)) printf("0\n"), ok = 0;
	if (isdigit('0') != ft_isdigit('0')) printf("character 0\n"), ok = 0;
	if (isdigit('z') != ft_isdigit('z')) printf("z\n"), ok = 0;
	if (ok == 1) printf("Succes!\n"); else printf("Failure!\n");
	
    ok = 1;
	printf("Testing ft_isprint:\n");
	if (isprint(0) != ft_isprint(0)) printf("0\n"), ok = 0;
	if (isprint('0') != ft_isprint('0')) printf("character 0\n"), ok = 0;
	if (isprint('z') != ft_isprint('z')) printf("z\n"), ok = 0;
	if (ok == 1) printf("Succes!\n"); else printf("Failure!\n");
	
    ok = 1;
	printf("Testing ft_strcat:\n");
	char	s[20] = "abcx\0";
	printf("%s\n", strcat(s, "abc"));
	char	d[20] = "abcx\0";
	printf("%s\n", ft_strcat(d, "abc"));
	
    ok = 1;
	printf("Testing ft_strchr:\n");
	printf("%s\n", strchr("abc", 'b'));
	printf("%s\n", ft_strchr("abc", 'b'));
	printf("%s\n", strchr("abc", '\0'));
	printf("%s\n", ft_strchr("abc", '\0'));
	
    ok = 1;
	printf("Testing ft_strcmp:\n");
	if (strcmp("abc", "abc") != ft_strcmp("abc", "abc")) printf("abc abc\n"), ok = 0;
	if (strcmp("", "abc") != ft_strcmp("", "abc")) printf("null abc\n"), ok = 0;
	if (strcmp("asdf", "") != ft_strcmp("asdf", "")) printf("asdf null\n"), ok = 0;
	if (ok == 1) printf("Succes!\n"); else printf("Failure!\n");
	
    ok = 1;
	printf("Testing ft_strcpy:\n");
	char str[200];
	char str2[200];
	strcpy(str, "abcd");
	ft_strcpy(str2, "abcd");
	if (strcmp(str, str2) != 0) printf("abcd\n"), ok = 0;
	if (ok == 1) printf("Succes!\n"); else printf("Failure!\n");
	
    ok = 1;
	printf("Testing ft_strdup:\n");
	char *strd;
	strd = ft_strdup("abcd");
	if (strcmp(strd, "abcd") != 0) printf("abcd\n"), ok = 0;
	if (ok == 1) printf("Succes!\n"); else printf("Failure!\n");
	
    ok = 1;
	printf("Testing ft_strlcat:\n");
    char s11[100] = "hello";
    char s12[100] = "hello";
    char s13[100] = "world, baby!";
	if (strlcat(s11, s13, 10) != ft_strlcat(s12, s13, 10)) { printf("wrong return value for n greater than len\n"); ok = 0; }
    if (strcmp(s11, s12)) { printf("wrong behavior for n greater than len\n"); ok = 0; }
    char s21[100] = "hello";
    char s22[100] = "hello";
    char s23[100] = "world, baby!";
	if (strlcat(s21, s23, 6) != ft_strlcat(s22, s23, 6)) { printf("wrong return value for n equal to len\n"); ok = 0; }
    if (strcmp(s21, s22)) { printf("wrong behavior for n equal to len\n"); ok = 0; }
    char s31[100] = "hello";
    char s32[100] = "hello";
    char s33[100] = "world, baby!";
	if (strlcat(s31, s33, 2) != ft_strlcat(s32, s33, 2)) { printf("wrong return value for n less than len\n"); ok = 0; }
    if (strcmp(s31, s32)) { printf("wrong behavior for n less than len\n"); ok = 0; }
	if (ok == 1) printf("Succes!\n"); else printf("Failure!\n");

    ok = 1;
	printf("Testing ft_strlen:\n");
	if (strlen("asdf") != ft_strlen("asdf")) printf("asdf\n"), ok = 0;
	if (strlen("") != ft_strlen("")) printf("null\n"), ok = 0;
	if (strlen("asdf   ") != ft_strlen("asdf   ")) printf("asdf space\n"), ok = 0;
	if (ok == 1) printf("Succes!\n"); else printf("Failure!\n");
	
    ok = 1;
	printf("Testing ft_strncmp:\n");
	if (strncmp("abc", "abc", 2) != ft_strncmp("abc", "abc", 2)) printf("abc abc\n"), ok = 0;
	if (strncmp("", "abc", 1) != ft_strncmp("", "abc", 1)) printf("null abc 1\n"), ok = 0;
	if (strncmp("", "abc", 0) != ft_strncmp("", "abc", 0)) printf("null abc 0\n"), ok = 0;
	if (strncmp("", "abc", 3) != ft_strncmp("", "abc", 3)) printf("null abc 3\n"), ok = 0;
	if (strncmp("", "abc", 4) != ft_strncmp("", "abc", 4)) printf("null abc 4\n"), ok = 0;
	if (strncmp("asdf", "", 1) != ft_strncmp("asdf", "", 1)) printf("asdf null\n"), ok = 0;
	if (ok == 1) printf("Succes!\n"); else printf("Failure!\n");
	
    ok = 1;
	str[0] = '\0';
	str2[0] = '\0';
	printf("Testing ft_strncpy:\n");
	strncpy(str, "abcd", 3);
	ft_strncpy(str2, "abcd",  3);
	if (strcmp(str, str2) != 0) printf("abcd\n"), ok = 0;
	str[0] = 'a';
	str2[0] = 'a';
	strncpy(str, "abcd", 0);
	ft_strncpy(str2, "abcd",  0);
	if (strcmp(str, str2) != 0) printf("abcd\n"), ok = 0;
	if (ok == 1) printf("Succes!\n"); else printf("Failure!\n");
	
    ok = 1;
	printf("Testing ft_strnstr:\n");
    test_strnstr("abc", "abc", 2);
    test_strnstr("", "abc", 1);
    test_strnstr("", "abc", 0);
    test_strnstr("", "abc", 3);
    test_strnstr("", "abc", 4);
    test_strnstr("asdf", "", 1);
    test_strnstr("asdf", "", 0);
    test_strnstr("", "", 1);
    test_strnstr("", "", 0);
	if (ok == 1) printf("Succes!\n"); else printf("Failure!\n");
	
    ok = 1;
	printf("Testing ft_strrchr:\n");
	printf("%s\n", strrchr("abc", 'b'));
	printf("%s\n", ft_strrchr("abc", 'b'));
	printf("%s\n", strrchr("abc", '\0'));
	printf("%s\n", ft_strrchr("abc", '\0'));
	ok = 1;
	printf("Testing ft_strstr:\n");
	if (strstr("abc", "abc") != ft_strstr("abc", "abc")) printf("abc abc\n"), ok = 0;
	if (strstr("", "abc") != ft_strstr("", "abc")) printf("null abc\n"), ok = 0;
	if (strstr("asdf", "") != ft_strstr("asdf", "")) printf("asdf null\n"), ok = 0;
	if (strstr("asdf", "") != ft_strstr("asdf", "")) printf("asdf null\n"), ok = 0;
	if (strstr("", "") != ft_strstr("", "")) printf("asdf null\n"), ok = 0;
	if (strstr("", "") != ft_strstr("", "")) printf("asdf null\n"), ok = 0;
	if (ok == 1) printf("Succes!\n"); else printf("Failure!\n");
	ok = 1;
	printf("Testing ft_tolower:\n");
	for (int i = -50; i < 500; i++)
		if (tolower(i) != ft_tolower(i)) printf("%d\n", i), ok = 0;
	if (ok == 1) printf("Succes!\n"); else printf("Failure!\n");
	ok = 1;
	printf("Testing ft_toupper:\n");
	for (int i = -50; i < 500; i++)
		if (toupper(i) != ft_toupper(i)) printf("%d\n", i), ok = 0;
	if (ok == 1) printf("Succes!\n"); else printf("Failure!\n");
	return (0);
}
