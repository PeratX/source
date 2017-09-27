

void __fastcall SoundSystemFMOD::stopAllSounds(SoundSystemFMOD *this)
{
  SoundSystemFMOD::stopAllSounds(this);
}


FMOD::System *__fastcall SoundSystemFMOD::enable(SoundSystemFMOD *this, int a2)
{
  SoundSystemFMOD *v2; // r5@1
  char v3; // r4@1
  FMOD::System *result; // r0@1

  v2 = this;
  v3 = a2;
  result = (FMOD::System *)*((_DWORD *)this + 27);
  if ( result )
  {
    if ( a2 == 1 )
    {
      FMOD::System::mixerResume(result);
      result = (FMOD::System *)(*(int (__fastcall **)(SoundSystemFMOD *, _DWORD))(*(_DWORD *)v2 + 120))(v2, 0);
      *((_BYTE *)v2 + 104) = 1;
      return result;
    }
    (*(void (__fastcall **)(SoundSystemFMOD *, signed int))(*(_DWORD *)v2 + 120))(v2, 1);
    result = (FMOD::System *)FMOD::System::mixerSuspend(*((FMOD::System **)v2 + 27));
  }
  *((_BYTE *)v2 + 104) = v3;
  return result;
}


signed int __fastcall SoundSystemFMOD::addListener(SoundSystemFMOD *this, int a2)
{
  SoundSystemFMOD *v2; // r4@1
  signed int v3; // r5@1

  v2 = this;
  v3 = SoundSystemBase::addListener(this, a2);
  FMOD::System::set3DNumListeners(*((FMOD::System **)v2 + 27), *((_DWORD *)v2 + 5));
  return v3;
}


FMOD::ChannelControl *__fastcall SoundSystemFMOD::mute(SoundSystemFMOD *this, bool a2)
{
  SoundSystemFMOD *v2; // r2@1
  FMOD::ChannelControl *result; // r0@1
  bool v4; // zf@1

  v2 = this;
  result = (FMOD::ChannelControl *)*((_DWORD *)this + 28);
  v4 = result == 0;
  if ( result )
    v4 = *((_DWORD *)v2 + 27) == 0;
  if ( !v4 )
  {
    if ( *((_BYTE *)v2 + 104) )
      result = (FMOD::ChannelControl *)j_FMOD::ChannelControl::setMute(result, a2);
  }
  return result;
}


RakNet *__fastcall SoundSystemFMOD::setOutputDevice(int a1, _DWORD *a2)
{
  int v2; // r4@1
  _DWORD *v3; // r5@1
  int v4; // r6@3
  unsigned int v5; // r1@5
  bool v6; // zf@5
  RakNet *result; // r0@11
  int v8; // [sp+14h] [bp-BCh]@2
  char v9; // [sp+18h] [bp-B8h]@4
  int v10; // [sp+98h] [bp-38h]@4
  unsigned int v11; // [sp+9Ch] [bp-34h]@5
  int v12; // [sp+A0h] [bp-30h]@9
  RakNet *v13; // [sp+A8h] [bp-28h]@1

  v2 = a1;
  v3 = a2;
  v13 = _stack_chk_guard;
  if ( *a2 )
  {
    FMOD::System::getNumDrivers(*(FMOD::System **)(a1 + 108), &v8);
    if ( v8 >= 1 )
    {
      v4 = 0;
      while ( 1 )
      {
        FMOD::System::getDriverInfo(*(_DWORD *)(v2 + 108), v4, &v9, 128);
        if ( *v3 == v10 )
        {
          v5 = v3[1];
          v6 = (unsigned __int16)v5 == (unsigned __int16)v11;
          if ( (unsigned __int16)v5 == (unsigned __int16)v11 )
            v6 = v5 >> 16 == v11 >> 16;
          if ( v6 && !memcmp(v3 + 2, &v12, 8u) )
            break;
        }
        if ( ++v4 >= v8 )
          goto LABEL_11;
      }
      if ( !FMOD::System::setDriver(*(FMOD::System **)(v2 + 108), v4) )
        FMOD::System::setOutput(*(_DWORD *)(v2 + 108), 0);
    }
LABEL_11:
    result = (RakNet *)(_stack_chk_guard - v13);
    if ( _stack_chk_guard != v13 )
LABEL_14:
      _stack_chk_fail(result);
  }
  else
      goto LABEL_14;
  return result;
}


FMOD::ChannelControl *__fastcall SoundSystemFMOD::pauseMusic(SoundSystemFMOD *this, bool a2)
{
  SoundSystemFMOD *v2; // r2@1
  FMOD::ChannelControl *result; // r0@1
  bool v4; // zf@1

  v2 = this;
  result = (FMOD::ChannelControl *)*((_DWORD *)this + 31);
  v4 = result == 0;
  if ( result )
    v4 = *((_DWORD *)v2 + 27) == 0;
  if ( !v4 )
    result = (FMOD::ChannelControl *)j_FMOD::ChannelControl::setPaused(result, a2);
  return result;
}


int __fastcall SoundSystemFMOD::isPlayingMusicEvent(int a1, const void **a2)
{
  int v2; // r4@1
  _DWORD *v3; // r0@2
  _DWORD *v4; // r1@2
  size_t v5; // r2@2
  int result; // r0@5

  v2 = a1;
  if ( *(_DWORD *)(a1 + 124)
    && (v3 = *(_DWORD **)(a1 + 164), v4 = *a2, v5 = *(v3 - 3), v5 == *(v4 - 3))
    && !memcmp(v3, v4, v5)
    && *(_DWORD *)(v2 + 108) )
  {
    result = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 116))(v2);
  }
  else
    result = 0;
  return result;
}


int __fastcall SoundSystemFMOD::_setPositionalAttributes(float _R0, float a2, float a3, int a4, int a5, int a6, int a7)
{
  int v12; // [sp+0h] [bp-20h]@1
  int v13; // [sp+4h] [bp-1Ch]@1
  int v14; // [sp+8h] [bp-18h]@1
  float v15; // [sp+Ch] [bp-14h]@1

  __asm
  {
    VLDR            S2, [R0,#4]
    VLDR            S0, [SP,#0x20+arg_0]
    VLDR            S4, [SP,#0x20+arg_4]
    VLDR            S6, [SP,#0x20+arg_8]
    VMUL.F32        S0, S2, S0
    VMUL.F32        S4, S2, S4
  }
  v14 = 0;
    VMUL.F32        S2, S2, S6
    VSTR            S0, [SP,#0x20+var_14]
    VSTR            S4, [SP,#0x20+var_10]
    VSTR            S2, [SP,#0x20+var_C]
  v12 = 0;
  v13 = 0;
  return FMOD::ChannelControl::set3DAttributes(LODWORD(a2), &v15, &v12, 0);
}


void __fastcall SoundSystemFMOD::stopAllSounds(SoundSystemFMOD *this)
{
  SoundSystemFMOD *v1; // r11@1
  int v2; // r4@1
  __int64 v3; // r6@1
  FMOD::ChannelControl *v4; // r0@2
  _DWORD *v5; // r4@6
  unsigned int *v6; // r2@7
  signed int v7; // r1@9
  int *v8; // r0@15
  int v9; // r0@17
  int v10; // r10@17
  int v11; // r4@18
  FMOD::ChannelControl **v12; // r5@18
  int v13; // r7@20
  int v14; // r6@21
  unsigned int *v15; // r2@22
  signed int v16; // r1@24
  void (*v17)(void); // r3@30
  int *v18; // r0@32

  v1 = this;
  (*(void (**)(void))(*(_DWORD *)this + 100))();
  v2 = *(_QWORD *)((char *)v1 + 36) >> 32;
  LODWORD(v3) = *(_QWORD *)((char *)v1 + 36);
  if ( (_DWORD)v3 != v2 )
  {
    do
    {
      v4 = *(FMOD::ChannelControl **)(v3 + 4);
      if ( v4 )
        FMOD::ChannelControl::stop(v4);
      LODWORD(v3) = v3 + 24;
    }
    while ( v2 != (_DWORD)v3 );
    v3 = *(_QWORD *)((char *)v1 + 36);
    if ( HIDWORD(v3) != (_DWORD)v3 )
      v5 = (_DWORD *)*(_QWORD *)((char *)v1 + 36);
      do
      {
        v8 = (int *)(*v5 - 12);
        if ( v8 != &dword_28898C0 )
        {
          v6 = (unsigned int *)(*v5 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v7 = __ldrex(v6);
            while ( __strex(v7 - 1, v6) );
          }
          else
            v7 = (*v6)--;
          if ( v7 <= 0 )
            j_j_j_j__ZdlPv_9(v8);
        }
        v5 += 6;
      }
      while ( v5 != (_DWORD *)HIDWORD(v3) );
  }
  *((_DWORD *)v1 + 10) = v3;
  v9 = *((_QWORD *)v1 + 6) >> 32;
  v10 = *((_QWORD *)v1 + 6);
  if ( v10 != v9 )
    v11 = -v9;
    v12 = (FMOD::ChannelControl **)(v10 + 44);
      *(v12 - 1) = 0;
      *v12 = 0;
      SoundSystemFMOD::_handleLooping((int)v1, (int)(v12 - 4), v12 - 10, (int *)v12 - 9);
      v12 += 18;
    while ( (FMOD::ChannelControl **)((char *)v12 + v11) != (FMOD::ChannelControl **)44 );
    v13 = *((_QWORD *)v1 + 6) >> 32;
    v10 = *((_QWORD *)v1 + 6);
    if ( v13 != v10 )
      v14 = *((_QWORD *)v1 + 6);
        v17 = *(void (**)(void))(v14 + 64);
        if ( v17 )
          v17();
        v18 = (int *)(*(_DWORD *)v14 - 12);
        if ( v18 != &dword_28898C0 )
          v15 = (unsigned int *)(*(_DWORD *)v14 - 4);
              v16 = __ldrex(v15);
            while ( __strex(v16 - 1, v15) );
            v16 = (*v15)--;
          if ( v16 <= 0 )
            j_j_j_j__ZdlPv_9(v18);
        v14 += 72;
      while ( v14 != v13 );
  *((_DWORD *)v1 + 13) = v10;
}


FMOD::ChannelControl *__fastcall SoundSystemFMOD::setMusicVolume(SoundSystemFMOD *this, float a2)
{
  SoundSystemFMOD *v2; // r2@1
  FMOD::ChannelControl *result; // r0@1
  bool v4; // zf@1

  v2 = this;
  result = (FMOD::ChannelControl *)*((_DWORD *)this + 30);
  v4 = result == 0;
  if ( result )
    v4 = *((_DWORD *)v2 + 27) == 0;
  if ( !v4 )
  {
    if ( *((_BYTE *)v2 + 104) )
      result = (FMOD::ChannelControl *)j_FMOD::ChannelControl::setVolume(result, a2);
  }
  return result;
}


FMOD::System *__fastcall SoundSystemFMOD::update(SoundSystemFMOD *this)
{
  SoundSystemFMOD *v1; // r4@1
  FMOD::System *result; // r0@1
  bool v3; // zf@1
  __int64 v4; // r0@4
  int v5; // r5@5
  int v6; // r7@5

  v1 = this;
  result = (FMOD::System *)*((_DWORD *)this + 27);
  v3 = result == 0;
  if ( result )
    v3 = *((_BYTE *)v1 + 104) == 0;
  if ( !v3 )
  {
    FMOD::System::update(result);
    (*(void (__fastcall **)(SoundSystemFMOD *))(*(_DWORD *)v1 + 148))(v1);
    SoundSystemFMOD::_updateUnloadedLoops(v1);
    v4 = *((_QWORD *)v1 + 6);
    if ( (_DWORD)v4 != HIDWORD(v4) )
    {
      v5 = v4 + 56;
      v6 = -HIDWORD(v4);
      do
      {
        if ( !*(_DWORD *)(v5 + 8) )
          sub_21E5F48();
        (*(void (__fastcall **)(int, int))(v5 + 12))(v5, v5 - 28);
        SoundSystemFMOD::_handleLooping((int)v1, v5 - 28, (FMOD::ChannelControl **)(v5 - 52), (int *)(v5 - 48));
        v5 += 72;
      }
      while ( v5 + v6 != 56 );
    }
    result = (FMOD::System *)j_j_j__ZN15SoundSystemFMOD13_updateSoundsEv(v1);
  }
  return result;
}


void __fastcall SoundSystemFMOD::~SoundSystemFMOD(SoundSystemFMOD *this)
{
  SoundSystemFMOD::~SoundSystemFMOD(this);
}


FMOD::System *__fastcall SoundSystemFMOD::destroy(SoundSystemFMOD *this)
{
  SoundSystemFMOD *v1; // r10@1
  int v2; // r5@1
  unsigned __int64 *v3; // r7@3
  unsigned int *v4; // r2@5
  signed int v5; // r1@7
  unsigned __int64 *v6; // r6@13
  int v7; // r1@13
  void *v8; // r0@13
  FMOD::System *result; // r0@15

  v1 = this;
  SoundSystemBase::destroy(this);
  v2 = *((_DWORD *)v1 + 35);
  if ( v2 )
  {
    do
    {
      FMOD::Sound::release(*(_DWORD *)(v2 + 8));
      v2 = *(_DWORD *)v2;
    }
    while ( v2 );
    v3 = (unsigned __int64 *)*((_DWORD *)v1 + 35);
    while ( v3 )
      v6 = v3;
      v7 = *v3 >> 32;
      v3 = (unsigned __int64 *)*v3;
      v8 = (void *)(v7 - 12);
      if ( (int *)(v7 - 12) != &dword_28898C0 )
      {
        v4 = (unsigned int *)(v7 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v5 = __ldrex(v4);
          while ( __strex(v5 - 1, v4) );
        }
        else
          v5 = (*v4)--;
        if ( v5 <= 0 )
          j_j_j_j__ZdlPv_9(v8);
      }
      operator delete(v6);
  }
  _aeabi_memclr4(*(_QWORD *)((char *)v1 + 132), 4 * (*(_QWORD *)((char *)v1 + 132) >> 32));
  *((_DWORD *)v1 + 35) = 0;
  *((_DWORD *)v1 + 36) = 0;
  result = (FMOD::System *)*((_DWORD *)v1 + 27);
  if ( result )
    FMOD::System::close(result);
    FileSystemFMOD::terminate((SoundSystemFMOD *)((char *)v1 + 128), *((FMOD::System **)v1 + 27));
    result = (FMOD::System *)FMOD::System::release(*((FMOD::System **)v1 + 27));
  *((_DWORD *)v1 + 27) = 0;
  *((_BYTE *)v1 + 104) = 0;
  return result;
}


int __fastcall SoundSystemFMOD::_lookUpSoundByName(int a1, int **a2)
{
  int **v2; // r4@1
  int v3; // r6@1
  unsigned int v4; // r0@1
  unsigned int v5; // r10@1
  unsigned int v6; // r11@1
  int v7; // r7@1
  int *v8; // r5@1
  int v9; // r8@2
  int *v10; // r9@2
  int v11; // r4@2
  const void *v12; // r1@4
  size_t v13; // r2@4
  int v14; // r0@5
  int v15; // r6@6
  int result; // r0@8
  bool v17; // zf@9
  int v18; // r1@12
  bool v19; // zf@12
  int v20; // [sp+0h] [bp-28h]@2

  v2 = a2;
  v3 = a1;
  v4 = sub_21B417C(*a2, *(*a2 - 3), -955291385);
  v5 = *(_QWORD *)(v3 + 132) >> 32;
  v6 = v4;
  v7 = v4 % v5;
  v8 = *(int **)(*(_QWORD *)(v3 + 132) + 4 * v7);
  if ( !v8 )
    goto LABEL_8;
  v9 = *v8;
  v10 = *v2;
  v20 = v3;
  v11 = *(_DWORD *)(*v8 + 12);
  while ( 1 )
  {
    if ( v11 == v6 )
    {
      v12 = *(const void **)(v9 + 4);
      v13 = *(v10 - 3);
      if ( v13 == *((_DWORD *)v12 - 3) )
      {
        v14 = memcmp(v10, v12, v13);
        if ( !v14 )
          break;
      }
    }
    v15 = *(_DWORD *)v9;
    if ( *(_DWORD *)v9 )
      v11 = *(_DWORD *)(v15 + 12);
      v8 = (int *)v9;
      v9 = *(_DWORD *)v9;
      if ( *(_DWORD *)(v15 + 12) % v5 == v7 )
        continue;
  }
  v17 = v8 == 0;
  if ( v8 )
    v14 = *v8;
    v17 = *v8 == 0;
  if ( v17 )
  v18 = *(_DWORD *)(v20 + 108);
  v19 = v18 == 0;
  if ( v18 )
    v19 = *(_BYTE *)(v20 + 104) == 0;
  if ( v19 )
LABEL_8:
    result = 0;
  else
    result = *(_DWORD *)(v14 + 8);
  return result;
}


int __fastcall SoundSystemFMOD::_updateListenerAttributes(SoundSystemFMOD *this)
{
  SoundSystemFMOD *v1; // r4@1
  int v2; // r6@1
  int v3; // r5@2
  int result; // r0@3
  int v5; // [sp+8h] [bp-10h]@5
  signed int v6; // [sp+Ch] [bp-Ch]@5
  int v7; // [sp+10h] [bp-8h]@5
  int v8; // [sp+18h] [bp+0h]@3
  int v9; // [sp+1Ch] [bp+4h]@3
  int v10; // [sp+20h] [bp+8h]@3
  int v11; // [sp+28h] [bp+10h]@3
  int v12; // [sp+2Ch] [bp+14h]@3
  int v13; // [sp+30h] [bp+18h]@3

  v1 = this;
  v2 = *((_DWORD *)this + 4);
  if ( v2 )
  {
    v3 = 0;
    do
    {
      v11 = *(_DWORD *)(v2 + 32);
      v12 = *(_DWORD *)(v2 + 36);
      v13 = *(_DWORD *)(v2 + 40);
      v8 = *(_DWORD *)(v2 + 44);
      v9 = *(_DWORD *)(v2 + 48);
      v10 = *(_DWORD *)(v2 + 52);
      result = FMOD::System::set3DListenerAttributes(*((_DWORD *)v1 + 27), v3);
      v2 = *(_DWORD *)v2;
      ++v3;
    }
    while ( v2 );
  }
  else
    v13 = 0;
    v11 = 0;
    v12 = 0;
    v10 = 1065353216;
    *(_QWORD *)&v8 = unk_262D2F8;
    v5 = 0;
    v6 = 1065353216;
    v7 = 0;
    result = FMOD::System::set3DListenerAttributes(*((_DWORD *)this + 27), 0);
  return result;
}


_BOOL4 __fastcall SoundSystemFMOD::isMusicChannelPlaying(SoundSystemFMOD *this)
{
  bool v2; // [sp+7h] [bp-9h]@1

  v2 = 0;
  FMOD::ChannelControl::isPlaying(*((FMOD::ChannelControl **)this + 31), &v2);
  return v2;
}


int __fastcall SoundSystemFMOD::_unload(int a1, int **a2)
{
  int v2; // r5@1
  int **v3; // r4@1
  unsigned int v4; // r0@1
  unsigned int v5; // r11@1
  int v6; // r6@1
  unsigned int v7; // r7@1
  unsigned int v8; // r1@1
  int result; // r0@1
  int v10; // r1@1
  int v11; // t0@1
  int v12; // r5@1
  int v13; // r8@1
  int v14; // r9@2
  int *v15; // r10@2
  int v16; // r4@2
  _DWORD *v17; // r1@4
  size_t v18; // r2@4
  int v19; // r6@6
  unsigned int v20; // r0@7
  int v21; // r1@7
  bool v22; // zf@9
  int v23; // r1@12
  _DWORD *v24; // r0@12
  _DWORD *v25; // r2@13
  int v26; // [sp+4h] [bp-2Ch]@1
  int v27; // [sp+8h] [bp-28h]@1

  v2 = a1;
  v3 = a2;
  v26 = a1;
  v4 = sub_21B417C(*a2, *(*a2 - 3), -955291385);
  v5 = v4;
  v6 = *(_DWORD *)(v2 + 132);
  v27 = v2 + 132;
  v7 = *(_DWORD *)(v2 + 136);
  v8 = *(_DWORD *)(v2 + 136);
  v11 = v4 / v8;
  v10 = v4 % v8;
  result = v11;
  v12 = v10;
  v13 = *(_DWORD *)(v6 + 4 * v10);
  if ( v13 )
  {
    v14 = *(_DWORD *)v13;
    v15 = *v3;
    v16 = *(_DWORD *)(*(_DWORD *)v13 + 12);
    while ( 1 )
    {
      if ( v16 == v5 )
      {
        v17 = *(_DWORD **)(v14 + 4);
        v18 = *(v15 - 3);
        result = *(v17 - 3);
        if ( v18 == result )
        {
          result = memcmp(v15, v17, v18);
          if ( !result )
            break;
        }
      }
      v19 = *(_DWORD *)v14;
      if ( *(_DWORD *)v14 )
        v16 = *(_DWORD *)(v19 + 12);
        v20 = *(_DWORD *)(v19 + 12);
        v21 = v20 % v7;
        result = v20 / v7;
        v13 = v14;
        v14 = *(_DWORD *)v14;
        if ( v21 == v12 )
          continue;
      return result;
    }
    v22 = v13 == 0;
    if ( v13 )
      v16 = *(_DWORD *)v13;
      v22 = *(_DWORD *)v13 == 0;
    if ( !v22 )
      FMOD::Sound::release(*(_DWORD *)(v16 + 8));
      v23 = *(_DWORD *)(v16 + 12) % (unsigned int)(*(_QWORD *)(v26 + 132) >> 32);
      v24 = *(_DWORD **)(*(_QWORD *)(v26 + 132) + 4 * v23);
      do
        v25 = v24;
        v24 = (_DWORD *)*v24;
      while ( v24 != (_DWORD *)v16 );
      result = j_j_j__ZNSt10_HashtableISsSt4pairIKSsPN4FMOD5SoundEESaIS5_ENSt8__detail10_Select1stESt8equal_toISsESt4hashISsENS7_18_Mod_range_hashingENS7_20_Default_ranged_hashENS7_20_Prime_rehash_policyENS7_17_Hashtable_traitsILb1ELb0ELb1EEEE8_M_eraseEjPNS7_15_Hash_node_baseEPNS7_10_Hash_nodeIS5_Lb1EEE(
                 v27,
                 v23,
                 v25,
                 (void *)v16);
  }
  return result;
}


int __fastcall SoundSystemFMOD::_unregisterLoop(int a1, int a2)
{
  *(_DWORD *)(a2 + 40) = 0;
  *(_DWORD *)(a2 + 44) = 0;
  return j_j_j__ZN15SoundSystemFMOD14_handleLoopingERK17LoopingSoundStateRPN4FMOD7ChannelERPNS3_5SoundE(
           a1,
           a2 + 28,
           (FMOD::ChannelControl **)(a2 + 4),
           (int *)(a2 + 8));
}


int __fastcall SoundSystemFMOD::unload(int a1, int **a2)
{
  int v2; // r5@1
  int result; // r0@1
  bool v4; // zf@1
  unsigned __int8 *v5; // r0@4
  unsigned int v6; // r3@5

  v2 = a1;
  result = *(_DWORD *)(a1 + 108);
  v4 = result == 0;
  if ( result )
  {
    result = *(_BYTE *)(v2 + 104);
    v4 = result == 0;
  }
  if ( !v4 )
    v5 = (unsigned __int8 *)(v2 + 160);
    do
    {
      do
        v6 = __ldrex(v5);
      while ( __strex(1u, v5) );
      __dmb();
    }
    while ( v6 );
    SoundSystemFMOD::_unload(v2, a2);
    result = 0;
    __dmb();
    *(_BYTE *)(v2 + 160) = 0;
  return result;
}


char *__fastcall SoundSystemFMOD::stopMusic(SoundSystemFMOD *this)
{
  SoundSystemFMOD *v1; // r4@1
  char *result; // r0@1
  bool v3; // zf@2

  v1 = this;
  result = (char *)*((_DWORD *)this + 31);
  if ( result )
  {
    result = (char *)*((_DWORD *)v1 + 27);
    v3 = result == 0;
    if ( result )
    {
      result = (char *)*((_BYTE *)v1 + 104);
      v3 = result == 0;
    }
    if ( !v3 )
      result = (char *)(*(int (__fastcall **)(SoundSystemFMOD *))(*(_DWORD *)v1 + 116))(v1);
      if ( result == (char *)1 )
      {
        FMOD::ChannelControl::stop(*((FMOD::ChannelControl **)v1 + 31));
        *((_DWORD *)v1 + 31) = 0;
        sub_21E7EE0((const void **)v1 + 41, 0, *(_BYTE **)(*((_DWORD *)v1 + 41) - 12), 0);
        result = sub_21E7EE0((const void **)v1 + 42, 0, *(_BYTE **)(*((_DWORD *)v1 + 42) - 12), 0);
      }
  }
  return result;
}


int __fastcall SoundSystemFMOD::_updateSounds(SoundSystemFMOD *this)
{
  SoundSystemFMOD *v1; // r11@1
  int result; // r0@1
  int v3; // r10@1
  __int64 v4; // kr00_8@1
  bool *v5; // r6@2
  unsigned int *v6; // r2@3
  signed int v7; // r1@5
  int v8; // r1@12
  int v9; // r0@12
  signed int v10; // r2@13
  int v11; // r7@14
  int v12; // r8@14
  int v13; // r6@15
  int v14; // r1@15
  int v15; // r2@15
  int v16; // r3@15
  int v17; // r4@15
  int v18; // r5@15
  int v19; // r7@15
  int v20; // r1@17
  void *v21; // r0@17
  bool v22; // [sp+7h] [bp-29h]@2

  v1 = this;
  v4 = *(_QWORD *)((char *)this + 36);
  result = *(_QWORD *)((char *)this + 36) >> 32;
  v3 = v4;
  if ( (_DWORD)v4 != result )
  {
    v5 = &v22;
    do
    {
      v22 = 0;
      FMOD::ChannelControl::isPlaying(*(FMOD::ChannelControl **)(v3 + 4), v5);
      if ( v22 )
      {
        v3 += 24;
      }
      else
        v8 = *((_DWORD *)v1 + 10);
        v9 = v3 + 24;
        if ( v3 + 24 != v8 )
        {
          v10 = v8 - v9;
          v9 = *((_DWORD *)v1 + 10);
          if ( v10 >= 1 )
          {
            v11 = v3;
            v12 = -1431655765 * (v10 >> 3) + 1;
            do
            {
              v13 = v11 + 24;
              xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
                (int *)v11,
                (int *)(v11 + 24));
              v14 = v11 + 4;
              --v12;
              v15 = *(_DWORD *)(v11 + 28);
              v16 = *(_DWORD *)(v11 + 32);
              v17 = *(_DWORD *)(v11 + 36);
              v18 = *(_DWORD *)(v11 + 40);
              v19 = *(_DWORD *)(v11 + 44);
              *(_DWORD *)v14 = v15;
              *(_DWORD *)(v14 + 4) = v16;
              *(_DWORD *)(v14 + 8) = v17;
              *(_DWORD *)(v14 + 12) = v18;
              *(_DWORD *)(v14 + 16) = v19;
              v11 = v13;
            }
            while ( v12 > 1 );
            v9 = *((_DWORD *)v1 + 10);
            v5 = &v22;
          }
        }
        *((_DWORD *)v1 + 10) = v9 - 24;
        v20 = *(_DWORD *)(v9 - 24);
        v21 = (void *)(v20 - 12);
        if ( (int *)(v20 - 12) != &dword_28898C0 )
          v6 = (unsigned int *)(v20 - 4);
          if ( &pthread_create )
            __dmb();
              v7 = __ldrex(v6);
            while ( __strex(v7 - 1, v6) );
          else
            v7 = (*v6)--;
          if ( v7 <= 0 )
            j_j_j_j__ZdlPv_9(v21);
      result = *((_DWORD *)v1 + 10);
    }
    while ( v3 != result );
  }
  return result;
}


int __fastcall SoundSystemFMOD::playSound(float a1, float a2, int a3, int a4, int a5, int a6, FMOD::ChannelControl **a7, int *a8)
{
  float v8; // r4@1
  int result; // r0@1
  int v17; // r2@2

  v8 = a1;
  _R9 = a3;
  _R8 = a2;
  _R7 = a4;
  result = FMOD::System::playSound(*(_DWORD *)(LODWORD(a1) + 108), *a8, *(_DWORD *)(LODWORD(a1) + 116), 1);
  if ( !result )
  {
    __asm { VMOV            S0, R7 }
    v17 = *a8;
    __asm
    {
      VMOV            S2, R9
      VMOV            S4, R8
      VLDR            S18, [SP,#0x40+arg_0]
      VLDR            S16, [SP,#0x40+arg_4]
      VSTR            S4, [SP,#0x40+var_40]
      VSTR            S2, [SP,#0x40+var_3C]
      VSTR            S0, [SP,#0x40+var_38]
      VSTR            S18, [SP,#0x40+var_34]
    }
    (*(void (__fastcall **)(_DWORD, FMOD::ChannelControl *))(*(_DWORD *)LODWORD(v8) + 152))(LODWORD(v8), *a7);
    __asm { VMOV            R1, S18 }
    FMOD::ChannelControl::setVolume(*a7, _R1);
    __asm { VMOV            R1, S16 }
    FMOD::ChannelControl::setPitch(*a7, _R1);
    result = j_FMOD::ChannelControl::setPaused(*a7, 0);
  }
  return result;
}


int *__fastcall SoundSystemFMOD::playMusic(int a1, int *a2, int **a3, float a4)
{
  int v4; // r4@1
  unsigned __int8 *v5; // r9@1
  unsigned int v6; // r1@2
  unsigned int v7; // r0@4
  int v8; // r5@4
  unsigned int v9; // r6@4
  unsigned int v10; // r7@4
  int v11; // r4@4
  int *v12; // r11@4
  int v13; // r5@5
  int v14; // r8@5
  const void *v15; // r1@7
  size_t v16; // r2@7
  int v17; // r0@8
  int v18; // r10@9
  int *result; // r0@11
  bool v20; // zf@12
  int v21; // r1@15
  bool v22; // zf@15
  int v23; // r4@18
  float v24; // [sp+8h] [bp-38h]@1
  int *v25; // [sp+Ch] [bp-34h]@1
  int v26; // [sp+10h] [bp-30h]@4
  int *v27; // [sp+14h] [bp-2Ch]@4
  _DWORD *s1; // [sp+18h] [bp-28h]@5

  v4 = a1;
  v5 = (unsigned __int8 *)(a1 + 160);
  v24 = a4;
  v25 = a2;
  do
  {
    do
      v6 = __ldrex(v5);
    while ( __strex(1u, v5) );
    __dmb();
  }
  while ( v6 );
  v27 = (int *)a3;
  v7 = sub_21B417C(*a3, *(*a3 - 3), -955291385);
  v8 = *(_DWORD *)(v4 + 132);
  v9 = v7;
  v26 = v4;
  v10 = *(_DWORD *)(v4 + 136);
  v11 = v7 % *(_DWORD *)(v4 + 136);
  v12 = *(int **)(v8 + 4 * v11);
  if ( !v12 )
    goto LABEL_11;
  v13 = *v12;
  s1 = (_DWORD *)*v27;
  v14 = *(_DWORD *)(*v12 + 12);
  while ( 1 )
    if ( v14 == v9 )
    {
      v15 = *(const void **)(v13 + 4);
      v16 = *(s1 - 3);
      if ( v16 == *((_DWORD *)v15 - 3) )
      {
        v17 = memcmp(s1, v15, v16);
        if ( !v17 )
          break;
      }
    }
    v18 = *(_DWORD *)v13;
    if ( *(_DWORD *)v13 )
      v14 = *(_DWORD *)(v18 + 12);
      v12 = (int *)v13;
      v13 = *(_DWORD *)v13;
      if ( *(_DWORD *)(v18 + 12) % v10 == v11 )
        continue;
  v20 = v12 == 0;
  if ( v12 )
    v17 = *v12;
    v20 = *v12 == 0;
  if ( v20 )
  v21 = *(_DWORD *)(v26 + 108);
  v22 = v21 == 0;
  if ( v21 )
    v22 = *(_BYTE *)(v26 + 104) == 0;
  if ( v22 )
LABEL_11:
    result = 0;
    *v5 = 0;
  else
    v23 = *(_DWORD *)(v17 + 8);
    if ( v23 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v26 + 100))(v26);
      result = (int *)FMOD::System::playSound(*(_DWORD *)(v26 + 108), v23, *(_DWORD *)(v26 + 120), 0);
      if ( !result )
        FMOD::ChannelControl::setVolume(*(FMOD::ChannelControl **)(v26 + 124), v24);
        EntityInteraction::setInteractText((int *)(v26 + 164), v25);
        result = EntityInteraction::setInteractText((int *)(v26 + 168), v27);
  return result;
}


void __fastcall SoundSystemFMOD::stop(SoundSystemFMOD *this, int a2, unsigned __int64 a3)
{
  SoundSystemFMOD *v3; // r8@1
  int v4; // r1@1
  int v5; // r5@1
  FMOD::ChannelControl *v6; // r0@5
  int v7; // r0@7
  signed int v8; // r2@8
  int v9; // r7@9
  int v10; // r9@10
  int v11; // r0@10
  int v12; // r1@10
  int v13; // r2@10
  int v14; // r3@10
  int v15; // r4@10
  int v16; // r5@10
  int v17; // r6@10
  int v18; // r1@12
  void *v19; // r0@12
  unsigned int *v20; // r2@14
  signed int v21; // r1@16

  v3 = this;
  v4 = *(_QWORD *)((char *)this + 36) >> 32;
  v5 = *(_QWORD *)((char *)this + 36);
  if ( v5 != v4 )
  {
    while ( *(_QWORD *)(v5 + 16) != a3 )
    {
      v5 += 24;
      if ( v4 == v5 )
        return;
    }
    v6 = *(FMOD::ChannelControl **)(v5 + 4);
    if ( v6 )
      FMOD::ChannelControl::stop(v6);
      v4 = *((_DWORD *)v3 + 10);
    v7 = v5 + 24;
    if ( v5 + 24 != v4 )
      v8 = v4 - v7;
      v7 = v4;
      if ( v8 >= 1 )
      {
        v9 = -1431655765 * (v8 >> 3) + 1;
        do
        {
          v10 = v5 + 24;
          xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
            (int *)v5,
            (int *)(v5 + 24));
          v11 = v5 + 28;
          v12 = v5 + 4;
          --v9;
          v13 = *(_DWORD *)(v5 + 28);
          v14 = *(_DWORD *)(v5 + 32);
          v15 = *(_DWORD *)(v5 + 36);
          v16 = *(_DWORD *)(v5 + 40);
          v17 = *(_DWORD *)(v11 + 16);
          *(_DWORD *)v12 = v13;
          *(_DWORD *)(v12 + 4) = v14;
          *(_DWORD *)(v12 + 8) = v15;
          *(_DWORD *)(v12 + 12) = v16;
          *(_DWORD *)(v12 + 16) = v17;
          v5 = v10;
        }
        while ( v9 > 1 );
        v7 = *((_DWORD *)v3 + 10);
      }
    *((_DWORD *)v3 + 10) = v7 - 24;
    v18 = *(_DWORD *)(v7 - 24);
    v19 = (void *)(v18 - 12);
    if ( (int *)(v18 - 12) != &dword_28898C0 )
      v20 = (unsigned int *)(v18 - 4);
      if ( &pthread_create )
        __dmb();
          v21 = __ldrex(v20);
        while ( __strex(v21 - 1, v20) );
      else
        v21 = (*v20)--;
      if ( v21 <= 0 )
        j_j_j_j__ZdlPv_9(v19);
  }
}


FMOD::ChannelControl *__fastcall SoundSystemFMOD::setSoundVolume(SoundSystemFMOD *this, float a2)
{
  SoundSystemFMOD *v2; // r2@1
  FMOD::ChannelControl *result; // r0@1
  bool v4; // zf@1

  v2 = this;
  result = (FMOD::ChannelControl *)*((_DWORD *)this + 29);
  v4 = result == 0;
  if ( result )
    v4 = *((_DWORD *)v2 + 27) == 0;
  if ( !v4 )
  {
    if ( *((_BYTE *)v2 + 104) )
      result = (FMOD::ChannelControl *)j_FMOD::ChannelControl::setVolume(result, a2);
  }
  return result;
}


int __fastcall SoundSystemFMOD::registerLoop(int a1, int **a2, int *a3, int a4)
{
  int v4; // r11@1
  unsigned __int8 *v5; // r0@1
  int *v6; // r9@1
  int v7; // r6@1
  int *v8; // r10@1
  unsigned int v9; // r2@2
  int v10; // r0@4
  int v11; // r5@4
  void (__fastcall *v12)(char *, int, signed int); // r3@4
  signed __int64 v13; // r0@9
  __int64 v14; // kr00_8@11
  int v15; // r0@12
  int v16; // r2@12
  int v17; // r3@12
  int v18; // r4@12
  int v19; // r6@12
  int v20; // r0@12
  __int64 v21; // r2@12
  int v22; // r6@12
  int v23; // r0@12
  __int64 v24; // r2@12
  int v25; // r6@12
  int v26; // r5@17
  void *v27; // r0@19
  unsigned int *v29; // r2@21
  signed int v30; // r1@23
  int v31; // [sp+0h] [bp-88h]@15
  char v32; // [sp+8h] [bp-80h]@5
  void (*v33)(void); // [sp+10h] [bp-78h]@4
  int v34; // [sp+14h] [bp-74h]@5
  int v35; // [sp+18h] [bp-70h]@6
  int v36; // [sp+1Ch] [bp-6Ch]@6
  int v37; // [sp+20h] [bp-68h]@6
  int v38; // [sp+30h] [bp-58h]@6
  __int64 v39; // [sp+34h] [bp-54h]@6
  int v40; // [sp+3Ch] [bp-4Ch]@6
  signed int v41; // [sp+40h] [bp-48h]@9
  __int64 v42; // [sp+44h] [bp-44h]@9
  int v43; // [sp+4Ch] [bp-3Ch]@12
  int v44; // [sp+50h] [bp-38h]@7
  void (*v45)(void); // [sp+58h] [bp-30h]@6
  int v46; // [sp+5Ch] [bp-2Ch]@7

  v4 = a1;
  v5 = (unsigned __int8 *)(a1 + 160);
  v6 = (int *)a2;
  v7 = a4;
  v8 = a3;
  do
  {
    do
      v9 = __ldrex(v5);
    while ( __strex(1u, v5) );
    __dmb();
  }
  while ( v9 );
  v10 = SoundSystemFMOD::_lookUpSoundByName(v4, a2);
  __dmb();
  *(_BYTE *)(v4 + 160) = 0;
  v11 = v10;
  v33 = 0;
  v12 = *(void (__fastcall **)(char *, int, signed int))(v7 + 8);
  if ( v12 )
    v12(&v32, v7, 2);
    v34 = *(_DWORD *)(v7 + 12);
    v33 = *(void (**)(void))(v7 + 8);
  sub_21E8AF4(&v35, v8);
  v36 = 0;
  v37 = v11;
  v45 = 0;
  v40 = 0;
  v38 = 0;
  v39 = 0LL;
  if ( v33 )
    ((void (__fastcall *)(int *, char *, signed int))v33)(&v44, &v32, 2);
    v46 = v34;
    v45 = v33;
    if ( v33 )
      v33();
  v41 = 1065353216;
  LODWORD(v42) = 1065353216;
  v39 = *(_QWORD *)&Vec3::ZERO;
  v40 = dword_2822498;
  v13 = *(_QWORD *)(v4 + 88) + 1LL;
  *(_QWORD *)(v4 + 88) = v13;
  *(__int64 *)((char *)&v42 + 4) = v13;
  if ( v11 )
    if ( !*(_DWORD *)(v7 + 8) )
      sub_21E5F48();
    (*(void (__fastcall **)(int, __int64 *))(v7 + 12))(v7, &v39);
    v14 = *(_QWORD *)(v4 + 52);
    if ( (_DWORD)v14 == HIDWORD(v14) )
    {
      std::vector<SoundSystemFMOD::LoopInfo,std::allocator<SoundSystemFMOD::LoopInfo>>::_M_emplace_back_aux<SoundSystemFMOD::LoopInfo const&>(
        (unsigned __int64 *)(v4 + 48),
        (int)&v35);
    }
    else
      sub_21E8AF4((int *)v14, &v35);
      v15 = v14 + 4;
      v16 = *(_DWORD *)(((unsigned int)&v35 | 4) + 4);
      v17 = *(_DWORD *)(((unsigned int)&v35 | 4) + 8);
      v18 = *(_DWORD *)(((unsigned int)&v35 | 4) + 0xC);
      v19 = *(_DWORD *)(((unsigned int)&v35 | 4) + 0x10);
      *(_DWORD *)v15 = *(_DWORD *)((unsigned int)&v35 | 4);
      *(_DWORD *)(v15 + 4) = v16;
      *(_DWORD *)(v15 + 8) = v17;
      *(_DWORD *)(v15 + 12) = v18;
      *(_DWORD *)(v15 + 16) = v19;
      v20 = v14 + 24;
      v21 = v39;
      v22 = v40;
      *(_DWORD *)v20 = v38;
      *(_QWORD *)(v20 + 4) = v21;
      *(_DWORD *)(v20 + 12) = v22;
      v23 = v14 + 40;
      v24 = v42;
      v25 = v43;
      *(_DWORD *)v23 = v41;
      *(_QWORD *)(v23 + 4) = v24;
      *(_DWORD *)(v23 + 12) = v25;
      *(_DWORD *)(v14 + 64) = 0;
      if ( v45 )
      {
        ((void (__fastcall *)(_DWORD, int *, signed int))v45)(v14 + 56, &v44, 2);
        *(_DWORD *)(v14 + 68) = v46;
        *(_DWORD *)(v14 + 64) = v45;
      }
      *(_DWORD *)(v4 + 52) += 72;
  else
    std::_Hashtable<std::string,std::pair<std::string const,SoundSystemFMOD::LoopInfo>,std::allocator<std::pair<std::string const,SoundSystemFMOD::LoopInfo>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_emplace<std::string const&,SoundSystemFMOD::LoopInfo&>(
      &v31,
      (unsigned __int64 *)(v4 + 60),
      v6,
      (int)&v35);
  v26 = HIDWORD(v42);
  if ( v45 )
    v45();
  v27 = (void *)(v35 - 12);
  if ( (int *)(v35 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v35 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j__ZdlPv_9(v27);
  return v26;
}


int __fastcall SoundSystemFMOD::_updateUnloadedLoops(SoundSystemFMOD *this)
{
  SoundSystemFMOD *v1; // r11@1
  unsigned __int8 *v2; // r8@1
  unsigned int v3; // r1@2
  int v4; // r5@4
  int v5; // r0@6
  __int64 v6; // kr00_8@8
  int v7; // r1@9
  int v8; // r2@9
  int v9; // r3@9
  int v10; // r4@9
  int v11; // r6@9
  int v12; // r1@9
  int v13; // r3@9
  int v14; // r4@9
  int v15; // r6@9
  int v16; // r1@9
  int v17; // r3@9
  int v18; // r4@9
  int v19; // r6@9
  void (__fastcall *v20)(_DWORD, int, signed int); // r3@9
  int v21; // r1@14
  _DWORD *v22; // r0@14
  _DWORD *v23; // r2@15
  int result; // r0@18
  unsigned __int64 *v25; // [sp+0h] [bp-28h]@5

  v1 = this;
  v2 = (unsigned __int8 *)this + 160;
  do
  {
    do
      v3 = __ldrex(v2);
    while ( __strex(1u, v2) );
    __dmb();
  }
  while ( v3 );
  v4 = *((_DWORD *)this + 17);
  if ( v4 )
    v25 = (unsigned __int64 *)((char *)this + 48);
    {
      v5 = SoundSystemFMOD::_lookUpSoundByName((int)v1, (int **)(v4 + 8));
      if ( v5 )
      {
        *(_DWORD *)(v4 + 24) = v5;
        if ( !*(_DWORD *)(v4 + 80) )
          sub_21E5F48();
        (*(void (__fastcall **)(int, int))(v4 + 84))(v4 + 72, v4 + 44);
        v6 = *(_QWORD *)((char *)v1 + 52);
        if ( (_DWORD)v6 == HIDWORD(v6) )
        {
          std::vector<SoundSystemFMOD::LoopInfo,std::allocator<SoundSystemFMOD::LoopInfo>>::_M_emplace_back_aux<SoundSystemFMOD::LoopInfo const&>(
            v25,
            v4 + 16);
        }
        else
          sub_21E8AF4((int *)v6, (int *)(v4 + 16));
          v7 = v6 + 4;
          v8 = *(_DWORD *)(v4 + 24);
          v9 = *(_DWORD *)(v4 + 28);
          v10 = *(_DWORD *)(v4 + 32);
          v11 = *(_DWORD *)(v4 + 36);
          *(_DWORD *)v7 = *(_DWORD *)(v4 + 20);
          *(_DWORD *)(v7 + 4) = v8;
          *(_DWORD *)(v7 + 8) = v9;
          *(_DWORD *)(v7 + 12) = v10;
          *(_DWORD *)(v7 + 16) = v11;
          v12 = v6 + 24;
          v13 = *(_DWORD *)(v4 + 44);
          v14 = *(_DWORD *)(v4 + 48);
          v15 = *(_DWORD *)(v4 + 52);
          *(_DWORD *)v12 = *(_DWORD *)(v4 + 40);
          *(_DWORD *)(v12 + 4) = v13;
          *(_DWORD *)(v12 + 8) = v14;
          *(_DWORD *)(v12 + 12) = v15;
          v16 = v6 + 40;
          v17 = *(_DWORD *)(v4 + 60);
          v18 = *(_DWORD *)(v4 + 64);
          v19 = *(_DWORD *)(v4 + 68);
          *(_DWORD *)v16 = *(_DWORD *)(v4 + 56);
          *(_DWORD *)(v16 + 4) = v17;
          *(_DWORD *)(v16 + 8) = v18;
          *(_DWORD *)(v16 + 12) = v19;
          *(_DWORD *)(v6 + 64) = 0;
          v20 = *(void (__fastcall **)(_DWORD, int, signed int))(v4 + 80);
          if ( v20 )
          {
            v20(v6 + 56, v4 + 72, 2);
            *(_DWORD *)(v6 + 68) = *(_DWORD *)(v4 + 84);
            *(_DWORD *)(v6 + 64) = *(_DWORD *)(v4 + 80);
          }
          *((_DWORD *)v1 + 13) += 72;
        v21 = *(_DWORD *)(v4 + 88) % (unsigned int)(*(_QWORD *)((char *)v1 + 60) >> 32);
        v22 = *(_DWORD **)(*(_QWORD *)((char *)v1 + 60) + 4 * v21);
        do
          v23 = v22;
          v22 = (_DWORD *)*v22;
        while ( v22 != (_DWORD *)v4 );
        v4 = std::_Hashtable<std::string,std::pair<std::string const,SoundSystemFMOD::LoopInfo>,std::allocator<std::pair<std::string const,SoundSystemFMOD::LoopInfo>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_erase(
               (int)v1 + 60,
               v21,
               v23,
               v4);
      }
      else
        v4 = *(_DWORD *)v4;
    }
    while ( v4 );
  result = 0;
  __dmb();
  *v2 = 0;
  return result;
}


void __fastcall SoundSystemFMOD::~SoundSystemFMOD(SoundSystemFMOD *this)
{
  SoundSystemFMOD *v1; // r0@1

  v1 = SoundSystemFMOD::~SoundSystemFMOD(this);
  j_j_j__ZdlPv_5((void *)v1);
}


int __fastcall SoundSystemFMOD::SoundSystemFMOD(int a1, int a2, int *a3, int *a4)
{
  int v4; // r4@1
  int v5; // r7@1
  int *v6; // r8@1
  int *v7; // r9@1
  int v8; // r5@1
  unsigned int v9; // r0@1
  int v10; // r6@3
  void *v11; // r5@3
  double v12; // r0@4
  unsigned int v13; // r0@4
  int v14; // r6@6
  void *v15; // r5@6
  double v16; // r0@7
  unsigned int v17; // r0@7
  int v18; // r6@9
  void *v19; // r5@9

  v4 = a1;
  v5 = a2;
  v6 = a4;
  v7 = a3;
  *(_DWORD *)a1 = &off_26E8774;
  *(_DWORD *)(a1 + 4) = 1065353216;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 1065353216;
  v8 = a1 + 24;
  *(_DWORD *)(a1 + 28) = 0;
  v9 = sub_21E6254(COERCE_DOUBLE(__PAIR__(10, a1 + 24)));
  *(_DWORD *)(v8 - 12) = v9;
  if ( v9 == 1 )
  {
    *(_DWORD *)(v4 + 32) = 0;
    v11 = (void *)(v4 + 32);
  }
  else
    if ( v9 >= 0x40000000 )
      goto LABEL_14;
    v10 = 4 * v9;
    v11 = operator new(4 * v9);
    _aeabi_memclr4(v11, v10);
  *(_DWORD *)(v4 + 8) = v11;
  HIDWORD(v12) = 10;
  *(_DWORD *)v4 = &off_26E86D0;
  *(_DWORD *)(v4 + 68) = 0;
  *(_DWORD *)(v4 + 72) = 0;
  *(_DWORD *)(v4 + 52) = 0;
  *(_DWORD *)(v4 + 56) = 0;
  *(_DWORD *)(v4 + 44) = 0;
  *(_DWORD *)(v4 + 48) = 0;
  *(_DWORD *)(v4 + 36) = 0;
  *(_DWORD *)(v4 + 40) = 0;
  *(_DWORD *)(v4 + 76) = 1065353216;
  LODWORD(v12) = v4 + 76;
  *(_DWORD *)(LODWORD(v12) + 4) = 0;
  v13 = sub_21E6254(v12);
  *(_DWORD *)(v4 + 64) = v13;
  if ( v13 == 1 )
    *(_DWORD *)(v4 + 84) = 0;
    v15 = (void *)(v4 + 84);
    if ( v13 >= 0x40000000 )
    v14 = 4 * v13;
    v15 = operator new(4 * v13);
    _aeabi_memclr4(v15, v14);
  *(_DWORD *)(v4 + 60) = v15;
  *(_DWORD *)(v4 + 140) = 0;
  *(_DWORD *)(v4 + 144) = 0;
  HIDWORD(v16) = 10;
  *(_BYTE *)(v4 + 104) = 0;
  *(_DWORD *)(v4 + 96) = 0;
  *(_DWORD *)(v4 + 100) = 0;
  *(_DWORD *)(v4 + 88) = 0;
  *(_DWORD *)(v4 + 92) = 0;
  *(_DWORD *)(v4 + 124) = 0;
  *(_DWORD *)(v4 + 116) = 0;
  *(_DWORD *)(v4 + 120) = 0;
  *(_DWORD *)(v4 + 108) = 0;
  *(_DWORD *)(v4 + 112) = 0;
  *(_DWORD *)(v4 + 148) = 1065353216;
  LODWORD(v16) = v4 + 148;
  *(_DWORD *)(LODWORD(v16) + 4) = 0;
  v17 = sub_21E6254(v16);
  *(_DWORD *)(v4 + 136) = v17;
  if ( v17 == 1 )
    *(_DWORD *)(v4 + 156) = 0;
    v19 = (void *)(v4 + 156);
    goto LABEL_10;
  if ( v17 >= 0x40000000 )
LABEL_14:
    sub_21E57F4();
  v18 = 4 * v17;
  v19 = operator new(4 * v17);
  _aeabi_memclr4(v19, v18);
LABEL_10:
  *(_DWORD *)(v4 + 132) = v19;
  __dmb();
  *(_BYTE *)(v4 + 160) = 0;
  *(_DWORD *)(v4 + 176) = v5;
  *(_DWORD *)(v4 + 164) = &unk_28898CC;
  *(_DWORD *)(v4 + 168) = &unk_28898CC;
  sub_21E8AF4((int *)(v4 + 180), v7);
  sub_21E8AF4((int *)(v4 + 184), v6);
  return v4;
}


int __fastcall SoundSystemFMOD::_handleLooping(int result, int a2, FMOD::ChannelControl **a3, int *a4)
{
  FMOD::ChannelControl **v5; // r4@1
  int *v10; // r7@1
  FMOD::ChannelControl *v11; // r1@1
  int v12; // r6@1
  int v13; // r2@7
  int v14; // [sp+14h] [bp-1Ch]@6

  _R5 = a2;
  v5 = a3;
  __asm { VLDR            S0, [R5,#0x10] }
  v10 = a4;
  v11 = *a3;
  v12 = result;
  __asm
  {
    VCMPE.F32       S0, #0.0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _ZF )
    if ( v11 )
    {
      result = FMOD::ChannelControl::setVolume(*a3, 0.0);
      *v5 = 0;
    }
  else
    if ( !v11 )
      v14 = *a4;
      (*(void (**)(void))(*(_DWORD *)result + 144))();
      FMOD::Sound::setMode(v14, 2);
      __asm
      {
        VLDR            S0, [R5,#0xC]
        VLDR            S2, [R5,#0x10]
        VSTR            S0, [SP,#0x30+var_2C]
        VSTR            S2, [SP,#0x30+var_30]
      }
      (*(void (__fastcall **)(int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v12 + 140))(
        v12,
        *(_DWORD *)_R5,
        *(_DWORD *)(_R5 + 4),
        *(_DWORD *)(_R5 + 8));
      v11 = *v5;
      __asm { VLDR            S0, [R5,#0x10] }
    v13 = *v10;
    __asm
      VLDR            S2, [R5]
      VLDR            S4, [R5,#4]
      VLDR            S6, [R5,#8]
      VSTR            S2, [SP,#0x30+var_30]
      VSTR            S4, [SP,#0x30+var_2C]
      VSTR            S6, [SP,#0x30+var_28]
      VSTR            S0, [SP,#0x30+var_24]
    (*(void (__fastcall **)(int, FMOD::ChannelControl *))(*(_DWORD *)v12 + 152))(v12, v11);
    FMOD::ChannelControl::setVolume(*v5, *(float *)(_R5 + 16));
    result = FMOD::ChannelControl::setPitch(*v5, *(float *)(_R5 + 12));
  return result;
}


int __fastcall SoundSystemFMOD::init(SoundSystemFMOD *this)
{
  SoundSystemFMOD *v1; // r4@1
  int result; // r0@1

  v1 = this;
  result = *((_DWORD *)this + 27);
  if ( result )
  {
    FMOD::System::setOutput(result, 15);
    result = FMOD::System::init(*((FMOD::System **)v1 + 27), 32, 4u, 0);
    if ( !result )
    {
      FileSystemFMOD::initialize((SoundSystemFMOD *)((char *)v1 + 128), *((FMOD::System **)v1 + 27));
      FMOD::System::set3DSettings(*((FMOD::System **)v1 + 27), 1.0, *((float *)v1 + 1), 1.0);
      result = FMOD::System::createChannelGroup(*((_DWORD *)v1 + 27), "Sound Channel Group", (char *)v1 + 116);
      if ( !result )
      {
        result = FMOD::System::createChannelGroup(*((_DWORD *)v1 + 27), "Music Channel Group", (char *)v1 + 120);
        if ( !result )
        {
          result = FMOD::System::getMasterChannelGroup(*((_DWORD *)v1 + 27), (char *)v1 + 112);
          if ( !result )
          {
            FMOD::ChannelGroup::addGroup(*((_QWORD *)v1 + 14), *((_QWORD *)v1 + 14) >> 32, 1, 0);
            result = FMOD::ChannelGroup::addGroup(*((_DWORD *)v1 + 28), *((_DWORD *)v1 + 30), 1, 0);
            *((_BYTE *)v1 + 104) = 1;
          }
        }
      }
    }
  }
  return result;
}


int __fastcall SoundSystemFMOD::fadeMusicOut(SoundSystemFMOD *this, float a2)
{
  SoundSystemFMOD *v2; // r4@1
  float v11; // [sp+Ch] [bp-24h]@1
  unsigned __int64 v12; // [sp+10h] [bp-20h]@1

  v2 = this;
  _R5 = a2;
  FMOD::System::getSoftwareFormat(*((_DWORD *)this + 27), &v11, 0, 0);
  FMOD::ChannelControl::getDSPClock(*((FMOD::ChannelControl **)v2 + 31), 0, &v12);
  FMOD::ChannelControl::addFadePoint(*((FMOD::ChannelControl **)v2 + 31), v12, 1.0);
  __asm
  {
    VLDR            S0, [SP,#0x30+var_24]
    VMOV            S16, R5
    VCVT.F32.S32    S0, S0
  }
  HIDWORD(_R2) = HIDWORD(v12);
    VMUL.F32        S0, S0, S16
    VCVTR.S32.F32   S0, S0
    VMOV            R2, S0
  FMOD::ChannelControl::addFadePoint(
    *((FMOD::ChannelControl **)v2 + 31),
    _R2 + __PAIR__((signed int)_R2 >> 31, (unsigned int)v12),
    0.0);
    VMOV            R6, S0
  return FMOD::ChannelControl::setDelay(*((FMOD::ChannelControl **)v2 + 31), 0LL, v12 + _R6, 1);
}


int __fastcall SoundSystemFMOD::_updateLoops(SoundSystemFMOD *this)
{
  SoundSystemFMOD *v1; // r4@1
  __int64 v2; // r0@1
  int v3; // r6@2
  FMOD::ChannelControl **v4; // r7@2

  v1 = this;
  v2 = *((_QWORD *)this + 6);
  if ( (_DWORD)v2 != HIDWORD(v2) )
  {
    v3 = -HIDWORD(v2);
    v4 = (FMOD::ChannelControl **)(v2 + 68);
    do
    {
      if ( !*(v4 - 1) )
        sub_21E5F48();
      ((void (__fastcall *)(FMOD::ChannelControl **, FMOD::ChannelControl **))*v4)(v4 - 3, v4 - 10);
      SoundSystemFMOD::_handleLooping((int)v1, (int)(v4 - 10), v4 - 16, (int *)v4 - 15);
      v4 += 18;
      LODWORD(v2) = (char *)v4 + v3;
    }
    while ( (FMOD::ChannelControl **)((char *)v4 + v3) != (FMOD::ChannelControl **)68 );
  }
  return v2;
}


SoundSystemFMOD *__fastcall SoundSystemFMOD::~SoundSystemFMOD(SoundSystemFMOD *this)
{
  SoundSystemFMOD *v1; // r10@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  int v6; // r1@3
  void *v7; // r0@3
  int v8; // r1@4
  void *v9; // r0@4
  unsigned __int64 *v10; // r7@5
  unsigned int *v11; // r2@7
  signed int v12; // r1@9
  unsigned __int64 *v13; // r6@15
  int v14; // r1@15
  void *v15; // r0@15
  char *v16; // r0@17
  _DWORD *v17; // r1@20
  _DWORD *v18; // r4@21
  char *v19; // r0@22
  int v20; // r5@25
  int v21; // r7@25
  unsigned int *v22; // r2@27
  signed int v23; // r1@29
  void (*v24)(void); // r3@35
  int *v25; // r0@37
  void *v26; // r5@42
  void *v27; // r7@42
  unsigned int *v28; // r2@44
  signed int v29; // r1@46
  int *v30; // r0@52
  void *v31; // r0@57
  void *v32; // r4@58
  char *v33; // r0@59
  unsigned int *v35; // r2@63
  signed int v36; // r1@65
  unsigned int *v37; // r2@67
  signed int v38; // r1@69
  unsigned int *v39; // r2@71
  signed int v40; // r1@73
  unsigned int *v41; // r2@75
  signed int v42; // r1@77

  v1 = this;
  *(_DWORD *)this = &off_26E86D0;
  v2 = *((_DWORD *)this + 46);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v35 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v36 = __ldrex(v35);
      while ( __strex(v36 - 1, v35) );
    }
    else
      v36 = (*v35)--;
    if ( v36 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v3);
  }
  v4 = *((_DWORD *)v1 + 45);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v37 = (unsigned int *)(v4 - 4);
        v38 = __ldrex(v37);
      while ( __strex(v38 - 1, v37) );
      v38 = (*v37)--;
    if ( v38 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v5);
  v6 = *((_DWORD *)v1 + 42);
  v7 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
    v39 = (unsigned int *)(v6 - 4);
        v40 = __ldrex(v39);
      while ( __strex(v40 - 1, v39) );
      v40 = (*v39)--;
    if ( v40 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
  v8 = *((_DWORD *)v1 + 41);
  v9 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
    v41 = (unsigned int *)(v8 - 4);
        v42 = __ldrex(v41);
      while ( __strex(v42 - 1, v41) );
      v42 = (*v41)--;
    if ( v42 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v9);
  v10 = (unsigned __int64 *)*((_DWORD *)v1 + 35);
  while ( v10 )
    v13 = v10;
    v14 = *v10 >> 32;
    v10 = (unsigned __int64 *)*v10;
    v15 = (void *)(v14 - 12);
    if ( (int *)(v14 - 12) != &dword_28898C0 )
      v11 = (unsigned int *)(v14 - 4);
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
        j_j_j_j_j__ZdlPv_9_1(v15);
    operator delete(v13);
  _aeabi_memclr4(*(_QWORD *)((char *)v1 + 132), 4 * (*(_QWORD *)((char *)v1 + 132) >> 32));
  *((_DWORD *)v1 + 35) = 0;
  *((_DWORD *)v1 + 36) = 0;
  v16 = (char *)*((_DWORD *)v1 + 33);
  if ( v16 && (char *)v1 + 156 != v16 )
    operator delete(v16);
  v17 = (_DWORD *)*((_DWORD *)v1 + 17);
  if ( v17 )
    do
      v18 = (_DWORD *)*v17;
      std::__detail::_Hashtable_alloc<std::allocator<std::__detail::_Hash_node<std::pair<std::string const,SoundSystemFMOD::LoopInfo>,true>>>::_M_deallocate_node(
        (int)v1 + 60,
        (int)v17);
      v17 = v18;
    while ( v18 );
  _aeabi_memclr4(*(_QWORD *)((char *)v1 + 60), 4 * (*(_QWORD *)((char *)v1 + 60) >> 32));
  *((_DWORD *)v1 + 17) = 0;
  *((_DWORD *)v1 + 18) = 0;
  v19 = (char *)*((_DWORD *)v1 + 15);
  if ( v19 && (char *)v1 + 84 != v19 )
    operator delete(v19);
  v21 = *((_QWORD *)v1 + 6) >> 32;
  v20 = *((_QWORD *)v1 + 6);
  if ( v20 != v21 )
      v24 = *(void (**)(void))(v20 + 64);
      if ( v24 )
        v24();
      v25 = (int *)(*(_DWORD *)v20 - 12);
      if ( v25 != &dword_28898C0 )
        v22 = (unsigned int *)(*(_DWORD *)v20 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v23 = __ldrex(v22);
          while ( __strex(v23 - 1, v22) );
        }
        else
          v23 = (*v22)--;
        if ( v23 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v25);
      v20 += 72;
    while ( v20 != v21 );
    v20 = *((_DWORD *)v1 + 12);
  if ( v20 )
    operator delete((void *)v20);
  v27 = (void *)(*(_QWORD *)((char *)v1 + 36) >> 32);
  v26 = (void *)*(_QWORD *)((char *)v1 + 36);
  if ( v26 != v27 )
      v30 = (int *)(*(_DWORD *)v26 - 12);
      if ( v30 != &dword_28898C0 )
        v28 = (unsigned int *)(*(_DWORD *)v26 - 4);
            v29 = __ldrex(v28);
          while ( __strex(v29 - 1, v28) );
          v29 = (*v28)--;
        if ( v29 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v30);
      v26 = (char *)v26 + 24;
    while ( v26 != v27 );
    v26 = (void *)*((_DWORD *)v1 + 9);
  if ( v26 )
    operator delete(v26);
  *(_DWORD *)v1 = &off_26E8774;
  v31 = (void *)*((_DWORD *)v1 + 4);
  if ( v31 )
      v32 = *(void **)v31;
      operator delete(v31);
      v31 = v32;
    while ( v32 );
  _aeabi_memclr4(*((_QWORD *)v1 + 1), 4 * (*((_QWORD *)v1 + 1) >> 32));
  *((_DWORD *)v1 + 4) = 0;
  *((_DWORD *)v1 + 5) = 0;
  v33 = (char *)*((_DWORD *)v1 + 2);
  if ( v33 && (char *)v1 + 32 != v33 )
    operator delete(v33);
  return v1;
}


void __fastcall SoundSystemFMOD::unloadAllExcept(int a1, unsigned __int64 *a2)
{
  SoundSystemFMOD::unloadAllExcept(a1, a2);
}


int __fastcall SoundSystemFMOD::unloadAll(SoundSystemFMOD *this)
{
  SoundSystemFMOD *v1; // r10@1
  int v2; // r7@1
  unsigned int *v3; // r2@6
  signed int v4; // r1@8
  void *v5; // r6@14
  int v6; // r1@14
  void *v7; // r0@14
  int result; // r0@16

  v1 = this;
  v2 = *((_DWORD *)this + 35);
  if ( v2 )
  {
    do
    {
      FMOD::Sound::release(*(_DWORD *)(v2 + 8));
      v2 = *(_DWORD *)v2;
    }
    while ( v2 );
    v2 = *((_DWORD *)v1 + 35);
  }
  while ( v2 )
    v5 = (void *)v2;
    v6 = *(_QWORD *)v2 >> 32;
    v2 = *(_QWORD *)v2;
    v7 = (void *)(v6 - 12);
    if ( (int *)(v6 - 12) != &dword_28898C0 )
      v3 = (unsigned int *)(v6 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v4 = __ldrex(v3);
        while ( __strex(v4 - 1, v3) );
      }
      else
        v4 = (*v3)--;
      if ( v4 <= 0 )
        j_j_j_j__ZdlPv_9(v7);
    operator delete(v5);
  _aeabi_memclr4(*(_QWORD *)((char *)v1 + 132), 4 * (*(_QWORD *)((char *)v1 + 132) >> 32));
  result = 0;
  *((_DWORD *)v1 + 35) = 0;
  *((_DWORD *)v1 + 36) = 0;
  return result;
}


signed int __fastcall SoundSystemFMOD::preinit(SoundSystemFMOD *this)
{
  FMOD::System **v1; // r4@1
  signed int result; // r0@3
  unsigned int v3; // [sp+4h] [bp-Ch]@2

  v1 = (FMOD::System **)((char *)this + 108);
  if ( FMOD_System_Create((char *)this + 108) || (FMOD::System::getVersion(*v1, &v3), v3 <= 0x10903) )
  {
    result = 0;
    *v1 = 0;
  }
  else
    result = 1;
  return result;
}


void __fastcall SoundSystemFMOD::unloadAllExcept(int a1, unsigned __int64 *a2)
{
  __int64 v2; // r0@1
  int **v3; // r2@1
  unsigned __int64 v4; // kr00_8@1
  bool v5; // zf@3
  unsigned int v6; // r4@4
  int *v7; // r1@6
  int *v8; // r0@7
  int v9; // r1@9
  _DWORD *v10; // r3@9
  _DWORD *v11; // r2@10
  unsigned int v12; // r7@12
  unsigned int v13; // r6@12 OVERLAPPED
  int v14; // r5@12
  unsigned int *v15; // r11@12
  unsigned int v16; // r9@13
  int v17; // r8@13
  _DWORD *v18; // r5@13
  _DWORD *v19; // r1@15
  size_t v20; // r2@15
  unsigned int v21; // r10@17
  int v22; // r6@20
  unsigned int *v23; // r2@25
  signed int v24; // r1@27
  void *v25; // r5@33
  int v26; // r1@33
  void *v27; // r0@33
  double v28; // r0@35
  int *v29; // r4@35
  int *v30; // r6@35
  int **v31; // r7@38
  unsigned int *v32; // r2@42
  signed int v33; // r1@44
  int *v34; // r0@50
  __int64 v35; // [sp+4h] [bp-54h]@1
  int v36; // [sp+Ch] [bp-4Ch]@1
  const void **v37; // [sp+10h] [bp-48h]@12
  int *v38; // [sp+14h] [bp-44h]@1
  int *v39; // [sp+18h] [bp-40h]@1
  int *v40; // [sp+1Ch] [bp-3Ch]@1
  int v41; // [sp+20h] [bp-38h]@35
  char v42; // [sp+24h] [bp-34h]@39
  char v43; // [sp+2Ch] [bp-2Ch]@35
  unsigned int v44; // [sp+30h] [bp-28h]@36

  v36 = a1;
  v38 = 0;
  v39 = 0;
  LODWORD(v2) = a1 + 132;
  v40 = 0;
  v4 = *a2;
  HIDWORD(v2) = *a2 >> 32;
  v3 = (int **)v4;
  v35 = v2;
  if ( (_DWORD)v4 != HIDWORD(v2) )
  {
    do
    {
      v37 = (const void **)v3;
      v12 = sub_21B417C(*v3, *(*v3 - 3), -955291385);
      *(_QWORD *)(&v13 - 1) = *(_QWORD *)(v36 + 132);
      v6 = v12 % (unsigned int)(*(_QWORD *)(v36 + 132) >> 32);
      v15 = *(unsigned int **)(v14 + 4 * v6);
      if ( v15 )
      {
        v16 = *v15;
        v17 = *(_DWORD *)(*v15 + 12);
        v18 = *v37;
        while ( 1 )
        {
          if ( v17 == v12 )
          {
            v19 = *(_DWORD **)(v16 + 4);
            v20 = *(v18 - 3);
            if ( v20 == *(v19 - 3) && !memcmp(v18, v19, v20) )
              break;
          }
          v21 = *(_DWORD *)v16;
          if ( *(_DWORD *)v16 )
            v17 = *(_DWORD *)(v21 + 12);
            v15 = (unsigned int *)v16;
            v16 = *(_DWORD *)v16;
            if ( *(_DWORD *)(v21 + 12) % v13 == v6 )
              continue;
          goto LABEL_19;
        }
        v5 = v15 == 0;
        if ( v15 )
          v6 = *v15;
          v5 = *v15 == 0;
        if ( !v5 )
          v7 = (int *)(v6 + 4);
          if ( v39 == v40 )
            std::vector<std::pair<std::string,FMOD::Sound *>,std::allocator<std::pair<std::string,FMOD::Sound *>>>::_M_emplace_back_aux<std::pair&<std::string const,FMOD::Sound *>>(
              &v38,
              (int)v7);
          else
            v8 = sub_21E8AF4(v39, v7);
            v8[1] = *(_DWORD *)(v6 + 8);
            v39 = v8 + 2;
          v9 = *(_DWORD *)(v6 + 12) % (unsigned int)(*(_QWORD *)(v36 + 132) >> 32);
          v10 = *(_DWORD **)(*(_QWORD *)(v36 + 132) + 4 * v9);
          do
            v11 = v10;
            v10 = (_DWORD *)*v10;
          while ( v10 != (_DWORD *)v6 );
          std::_Hashtable<std::string,std::pair<std::string const,FMOD::Sound *>,std::allocator<std::pair<std::string const,FMOD::Sound *>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_erase(
            v35,
            v9,
            v11,
            (void *)v6);
      }
LABEL_19:
      v3 = (int **)(v37 + 1);
    }
    while ( v37 + 1 != (const void **)HIDWORD(v35) );
  }
  v22 = *(_DWORD *)(v36 + 140);
  if ( v22 )
      FMOD::Sound::release(*(_DWORD *)(v22 + 8));
      v22 = *(_DWORD *)v22;
    while ( v22 );
    v22 = *(_DWORD *)(v36 + 140);
  while ( v22 )
    v25 = (void *)v22;
    v26 = *(_QWORD *)v22 >> 32;
    v22 = *(_QWORD *)v22;
    v27 = (void *)(v26 - 12);
    if ( (int *)(v26 - 12) != &dword_28898C0 )
      v23 = (unsigned int *)(v26 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v24 = __ldrex(v23);
        while ( __strex(v24 - 1, v23) );
      else
        v24 = (*v23)--;
      if ( v24 <= 0 )
        j_j_j_j__ZdlPv_9(v27);
    operator delete(v25);
  _aeabi_memclr4(*(_QWORD *)(v36 + 132), 4 * (*(_QWORD *)(v36 + 132) >> 32));
  HIDWORD(v28) = v36 + 148;
  *(_DWORD *)(v36 + 140) = 0;
  *(_DWORD *)(v36 + 144) = 0;
  v29 = v39;
  v30 = v38;
  v41 = v35;
  LODWORD(v28) = &v43;
  sub_21E62E8(v28, *(_DWORD *)(v36 + 136), 0, ((char *)v39 - (char *)v38) >> 3);
  if ( v43 )
    std::_Hashtable<std::string,std::pair<std::string const,FMOD::Sound *>,std::allocator<std::pair<std::string const,FMOD::Sound *>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_rehash_aux(
      v35,
      v44);
  if ( v30 != v29 )
    v31 = (int **)v30;
      std::_Hashtable<std::string,std::pair<std::string const,FMOD::Sound *>,std::allocator<std::pair<std::string const,FMOD::Sound *>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert<std::pair&<std::string,FMOD::Sound *>,std::__detail::_AllocNode<std::allocator<std::__detail::_Hash_node<std::pair<std::string const,FMOD::Sound *>,true>>>>(
        (int *)&v42,
        (__int64 *)v35,
        v31);
      v31 += 2;
    while ( (int **)v29 != v31 );
    if ( v30 != v29 )
      do
        v34 = (int *)(*v30 - 12);
        if ( v34 != &dword_28898C0 )
          v32 = (unsigned int *)(*v30 - 4);
          if ( &pthread_create )
            __dmb();
            do
              v33 = __ldrex(v32);
            while ( __strex(v33 - 1, v32) );
            v33 = (*v32)--;
          if ( v33 <= 0 )
            j_j_j_j__ZdlPv_9(v34);
        v30 += 2;
      while ( v30 != v29 );
      v30 = v38;
  if ( v30 )
    operator delete(v30);
}


signed __int64 __fastcall SoundSystemFMOD::playAt(float a1, float a2, __int64 a3, int a4, int a5, int a6, int a7)
{
  float v7; // r6@1
  unsigned __int8 *v11; // r8@1
  int **v12; // r9@1
  unsigned int v13; // r1@2
  unsigned int v14; // r0@4
  __int64 v15; // r4@4
  unsigned int v16; // r7@4
  unsigned int v17; // r6@4
  int v18; // r10@4
  int v19; // r11@5
  int v20; // r4@5
  _DWORD *v21; // r1@7
  size_t v22; // r2@7
  int v23; // r9@9
  __int64 v26; // r0@12
  __int64 v27; // kr08_8@13
  int v28; // r2@13
  signed __int64 result; // r0@14
  __int64 v31; // [sp+14h] [bp-64h]@1
  float v32; // [sp+1Ch] [bp-5Ch]@4
  int *s1; // [sp+20h] [bp-58h]@5
  int v34; // [sp+24h] [bp-54h]@12
  int v35; // [sp+28h] [bp-50h]@1
  int v36; // [sp+2Ch] [bp-4Ch]@1

  v7 = a1;
  __asm
  {
    VLDR            S18, [SP,#0x78+arg_C]
    VLDR            S16, [SP,#0x78+arg_8]
    VLDR            S20, [SP,#0x78+arg_4]
  }
  v11 = (unsigned __int8 *)(LODWORD(a1) + 160);
  __asm { VLDR            S22, [SP,#0x78+arg_0] }
  v12 = (int **)LODWORD(a2);
  v31 = a3;
  v35 = 0;
  v36 = 0;
  do
    do
      v13 = __ldrex(v11);
    while ( __strex(1u, v11) );
    __dmb();
  while ( v13 );
  v14 = sub_21B417C(*v12, *(*v12 - 3), -955291385);
  v15 = *(_QWORD *)(LODWORD(v7) + 132);
  v16 = v14;
  v32 = v7;
  v17 = v14 % (unsigned int)(*(_QWORD *)(LODWORD(v7) + 132) >> 32);
  v18 = *(_DWORD *)(v15 + 4 * v17);
  if ( v18 )
    v19 = *(_DWORD *)v18;
    s1 = *v12;
    v20 = *(_DWORD *)(*(_DWORD *)v18 + 12);
    while ( 1 )
    {
      if ( v20 == v16 )
      {
        v21 = *(_DWORD **)(v19 + 4);
        v22 = *(s1 - 3);
        if ( v22 == *(v21 - 3) && !memcmp(s1, v21, v22) )
          break;
      }
      v23 = *(_DWORD *)v19;
      if ( *(_DWORD *)v19 )
        LODWORD(v15) = *(_DWORD *)(v23 + 12);
        v18 = v19;
        v19 = *(_DWORD *)v19;
        if ( *(_DWORD *)(v23 + 12) % HIDWORD(v15) == v17 )
          continue;
      goto LABEL_11;
    }
    if ( v18 )
      _ZF = *(_DWORD *)v18 == 0;
      if ( *(_DWORD *)v18 )
        _ZF = *(_DWORD *)(LODWORD(v32) + 108) == 0;
      if ( !_ZF && *(_BYTE *)(LODWORD(v32) + 104) )
        v35 = *(_DWORD *)(*(_DWORD *)v18 + 8);
        v36 = v35;
LABEL_11:
  __dmb();
  *v11 = 0;
  if ( v36 )
    v34 = 0;
    (*(void (__fastcall **)(_DWORD, int *, int *))(*(_DWORD *)LODWORD(v32) + 144))(LODWORD(v32), &v36, &v35);
    __asm
      VMOV            R2, S22
      VMOV            R3, S20
      VSTR            S18, [SP,#0x78+var_74]
      VSTR            S16, [SP,#0x78+var_78]
    (*(void (__fastcall **)(_DWORD, _DWORD, int, int))(*(_DWORD *)LODWORD(v32) + 140))(
      LODWORD(v32),
      HIDWORD(v31),
      _R2,
      _R3);
    v26 = *(_QWORD *)(LODWORD(v32) + 40);
    if ( (_DWORD)v26 == HIDWORD(v26) )
      std::vector<SoundSystemFMOD::SoundInfo,std::allocator<SoundSystemFMOD::SoundInfo>>::_M_emplace_back_aux<std::string const&,FMOD::Channel *&,FMOD::Sound *&>(
        (unsigned __int64 *)(LODWORD(v32) + 36),
        (int *)v31,
        &v34,
        &v35);
      v28 = *(_DWORD *)(LODWORD(v32) + 40);
    else
      v27 = *(_QWORD *)&v34;
      *(_QWORD *)(sub_21E8AF4((int *)v26, (int *)v31) + 1) = v27;
      v28 = *(_DWORD *)(LODWORD(v32) + 40) + 24;
      *(_DWORD *)(LODWORD(v32) + 40) = v28;
    result = *(_QWORD *)(LODWORD(v32) + 96) + 1LL;
    *(_QWORD *)(LODWORD(v32) + 96) = result;
    *(_QWORD *)(v28 - 8) = result;
  else
    result = -1LL;
  return result;
}


int __fastcall SoundSystemFMOD::unregisterLoop(int result, int a2, unsigned __int64 a3)
{
  int v3; // r5@1
  int v4; // r7@1
  int v5; // r1@1
  int v6; // r5@4
  int v7; // r4@5
  int v8; // r6@5
  int v9; // r1@12
  _DWORD *v10; // r0@12
  _DWORD *v11; // r2@13
  int v12; // r0@14
  int v13; // r3@14
  _DWORD *v14; // r0@17

  v4 = result + 48;
  v3 = *(_DWORD *)(result + 48);
  v5 = *(_DWORD *)(result + 52);
  if ( v3 == v5 )
  {
LABEL_4:
    v6 = *(_DWORD *)(result + 68);
    if ( v6 )
    {
      v7 = result + 60;
      v8 = *(_DWORD *)(result + 68);
      do
      {
        if ( *(_QWORD *)(v8 + 64) == a3 )
        {
          v9 = *(_DWORD *)(v8 + 88) % (unsigned int)(*(_QWORD *)(result + 60) >> 32);
          v14 = *(_DWORD **)(*(_QWORD *)(result + 60) + 4 * v9);
          do
          {
            v11 = v14;
            v14 = (_DWORD *)*v14;
          }
          while ( v14 != (_DWORD *)v8 );
          v12 = v7;
          v13 = v8;
          return j_j_j__ZNSt10_HashtableISsSt4pairIKSsN15SoundSystemFMOD8LoopInfoEESaIS4_ENSt8__detail10_Select1stESt8equal_toISsESt4hashISsENS6_18_Mod_range_hashingENS6_20_Default_ranged_hashENS6_20_Prime_rehash_policyENS6_17_Hashtable_traitsILb1ELb0ELb1EEEE8_M_eraseEjPNS6_15_Hash_node_baseEPNS6_10_Hash_nodeIS4_Lb1EEE(
                   v12,
                   v9,
                   v11,
                   v13);
        }
        v8 = *(_DWORD *)v8;
      }
      while ( v8 );
      while ( v6 )
        if ( *(_QWORD *)(v6 + 64) == a3 )
          v9 = *(_DWORD *)(v6 + 88) % (unsigned int)(*(_QWORD *)(result + 60) >> 32);
          v10 = *(_DWORD **)(*(_QWORD *)(result + 60) + 4 * v9);
            v11 = v10;
            v10 = (_DWORD *)*v10;
          while ( v10 != (_DWORD *)v6 );
          v13 = v6;
        v6 = *(_DWORD *)v6;
    }
  }
  else
    while ( *(_QWORD *)(v3 + 48) != a3 )
      v3 += 72;
      if ( v5 == v3 )
        goto LABEL_4;
    *(_DWORD *)(v3 + 40) = 0;
    *(_DWORD *)(v3 + 44) = 0;
    SoundSystemFMOD::_handleLooping(result, v3 + 28, (FMOD::ChannelControl **)(v3 + 4), (int *)(v3 + 8));
    result = j_j_j__ZNSt6vectorIN15SoundSystemFMOD8LoopInfoESaIS1_EE8_M_eraseEN9__gnu_cxx17__normal_iteratorIPS1_S3_EE(
               v4,
               v3);
  return result;
}


int *__fastcall SoundSystemFMOD::getSupportedExtensions(SoundSystemFMOD *this)
{
  char v1; // r0@1
  int *v2; // r0@3
  int *v3; // r7@3
  int v4; // r5@3
  void *v5; // r0@3
  void *v6; // r0@4
  void *v7; // r0@5
  unsigned int *v9; // r2@8
  signed int v10; // r1@10
  unsigned int *v11; // r2@12
  signed int v12; // r1@14
  unsigned int *v13; // r2@16
  signed int v14; // r1@18
  int v15; // [sp+Ch] [bp-2Ch]@3
  int v16; // [sp+10h] [bp-28h]@3
  int v17; // [sp+14h] [bp-24h]@3

  v1 = byte_27E7C38;
  __dmb();
  if ( !(v1 & 1) && j___cxa_guard_acquire((unsigned int *)&byte_27E7C38) )
  {
    sub_21E94B4((void **)&v15, ".fsb");
    sub_21E94B4((void **)&v16, ".ogg");
    sub_21E94B4((void **)&v17, ".wav");
    dword_27E7C3C = 0;
    dword_27E7C40 = 0;
    dword_27E7C44 = 0;
    v2 = (int *)operator new(0xCu);
    v3 = v2;
    dword_27E7C3C = (int)v2;
    v4 = (int)(v2 + 3);
    dword_27E7C44 = (int)(v2 + 3);
    sub_21E8AF4(v2, &v15);
    sub_21E8AF4(v3 + 1, &v16);
    sub_21E8AF4(v3 + 2, &v17);
    dword_27E7C40 = v4;
    v5 = (void *)(v17 - 12);
    if ( (int *)(v17 - 12) != &dword_28898C0 )
    {
      v9 = (unsigned int *)(v17 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v10 = __ldrex(v9);
        while ( __strex(v10 - 1, v9) );
      }
      else
        v10 = (*v9)--;
      if ( v10 <= 0 )
        j_j_j_j__ZdlPv_9(v5);
    }
    v6 = (void *)(v16 - 12);
    if ( (int *)(v16 - 12) != &dword_28898C0 )
      v11 = (unsigned int *)(v16 - 4);
          v12 = __ldrex(v11);
        while ( __strex(v12 - 1, v11) );
        v12 = (*v11)--;
      if ( v12 <= 0 )
        j_j_j_j__ZdlPv_9(v6);
    v7 = (void *)(v15 - 12);
    if ( (int *)(v15 - 12) != &dword_28898C0 )
      v13 = (unsigned int *)(v15 - 4);
          v14 = __ldrex(v13);
        while ( __strex(v14 - 1, v13) );
        v14 = (*v13)--;
      if ( v14 <= 0 )
        j_j_j_j__ZdlPv_9(v7);
    _cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector);
    j___cxa_guard_release((unsigned int *)&byte_27E7C38);
  }
  return &dword_27E7C3C;
}


int __fastcall SoundSystemFMOD::isPlayingMusic(int a1, const void **a2)
{
  int v2; // r4@1
  _DWORD *v3; // r0@2
  _DWORD *v4; // r1@2
  size_t v5; // r2@2
  int result; // r0@5

  v2 = a1;
  if ( *(_DWORD *)(a1 + 124)
    && (v3 = *(_DWORD **)(a1 + 168), v4 = *a2, v5 = *(v3 - 3), v5 == *(v4 - 3))
    && !memcmp(v3, v4, v5)
    && *(_DWORD *)(v2 + 108) )
  {
    result = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 116))(v2);
  }
  else
    result = 0;
  return result;
}


int __fastcall SoundSystemFMOD::removeListener(SoundSystemFMOD *this, int a2)
{
  SoundSystemFMOD *v2; // r4@1

  v2 = this;
  SoundSystemBase::removeListener(this, a2);
  return j_FMOD::System::set3DNumListeners(*((FMOD::System **)v2 + 27), *((_DWORD *)v2 + 5));
}


int __fastcall SoundSystemFMOD::getSubSound(int a1, _DWORD *a2, int a3)
{
  _DWORD *v3; // r5@1
  int v4; // r4@1
  int result; // r0@1
  int v6; // [sp+4h] [bp-14h]@1

  v3 = a2;
  v6 = 0;
  v4 = a3;
  FMOD::Sound::getNumSubSounds(*a2, &v6);
  result = v6;
  if ( v6 >= 1 )
    result = FMOD::Sound::getSubSound(*v3, 0, v4);
  return result;
}


signed int __fastcall SoundSystemFMOD::load(int a1, int *a2, int a3, int a4)
{
  int v4; // r11@1
  int v5; // r10@1
  int *v6; // r8@1
  int v7; // r0@1
  int *v14; // r7@6
  SoundSystemFMOD **v15; // r4@6
  int (__fastcall *v16)(SoundSystemFMOD **, int *, int *); // r5@6
  SoundSystemFMOD **v17; // r4@7
  int *v18; // r10@7
  void (__fastcall *v19)(const char **, SoundSystemFMOD **, int *, int *); // r5@7
  int v20; // r5@7
  unsigned int v21; // r4@7
  char *v22; // r7@7
  int v23; // r4@8
  int v24; // r4@5
  int (__fastcall *v25)(int, char **, _DWORD **, int *); // r7@5
  char *v26; // r0@5
  int v27; // r7@9
  char *v28; // r0@9
  char *v29; // r0@10
  signed int v30; // r5@11
  int *v31; // r4@14
  signed int v34; // r7@17
  __int64 v35; // r0@22
  int v36; // r0@22
  int **v37; // r8@22
  int *v38; // r4@23
  void (__cdecl *v39)(int *); // r6@28
  void (__cdecl *v40)(int *); // r0@30
  int v41; // r2@30
  int v42; // r3@30
  int v43; // r6@30
  int v44; // r0@30
  SoundSystemFMOD **v45; // r4@32
  void (__fastcall *v46)(SoundSystemFMOD **, int *, unsigned __int64 *, int *); // r5@32
  char v47; // r0@32
  void *v48; // r0@44
  signed int v49; // r5@45
  int v50; // r4@48
  int v51; // r2@48
  int v54; // r7@53
  bool v56; // zf@60
  void *v57; // r0@65
  unsigned int *v58; // r2@66
  signed int v59; // r1@68
  unsigned __int8 *v60; // r0@63
  unsigned int v61; // r2@70
  void *v62; // r0@72
  unsigned int *v63; // r2@73
  signed int v64; // r1@75
  bool v66; // zf@79
  unsigned __int8 *v67; // r0@82
  unsigned int v68; // r2@85
  char *v69; // r0@88
  unsigned int *v70; // r2@91
  signed int v71; // r1@93
  unsigned int *v72; // r2@95
  signed int v73; // r1@97
  unsigned int *v74; // r2@99
  signed int v75; // r1@101
  unsigned int *v76; // r1@103
  signed int v77; // r0@105
  unsigned int *v78; // r2@107
  signed int v79; // r1@109
  signed int result; // r0@126
  int v81; // [sp+Ch] [bp-1AD4h]@7
  char *v82; // [sp+18h] [bp-1AC8h]@5
  char *v83; // [sp+1Ch] [bp-1AC4h]@5
  int v84; // [sp+20h] [bp-1AC0h]@5
  const char *v85; // [sp+24h] [bp-1ABCh]@7
  int v86; // [sp+28h] [bp-1AB8h]@12
  void (*v87)(void); // [sp+30h] [bp-1AB0h]@33
  char v88; // [sp+38h] [bp-1AA8h]@33
  __int64 v89; // [sp+3Ch] [bp-1AA4h]@32
  void *v90; // [sp+44h] [bp-1A9Ch]@32
  int v91; // [sp+48h] [bp-1A98h]@32
  __int64 v92; // [sp+4Ch] [bp-1A94h]@30
  char v93; // [sp+54h] [bp-1A8Ch]@30
  void (*v94)(void); // [sp+5Ch] [bp-1A84h]@30
  unsigned __int64 v95; // [sp+68h] [bp-1A78h]@6
  int v96; // [sp+70h] [bp-1A70h]@6
  int v97; // [sp+74h] [bp-1A6Ch]@6
  char v98; // [sp+78h] [bp-1A68h]@48
  int v99; // [sp+7Ch] [bp-1A64h]@48
  char v100; // [sp+480h] [bp-1660h]@30
  int v101; // [sp+484h] [bp-165Ch]@30
  int v102; // [sp+884h] [bp-125Ch]@30
  char v103; // [sp+888h] [bp-1258h]@30
  char v104; // [sp+88Ch] [bp-1254h]@30
  int v105; // [sp+C8Ch] [bp-E54h]@30
  _DWORD *v106; // [sp+C90h] [bp-E50h]@5
  char v107; // [sp+C94h] [bp-E4Ch]@29
  int v108; // [sp+1094h] [bp-A4Ch]@29
  signed int v109; // [sp+1098h] [bp-A48h]@6
  char v110; // [sp+109Ch] [bp-A44h]@6
  int v111; // [sp+149Ch] [bp-644h]@6
  int v112; // [sp+14A0h] [bp-640h]@7
  char v113; // [sp+14A4h] [bp-63Ch]@7
  void (__cdecl *v114)(int *); // [sp+14A8h] [bp-638h]@30
  int v115; // [sp+14ACh] [bp-634h]@30
  char v116; // [sp+14B0h] [bp-630h]@32
  char v117; // [sp+1800h] [bp-2E0h]@4
  int v118; // [sp+18A4h] [bp-23Ch]@7
  int v119; // [sp+1AA0h] [bp-40h]@22
  RakNet *v120; // [sp+1AA4h] [bp-3Ch]@1

  v4 = a1;
  v5 = a4;
  v6 = a2;
  v120 = _stack_chk_guard;
  v7 = *(_DWORD *)(a1 + 108);
  _ZF = v7 == 0;
  if ( v7 )
    _ZF = *(_BYTE *)(v4 + 104) == 0;
  if ( _ZF )
    goto LABEL_126;
  _LR = &v117;
  __asm { VLDR            S16, [LR,#0x2E4] }
  __asm { VLDR            S18, [LR,#0x2E0] }
  {
    v14 = a2;
    v109 = 1023;
    v111 = 0;
    v110 = 0;
    sub_21E8AF4((int *)&v95 + 1, a2);
    v96 = HIDWORD(v95);
    v97 = 0;
    HIDWORD(v95) = &unk_28898CC;
    v15 = *(SoundSystemFMOD ***)(v4 + 176);
    v16 = (int (__fastcall *)(SoundSystemFMOD **, int *, int *))*((_DWORD *)*v15 + 8);
    SoundSystemFMOD::getSupportedExtensions(*v15);
    if ( v16(v15, &v96, &dword_27E7C3C) )
    {
      v17 = *(SoundSystemFMOD ***)(v4 + 176);
      v81 = v5;
      v18 = v14;
      v19 = (void (__fastcall *)(const char **, SoundSystemFMOD **, int *, int *))*((_DWORD *)*v17 + 10);
      SoundSystemFMOD::getSupportedExtensions(*v17);
      v19(&v85, v17, &v96, &dword_27E7C3C);
      v20 = (int)v85;
      v22 = (char *)(v85 - 12);
      v21 = *((_DWORD *)v85 - 3);
      v112 = 1023;
      v113 = 0;
      v118 = 0;
      if ( v21 < 0x400 )
      {
        if ( v21 )
          _aeabi_memcpy(&v113, v85, v21);
        *((_BYTE *)&v112 + v21 + 4) = 0;
        v23 = v21 + v118;
      }
      else
        v23 = 0;
        v113 = 0;
      v118 = v23;
      _aeabi_memcpy4(&v110, &v113, v23 + 1);
      v37 = (int **)v18;
      v111 = v23;
      if ( (int *)v22 != &dword_28898C0 )
        v76 = (unsigned int *)(v20 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v77 = __ldrex(v76);
          while ( __strex(v77 - 1, v76) );
        }
        else
          v77 = (*v76)--;
        if ( v77 <= 0 )
          j_j_j_j__ZdlPv_9(v22);
      v39 = (void (__cdecl *)(int *))&v110;
      v5 = v81;
    }
    else
      LODWORD(v35) = *v14;
      HIDWORD(v35) = *(_DWORD *)(*v14 - 12);
      *(_QWORD *)&v86 = v35;
      v36 = Core::SplitPathT<1024u,64u>::SplitPathT((int)&v112, (const char **)&v86);
      v37 = (int **)v14;
      if ( v119 )
        v38 = (int *)&v106;
        Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::Path>((unsigned int *)&v106, v36 + 1024, v119 - 1);
        _aeabi_memclr8(&v106, 1028);
        v106 = (_DWORD *)1023;
        v108 = 0;
        v107 = 0;
      v40 = (void (__cdecl *)(int *))*v14;
      v41 = *(_DWORD *)(*v14 - 12);
      v42 = *(_DWORD *)(*(_DWORD *)(v4 + 180) - 12);
      v112 = *(_DWORD *)(v4 + 180);
      *(_DWORD *)&v113 = v42;
      v114 = v40;
      v115 = v41;
      Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v103, (int)&v112, 2);
      v43 = v105;
      _aeabi_memcpy4(&v110, &v104, v105 + 1);
      v111 = v43;
      v104 = 0;
      v105 = 0;
      LODWORD(v95) = &unk_28898CC;
      v44 = *(_DWORD *)(v4 + 180);
      *(_DWORD *)&v113 = *(_DWORD *)(v44 - 12);
      v112 = v44;
      v114 = (void (__cdecl *)(int *))((unsigned int)v38 | 4);
      v115 = v108;
      Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v100, (int)&v112, 2);
      LODWORD(v92) = &v101;
      HIDWORD(v92) = v102;
      Core::FileSystem::createOneDirectory((int)&v93, &v92);
      if ( v94 )
        v94();
      v45 = *(SoundSystemFMOD ***)(v4 + 176);
      v46 = (void (__fastcall *)(SoundSystemFMOD **, int *, unsigned __int64 *, int *))*((_DWORD *)*v45 + 3);
      SoundSystemFMOD::getSupportedExtensions(*v45);
      v46(v45, &v96, &v95, &dword_27E7C3C);
      v90 = 0;
      v91 = 0;
      LODWORD(v89) = &v110;
      HIDWORD(v89) = v111;
      Core::File::open((int)&v112, (int)&v90, &v89, 46);
      v47 = v116;
      v116 |= 2u;
      if ( v47 & 1 )
        Core::FileImpl::write((Core::FileImpl *)&v86, v90, (unsigned int)v95, *(_DWORD *)(v95 - 12));
        v88 |= 2u;
        if ( v87 )
          v87();
      if ( v114 )
        v114(&v112);
      if ( v90 )
        Core::File::close((Core::File *)&v112, (int *)&v90);
        v116 |= 2u;
        if ( v114 )
          v114(&v112);
      if ( v91 )
        (*(void (__cdecl **)(int))(*(_DWORD *)v91 + 4))(v91);
        (*(void (__cdecl **)(void *))(*(_DWORD *)v90 + 4))(v90);
      v48 = (void *)(v95 - 12);
      if ( (int *)(v95 - 12) != &dword_28898C0 )
        v78 = (unsigned int *)(v95 - 4);
            v79 = __ldrex(v78);
          while ( __strex(v79 - 1, v78) );
          v79 = (*v78)--;
        if ( v79 <= 0 )
          j_j_j_j__ZdlPv_9(v48);
    v49 = 134217736;
    v106 = 0;
    if ( v5 )
      v49 = 134217744;
    if ( !FMOD::System::createStream(*(_DWORD *)(v4 + 108), v39, v49, 0)
      || (v50 = *(_DWORD *)(v4 + 108),
          v51 = *(_DWORD *)(*(_DWORD *)(v4 + 184) - 12),
          v112 = *(_DWORD *)(v4 + 184),
          *(_DWORD *)&v113 = v51,
          v114 = v39,
          v115 = v111,
          Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v98, (int)&v112, 2),
          !FMOD::System::createStream(v50, &v99, v49, 0)) )
      __asm
        VCMPE.F32       S18, #0.0
        VMRS            APSR_nzcv, FPSCR
      if ( _ZF )
        __asm
          VCMPE.F32       S16, #0.0
          VMRS            APSR_nzcv, FPSCR
        if ( !_ZF )
          FMOD::Sound::setMode(v106, 0x200000);
          __asm { VMOV            R2, S16 }
          FMOD::Sound::set3DMinMaxDistance(v106, 0, _R2);
          VLDR            S0, =10000.0
          VMOV            R5, S18
        if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
          __asm { VMOVGT.F32      S0, S16 }
        __asm { VMOV            R6, S0 }
        FMOD::Sound::set3DMinMaxDistance(v106, _R5, _R6);
        FMOD::Sound::getNumSubSounds(v106, &v112);
        if ( v112 > 0 )
          v54 = 0;
          {
            if ( !FMOD::Sound::getSubSound(v106, v54, &v86) )
              FMOD::Sound::set3DMinMaxDistance(v86, _R5, _R6);
            ++v54;
          }
          while ( v54 < v112 );
      FMOD::Sound::getFormat(v106, &v112, 0, 0);
      v56 = v112 == 9;
      if ( v112 != 9 )
        v56 = v112 == 18;
      if ( !v56 )
        v60 = (unsigned __int8 *)(v4 + 160);
        do
            v61 = __ldrex(v60);
          while ( __strex(1u, v60) );
        while ( v61 );
        SoundSystemFMOD::_unload(v4, v37);
        std::_Hashtable<std::string,std::pair<std::string const,FMOD::Sound *>,std::allocator<std::pair<std::string const,FMOD::Sound *>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_emplace<std::string const&,FMOD::Sound *&>(
          &v112,
          (unsigned __int64 *)(v4 + 132),
          (int *)v37,
          &v106);
        __dmb();
        *(_BYTE *)(v4 + 160) = 0;
        v62 = (void *)(v96 - 12);
        if ( (int *)(v96 - 12) != &dword_28898C0 )
          v63 = (unsigned int *)(v96 - 4);
          if ( &pthread_create )
            __dmb();
            do
              v64 = __ldrex(v63);
            while ( __strex(v64 - 1, v63) );
          else
            v64 = (*v63)--;
          if ( v64 <= 0 )
            j_j_j_j__ZdlPv_9(v62);
        goto LABEL_136;
      FMOD::Sound::release(v106);
    v57 = (void *)(v96 - 12);
    if ( (int *)(v96 - 12) != &dword_28898C0 )
      v58 = (unsigned int *)(v96 - 4);
      if ( &pthread_create )
          v59 = __ldrex(v58);
        while ( __strex(v59 - 1, v58) );
        v59 = (*v58)--;
      if ( v59 <= 0 )
        j_j_j_j__ZdlPv_9(v57);
  }
  v106 = &unk_28898CC;
  v24 = *(_DWORD *)(v4 + 176);
  v25 = *(int (__fastcall **)(int, char **, _DWORD **, int *))(*(_DWORD *)v24 + 12);
  sub_21E8AF4((int *)&v82, a2);
  v26 = v82;
  v82 = (char *)&unk_28898CC;
  v83 = v26;
  v84 = 0;
  SoundSystemFMOD::getSupportedExtensions(0);
  v27 = v25(v24, &v83, &v106, &dword_27E7C3C);
  v28 = v83 - 12;
  if ( (int *)(v83 - 12) != &dword_28898C0 )
    v70 = (unsigned int *)(v83 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v71 = __ldrex(v70);
      while ( __strex(v71 - 1, v70) );
      v71 = (*v70)--;
    if ( v71 <= 0 )
      j_j_j_j__ZdlPv_9(v28);
  v29 = v82 - 12;
  if ( (int *)(v82 - 12) != &dword_28898C0 )
    v72 = (unsigned int *)(v82 - 4);
        v73 = __ldrex(v72);
      while ( __strex(v73 - 1, v72) );
      v73 = (*v72)--;
    if ( v73 <= 0 )
      j_j_j_j__ZdlPv_9(v29);
  v30 = 0;
  if ( v27 == 1 )
    _aeabi_memclr8(&v112, 148);
    v112 = 148;
    *(_DWORD *)&v113 = *(v106 - 3);
    v86 = 0;
    if ( !FMOD::System::createSound(*(_DWORD *)(v4 + 108)) )
          FMOD::Sound::setMode(v86, 0x200000);
          FMOD::Sound::set3DMinMaxDistance(v86, 0, _R2);
        v31 = v6;
        __asm { VMOV            R8, S18 }
        FMOD::Sound::set3DMinMaxDistance(v86, _R8, _R6);
        FMOD::Sound::getNumSubSounds(v86, &v109);
        if ( v109 > 0 )
          v34 = 0;
            if ( !FMOD::Sound::getSubSound(v86, v34, &v96) )
              FMOD::Sound::set3DMinMaxDistance(v96, _R8, _R6);
            ++v34;
          while ( v34 < v109 );
        v6 = v31;
      FMOD::Sound::getFormat(v86, &v109, 0, 0);
      v66 = v109 == 9;
      if ( v109 != 9 )
        v66 = v109 == 18;
      if ( !v66 )
        v67 = (unsigned __int8 *)(v4 + 160);
            v68 = __ldrex(v67);
          while ( __strex(1u, v67) );
        while ( v68 );
        SoundSystemFMOD::_unload(v4, (int **)v6);
          &v109,
          v6,
          &v86);
        v30 = 1;
        goto LABEL_88;
      FMOD::Sound::release(v86);
    v30 = 0;
LABEL_88:
  v69 = (char *)(v106 - 3);
  if ( v106 - 3 != &dword_28898C0 )
    v74 = v106 - 1;
        v75 = __ldrex(v74);
      while ( __strex(v75 - 1, v74) );
      v75 = (*v74)--;
    if ( v75 <= 0 )
      j_j_j_j__ZdlPv_9(v69);
  if ( !v30 )
LABEL_126:
    result = 0;
    goto LABEL_137;
LABEL_136:
  result = 1;
LABEL_137:
  if ( _stack_chk_guard != v120 )
    _stack_chk_fail(result);
  return result;
}


void __fastcall SoundSystemFMOD::stop(SoundSystemFMOD *this, int a2, unsigned __int64 a3)
{
  SoundSystemFMOD::stop(this, a2, a3);
}


void __fastcall SoundSystemFMOD::stop(int a1, const void **a2)
{
  SoundSystemFMOD::stop(a1, a2);
}


void __fastcall SoundSystemFMOD::stop(int a1, const void **a2)
{
  int v2; // r9@1
  const void **v3; // r10@1
  _DWORD *v4; // r0@1
  _DWORD *v5; // r1@1
  size_t v6; // r2@1
  int v7; // r6@4
  int v8; // r8@4
  int *v9; // r4@5
  unsigned int *v10; // r2@6
  signed int v11; // r1@8
  size_t v12; // r2@14
  FMOD::ChannelControl *v13; // r0@17
  int v14; // r0@19
  signed int v15; // r1@20
  int v16; // r7@21
  int v17; // r11@21
  int v18; // r6@22
  int v19; // r1@22
  int v20; // r2@22
  int v21; // r3@22
  int v22; // r4@22
  int v23; // r5@22
  int v24; // r7@22
  int v25; // r1@24
  void *v26; // r0@24
  int v27; // r7@27
  int v28; // r5@27
  size_t v29; // r2@28

  v2 = a1;
  v3 = a2;
  v4 = *(_DWORD **)(a1 + 164);
  v5 = *a2;
  v6 = *(v4 - 3);
  if ( v6 == *(v5 - 3) && !memcmp(v4, v5, v6) )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 100))(v2);
  v7 = *(_QWORD *)(v2 + 36) >> 32;
  v8 = *(_QWORD *)(v2 + 36);
  if ( v8 != v7 )
  {
    v9 = &dword_28898C0;
    do
    {
      v12 = *(_DWORD *)(*(_DWORD *)v8 - 12);
      if ( v12 == *((_DWORD *)*v3 - 3) && !memcmp(*(const void **)v8, *v3, v12) )
      {
        v13 = *(FMOD::ChannelControl **)(v8 + 4);
        if ( v13 )
        {
          FMOD::ChannelControl::stop(v13);
          v7 = *(_DWORD *)(v2 + 40);
        }
        v14 = v8 + 24;
        if ( v8 + 24 != v7 )
          v15 = v7 - v14;
          v14 = v7;
          if ( v15 >= 1 )
          {
            v16 = v8;
            v17 = -1431655765 * (v15 >> 3) + 1;
            do
            {
              v18 = v16 + 24;
              xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
                (int *)v16,
                (int *)(v16 + 24));
              v19 = v16 + 4;
              --v17;
              v20 = *(_DWORD *)(v16 + 28);
              v21 = *(_DWORD *)(v16 + 32);
              v22 = *(_DWORD *)(v16 + 36);
              v23 = *(_DWORD *)(v16 + 40);
              v24 = *(_DWORD *)(v16 + 44);
              *(_DWORD *)v19 = v20;
              *(_DWORD *)(v19 + 4) = v21;
              *(_DWORD *)(v19 + 8) = v22;
              *(_DWORD *)(v19 + 12) = v23;
              *(_DWORD *)(v19 + 16) = v24;
              v16 = v18;
            }
            while ( v17 > 1 );
            v14 = *(_DWORD *)(v2 + 40);
            v9 = &dword_28898C0;
          }
        *(_DWORD *)(v2 + 40) = v14 - 24;
        v25 = *(_DWORD *)(v14 - 24);
        v26 = (void *)(v25 - 12);
        if ( (int *)(v25 - 12) != v9 )
          v10 = (unsigned int *)(v25 - 4);
          if ( &pthread_create )
            __dmb();
              v11 = __ldrex(v10);
            while ( __strex(v11 - 1, v10) );
          else
            v11 = (*v10)--;
          if ( v11 <= 0 )
            j_j_j_j__ZdlPv_9(v26);
        v7 = *(_DWORD *)(v2 + 40);
      }
      else
        v8 += 24;
    }
    while ( v8 != v7 );
  }
  v27 = *(_DWORD *)(v2 + 48);
  v28 = *(_DWORD *)(v2 + 52);
  while ( v27 != v28 )
    v29 = *(_DWORD *)(*(_DWORD *)v27 - 12);
    if ( v29 == *((_DWORD *)*v3 - 3) && !memcmp(*(const void **)v27, *v3, v29) )
      *(_DWORD *)(v27 + 40) = 0;
      *(_DWORD *)(v27 + 44) = 0;
      SoundSystemFMOD::_handleLooping(v2, v27 + 28, (FMOD::ChannelControl **)(v27 + 4), (int *)(v27 + 8));
      v27 = std::vector<SoundSystemFMOD::LoopInfo,std::allocator<SoundSystemFMOD::LoopInfo>>::_M_erase(v2 + 48, v27);
      v28 = *(_DWORD *)(v2 + 52);
    else
      v27 += 72;
}
