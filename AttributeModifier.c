

char *__fastcall AttributeModifier::getId(AttributeModifier *this)
{
  return (char *)this + 24;
}


int __fastcall AttributeModifier::isInstantaneous(AttributeModifier *this)
{
  return 0;
}


int __fastcall AttributeModifier::AttributeModifier(int a1, int a2, int a3, float a4, int a5, int a6, int a7, int a8, __int64 a9, char a10)
{
  int v10; // r6@1
  float v11; // r4@1
  int v12; // r5@1
  int result; // r0@1

  v10 = a1;
  v11 = a4;
  v12 = a3;
  __asm { VLDR            S0, [SP,#0x10+arg_C] }
  *(_DWORD *)a1 = &off_26EC478;
  __asm { VSTR            S0, [R6,#4] }
  *(_QWORD *)(a1 + 8) = a9;
  sub_21E8AF4((int *)(a1 + 16), (int *)a7);
  *(_DWORD *)(v10 + 24) = v12;
  *(float *)(v10 + 28) = v11;
  *(_QWORD *)(v10 + 32) = __PAIR__(a6, a5);
  result = v10;
  *(_BYTE *)(v10 + 40) = a10;
  return result;
}


void __fastcall AttributeModifier::~AttributeModifier(AttributeModifier *this)
{
  AttributeModifier::~AttributeModifier(this);
}


int __fastcall AttributeModifier::setSerialize(int result, bool a2)
{
  *(_BYTE *)(result + 40) = a2;
  return result;
}


AttributeModifier *__fastcall AttributeModifier::~AttributeModifier(AttributeModifier *this)
{
  AttributeModifier *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v5; // r12@3
  signed int v6; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_26EC478;
  v2 = *((_DWORD *)this + 4);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
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


int __fastcall AttributeModifier::AttributeModifier(int a1)
{
  int v1; // r4@1
  int v2; // r12@1
  int v3; // r2@1
  int v4; // r3@1
  int v5; // r0@1
  int result; // r0@1

  v1 = a1;
  *(_DWORD *)a1 = &off_26EC478;
  *(_DWORD *)(a1 + 4) = 0;
  *(_QWORD *)(a1 + 8) = 12884901892LL;
  sub_21E94B4((void **)(a1 + 16), "Invalid");
  v2 = v1 + 24;
  v3 = unk_27F8124;
  v4 = unk_27F8128;
  v5 = unk_27F812C;
  *(_DWORD *)v2 = AttributeModifier::mInvalidUUID;
  *(_DWORD *)(v2 + 4) = v3;
  *(_DWORD *)(v2 + 8) = v4;
  *(_DWORD *)(v1 + 36) = v5;
  result = v1;
  *(_BYTE *)(v1 + 40) = 0;
  return result;
}


void __fastcall AttributeModifier::~AttributeModifier(AttributeModifier *this)
{
  AttributeModifier *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v4; // r12@3
  signed int v5; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_26EC478;
  v2 = *((_DWORD *)this + 4);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v4 = (unsigned int *)(v2 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  operator delete((void *)v1);
}


char *__fastcall AttributeModifier::getName(AttributeModifier *this)
{
  return (char *)this + 16;
}
