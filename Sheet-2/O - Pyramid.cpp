/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   O - Pyramid.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mo7ammedd <medo.mostafa22255@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 18:00:03 by Mo7ammedd         #+#    #+#             */
/*   Updated: 2024/02/09 18:00:04 by Mo7ammedd        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

  #include<bits/stdc++.h>
using namespace std;
int
main ()
{
  int n, i, j;
  cin >> n;
  for (i = 0; i < n; i++)
    {
      for (j = 0; j <= i; j++)
	cout << "*";
      cout << "\n";
    }
}
