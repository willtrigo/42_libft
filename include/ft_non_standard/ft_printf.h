/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 03:42:43 by dande-je          #+#    #+#             */
/*   Updated: 2024/06/04 03:58:05 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

# define NULL_PTR "(nil)"
# define NULL_STR "(null)"
# define HEX_LW "0123456789abcdef"
# define HEX_UP "0123456789ABCDEF"
# define SPEC "cspdiuxX%"
# define SPEC_PARSE "cspdiuxX"

enum e_element_size
{
	SPEC_SIZE = 10,
	COMB_SIZE = 8,
};

enum e_default_chk
{
	CHK_HEX_PTR = 1,
	CHK_HEX_LW = 2,
	CHK_HEX_UP = 3,
	CHK_INT_D_I = 1,
	CHK_INT_U = 2,
};

enum e_default_printf
{
	FLAG_ZERO = -2,
	JUMP = 1,
};

typedef unsigned int					t_ui;
typedef unsigned long int				t_uli;
typedef unsigned long long int			t_ulli;
typedef long long int					t_lli;

typedef struct s_line_chr				t_line_chr;
struct s_line_chr
{
	char		chr;
	t_line_chr	*next;
};

typedef struct s_line					t_line;
struct s_line
{
	t_line_chr		*str;
	ssize_t			len;
	t_lli			minus;
	t_lli			plus;
	t_lli			hash;
	t_lli			space;
	t_lli			zero;
	t_lli			width;
	t_lli			prec;
};

typedef void							(*t_cast_function)(va_list,
											t_line *, t_line *, int);

typedef struct s_parse_spec				t_parse_spec;
struct s_parse_spec
{
	char			chr;
	t_cast_function	cast_fn;
	int				spec;
};

typedef struct s_parse_spec_struct		t_parse_spec_struct;
struct s_parse_spec_struct
{
	t_parse_spec	spec[SPEC_SIZE];
};

typedef struct s_hex_status				t_hex_status;
struct s_hex_status
{
	int				len;
	int				active;
};

typedef void							(*t_comb_function)(t_line *, t_line *);

typedef struct s_parse_comb				t_parse_comb;
struct s_parse_comb
{
	char			chr;
	t_comb_function	comb_fn;
	int				check;
};

typedef struct s_parse_comb_struct		t_parse_comb_struct;
struct s_parse_comb_struct
{
	t_parse_comb	comb[COMB_SIZE];
};

typedef struct s_combination_history	t_combination_history;
struct s_combination_history
{
	t_lli			prec;
	t_lli			width;
	t_lli			minus;
	t_lli			len;
};

int			ft_printf(const char *format, ...);
void		ft_get_spec(t_line *format, va_list ap, t_line *line);
int			ft_check_spec(t_line *format, int i);
void		ft_parse_combination(t_line *format, t_line *line);
int			ft_parse_nbr(t_line *format, int nbr);
t_lli		ft_get_nbr_len(t_lli nbr);
void		ft_combination_add(t_line *line, char chr, int size);
void		ft_math_apply(t_line *line, t_lli prec,
				t_lli width, t_lli minus);
void		ft_parse_hash(t_line *format, t_line *line);
void		ft_parse_plus(t_line *format, t_line *line);
void		ft_parse_space(t_line *format, t_line *line);
void		ft_parse_minus(t_line *format, t_line *line);
void		ft_parse_width(t_line *format, t_line *line);
void		ft_parse_zero(t_line *format, t_line *line);
void		ft_parse_precision(t_line *format, t_line *line);
void		ft_cast_chr(va_list ap, t_line *line, t_line *format, int spec);
void		ft_combination_head_chr(t_line *line);
void		ft_combination_tail_chr(t_line *line);
void		ft_cast_str(va_list ap, t_line *line, t_line *format, int spec);
void		ft_combination_str_math(t_line *line, char *str, int str_len);
void		ft_combination_str_null(t_line *line,
				t_combination_history *hist);
void		ft_combination_head_str(t_line *line);
void		ft_combination_tail_str(t_line *line);
void		ft_cast_hex_ptr(va_list ap, t_line *line, t_line *format, int spec);
void		ft_cast_hex_lw_up(va_list ap, t_line *line, t_line *format,
				int spec);
void		ft_combination_hex_math_null(t_line *line);
void		ft_combination_hex_math(t_line *line, t_hex_status *hex_status);
void		ft_combination_head_hex(t_line *line);
void		ft_combination_tail_hex(t_line *line);
void		ft_cast_int(va_list ap, t_line *line, t_line *format, int spec);
void		ft_combination_int_math(t_line *line, t_lli nbr_len);
void		ft_int_math_zero(t_line *line, t_lli nbr,
				t_combination_history *hist);
void		ft_int_math_width(t_line *line, t_lli nbr,
				t_combination_history *hist);
void		ft_int_math_minus(t_line *line, t_lli nbr,
				t_combination_history *hist);
void		ft_combination_head_int(t_line *line, t_lli nbr);
void		ft_combination_tail_int(t_line *line);
void		ft_cast_per(va_list ap, t_line *line, t_line *format, int spec);
int			ft_parse_nbr(t_line *format, int nbr);
t_lli		ft_get_nbr_len(t_lli nbr);
void		ft_str_add(char *str, t_line *line);
int			ft_str_len(const char *str);
void		ft_format_jump(t_line *format);
t_line		ft_line_init(void);
void		ft_chr_add(t_line_chr **line_chr,
				t_line_chr *chr_new);
t_line_chr	*ft_chr_new(char chr);
void		ft_print_line(t_line *line);

#endif
