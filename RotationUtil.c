

unsigned int __fastcall RotationUtil::getRotated(RotationUtil *this, int a2, Rotation a3)
{
  return 90 * ((signed int)this + a2) % 0x168u / 0x5A;
}


Facing *__fastcall RotationUtil::rotate(RotationUtil *this, int a2, signed __int8 a3)
{
  if ( (unsigned int)(a2 - 2) <= 3 )
  {
    if ( this == (RotationUtil *)1 )
      return (Facing *)Facing::getClockWise((Facing *)a2, a2);
    if ( this == (RotationUtil *)3 )
      return (Facing *)Facing::getCounterClockWise((Facing *)a2, a2);
    if ( this == (RotationUtil *)2 )
      return j_Facing::getOpposite((Facing *)a2, a2);
  }
  return (Facing *)a2;
}


int __fastcall RotationUtil::rotate(int result, const BlockPos *a2, int a3)
{
  int v3; // r1@4
  __int64 v4; // r2@4
  __int64 v5; // r2@7
  int v6; // r1@7

  if ( a3 == 1 )
  {
    v4 = *(_QWORD *)a2;
    v3 = -*((_DWORD *)a2 + 2);
    goto LABEL_6;
  }
  if ( a3 == 2 )
    v5 = *(_QWORD *)a2;
    v6 = *((_DWORD *)a2 + 2);
    LODWORD(v5) = -(signed int)v5;
    *(_QWORD *)result = v5;
    *(_DWORD *)(result + 8) = -v6;
  else
    if ( a3 == 3 )
    {
      v4 = *(_QWORD *)a2;
      v3 = *((_DWORD *)a2 + 2);
      LODWORD(v4) = -(signed int)v4;
LABEL_6:
      *(_DWORD *)result = v3;
      *(_DWORD *)(result + 4) = HIDWORD(v4);
      *(_DWORD *)(result + 8) = v4;
      return result;
    }
    *(_DWORD *)result = *(_DWORD *)a2;
    *(_DWORD *)(result + 4) = *((_DWORD *)a2 + 1);
    *(_DWORD *)(result + 8) = *((_DWORD *)a2 + 2);
  return result;
}
