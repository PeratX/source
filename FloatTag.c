

void __fastcall FloatTag::copy(FloatTag *this, int a2)
{
  int v2; // r6@1
  FloatTag *v3; // r4@1
  _DWORD *v4; // r5@1
  int v5; // r6@1
  int v6; // r1@1
  void *v7; // r0@1
  unsigned int *v8; // r2@3
  signed int v9; // r1@5
  int v10; // [sp+4h] [bp-1Ch]@1

  v2 = a2;
  v3 = this;
  (*(void (__fastcall **)(int *))(*(_DWORD *)a2 + 44))(&v10);
  v4 = operator new(8u);
  v5 = *(_DWORD *)(v2 + 4);
  Tag::Tag(v4);
  *v4 = &off_26E8FC4;
  v4[1] = v5;
  v6 = v10;
  *(_DWORD *)v3 = v4;
  v7 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
  {
    v8 = (unsigned int *)(v6 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
    }
    else
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  }
}


_DWORD *__fastcall FloatTag::FloatTag(_DWORD *a1, int a2, int a3)
{
  int v3; // r4@1
  _DWORD *result; // r0@1

  v3 = a3;
  result = Tag::Tag(a1);
  *result = &off_26E8FC4;
  result[1] = v3;
  return result;
}


signed int __fastcall FloatTag::equals(FloatTag *this, const Tag *a2)
{
  signed int v4; // r1@1
  signed int result; // r0@1

  _R5 = a2;
  _R4 = this;
  v4 = Tag::equals(this, a2);
  result = 0;
  if ( v4 == 1 )
  {
    __asm
    {
      VLDR            S0, [R5,#4]
      VLDR            S2, [R4,#4]
      VCMPE.F32       S2, S0
      VMRS            APSR_nzcv, FPSCR
    }
    if ( _ZF )
      result = 1;
  }
  return result;
}


_DWORD *__fastcall FloatTag::FloatTag(_DWORD *a1)
{
  _DWORD *result; // r0@1

  result = Tag::Tag(a1);
  *(_QWORD *)result = (unsigned int)&off_26E8FC4;
  return result;
}


void __fastcall FloatTag::copy(FloatTag *this, int a2)
{
  FloatTag::copy(this, a2);
}


signed int __fastcall FloatTag::getId(FloatTag *this)
{
  return 5;
}


int __fastcall FloatTag::load(FloatTag *this, IDataInput *a2)
{
  FloatTag *v2; // r4@1
  int result; // r0@1

  v2 = this;
  result = (*(int (__fastcall **)(IDataInput *))(*(_DWORD *)a2 + 16))(a2);
  *((_DWORD *)v2 + 1) = result;
  return result;
}


_DWORD *__fastcall FloatTag::toString(FloatTag *this, int a2)
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
    VLDR            S0, [R6,#4]
    VCVT.F64.F32    D0, S0
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
