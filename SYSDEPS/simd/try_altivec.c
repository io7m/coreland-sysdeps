int main()
{
  float f1;
  float f2;
  float f3;
  vector float v1;
  vector float v2;
  vector float v3;
  vector float tmp;
  vector unsigned char map;

  f1 = 10.0f;
  f2 = 20.0f;

  map = vec_lvsl(0, &f1);
  tmp = vec_lde(0, &f1);
  map = (vector unsigned char) vec_splat((vector float) map, 0);
  v1 = vec_perm(tmp, tmp, map);
 
  map = vec_lvsl(0, &f2);
  tmp = vec_lde(0, &f2);
  map = (vector unsigned char) vec_splat((vector float) map, 0);
  v2 = vec_perm(tmp, tmp, map);
  
  v3 = vec_add(v1, v2);
  f3 = ((float *) &v3)[0];

  printf("%f + %f = %f\n", f1, f2, f3);
  return 0;
}
