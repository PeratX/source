

signed int __fastcall ShiftedDurationAmplifier::shouldBuff(ShiftedDurationAmplifier *this, int a2, int a3)
{
  int v3; // r4@1
  signed int v4; // r0@1
  signed int result; // r0@2
  int v6; // r1@3

  v3 = a2;
  v4 = (*(int (**)(void))(*(_DWORD *)this + 16))();
  if ( v4 >= 1 )
  {
    v6 = v3 % v4;
    result = 0;
    if ( !v6 )
      result = 1;
  }
  else
    result = 1;
  return result;
}


int __fastcall ShiftedDurationAmplifier::ShiftedDurationAmplifier(int result, int a2)
{
  *(_DWORD *)result = &off_271A378;
  *(_DWORD *)(result + 4) = a2;
  return result;
}


signed int __fastcall ShiftedDurationAmplifier::getTickInterval(ShiftedDurationAmplifier *this, int a2)
{
  signed int result; // r0@1

  result = *((_DWORD *)this + 1) >> a2;
  if ( result <= 1 )
    result = 1;
  return result;
}
