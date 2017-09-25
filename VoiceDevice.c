

int __fastcall VoiceDevice::setDictation(int a1, int *a2)
{
  int v2; // r4@1

  v2 = a1;
  EntityInteraction::setInteractText((int *)(a1 + 44), a2);
  return (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v2 + 24))(v2, -1);
}


signed int __fastcall VoiceDevice::voiceEventPresent(VoiceDevice *this)
{
  int v1; // r12@1
  __int64 v2; // kr00_8@1
  int v3; // r1@1
  signed int result; // r0@1

  v1 = *((_DWORD *)this + 3);
  v2 = *(_QWORD *)((char *)this + 20);
  v3 = ((*((_DWORD *)this + 10) - HIDWORD(v2)) << 6)
     + ((signed int)(*(_QWORD *)((char *)this + 28) - (*(_QWORD *)((char *)this + 28) >> 32)) >> 1)
     - 256;
  result = 0;
  if ( v3 + (((signed int)v2 - v1) >> 1) )
    result = 1;
  return result;
}


int __fastcall VoiceDevice::getNextVoiceEvent(VoiceDevice *this)
{
  VoiceDevice *v1; // r5@1
  int v2; // r4@1
  int v3; // r0@2
  int v4; // r0@3

  v1 = this;
  v2 = *((_DWORD *)this + 3);
  if ( v2 == *((_DWORD *)this + 5) - 2 )
  {
    operator delete(*((void **)this + 4));
    v4 = *((_DWORD *)v1 + 6);
    *((_DWORD *)v1 + 6) = v4 + 4;
    v3 = *(_DWORD *)(v4 + 4);
    *((_DWORD *)v1 + 4) = v3;
    *((_DWORD *)v1 + 5) = v3 + 512;
  }
  else
    v3 = v2 + 2;
  *((_DWORD *)v1 + 3) = v3;
  return v2;
}


int __fastcall VoiceDevice::clearEvents(VoiceDevice *this)
{
  VoiceDevice *v1; // r4@1
  int result; // r0@1
  int v3; // r1@1
  int v4; // r2@2
  int v5; // r0@5

  v1 = this;
  result = *((_DWORD *)this + 3);
  v3 = *((_DWORD *)v1 + 7);
  if ( v3 != result )
  {
    v4 = *((_DWORD *)v1 + 5);
    do
    {
      if ( result == v4 - 2 )
      {
        operator delete(*((void **)v1 + 4));
        v5 = *((_DWORD *)v1 + 6);
        *((_DWORD *)v1 + 6) = v5 + 4;
        result = *(_DWORD *)(v5 + 4);
        *((_DWORD *)v1 + 4) = result;
        v4 = result + 512;
        *((_DWORD *)v1 + 5) = result + 512;
        *((_DWORD *)v1 + 3) = result;
        v3 = *((_DWORD *)v1 + 7);
      }
      else
        result += 2;
    }
    while ( v3 != result );
  }
  return result;
}


_WORD *__fastcall VoiceDevice::addVoiceEvent(VoiceDevice *this, __int16 a2)
{
  VoiceDevice *v2; // r4@1
  __int16 v3; // r5@1
  int v4; // r1@1
  __int16 *v5; // r0@1
  _WORD *result; // r0@2
  int v7; // r0@5

  v2 = this;
  v3 = a2;
  v4 = *((_DWORD *)this + 9);
  v5 = (__int16 *)*((_DWORD *)this + 7);
  if ( v5 == (__int16 *)(v4 - 2) )
  {
    if ( (unsigned int)((*(_QWORD *)((char *)v2 + 4) >> 32)
                      - ((signed int)(*((_DWORD *)v2 + 10) - *(_QWORD *)((char *)v2 + 4)) >> 2)) <= 1 )
      std::deque<short,std::allocator<short>>::_M_reallocate_map((int)v2 + 4, 1u, 0);
    *(_DWORD *)(*((_DWORD *)v2 + 10) + 4) = operator new(0x200u);
    **((_WORD **)v2 + 7) = v3;
    v7 = *((_DWORD *)v2 + 10);
    *((_DWORD *)v2 + 10) = v7 + 4;
    result = *(_WORD **)(v7 + 4);
    *((_DWORD *)v2 + 8) = result;
    *((_DWORD *)v2 + 9) = result + 256;
    *((_DWORD *)v2 + 7) = result;
  }
  else
    *v5 = v3;
    result = v5 + 1;
  return result;
}


_DWORD *__fastcall VoiceDevice::VoiceDevice(_DWORD *a1)
{
  _DWORD *v1; // r4@1
  _DWORD *v2; // r9@1
  char *v3; // r6@1
  char *v4; // r7@1
  unsigned int v5; // r5@1
  char *v6; // r0@1
  int v7; // r1@1
  unsigned int v8; // r7@1
  _DWORD *v9; // r0@2
  unsigned int v10; // r6@5
  void *v11; // t1@6

  v1 = a1;
  *a1 = &off_26E8A1C;
  v2 = operator new(0x20u);
  v3 = (char *)operator new(0x200u);
  v2[3] = v3;
  _aeabi_memclr4(v1 + 1, 40);
  v1[2] = 8;
  v4 = (char *)operator new(0x20u);
  v1[1] = v4;
  v5 = (2 * v1[2] - 2) & 0xFFFFFFFC;
  v6 = (char *)operator new(0x200u);
  *(_DWORD *)&v4[v5] = v6;
  v7 = (int)&v4[v5];
  v8 = (unsigned int)(v2 + 3);
  v1[3] = v6;
  v1[4] = v6;
  v1[5] = v6 + 512;
  v1[6] = v7;
  v1[7] = v6;
  v1[8] = v6;
  v1[9] = v6 + 512;
  v1[10] = v7;
  if ( v2 )
  {
    v1[3] = v3;
    v1[4] = v3;
    v1[5] = v3 + 512;
    v1[6] = v8;
    v1[7] = v3;
    v1[8] = v3;
    v1[9] = v3 + 512;
    v1[10] = v8;
    v8 = v7;
    v9 = (_DWORD *)v1[1];
    v1[1] = v2;
    v1[2] = 8;
    v2 = v9;
  }
    if ( v8 < v8 + 4 )
    {
      v10 = v8 - 4;
      do
      {
        v11 = *(void **)(v10 + 4);
        v10 += 4;
        operator delete(v11);
      }
      while ( v10 < v8 );
    }
    operator delete(v2);
  v1[11] = &unk_28898CC;
  return v1;
}


VoiceDevice *__fastcall VoiceDevice::~VoiceDevice(VoiceDevice *this)
{
  VoiceDevice *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  void *v4; // r0@2
  unsigned int v5; // r5@3
  unsigned int v6; // r1@3
  unsigned int v7; // r6@4
  void *v8; // t1@5
  unsigned int *v10; // r2@9
  signed int v11; // r1@11

  v1 = this;
  *(_DWORD *)this = &off_26E8A1C;
  v2 = *((_DWORD *)this + 11);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v10 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
    }
    else
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = (void *)*((_DWORD *)v1 + 1);
  if ( v4 )
    v5 = *((_DWORD *)v1 + 10);
    v6 = *((_DWORD *)v1 + 6);
    if ( v6 < v5 + 4 )
      v7 = v6 - 4;
      {
        v8 = *(void **)(v7 + 4);
        v7 += 4;
        operator delete(v8);
      }
      while ( v7 < v5 );
      v4 = (void *)*((_DWORD *)v1 + 1);
    operator delete(v4);
  return v1;
}


void __fastcall VoiceDevice::~VoiceDevice(VoiceDevice *this)
{
  VoiceDevice::~VoiceDevice(this);
}


void __fastcall VoiceDevice::~VoiceDevice(VoiceDevice *this)
{
  VoiceDevice *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  void *v4; // r0@2
  unsigned int v5; // r5@3
  unsigned int v6; // r1@3
  unsigned int v7; // r6@4
  void *v8; // t1@5
  unsigned int *v9; // r2@9
  signed int v10; // r1@11

  v1 = this;
  *(_DWORD *)this = &off_26E8A1C;
  v2 = *((_DWORD *)this + 11);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v9 = (unsigned int *)(v2 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = (void *)*((_DWORD *)v1 + 1);
  if ( v4 )
    v5 = *((_DWORD *)v1 + 10);
    v6 = *((_DWORD *)v1 + 6);
    if ( v6 < v5 + 4 )
      v7 = v6 - 4;
      {
        v8 = *(void **)(v7 + 4);
        v7 += 4;
        operator delete(v8);
      }
      while ( v7 < v5 );
      v4 = (void *)*((_DWORD *)v1 + 1);
    operator delete(v4);
  operator delete((void *)v1);
}
