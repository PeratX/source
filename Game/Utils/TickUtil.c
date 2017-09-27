

int __fastcall TickUtil::chunkBoundsToGridBounds(int result, int a2, int a3)
{
  *(_DWORD *)result = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)result = 16 * *(_DWORD *)a2;
  *(_DWORD *)(result + 8) = 16 * *(_DWORD *)(a2 + 8);
  *(_DWORD *)(result + 12) = 16 * *(_DWORD *)a3 | 0xF;
  *(_DWORD *)(result + 20) = 16 * *(_DWORD *)(a3 + 8) | 0xF;
  return result;
}


signed int __fastcall TickUtil::getDeterministicBounds(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  int v4; // r0@1
  int v5; // r1@1
  int v6; // r1@1
  int v7; // r5@1
  signed int v8; // r0@1
  int v9; // r12@1
  signed int v10; // r2@1
  signed int v11; // r3@1
  signed int v12; // r1@1
  int v13; // r0@1
  int v14; // r5@1
  int v15; // r1@1
  int v16; // r6@1
  signed int result; // r0@1
  int v18; // [sp+0h] [bp-40h]@1
  int v19; // [sp+4h] [bp-3Ch]@1
  int v20; // [sp+Ch] [bp-34h]@1
  int v21; // [sp+14h] [bp-2Ch]@1
  int v22; // [sp+18h] [bp-28h]@1
  int v23; // [sp+1Ch] [bp-24h]@1
  int v24; // [sp+20h] [bp-20h]@1
  int v25; // [sp+28h] [bp-18h]@1

  v2 = a2;
  v3 = a1;
  v4 = *(_DWORD *)a2;
  v5 = *(_DWORD *)(a2 + 8);
  v22 = v4 - 7;
  v23 = v5 - 7;
  j_BlockPos::BlockPos((int)&v24, (__int64 *)&v22, 0);
  v6 = *(_DWORD *)(v2 + 20);
  v18 = *(_DWORD *)(v2 + 12) + 7;
  v19 = v6 + 7;
  j_BlockPos::BlockPos((int)&v20, (__int64 *)&v18, 0);
  v7 = *(_DWORD *)(v2 + 44);
  j___aeabi_memclr4(v3, 36);
  v8 = v24;
  v9 = v3 + 8;
  v10 = v20;
  v11 = v21;
  v12 = v25;
  *(_DWORD *)(v3 + 44) = v7;
  v10 >>= 4;
  *(_DWORD *)v3 = v8 >> 4;
  *(_DWORD *)(v3 + 4) = 0;
  v11 >>= 4;
  v13 = v10 - (v8 >> 4) + 1;
  v14 = v11 - (v12 >> 4) + 1;
  *(_DWORD *)v9 = v12 >> 4;
  *(_DWORD *)(v9 + 4) = v10;
  *(_DWORD *)(v9 + 8) = 0;
  v15 = v3 + 28;
  v16 = v14 * v13;
  *(_DWORD *)(v3 + 20) = v11;
  *(_DWORD *)(v3 + 24) = v13;
  result = 1;
  *(_DWORD *)v15 = 1;
  *(_DWORD *)(v15 + 4) = v14;
  *(_DWORD *)(v15 + 8) = v16;
  *(_DWORD *)(v3 + 40) = v16;
  return result;
}


int __fastcall TickUtil::getRandomInBounds(int a1, int a2, Random *a3)
{
  int v3; // r6@1
  int v4; // r9@1
  int v5; // r7@1
  Random *v6; // r5@1
  int v7; // r0@1
  unsigned int v8; // r1@3
  int v9; // r4@6
  int result; // r0@6
  unsigned int v11; // r6@8
  unsigned int v12; // r0@8
  int v13; // r1@8

  v3 = a2;
  v4 = a1;
  v5 = *(_DWORD *)a2;
  v6 = a3;
  v7 = *(_DWORD *)(a2 + 12);
  if ( v7 > *(_DWORD *)a2 )
  {
    if ( v7 == *(_DWORD *)a2 )
      v8 = 0;
    else
      v8 = j_Random::_genRandInt32(a3) % (v7 - v5);
    v5 += v8;
  }
  v9 = *(_DWORD *)(v3 + 8);
  result = *(_DWORD *)(v3 + 20);
  if ( result > v9 )
    if ( result == v9 )
    {
      v13 = 0;
    }
      v11 = result - v9;
      v12 = j_Random::_genRandInt32(v6);
      v13 = v12 % v11;
      result = v12 / v11;
    v9 += v13;
  *(_DWORD *)v4 = v5;
  *(_DWORD *)(v4 + 4) = v9;
  return result;
}


unsigned int __fastcall TickUtil::forRandomOffset(unsigned int result, int a2, unsigned int a3, unsigned int a4, int a5)
{
  unsigned int v5; // r4@1
  int v6; // r11@1
  unsigned int v7; // r1@2
  unsigned int v8; // r8@2
  unsigned int v9; // r6@3
  unsigned int v10; // [sp+4h] [bp-Ch]@1
  unsigned int v11; // [sp+8h] [bp-8h]@1
  unsigned int v12; // [sp+Ch] [bp-4h]@2
  unsigned int v13; // [sp+10h] [bp+0h]@5
  int v14; // [sp+14h] [bp+4h]@5
  unsigned int v15; // [sp+18h] [bp+8h]@5

  v5 = a4;
  v6 = a2;
  v11 = a3;
  v10 = result;
  do
  {
    v7 = ((unsigned __int8)result ^ ((unsigned int)(unsigned __int8)result >> 2) ^ ((unsigned int)(unsigned __int8)result >> 3) ^ ((unsigned int)(unsigned __int8)result >> 4)) << 7;
    v12 = v7 | ((unsigned int)(unsigned __int8)result >> 1);
    v8 = v7 | ((unsigned int)(unsigned __int8)result >> 1);
    if ( v8 <= v11 )
    {
      LOBYTE(v9) = v6;
      do
      {
        v9 = (((unsigned __int8)v9 ^ ((unsigned int)(unsigned __int8)v9 >> 2) ^ ((unsigned int)(unsigned __int8)v9 >> 3) ^ ((unsigned int)(unsigned __int8)v9 >> 4)) << 7) | ((unsigned int)(unsigned __int8)v9 >> 1);
        if ( v9 <= v5 )
        {
          v13 = v8 - 1;
          v14 = 0;
          v15 = v9 - 1;
          if ( !*(_DWORD *)(a5 + 8) )
            sub_21E5F48();
          (*(void (__fastcall **)(int, unsigned int *))(a5 + 12))(a5, &v13);
        }
      }
      while ( v9 != v6 );
    }
    result = v12;
  }
  while ( v8 != v10 );
  return result;
}
