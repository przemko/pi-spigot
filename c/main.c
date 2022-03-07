#include <gmp.h>
#include <stdio.h>

mpz_t q, r, t, i;

unsigned long digit()
{
  mpz_t u;   mpz_init(u);
  mpz_t y;   mpz_init(y);
  mpz_t acc; mpz_init(acc);
  
  mpz_set_ui(acc, 3);		// acc = 3
  mpz_mul(acc, acc, i);		// acc = 3i
  mpz_add_ui(acc, acc, 1);	// acc = 3i+1
  mpz_set(u, acc);		// u = 3i+1
  mpz_add_ui(acc, acc, 1);	// acc = 3i+2
  mpz_mul(u, u, acc);		// u = (3i+1)(3i+2)
  mpz_mul_ui(u, u, 3);		// u = 3(3i+1)(3i+2)
  
  mpz_set_ui(acc, 27);		// acc = 27
  mpz_mul(acc, acc, i);		// acc = 27i
  mpz_sub_ui(acc, acc, 12);	// acc = 27i-12
  mpz_mul(acc, acc, q);		// acc = q(27i-12)
  mpz_mul_ui(y, r, 5);		// y = 5r
  mpz_add(y, y, acc);		// y = q(27i-12)+5r
  mpz_mul_ui(acc, t, 5);	// acc = 5t
  mpz_fdiv_q(y, y, acc);	// y = (q(27i-12)+5r)/(5t)
 
  unsigned long d = mpz_get_ui(y);

  mpz_t q2; mpz_init(q2);
  mpz_t r2; mpz_init(r2);

  mpz_set_ui(q2, 2);		// q2 = 2
  mpz_mul(q2, q2, i);		// q2 = 2i
  mpz_sub_ui(q2, q2, 1);	// q2 = 2i-1
  mpz_mul(q2, q2, i);		// q2 = i(2i-1)
  mpz_mul(q2, q2, q);		// q2 = qi(2i-1)
  mpz_mul_ui(q2, q2, 10);	// q2 = 10qi(2i-1)
  
  mpz_mul(acc, y, t);		// acc = yt
  mpz_set_ui(r2, 5);		// r2 = 5
  mpz_mul(r2, r2, i);		// r2 = 5i
  mpz_sub_ui(r2, r2, 2);	// r2 = 5i-2
  mpz_mul(r2, r2, q);		// r2 = q(5i-2)
  mpz_add(r2, r2, r);		// r2 = q(5i-2)+r
  mpz_sub(r2, r2, acc);		// r2 = q(5i-2)+r-yt
  mpz_mul(r2, r2, u);		// r2 = u(q(5i-2)+r-yt)
  mpz_mul_ui(r2, r2, 10);	// r2 = 10u(q(5i-2)+r-yt)
  
  mpz_mul(t, t, u);		// t = tu
  
  mpz_add_ui(i, i, 1);		// i = i+1
  
  mpz_set(q, q2); mpz_set(r, r2);

  mpz_clear(u);
  mpz_clear(y);
  mpz_clear(acc);
  mpz_clear(q2);
  mpz_clear(r2);

  return d;
}

int main(void)
{
  mpz_init(q); mpz_set_ui(q, 1);
  mpz_init(r); mpz_set_ui(r, 180);
  mpz_init(t); mpz_set_ui(t, 60);
  mpz_init(i); mpz_set_ui(i, 2);
  for(;;)
    printf("%ld", digit());
  return 0;
}

