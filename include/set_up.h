/*
** EPITECH PROJECT, 2023
** setting up header
** File description:
** setting up header
*/

#ifndef SET_UP_H_
    #define SET_UP_H_

/*
Changes: (delete when pushing)
- added the new functions
- separated with commentary
*/

// ------------- MAP IN FILE FUNCTIONS -------------
void setting_up(char const *filepath);

char *read_map(const char *filepath);

void print_map_largest_square(char **map, int nb_rows, int nb_cols);

int **mem_alloc_2d_array(char const *buffer);

char **mem_alloc_2d_map(char const *buffer);

int get_nbr_rows(char const *buffer);

int get_nbr_cols(char const *buffer);

int map_start_index(char const *buffer);

int **load_array(int **arr, char *buffer);

char **load_map(char **map, char *buffer);

int error_handling(char **argv);

// ------------- GENERATING MAP FUNCTIONS -------------
void generating_up(char *size, char *pattern);

char *gen_map(int size, char *pattern);

int **gen_mem_alloc_2d_array(char *size);

char **gen_mem_alloc_2d_map(char *size);

int **gen_load_array(int **arr, char *buffer, char *size_str);

char **gen_load_map(char **map, char *buffer, char *size_str);

int gen_error_handling(char **argv);

// ------------- GLOBAL FUNCTIONS -------------
int get_value_from_char(char c);

int **maximum_sub_square_matrix(int **arr, int nb_rows, int nb_cols);

char **largest_square_map(char **map, int **arr, int nb_rows, int nb_cols);

void free_2d_arrays(int **arr, char **map, int nb_rows);

#endif /* SET_UP_H_ */
