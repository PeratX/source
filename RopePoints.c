

void __fastcall RopePoints::getInterpolated(RopePoints *this, unsigned int a2, float a3, int _R3)
{
  RopePoints::getInterpolated(this, a2, a3, _R3);
}


int __fastcall RopePoints::freezeInterpolation(int result)
{
  int v1; // r2@2
  int v6; // r3@3
  int v7; // r4@3

  if ( *(_DWORD *)result )
  {
    v1 = 0;
    result = *(_DWORD *)(result + 4) + 12;
    do
    {
      __asm { VLDR            S0, [R0,#-0xC] }
      ++v1;
      __asm
      {
        VLDR            S6, [R0]
        VLDR            S2, [R0,#-8]
        VLDR            S8, [R0,#4]
        VADD.F32        S0, S0, S6
        VLDR            S4, [R0,#-4]
        VLDR            S10, [R0,#8]
        VADD.F32        S2, S2, S8
      }
      v6 = *(&Vec3::ZERO + 1);
      v7 = dword_2822498;
        VADD.F32        S4, S4, S10
        VSTR            S0, [R0,#-0xC]
        VSTR            S2, [R0,#-8]
        VSTR            S4, [R0,#-4]
      *(_DWORD *)result = Vec3::ZERO;
      *(_DWORD *)(result + 4) = v6;
      *(_DWORD *)(result + 8) = v7;
      result += 24;
    }
    while ( !_CF );
  }
  return result;
}


int __fastcall RopePoints::beginRope(int result)
{
  *(_DWORD *)result = 0;
  return result;
}


int __fastcall RopePoints::endRope(int result)
{
  int v1; // lr@1
  int v2; // r12@1
  unsigned int v3; // r3@1

  v1 = *(_DWORD *)result;
  v2 = *(_DWORD *)(result + 4);
  v3 = -1431655765 * ((*(_DWORD *)(result + 8) - v2) >> 3);
  if ( *(_DWORD *)result <= v3 )
  {
    if ( *(_DWORD *)result < v3 )
      *(_DWORD *)(result + 8) = v2 + 24 * v1;
  }
  else
    result = j_j_j__ZNSt6vectorI9RopePointSaIS0_EE17_M_default_appendEj(result + 4, v1 - v3);
  return result;
}


char *__fastcall RopePoints::reserve(RopePoints *this, unsigned int a2)
{
  RopePoints *v2; // r8@1
  unsigned int v3; // r11@1
  int v4; // r9@2
  char *result; // r0@2
  int v6; // r10@3
  char *v7; // r0@4
  int v8; // r12@6
  char *v9; // lr@7
  int v10; // r2@7
  char *v11; // r3@8
  int v12; // r0@8
  int v13; // r1@8
  int v14; // r4@8
  int v15; // r5@8
  int v16; // r6@8
  int v17; // r7@8
  int v18; // r6@9
  void *v19; // r0@9
  char *v20; // [sp+0h] [bp-28h]@6

  v2 = this;
  v3 = a2;
  if ( a2 >= 0xAAAAAAB )
    sub_21E5A04("vector::reserve");
  v4 = *((_DWORD *)this + 1);
  result = (char *)(-1431655765 * ((*((_DWORD *)this + 3) - v4) >> 3));
  if ( (unsigned int)result < a2 )
  {
    v6 = *((_DWORD *)v2 + 2);
    if ( a2 )
      v7 = (char *)j_operator new(24 * a2);
    else
      v7 = 0;
    v8 = (v6 - v4) >> 3;
    v20 = v7;
    if ( v4 != v6 )
    {
      v9 = v7;
      v10 = v4;
      do
      {
        v4 += 24;
        v11 = v9;
        v9 += 24;
        v12 = *(_DWORD *)v10;
        v13 = *(_DWORD *)(v10 + 4);
        v14 = *(_DWORD *)(v10 + 8);
        v15 = *(_DWORD *)(v10 + 12);
        v16 = *(_DWORD *)(v10 + 16);
        v17 = *(_DWORD *)(v10 + 20);
        v10 = v4;
        *(_DWORD *)v11 = v12;
        *((_DWORD *)v11 + 1) = v13;
        *((_DWORD *)v11 + 2) = v14;
        *((_DWORD *)v11 + 3) = v15;
        *((_DWORD *)v11 + 4) = v16;
        *((_DWORD *)v11 + 5) = v17;
      }
      while ( v6 != v4 );
    }
    v18 = -1431655765 * v8;
    v19 = (void *)*((_DWORD *)v2 + 1);
    if ( v19 )
      j_operator delete(v19);
    result = &v20[24 * v18];
    *((_DWORD *)v2 + 1) = v20;
    *((_DWORD *)v2 + 2) = result;
    *((_DWORD *)v2 + 3) = &v20[24 * v3];
  }
  return result;
}


int __fastcall RopePoints::size(RopePoints *this)
{
  return *(_DWORD *)this;
}


void __fastcall RopePoints::getInterpolated(RopePoints *this, unsigned int a2, float a3, int _R3)
{
  __asm { VMOV            S0, R3 }
  _R1 = *(_DWORD *)(a2 + 4) + 24 * LODWORD(a3);
  __asm
  {
    VLDR            S8, [R1,#0xC]
    VLDR            S10, [R1,#0x10]
    VLDR            S12, [R1,#0x14]
    VMUL.F32        S8, S8, S0
    VMUL.F32        S10, S10, S0
    VLDR            S2, [R1]
    VMUL.F32        S0, S12, S0
    VLDR            S4, [R1,#4]
    VLDR            S6, [R1,#8]
    VADD.F32        S2, S2, S8
    VADD.F32        S4, S4, S10
    VADD.F32        S0, S6, S0
    VSTR            S2, [R0]
    VSTR            S4, [R0,#4]
    VSTR            S0, [R0,#8]
  }
}


int __fastcall RopePoints::pushBack(RopePoints *this, const Vec3 *_R1)
{
  RopePoints *v2; // r8@1
  void *v3; // r0@1
  __int64 v4; // kr00_8@1
  int v5; // lr@1
  int result; // r0@3
  unsigned int v11; // r1@5
  unsigned int v12; // r10@7
  char *v13; // r9@13
  int v14; // r12@15
  char *v15; // r11@15
  _DWORD *v16; // r3@16
  char *v17; // r12@16
  int v18; // r2@16
  int v19; // r4@16
  int v20; // r5@16
  int v21; // r6@16
  int v22; // r7@16
  __int64 v23; // [sp+0h] [bp-40h]@2
  int v24; // [sp+8h] [bp-38h]@2
  __int64 v25; // [sp+Ch] [bp-34h]@2
  int v26; // [sp+14h] [bp-2Ch]@2

  v2 = this;
  v4 = *(_QWORD *)this;
  v3 = (void *)(*(_QWORD *)this >> 32);
  v5 = *((_DWORD *)v2 + 2);
  if ( (_DWORD)v4 == -1431655765 * ((v5 - (signed int)v3) >> 3) )
  {
    v24 = *((_DWORD *)_R1 + 2);
    v23 = *(_QWORD *)_R1;
    v25 = *(_QWORD *)&Vec3::ZERO;
    v26 = dword_2822498;
    if ( v5 == *((_DWORD *)v2 + 3) )
    {
      v11 = v4;
      if ( (void *)v5 == v3 )
        v11 = 1;
      v12 = v4 + v11;
      if ( (unsigned int)v4 + v11 > 0xAAAAAAA )
        v12 = 178956970;
      if ( (unsigned int)v4 + v11 < v11 )
      if ( v12 )
      {
        if ( v12 >= 0xAAAAAAB )
          sub_21E57F4();
        v13 = (char *)j_operator new(24 * v12);
        v5 = *(_QWORD *)((char *)v2 + 4) >> 32;
        v3 = (void *)*(_QWORD *)((char *)v2 + 4);
      }
      else
        v13 = 0;
      v14 = (int)&v13[v5 - (_DWORD)v3];
      v15 = v13;
      *(_QWORD *)v14 = v23;
      *(_DWORD *)(v14 + 8) = v24;
      *(_QWORD *)(v14 + 12) = v25;
      *(_DWORD *)(v14 + 20) = v26;
      if ( (void *)v5 != v3 )
        do
        {
          v16 = v3;
          v17 = v15;
          v3 = (char *)v3 + 24;
          v15 += 24;
          v18 = v16[1];
          v19 = v16[2];
          v20 = v16[3];
          v21 = v16[4];
          v22 = v16[5];
          *(_DWORD *)v17 = *v16;
          *((_DWORD *)v17 + 1) = v18;
          *((_DWORD *)v17 + 2) = v19;
          *((_DWORD *)v17 + 3) = v20;
          *((_DWORD *)v17 + 4) = v21;
          *((_DWORD *)v17 + 5) = v22;
        }
        while ( (void *)v5 != v3 );
        v3 = (void *)*((_DWORD *)v2 + 1);
      if ( v3 )
        j_operator delete(v3);
      *((_DWORD *)v2 + 1) = v13;
      *((_DWORD *)v2 + 2) = v15 + 24;
      result = (int)&v13[24 * v12];
      *((_DWORD *)v2 + 3) = result;
    }
    else
      *(_QWORD *)v5 = v23;
      *(_DWORD *)(v5 + 8) = v24;
      *(_QWORD *)(v5 + 12) = v25;
      *(_DWORD *)(v5 + 20) = v26;
      result = *((_DWORD *)v2 + 2) + 24;
      *((_DWORD *)v2 + 2) = result;
  }
  else
    *(_DWORD *)v2 = v4 + 1;
    result = (int)v3 + 24 * v4;
    __asm
      VLDR            S0, [R0]
      VLDR            S2, [R0,#0xC]
      VADD.F32        S0, S0, S2
      VSTR            S0, [R0]
      VLDR            S2, [R0,#4]
      VLDR            S4, [R0,#0x10]
      VADD.F32        S2, S2, S4
      VSTR            S2, [R0,#4]
      VLDR            S4, [R0,#8]
      VLDR            S6, [R0,#0x14]
      VADD.F32        S4, S4, S6
      VSTR            S4, [R0,#8]
      VLDR            S6, [R1]
      VLDR            S8, [R1,#4]
      VLDR            S10, [R1,#8]
      VSUB.F32        S0, S6, S0
      VSUB.F32        S2, S8, S2
      VSUB.F32        S4, S10, S4
      VSTR            S0, [R0,#0xC]
      VSTR            S2, [R0,#0x10]
      VSTR            S4, [R0,#0x14]
  return result;
}
