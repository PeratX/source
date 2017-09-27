

__int64 __fastcall SoundEvent::refreshLoadedSoundLookup(SoundEvent *this)
{
  SoundEvent *v1; // r11@1
  int *v2; // r10@1
  __int64 result; // r0@1
  int v4; // r7@2
  int *v5; // r4@2
  int v6; // r5@2
  char *v7; // r6@6
  unsigned int v8; // r1@6
  unsigned int v9; // r0@8
  unsigned int v10; // r8@8
  char *v11; // r0@14
  signed int v12; // r2@15
  int v13; // r4@15

  v1 = this;
  v2 = (int *)*((_DWORD *)this + 2);
  *((_DWORD *)this + 3) = v2;
  result = *(_QWORD *)((char *)this + 20);
  if ( HIDWORD(result) - (signed int)result >= 1 )
  {
    v4 = 0;
    v5 = v2;
    v6 = 0;
    do
    {
      if ( *(_BYTE *)(result + v4) )
      {
        if ( v5 == *((int **)v1 + 4) )
        {
          v7 = 0;
          v8 = v5 - v2;
          if ( !v8 )
            v8 = 1;
          v9 = v8 + v5 - v2;
          v10 = v8 + v5 - v2;
          if ( 0 != v9 >> 30 )
            v10 = 0x3FFFFFFF;
          if ( v9 < v8 )
          if ( v10 )
          {
            if ( v10 >= 0x40000000 )
              sub_21E57F4();
            v11 = (char *)operator new(4 * v10);
            v5 = (int *)(*((_QWORD *)v1 + 1) >> 32);
            v2 = (int *)*((_QWORD *)v1 + 1);
            v7 = v11;
          }
          v12 = (char *)v5 - (char *)v2;
          v13 = (int)&v7[(char *)v5 - (char *)v2];
          *(_DWORD *)&v7[v12] = v6;
          if ( v12 >> 2 )
            _aeabi_memmove4(v7, v2);
          v5 = (int *)(v13 + 4);
          if ( v2 )
            operator delete(v2);
          *((_DWORD *)v1 + 2) = v7;
          *((_DWORD *)v1 + 3) = v5;
          *((_DWORD *)v1 + 4) = &v7[4 * v10];
          v2 = (int *)v7;
          result = *(_QWORD *)((char *)v1 + 20);
        }
        else
          *v5 = v6;
          ++v5;
      }
      v4 += 24;
      ++v6;
    }
    while ( v6 < -1431655765 * ((HIDWORD(result) - (signed int)result) >> 3) );
  }
  return result;
}
