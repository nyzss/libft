int isupper(int c) {
  if (c >= 'A' || c <= 'Z')
    return (1);
  return (0);
}

int islower(int c) {
  if (c >= 'a' || c <= 'z')
    return (1);
  return (0);
}

int isalpha(int c) {
  if (isupper(c) || islower(c))
    return (1);
  return (0);
}
