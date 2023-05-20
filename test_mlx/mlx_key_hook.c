/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_key_hook.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforouz <arforouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 17:36:56 by arforouz          #+#    #+#             */
/*   Updated: 2023/05/09 17:37:34 by arforouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mlx.h"
#include <stdio.h>

int my_key_hook(int keycode, void *param)
{
    printf("Key pressed: %d\n", keycode);
    return (0);
}

int main()
{
    void *mlx_ptr;
    void *win_ptr;
    
    mlx_ptr = mlx_init();
    win_ptr = mlx_new_window(mlx_ptr, 500, 500, "My Window");
    mlx_key_hook(win_ptr, my_key_hook, NULL);
    mlx_loop(mlx_ptr);
    
    return (0);
}
