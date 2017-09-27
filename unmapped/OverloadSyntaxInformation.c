

int *__fastcall OverloadSyntaxInformation::OverloadSyntaxInformation(int *a1, int *a2, int a3, int a4)
{
  int v4; // r4@1
  int v5; // r5@1
  int *result; // r0@1

  v4 = a4;
  v5 = a3;
  result = sub_21E8AF4(a1, a2);
  result[1] = v5;
  result[2] = v4;
  return result;
}
