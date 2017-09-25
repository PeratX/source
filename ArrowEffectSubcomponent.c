

void __fastcall ArrowEffectSubcomponent::~ArrowEffectSubcomponent(ArrowEffectSubcomponent *this)
{
  ArrowEffectSubcomponent::~ArrowEffectSubcomponent(this);
}


MobEffect *__fastcall ArrowEffectSubcomponent::doOnHitEffect(ArrowEffectSubcomponent *this, ProjectileComponent *a2)
{
  ProjectileComponent *v2; // r4@1
  ArrowEffectSubcomponent *v3; // r8@1
  int v4; // r0@2
  MobEffect *result; // r0@2
  MobEffect *v6; // r0@3
  int v7; // r1@3
  MobEffect *v8; // r6@3
  char *v9; // r0@4
  int v10; // r1@4
  int v11; // r2@4
  int v12; // r3@4
  int v13; // r7@5
  __int16 v14; // r0@5
  int *v15; // r0@7
  signed int v16; // r7@7
  int v17; // r5@10
  unsigned int *v18; // r1@11
  unsigned int *v19; // r6@17
  int v20; // [sp+0h] [bp-B8h]@5
  int v21; // [sp+20h] [bp-98h]@5
  int v22; // [sp+44h] [bp-74h]@4
  int v23; // [sp+88h] [bp-30h]@4
  int v24; // [sp+8Ch] [bp-2Ch]@4
  int v25; // [sp+90h] [bp-28h]@4
  int v26; // [sp+94h] [bp-24h]@4
  Potion *v27; // [sp+98h] [bp-20h]@2
  int v28; // [sp+9Ch] [bp-1Ch]@10

  v2 = a2;
  v3 = this;
  if ( (*(int (**)(void))(**((_DWORD **)a2 + 4) + 488))() != 4194384 )
    return j_MobEffectSubcomponent::doOnHitEffect(v3, v2);
  v4 = j_Arrow::getAuxValue(*((Arrow **)v2 + 4));
  j_Potion::getPotion((Potion *)&v27, v4 - 1);
  result = v27;
  if ( !v27 )
    goto LABEL_28;
  v6 = (MobEffect *)j_Potion::getMobEffectId(v27);
  result = (MobEffect *)j_MobEffect::getById(v6, v7);
  v8 = result;
  if ( !result )
  {
    v16 = 0;
    goto LABEL_10;
  }
  v9 = j_Potion::getMobEffect(v27);
  v10 = *(_DWORD *)v9;
  v11 = *((_DWORD *)v9 + 1);
  v12 = *((_DWORD *)v9 + 2);
  v26 = *((_DWORD *)v9 + 3);
  v23 = v10;
  v24 = v11;
  v25 = v12;
  j_HitResult::HitResult((int)&v22, (int)v2 + 108);
  if ( v22 != 1
    || (j_HitResult::HitResult((int)&v20, (int)v2 + 108),
        v13 = v21,
        v14 = (*(int (__fastcall **)(int))(*(_DWORD *)v21 + 488))(v21),
        j_EntityClassTree::isMob(v14) != 1)
    || (result = (MobEffect *)(*(int (__fastcall **)(int, int *))(*(_DWORD *)v13 + 1072))(v13, &v23),
        result == (MobEffect *)1) )
    v15 = (int *)j_MobEffect::getResourceName(v8);
    EntityInteraction::setInteractText((int *)v3 + 1, v15);
    *((_DWORD *)v3 + 2) = j_MobEffectInstance::getDuration((MobEffectInstance *)&v23) / 8;
    *((_DWORD *)v3 + 3) = j_MobEffectInstance::getDuration((MobEffectInstance *)&v23) / 8;
    *((_DWORD *)v3 + 4) = j_MobEffectInstance::getDuration((MobEffectInstance *)&v23) / 8;
    result = (MobEffect *)j_MobEffectInstance::getAmplifier((MobEffectInstance *)&v23);
    *((_DWORD *)v3 + 5) = result;
  else
LABEL_28:
    v16 = 1;
LABEL_10:
  v17 = v28;
  if ( v28 )
    v18 = (unsigned int *)(v28 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        result = (MobEffect *)__ldrex(v18);
      while ( __strex((unsigned int)result - 1, v18) );
    }
    else
      result = (MobEffect *)(*v18)--;
    if ( result == (MobEffect *)1 )
      v19 = (unsigned int *)(v17 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v17 + 8))(v17);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = (MobEffect *)__ldrex(v19);
        while ( __strex((unsigned int)result - 1, v19) );
      }
      else
        result = (MobEffect *)(*v19)--;
      if ( result == (MobEffect *)1 )
        result = (MobEffect *)(*(int (__fastcall **)(int))(*(_DWORD *)v17 + 12))(v17);
  if ( !v16 )
  return result;
}


void __fastcall ArrowEffectSubcomponent::~ArrowEffectSubcomponent(ArrowEffectSubcomponent *this)
{
  ArrowEffectSubcomponent *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v4; // r12@3
  signed int v5; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_271EBD0;
  v2 = *((_DWORD *)this + 1);
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
  j_operator delete((void *)v1);
}
