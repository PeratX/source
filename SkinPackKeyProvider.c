

_DWORD *__fastcall SkinPackKeyProvider::SkinPackKeyProvider(_DWORD *result)
{
  *result = &off_26DAE80;
  return result;
}


void __fastcall SkinPackKeyProvider::getContentKey(SkinPackKeyProvider *this, const mce::UUID *a2)
{
  SkinPackKeyProvider::getContentKey(this, a2);
}


void __fastcall SkinPackKeyProvider::getContentKey(SkinPackKeyProvider *this, const mce::UUID *a2)
{
  unsigned int v2; // r0@1
  int v3; // r1@1
  signed int v4; // r2@1
  int v5; // r0@2
  int *v6; // r4@2
  int v7; // r5@2
  char *v8; // r11@3
  char v9; // r4@3
  unsigned int v10; // r7@3
  char *v11; // r9@3
  int v12; // r8@3
  unsigned int v13; // r10@5
  char *v14; // r6@6
  int v15; // r4@7
  unsigned int v16; // r0@8
  unsigned int v17; // r5@10
  int v18; // r0@20
  int v19; // r5@24
  int *v20; // r0@24
  char *v21; // r3@24
  _BYTE *v22; // r1@24
  char v23; // r7@25
  int v24; // r4@25
  SkinPackKeyProvider *v25; // [sp+4h] [bp-Ch]@1
  _BYTE *ptr; // [sp+8h] [bp-8h]@3
  int v27; // [sp+10h] [bp+0h]@1
  int v28; // [sp+14h] [bp+4h]@1
  int v29; // [sp+9D4h] [bp+9C4h]@1
  char v30; // [sp+9D8h] [bp+9C8h]@1
  int v31; // [sp+9DCh] [bp+9CCh]@1
  int v32; // [sp+9E0h] [bp+9D0h]@3

  v25 = this;
  v2 = 52;
  v27 = 52;
  v29 = 625;
  v3 = 0;
  v4 = 1;
  v30 = 0;
  v31 = 0;
  v28 = 52;
  do
  {
    v5 = v2 ^ (v2 >> 30);
    v6 = &v27 + v3;
    v7 = v3++ + 1812433253 * v5;
    v2 = v4++ + 1812433253 * v5;
    v6[2] = v7 + 1;
  }
  while ( v3 != 397 );
  v29 = 624;
  v32 = 398;
  ptr = operator new(0x20u);
  _aeabi_memcpy(ptr, (const char *)&unk_262C988, 32);
  v8 = 0;
  v9 = -119;
  v10 = 1;
  v11 = 0;
  v12 = 0;
  while ( 1 )
    v13 = (unsigned __int8)v9 ^ (Random::_genRandInt32((Random *)&v27) >> 1);
    if ( v11 == (char *)v12 )
    {
      v15 = v11 - v8;
      if ( v11 - v8 == -1 )
        sub_119C9C4("vector::_M_emplace_back_aux");
      v16 = v11 - v8;
      if ( v11 == v8 )
        v16 = 1;
      v17 = v16 + v15;
      if ( v16 + v15 < v16 )
        v17 = -1;
      if ( v17 )
        v14 = (char *)operator new(v17);
      else
        v14 = 0;
      v14[v15] = v13;
      if ( (char *)v12 != v8 )
        _aeabi_memmove(v14, v8);
      v11 = &v14[v15];
      if ( v8 )
        operator delete(v8);
      v12 = (int)&v14[v17];
    }
    else
      *v11 = v13;
      v14 = v8;
    v18 = (int)(v11 + 1);
    if ( v10 > 0x1F )
      break;
    v8 = v14;
    ++v11;
    v9 = ptr[v10++];
  if ( v14 == (char *)v18 )
    v22 = &unk_28898CC;
  else
    v19 = v18 - (_DWORD)v14;
    v20 = sub_119CB28(v18 - (_DWORD)v14, 0);
    v21 = 0;
    v22 = v20 + 3;
    do
      v23 = v21[(_DWORD)v14];
      v24 = (int)&(v21++)[(_DWORD)v20];
      *(_BYTE *)(v24 + 12) = v23;
    while ( &v11[1 - (_DWORD)v14] != v21 );
    if ( v20 != &dword_28898C0 )
      v20[2] = 0;
      *v20 = v19;
      v22[v19] = byte_26C67B8[0];
  *(_DWORD *)v25 = v22;
  if ( v14 )
    operator delete(v14);
  if ( ptr )
    operator delete(ptr);
}
