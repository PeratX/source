

int *__fastcall MapDecoration::MapDecoration(int *a1, char a2, char a3, char a4, char a5, int *a6, int a7)
{
  char v7; // r6@1
  char v8; // r4@1
  char v9; // r5@1
  int *result; // r0@1
  int *v11; // r12@1
  int v12; // r3@1
  int v13; // r6@1
  int v14; // r1@1

  v7 = a2;
  v8 = a4;
  v9 = a3;
  result = sub_21E8AF4(a1, a6);
  v11 = result + 2;
  *((_BYTE *)result + 4) = v7;
  *((_BYTE *)result + 5) = v9;
  *((_BYTE *)result + 6) = v8;
  *((_BYTE *)result + 7) = a5;
  v12 = *(_DWORD *)(a7 + 4);
  v13 = *(_DWORD *)(a7 + 8);
  v14 = *(_DWORD *)(a7 + 12);
  *v11 = *(_DWORD *)a7;
  v11[1] = v12;
  v11[2] = v13;
  result[5] = v14;
  return result;
}


char *__fastcall MapDecoration::getColor(MapDecoration *this)
{
  return (char *)this + 8;
}


void __fastcall MapDecoration::save(MapDecoration *this, CompoundTag *a2)
{
  MapDecoration::save(this, a2);
}


int __fastcall MapDecoration::setColor(int result, const Color *a2)
{
  int v2; // r2@1
  int v3; // r3@1
  int v4; // r12@1
  int v5; // r1@1

  v2 = *(_DWORD *)a2;
  v3 = *((_DWORD *)a2 + 1);
  v4 = *((_DWORD *)a2 + 2);
  v5 = *((_DWORD *)a2 + 3);
  *(_DWORD *)(result + 8) = v2;
  *(_DWORD *)(result + 12) = v3;
  *(_DWORD *)(result + 16) = v4;
  *(_DWORD *)(result + 20) = v5;
  return result;
}


int __fastcall MapDecoration::hashCode(MapDecoration *this)
{
  signed int v1; // r0@1
  int v2; // off@1

  v1 = *((_DWORD *)this + 1);
  v2 = __ROR4__(v1, 8);
  return 31 * (31 * (31 * (char)v1 + v2) + (v1 << 8 >> 24)) + (v1 >> 24);
}


int __fastcall MapDecoration::setY(int result, signed __int8 a2)
{
  *(_BYTE *)(result + 6) = a2;
  return result;
}


int __fastcall MapDecoration::setRot(int result, signed __int8 a2)
{
  *(_BYTE *)(result + 7) = a2;
  return result;
}


void __fastcall MapDecoration::load(MapDecoration *this, const CompoundTag *a2)
{
  const CompoundTag *v2; // r5@1
  MapDecoration *v3; // r6@1
  void *v4; // r0@1
  void *v5; // r0@2
  void *v6; // r0@3
  void *v7; // r0@4
  unsigned int *v8; // r2@6
  signed int v9; // r1@8
  unsigned int *v10; // r2@10
  signed int v11; // r1@12
  unsigned int *v12; // r2@14
  signed int v13; // r1@16
  unsigned int *v14; // r2@18
  signed int v15; // r1@20
  int v16; // [sp+8h] [bp-30h]@4
  int v17; // [sp+10h] [bp-28h]@3
  int v18; // [sp+18h] [bp-20h]@2
  int v19; // [sp+20h] [bp-18h]@1

  v2 = a2;
  v3 = this;
  sub_21E94B4((void **)&v19, "type");
  *((_BYTE *)v3 + 4) = j_CompoundTag::getInt((int)v2, (const void **)&v19);
  v4 = (void *)(v19 - 12);
  if ( (int *)(v19 - 12) != &dword_28898C0 )
  {
    v8 = (unsigned int *)(v19 - 4);
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
      j_j_j_j__ZdlPv_9(v4);
  }
  sub_21E94B4((void **)&v18, "x");
  *((_BYTE *)v3 + 5) = j_CompoundTag::getInt((int)v2, (const void **)&v18);
  v5 = (void *)(v18 - 12);
  if ( (int *)(v18 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v18 - 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  sub_21E94B4((void **)&v17, "y");
  *((_BYTE *)v3 + 6) = j_CompoundTag::getInt((int)v2, (const void **)&v17);
  v6 = (void *)(v17 - 12);
  if ( (int *)(v17 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v17 - 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  sub_21E94B4((void **)&v16, "rot");
  *((_BYTE *)v3 + 7) = j_CompoundTag::getInt((int)v2, (const void **)&v16);
  v7 = (void *)(v16 - 12);
  if ( (int *)(v16 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v16 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
}


unsigned int __fastcall MapDecoration::isRenderedOnFrame(MapDecoration *this)
{
  unsigned int v1; // r0@1
  unsigned int result; // r0@2

  v1 = (unsigned __int8)(*((_BYTE *)this + 4) - 1);
  if ( v1 <= 0xE )
    result = (0x6001u >> v1) & 1;
  else
    result = 0;
  return result;
}


int __fastcall MapDecoration::MapDecoration(int result)
{
  __int64 v1; // kr00_8@1
  int v2; // r2@1

  *(_DWORD *)result = &unk_28898CC;
  v1 = *(_QWORD *)&qword_283E614;
  v2 = unk_283E61C;
  *(_DWORD *)(result + 8) = Color::WHITE;
  *(_QWORD *)(result + 12) = v1;
  *(_DWORD *)(result + 20) = v2;
  return result;
}


void __fastcall MapDecoration::load(MapDecoration *this, const CompoundTag *a2)
{
  MapDecoration::load(this, a2);
}


int __fastcall MapDecoration::setX(int result, signed __int8 a2)
{
  *(_BYTE *)(result + 5) = a2;
  return result;
}


int __fastcall MapDecoration::setImg(int result, char a2)
{
  *(_BYTE *)(result + 4) = a2;
  return result;
}


void __fastcall MapDecoration::save(MapDecoration *this, CompoundTag *a2)
{
  CompoundTag *v2; // r6@1
  MapDecoration *v3; // r5@1
  void *v4; // r0@1
  void *v5; // r0@2
  void *v6; // r0@3
  void *v7; // r0@4
  unsigned int *v8; // r2@6
  signed int v9; // r1@8
  unsigned int *v10; // r2@10
  signed int v11; // r1@12
  unsigned int *v12; // r2@14
  signed int v13; // r1@16
  unsigned int *v14; // r2@18
  signed int v15; // r1@20
  int v16; // [sp+8h] [bp-30h]@4
  int v17; // [sp+10h] [bp-28h]@3
  int v18; // [sp+18h] [bp-20h]@2
  int v19; // [sp+20h] [bp-18h]@1

  v2 = a2;
  v3 = this;
  sub_21E94B4((void **)&v19, "type");
  j_CompoundTag::putInt((int)v2, (const void **)&v19, *((_BYTE *)v3 + 4));
  v4 = (void *)(v19 - 12);
  if ( (int *)(v19 - 12) != &dword_28898C0 )
  {
    v8 = (unsigned int *)(v19 - 4);
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
      j_j_j_j__ZdlPv_9(v4);
  }
  sub_21E94B4((void **)&v18, "x");
  j_CompoundTag::putInt((int)v2, (const void **)&v18, *((_BYTE *)v3 + 5));
  v5 = (void *)(v18 - 12);
  if ( (int *)(v18 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v18 - 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  sub_21E94B4((void **)&v17, "y");
  j_CompoundTag::putInt((int)v2, (const void **)&v17, *((_BYTE *)v3 + 6));
  v6 = (void *)(v17 - 12);
  if ( (int *)(v17 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v17 - 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  sub_21E94B4((void **)&v16, "rot");
  j_CompoundTag::putInt((int)v2, (const void **)&v16, *((_BYTE *)v3 + 7));
  v7 = (void *)(v16 - 12);
  if ( (int *)(v16 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v16 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
}


int __fastcall MapDecoration::equals(MapDecoration *this, const MapDecoration *a2)
{
  unsigned int v2; // r1@1
  unsigned int v3; // r0@1
  int result; // r0@2
  signed int v5; // r2@3
  signed int v6; // r3@5
  signed int v7; // r4@5
  int v8; // r2@7

  v2 = *((_DWORD *)a2 + 1);
  v3 = *((_DWORD *)this + 1);
  if ( (unsigned __int8)v3 == (unsigned __int8)v2 )
  {
    v5 = 0;
    if ( v3 >> 24 == v2 >> 24 )
      v5 = 1;
    v6 = 0;
    v7 = 0;
    if ( (v3 & 0xFF00) >> 8 == (v2 & 0xFF00) >> 8 )
      v6 = 1;
    v8 = v5 & v6;
    if ( ((v3 >> 16) & 0xFF) == ((v2 >> 16) & 0xFF) )
      v7 = 1;
    result = v8 & v7;
  }
  else
    result = 0;
  return result;
}
