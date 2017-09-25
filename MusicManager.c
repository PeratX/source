

int __fastcall MusicManager::update(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  Random *v4; // r0@1
  _DWORD *v5; // r1@1
  Random *v6; // r6@1
  int result; // r0@5
  int v8; // r0@6
  int v9; // r7@6
  int v10; // r1@8
  signed int v11; // r1@10
  signed int v12; // kr00_4@12
  unsigned int v13; // r5@18
  unsigned int v14; // r0@18

  v2 = a1;
  v3 = a2;
  v4 = (Random *)ThreadLocal<Random>::getLocal((int)&Random::mThreadLocalRandom);
  v5 = *(_DWORD **)(v2 + 8);
  v6 = v4;
  if ( v5 )
  {
    if ( *(_DWORD *)v3 != *v5 && (*(int (**)(void))(**(_DWORD **)(v2 + 4) + 20))() == 1 )
      (*(void (**)(void))(**(_DWORD **)(v2 + 4) + 28))();
    result = (*(int (**)(void))(*(_DWORD *)*(_QWORD *)(v2 + 4) + 20))();
    if ( !result )
    {
      v8 = **(_DWORD **)(v2 + 8);
      *(_DWORD *)(v2 + 8) = 0;
      *(_DWORD *)(v2 + 12) = v8;
      result = *(_QWORD *)(v3 + 8) >> 32;
      v9 = *(_QWORD *)(v3 + 8);
      if ( result >= v9 )
      {
        if ( ++result == v9 )
        {
          v10 = 0;
        }
        else
          v13 = result - v9;
          v14 = Random::_genRandInt32(v6);
          v10 = v14 % v13;
          result = v14 / v13;
        v9 += v10;
      }
      *(_DWORD *)v2 = v9;
    }
  }
  else
    result = *(_DWORD *)v3;
    if ( *(_DWORD *)(v2 + 12) == *(_DWORD *)v3 )
      v11 = *(_DWORD *)v2;
      result = *(_DWORD *)(v2 + 12);
    else
      v11 = 0;
      if ( *(_DWORD *)(v3 + 8) >= -1 )
        v12 = *(_DWORD *)(v3 + 8);
        if ( v12 / 2 != -1 )
          v11 = Random::_genRandInt32(v6) % (v12 / 2 + 1);
          result = *(_DWORD *)v3;
      *(_DWORD *)v2 = v11;
      *(_DWORD *)(v2 + 12) = result;
    *(_DWORD *)v2 = v11 - 1;
    if ( v11 <= 0 )
      *(_DWORD *)(v2 + 8) = v3;
      (*(void (**)(void))(**(_DWORD **)(v2 + 4) + 16))();
      result = 0x7FFFFFFF;
      *(_DWORD *)v2 = 0x7FFFFFFF;
  return result;
}


int __fastcall MusicManager::stopPlaying(MusicManager *this)
{
  MusicManager *v1; // r4@1
  int result; // r0@1

  v1 = this;
  result = *((_DWORD *)this + 2);
  if ( result )
  {
    (*(void (**)(void))(**((_DWORD **)v1 + 1) + 32))();
    result = 0;
    *((_DWORD *)v1 + 2) = 0;
    *(_DWORD *)v1 = 0;
  }
  return result;
}


int __fastcall MusicManager::MusicManager(int result, SoundPlayer *a2)
{
  *(_DWORD *)result = 100;
  *(_DWORD *)(result + 4) = a2;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  return result;
}


signed int __fastcall MusicManager::startPlaying(int a1, _DWORD *a2)
{
  _DWORD *v2; // r4@1
  signed int result; // r0@1

  v2 = (_DWORD *)a1;
  *(_DWORD *)(a1 + 8) = a2;
  *(_DWORD *)(a1 + 12) = *a2;
  (*(void (**)(void))(**(_DWORD **)(a1 + 4) + 16))();
  result = 0x7FFFFFFF;
  *v2 = 0x7FFFFFFF;
  return result;
}
