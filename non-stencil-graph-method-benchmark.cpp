//UNIQUE_KERNEL
for (int i = 1; i < N; i++) {
  for (int j = 1; j < N; j++) {
    A[2*i+4*j][j+1] = A[i+2*j][i+4]
  }
}
//SYNTHETIC
for (int i = 1; i < N; i++) {
  for (int j = 1; j < N; j++) {
    A[i][j] = A[i][2*j] + A[3*i][4*j] + A[5*i][6*j]
  }
}
//PLUTO_TEMPLATE
for (int i = 1; i < N; i++) {
  for (int j = 1; j < N; j++) {
    A[i][j] = A[j][i] + A[i][j-1]
  }
}
//DIST_ITR
for (int i = 1; i < N; i++) {
  A[2*i] = A[i] + 0.5f;
}
//DIST_ITR_PARAM
for (int j = 0; j < 2; j++) {
  for (int i = 0; i < N; i++) {
    A[2*i+3][j] = A[i][j] + 0.5f;
  }
}