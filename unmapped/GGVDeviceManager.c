

int __fastcall GGVDeviceManager::getVoiceDevice(GGVDeviceManager *this)
{
  return GGVDeviceManager::sVoiceDevice;
}


int __fastcall GGVDeviceManager::getGGDevice(int result, int a2)
{
  int v2; // r2@2
  int v3; // r1@3
  unsigned int v4; // r1@6
  int v5; // r1@8
  int v6; // r1@8
  unsigned int v7; // r1@11
  int v8; // r1@13
  unsigned int v9; // r1@16

  if ( a2 <= -1 )
  {
    v5 = GGVDeviceManager::sGGDevices;
    *(_DWORD *)result = *(_DWORD *)GGVDeviceManager::sGGDevices;
    v6 = *(_DWORD *)(v5 + 4);
    *(_DWORD *)(result + 4) = v6;
    if ( !v6 )
      return result;
    result = v6 + 4;
    if ( !&pthread_create )
      goto LABEL_18;
    __dmb();
    do
      v7 = __ldrex((unsigned int *)result);
    while ( __strex(v7 + 1, (unsigned int *)result) );
  }
  else
    v2 = GGVDeviceManager::sGGDevices;
    if ( (unk_27E7CB4 - GGVDeviceManager::sGGDevices) >> 3 > a2 )
    {
      *(_DWORD *)result = *(_DWORD *)(GGVDeviceManager::sGGDevices + 8 * a2);
      v3 = *(_DWORD *)(v2 + 8 * a2 + 4);
      *(_DWORD *)(result + 4) = v3;
      if ( !v3 )
        return result;
      result = v3 + 4;
      if ( &pthread_create )
      {
        __dmb();
        do
          v4 = __ldrex((unsigned int *)result);
        while ( __strex(v4 + 1, (unsigned int *)result) );
      }
LABEL_18:
      ++*(_DWORD *)result;
    }
    v8 = *(_DWORD *)(v2 + 4);
    *(_DWORD *)(result + 4) = v8;
    if ( !v8 )
    result = v8 + 4;
      v9 = __ldrex((unsigned int *)result);
    while ( __strex(v9 + 1, (unsigned int *)result) );
  return result;
}
