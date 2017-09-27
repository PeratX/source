

mce::Mesh *__fastcall ObjModel::buildMesh(ObjModel *this, Tessellator *a2, float a3, int a4)
{
  Tessellator *v4; // r8@1
  Tessellator *v5; // r9@1
  Tessellator *v6; // r11@1
  __int64 v8; // r0@1
  signed int v13; // r10@2
  int v14; // r1@2 OVERLAPPED
  int v15; // r2@2
  int v16; // r5@3
  signed int v17; // r7@3
  signed int i; // r4@3
  int v24; // r4@7
  signed int v25; // r5@7
  signed int v26; // r7@7
  __int64 v32; // r0@10
  unsigned int v33; // r4@10
  signed int v34; // r5@12
  int v35; // r7@12
  signed int v36; // r4@12
  float v38; // [sp+0h] [bp-40h]@0
  float v39; // [sp+4h] [bp-3Ch]@0

  v4 = a2;
  v5 = this;
  v6 = (Tessellator *)LODWORD(a3);
  _R7 = a4;
  Tessellator::begin(
    SLODWORD(a3),
    2,
    (signed int)((*(_QWORD *)((char *)a2 + 4) >> 32) - *(_QWORD *)((char *)a2 + 4)) >> 2,
    0);
  v8 = *(_QWORD *)((char *)v4 + 4);
  HIDWORD(v8) = (HIDWORD(v8) - (signed int)v8) >> 2;
  if ( HIDWORD(v8) >= 3 )
  {
    __asm { VMOV            S16, R7 }
    v13 = HIDWORD(v8) / 3;
    *(_QWORD *)&v14 = *((_QWORD *)v4 + 5);
    if ( v14 == v15 )
    {
      __asm { VMOV.F32        S18, #1.0 }
      v24 = 0;
      v25 = 4;
      v26 = 4;
      while ( 1 )
      {
        _R0 = v8 + v25;
        __asm
        {
          VLDR            S0, [R0,#-4]
          VLDR            S2, [R0]
          VLDR            S4, [R0,#4]
          VMUL.F32        S0, S0, S16
          VMUL.F32        S2, S2, S16
          VMUL.F32        S4, S4, S16
        }
        _R0 = *((_DWORD *)v4 + 7) + v26;
          VMOV            R1, S0
          VMOV            R2, S2
          VMOV            R3, S4
          VSUB.F32        S2, S18, S2
          VSTR            S0, [SP,#0x40+var_40]
          VSTR            S2, [SP,#0x40+var_3C]
        Tessellator::vertexUV(v6, _R1, _R2, _R3, v38, v39);
        if ( ++v24 >= v13 )
          break;
        v25 += 12;
        v26 += 8;
        LODWORD(v8) = *((_DWORD *)v4 + 1);
      }
    }
    else
      v16 = 0;
      v17 = 4;
      for ( i = 4; ; i += 8 )
        Tessellator::colorABGR(v6, *(_DWORD *)(v14 + 4 * v16));
        _R0 = *((_DWORD *)v4 + 1) + v17;
        _R0 = *((_DWORD *)v4 + 7) + i;
        if ( ++v16 >= v13 )
        v17 += 12;
        v14 = *((_DWORD *)v4 + 10);
  }
  Tessellator::beginIndices(v6, 0);
  v32 = *(_QWORD *)((char *)v4 + 52);
  v33 = (HIDWORD(v32) - (signed int)v32) >> 2;
  if ( v33 >= 3 )
    Tessellator::triangle(v6, *(_DWORD *)v32, *(_DWORD *)(v32 + 4), *(_DWORD *)(v32 + 8));
    if ( v33 > 5 )
      v34 = 1;
      v35 = 0;
      v36 = v33 / 3;
      do
        Tessellator::triangle(
          v6,
          *(_DWORD *)(*((_DWORD *)v4 + 13) + v35 + 12),
          *(_DWORD *)(*((_DWORD *)v4 + 13) + v35 + 16),
          *(_DWORD *)(*((_DWORD *)v4 + 13) + v35 + 20));
        ++v34;
        v35 += 12;
      while ( v34 < v36 );
  return Tessellator::end(v5, (const char *)v6, 0, 0);
}


int __fastcall ObjModel::clear(ObjModel *this)
{
  ObjModel *v1; // r4@1
  int result; // r0@1

  v1 = this;
  sub_119CA68((const void **)this, 0, *(_BYTE **)(*(_DWORD *)this - 12), 0);
  *((_DWORD *)v1 + 2) = *((_DWORD *)v1 + 1);
  *((_DWORD *)v1 + 5) = *((_DWORD *)v1 + 4);
  *((_DWORD *)v1 + 8) = *((_DWORD *)v1 + 7);
  *((_DWORD *)v1 + 11) = *((_DWORD *)v1 + 10);
  result = *((_DWORD *)v1 + 13);
  *((_DWORD *)v1 + 14) = result;
  return result;
}
