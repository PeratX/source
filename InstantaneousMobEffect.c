

signed int __fastcall InstantaneousMobEffect::isInstantaneous(InstantaneousMobEffect *this)
{
  return 1;
}


_DWORD *__fastcall InstantaneousMobEffect::InstantaneousMobEffect(_DWORD *a1, unsigned int a2, int *a3, int *a4, int a5, unsigned int a6, int a7)
{
  unsigned int v7; // r7@1
  int *v8; // r5@1
  int *v9; // r6@1
  _DWORD *v10; // r4@1
  int *v11; // r0@1
  void *v12; // r0@1
  unsigned int *v14; // r2@3
  signed int v15; // r1@5
  int v16; // [sp+18h] [bp-20h]@1

  v7 = a2;
  v8 = a4;
  v9 = a3;
  v10 = a1;
  v11 = (int *)sub_21E94B4((void **)&v16, (const char *)&unk_257BC67);
  MobEffect::MobEffect(__PAIR__(v7, (unsigned int)v10), v9, v8, a5, a6, a7, v11);
  v12 = (void *)(v16 - 12);
  if ( (int *)(v16 - 12) != &dword_28898C0 )
  {
    v14 = (unsigned int *)(v16 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
    }
    else
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  }
  *v10 = &off_26ED778;
  return v10;
}


void __fastcall InstantaneousMobEffect::~InstantaneousMobEffect(InstantaneousMobEffect *this)
{
  InstantaneousMobEffect::~InstantaneousMobEffect(this);
}


signed int __fastcall InstantaneousMobEffect::isDurationEffectTick(InstantaneousMobEffect *this, int a2, int a3)
{
  signed int result; // r0@1

  result = 0;
  if ( a2 > 0 )
    result = 1;
  return result;
}


void __fastcall InstantaneousMobEffect::~InstantaneousMobEffect(InstantaneousMobEffect *this)
{
  MobEffect *v1; // r0@1

  v1 = MobEffect::~MobEffect(this);
  j_j_j__ZdlPv_6((void *)v1);
}
