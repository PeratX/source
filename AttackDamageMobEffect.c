

void __fastcall AttackDamageMobEffect::~AttackDamageMobEffect(AttackDamageMobEffect *this)
{
  MobEffect *v1; // r0@1

  v1 = j_MobEffect::~MobEffect(this);
  j_j_j__ZdlPv_7((void *)v1);
}


_DWORD *__fastcall AttackDamageMobEffect::AttackDamageMobEffect(_DWORD *a1, unsigned int a2, int *a3, int *a4, int a5, unsigned int a6, int a7)
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
  j_MobEffect::MobEffect(__PAIR__(v7, (unsigned int)v10), v9, v8, a5, a6, a7, v11);
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
  *v10 = &off_271A480;
  return v10;
}


int __fastcall AttackDamageMobEffect::getAttributeModifierValue(AttackDamageMobEffect *this, int _R1, const AttributeModifier *a3)
{
  int v7; // r4@1
  int result; // r0@3

  __asm
  {
    VMOV            S2, R1
    VMOV.F32        S0, #1.0
    VLDR            S16, =1.3
    VCVT.F32.S32    S2, S2
  }
  v7 = *((_DWORD *)this + 1);
    VMOV.F32        S18, #-0.5
    VADD.F32        S20, S2, S0
  if ( v7 == j_MobEffect::getId((MobEffect *)MobEffect::WEAKNESS) )
    __asm { VMOVEQ.F32      S16, S18 }
    VMUL.F32        S0, S20, S16
    VMOV            R0, S0
  return result;
}


void __fastcall AttackDamageMobEffect::~AttackDamageMobEffect(AttackDamageMobEffect *this)
{
  AttackDamageMobEffect::~AttackDamageMobEffect(this);
}
