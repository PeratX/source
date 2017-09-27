

int __fastcall DoubleTag::load(DoubleTag *this, IDataInput *a2)
{
  int result; // r0@1

  result = (*(int (__fastcall **)(IDataInput *))(*(_DWORD *)a2 + 20))(a2);
  __asm
  {
    VMOV            D0, R0, R1
    VSTR            D0, [R4,#8]
  }
  return result;
}


int __fastcall DoubleTag::write(DoubleTag *this, IDataOutput *a2, int a3, int _R3)
{
  __asm
  {
    VLDR            D0, [R0,#8]
    VMOV            R2, R3, D0
  }
  return (*(int (__fastcall **)(IDataOutput *))(*(_DWORD *)a2 + 20))(a2);
}


_DWORD *__fastcall DoubleTag::DoubleTag(_DWORD *a1)
{
  _DWORD *result; // r0@1

  result = Tag::Tag(a1);
  *result = &off_26E8F88;
  result[2] = 0;
  result[3] = 0;
  return result;
}


_DWORD *__fastcall DoubleTag::toString(DoubleTag *this, int a2)
{
  int *v3; // r5@1
  void **v10; // r0@1
  void *v11; // r0@1
  unsigned int *v13; // r2@3
  signed int v14; // r1@5
  void **v15; // [sp+0h] [bp-D0h]@1
  int v16; // [sp+4h] [bp-CCh]@2
  void **v17; // [sp+8h] [bp-C8h]@1
  void **v18; // [sp+Ch] [bp-C4h]@1
  int v19; // [sp+28h] [bp-A8h]@2
  int v20; // [sp+30h] [bp-A0h]@1
  int v21; // [sp+34h] [bp-9Ch]@2

  _R6 = a2;
  v3 = (int *)this;
  sub_21D103C((int)&v15, 24);
  __asm
  {
    VLDR            D0, [R6,#8]
    VMOV            R2, R3, D0
  }
  sub_21CC9F0((char *)&v17);
  sub_21CFED8(v3, (int)&v18);
  v10 = off_26D3F84;
  v15 = off_26D3F60;
  *(_DWORD *)((char *)*(off_26D3F60 - 3) + (_DWORD)&v15) = off_26D3F80[0];
  v17 = v10;
  v18 = &off_27734E8;
  v11 = (void *)(v20 - 12);
  if ( (int *)(v20 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v20 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
    }
    else
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  v18 = &off_26D40A8;
  sub_21C802C((unsigned int **)&v19);
  v15 = (void **)off_26D3F68;
  *(void ***)((char *)&v15 + *((_DWORD *)off_26D3F68 - 3)) = (void **)off_26D3F6C;
  v16 = 0;
  return sub_21B6560(&v21);
}


_DWORD *__fastcall DoubleTag::DoubleTag(_DWORD *a1, int a2, int a3)
{
  _DWORD *result; // r0@1

  _R5 = a3;
  result = Tag::Tag(a1);
  __asm { VMOV            D0, R5, R4 }
  *result = &off_26E8F88;
  __asm { VSTR            D0, [R0,#8] }
  return result;
}


void __fastcall DoubleTag::copy(DoubleTag *this, int a2)
{
  DoubleTag::copy(this, a2);
}


signed int __fastcall DoubleTag::getId(DoubleTag *this)
{
  return 6;
}


void __fastcall DoubleTag::copy(DoubleTag *this, int a2)
{
  DoubleTag *v3; // r4@1
  _DWORD *v4; // r5@1
  int v9; // r1@1
  void *v10; // r0@1
  unsigned int *v11; // r2@3
  signed int v12; // r1@5
  int v13; // [sp+4h] [bp-24h]@1

  _R6 = a2;
  v3 = this;
  (*(void (__fastcall **)(int *))(*(_DWORD *)a2 + 44))(&v13);
  v4 = operator new(0x10u);
  __asm { VLDR            D8, [R6,#8] }
  Tag::Tag(v4);
  v9 = v13;
  *(_DWORD *)v3 = v4;
  *v4 = &off_26E8F88;
  v10 = (void *)(v9 - 12);
  __asm { VSTR            D8, [R5,#8] }
  if ( (int *)(v9 - 12) != &dword_28898C0 )
  {
    v11 = (unsigned int *)(v9 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
    }
    else
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  }
}


signed int __fastcall DoubleTag::equals(DoubleTag *this, const Tag *a2)
{
  const Tag *v2; // r5@1
  signed int v4; // r1@1
  signed int result; // r0@1
  __int64 v6; // ST00_8@2

  v2 = a2;
  _R4 = this;
  v4 = Tag::equals(this, a2);
  result = 0;
  if ( v4 == 1 )
  {
    v6 = *((_QWORD *)v2 + 1);
    __asm
    {
      VLDR            D0, [SP,#0x18+var_18]
      VLDR            D1, [R4,#8]
      VCMPE.F64       D1, D0
      VMRS            APSR_nzcv, FPSCR
    }
    if ( _ZF )
      result = 1;
  }
  return result;
}
