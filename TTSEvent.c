

int *__fastcall TTSEvent::TTSEvent(int *a1, int *a2, int a3)
{
  int v3; // r4@1
  int *v4; // r5@1

  v3 = a3;
  v4 = a1;
  sub_21E8AF4(a1, a2);
  v4[1] = v3;
  v4[2] = time(0);
  return v4;
}


int *__fastcall TTSEvent::TTSEvent(int *a1, int *a2)
{
  int *v2; // r4@1
  int *v3; // r5@1

  v2 = a2;
  v3 = a1;
  sub_21E8AF4(a1, a2);
  v3[1] = v2[1];
  v3[2] = time(0);
  return v3;
}


void **__fastcall TTSEvent::TTSEvent(void **a1)
{
  void **v1; // r5@1

  v1 = a1;
  sub_21E94B4(a1, (const char *)&unk_257BC67);
  v1[1] = 0;
  v1[2] = (void *)time(0);
  return v1;
}


int *__fastcall TTSEvent::TTSEvent(int *a1, int *a2)
{
  int *v2; // r5@1

  v2 = a1;
  sub_21E8AF4(a1, a2);
  v2[1] = 0;
  v2[2] = time(0);
  return v2;
}


TTSEvent *__fastcall TTSEvent::~TTSEvent(TTSEvent *this)
{
  TTSEvent *v1; // r5@1
  int v2; // r1@1
  int *v3; // r0@1
  unsigned int *v5; // r2@3
  signed int v6; // r1@5

  v1 = this;
  v2 = *(_DWORD *)this;
  v3 = (int *)(*(_DWORD *)this - 12);
  if ( v3 != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v6 = __ldrex(v5);
      while ( __strex(v6 - 1, v5) );
    }
    else
      v6 = (*v5)--;
    if ( v6 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  return v1;
}
