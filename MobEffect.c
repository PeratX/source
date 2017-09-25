

int __fastcall MobEffect::_createInstantBuff(float a1, int a2, AttributeBuff **a3, int a4, int a5)
{
  AttributeBuff **v5; // r6@1
  AttributeBuff *v6; // r4@1
  int v7; // r8@1
  int v8; // r7@1
  int v9; // r5@1
  __int64 v10; // r2@1
  int v11; // r0@1
  unsigned int *v12; // r0@2
  unsigned int v13; // r1@4
  int v14; // r6@7
  unsigned int *v19; // r1@8
  unsigned int v20; // r0@10
  unsigned int *v21; // r5@14
  unsigned int v22; // r0@16
  int v25; // [sp+0h] [bp-28h]@1
  int v26; // [sp+4h] [bp-24h]@1

  v5 = a3;
  v6 = (AttributeBuff *)LODWORD(a1);
  v7 = a4;
  v8 = a2;
  v9 = AttributeBuff::getAmount(*a3);
  LODWORD(v10) = AttributeBuff::getType(*v5);
  InstantaneousAttributeBuff::InstantaneousAttributeBuff((int)v6, v9, v10);
  v25 = *(_DWORD *)(v8 + 56);
  v11 = *(_DWORD *)(v8 + 60);
  v26 = v11;
  if ( v11 )
  {
    v12 = (unsigned int *)(v11 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v13 = __ldrex(v12);
      while ( __strex(v13 + 1, v12) );
    }
    else
      ++*v12;
  }
  AttributeBuff::setValueAmplifier((int)v6, (int)&v25);
  v14 = v26;
  __asm { VLDR            S16, [SP,#0x28+arg_0] }
  if ( v26 )
    v19 = (unsigned int *)(v26 + 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 == 1 )
      v21 = (unsigned int *)(v14 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 8))(v14);
      if ( &pthread_create )
      {
        __dmb();
        do
          v22 = __ldrex(v21);
        while ( __strex(v22 - 1, v21) );
      }
      else
        v22 = (*v21)--;
      if ( v22 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 12))(v14);
  __asm { VMOV            R2, S16 }
  return AttributeBuff::setAmplificationAmount(v6, v7, _R2);
}


int __fastcall MobEffect::clearAttributeBuffs(int result)
{
  int v1; // r9@1
  __int64 v2; // kr00_8@1
  int v3; // r4@2
  int v4; // r6@3
  unsigned int *v5; // r1@4
  unsigned int *v6; // r5@10

  v1 = result;
  v2 = *(_QWORD *)(result + 72);
  if ( HIDWORD(v2) != (_DWORD)v2 )
  {
    v3 = v2;
    result = (int)&pthread_create_ptr;
    do
    {
      v4 = *(_DWORD *)(v3 + 8);
      if ( v4 )
      {
        v5 = (unsigned int *)(v4 + 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            result = __ldrex(v5);
          while ( __strex(result - 1, v5) );
        }
        else
          result = (*v5)--;
        if ( result == 1 )
          v6 = (unsigned int *)(v4 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
          if ( &pthread_create )
          {
            __dmb();
            do
              result = __ldrex(v6);
            while ( __strex(result - 1, v6) );
          }
          else
            result = (*v6)--;
          if ( result == 1 )
            result = (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
      }
      v3 += 12;
    }
    while ( v3 != HIDWORD(v2) );
  }
  *(_DWORD *)(v1 + 76) = v2;
  return result;
}


int __fastcall MobEffect::applyEffects(int result, Mob *a2, int a3, int a4)
{
  int v4; // r8@1
  int v5; // r11@2
  __int64 v6; // r0@2
  int v7; // r4@3
  AttributeBuff **v8; // r7@3
  int v9; // r1@4
  AttributeInstance *v10; // r6@4
  int v11; // r5@9
  int v12; // r9@9
  int v13; // r1@10
  AttributeInstance *v14; // r4@10
  char *v15; // r0@11
  int v16; // ST2C_4@11
  float v17; // ST28_4@11
  int v18; // r10@11
  int v19; // ST24_4@11
  char *v20; // r6@11
  int v21; // r11@11
  int v22; // r8@11
  int v23; // r0@11
  int i; // [sp+20h] [bp-F0h]@9
  int v25; // [sp+30h] [bp-E0h]@1
  Mob *v26; // [sp+34h] [bp-DCh]@1
  char v27; // [sp+38h] [bp-D8h]@11
  char v28; // [sp+68h] [bp-A8h]@7
  char v29; // [sp+B0h] [bp-60h]@6

  v26 = a2;
  v4 = a3;
  v25 = a4;
  if ( *((_DWORD *)a2 + 862) <= 0 )
  {
    v5 = result;
    v6 = *(_QWORD *)(result + 72);
    if ( (_DWORD)v6 != HIDWORD(v6) )
    {
      v7 = -HIDWORD(v6);
      v8 = (AttributeBuff **)(v6 + 4);
      do
      {
        v9 = (int)*(v8 - 1);
        v10 = (AttributeInstance *)(*(int (**)(void))(*(_DWORD *)v26 + 1000))();
        if ( v10 )
        {
          if ( (*(int (**)(void))(*(_DWORD *)*v8 + 8))() == 1 )
          {
            MobEffect::_createInstantBuff(COERCE_FLOAT(&v29), v5, v8, v25, 1065353216);
            AttributeInstance::addBuff(v10, (const AttributeBuff *)&v29);
            InstantaneousAttributeBuff::~InstantaneousAttributeBuff((InstantaneousAttributeBuff *)&v29);
          }
          else
            MobEffect::_createTemporalBuff((AttributeBuff *)&v28, v5, v8, v4, v25);
            AttributeInstance::addBuff(v10, (const AttributeBuff *)&v28);
            InstantaneousAttributeBuff::~InstantaneousAttributeBuff((InstantaneousAttributeBuff *)&v28);
        }
        v8 += 3;
      }
      while ( (AttributeBuff **)((char *)v8 + v7) != (AttributeBuff **)4 );
    }
    v11 = v5;
    result = *(_QWORD *)(v5 + 84) >> 32;
    v12 = *(_QWORD *)(v5 + 84);
    for ( i = result; i != v12; result = i )
      v13 = *(_DWORD *)v12;
      v14 = (AttributeInstance *)(*(int (**)(void))(*(_DWORD *)v26 + 1000))();
      if ( v14 )
        v15 = AttributeModifier::getId(*(AttributeModifier **)(v12 + 4));
        v16 = *(_DWORD *)v15;
        v17 = *((float *)v15 + 1);
        v18 = *((_DWORD *)v15 + 3);
        v19 = *((_DWORD *)v15 + 2);
        v20 = AttributeModifier::getName(*(AttributeModifier **)(v12 + 4));
        v21 = (*(int (__fastcall **)(int, int, _DWORD))(*(_DWORD *)v11 + 24))(v11, v25, *(_DWORD *)(v12 + 4));
        v22 = AttributeModifier::getOperation(*(AttributeModifier **)(v12 + 4));
        v23 = AttributeModifier::getOperand(*(AttributeModifier **)(v12 + 4));
        AttributeModifier::AttributeModifier((int)&v27, v19, v16, v17, v19, v18, (int)v20, v21, __PAIR__(v23, v22), 0);
        AttributeInstance::addModifier(v14, (const AttributeModifier *)&v27);
        AttributeModifier::~AttributeModifier((AttributeModifier *)&v27);
      v12 += 12;
  }
  return result;
}


int __fastcall MobEffect::isInstantaneous(MobEffect *this)
{
  return 0;
}


int __fastcall MobEffect::addAttributeBuff(int result, int a2, int a3)
{
  int v3; // r1@1
  unsigned int *v4; // r1@2
  unsigned int v5; // r2@4
  int v6; // r1@7 OVERLAPPED
  int v7; // r2@7
  int v8; // r2@8
  int v9; // r4@9
  unsigned int *v10; // r1@10
  unsigned int *v11; // r5@16
  int v12; // [sp+4h] [bp-1Ch]@1
  int v13; // [sp+8h] [bp-18h]@1
  int v14; // [sp+Ch] [bp-14h]@1

  v12 = a2;
  v13 = *(_DWORD *)a3;
  v3 = *(_DWORD *)(a3 + 4);
  v14 = v3;
  if ( v3 )
  {
    v4 = (unsigned int *)(v3 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 + 1, v4) );
    }
    else
      ++*v4;
  }
  *(_QWORD *)&v6 = *(_QWORD *)(result + 76);
  if ( v6 == v7 )
    result = std::vector<std::pair<Attribute const*,std::shared_ptr<AttributeBuff>>,std::allocator<std::pair<Attribute const*,std::shared_ptr<AttributeBuff>>>>::_M_emplace_back_aux<std::pair<Attribute const*,std::shared_ptr<AttributeBuff>>>(
               (unsigned __int64 *)(result + 72),
               (int)&v12);
    v9 = v14;
    if ( v14 )
      v10 = (unsigned int *)(v14 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v10);
        while ( __strex(result - 1, v10) );
      }
      else
        result = (*v10)--;
      if ( result == 1 )
        v11 = (unsigned int *)(v9 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 8))(v9);
        if ( &pthread_create )
        {
          __dmb();
          do
            result = __ldrex(v11);
          while ( __strex(result - 1, v11) );
        }
        else
          result = (*v11)--;
        if ( result == 1 )
          result = (*(int (__fastcall **)(int))(*(_DWORD *)v9 + 12))(v9);
  else
    *(_DWORD *)v6 = v12;
    *(_DWORD *)(v6 + 4) = v13;
    v8 = v14;
    v14 = 0;
    *(_DWORD *)(v6 + 8) = v8;
    v13 = 0;
    *(_DWORD *)(result + 76) = v6 + 12;
  return result;
}


void __fastcall MobEffect::formatDuration(MobEffect *this, const MobEffectInstance *a2)
{
  MobEffect::formatDuration(this, a2);
}


int __fastcall MobEffect::addAttributeModifier(int result, int a2, int a3)
{
  int v3; // r1@1
  unsigned int *v4; // r1@2
  unsigned int v5; // r2@4
  int v6; // r1@7 OVERLAPPED
  int v7; // r2@7
  int v8; // r2@8
  int v9; // r4@9
  unsigned int *v10; // r1@10
  unsigned int *v11; // r5@16
  int v12; // [sp+4h] [bp-1Ch]@1
  int v13; // [sp+8h] [bp-18h]@1
  int v14; // [sp+Ch] [bp-14h]@1

  v12 = a2;
  v13 = *(_DWORD *)a3;
  v3 = *(_DWORD *)(a3 + 4);
  v14 = v3;
  if ( v3 )
  {
    v4 = (unsigned int *)(v3 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 + 1, v4) );
    }
    else
      ++*v4;
  }
  *(_QWORD *)&v6 = *(_QWORD *)(result + 88);
  if ( v6 == v7 )
    result = std::vector<std::pair<Attribute const*,std::shared_ptr<AttributeModifier>>,std::allocator<std::pair<Attribute const*,std::shared_ptr<AttributeModifier>>>>::_M_emplace_back_aux<std::pair<Attribute const*,std::shared_ptr<AttributeModifier>>>(
               (unsigned __int64 *)(result + 84),
               (int)&v12);
    v9 = v14;
    if ( v14 )
      v10 = (unsigned int *)(v14 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v10);
        while ( __strex(result - 1, v10) );
      }
      else
        result = (*v10)--;
      if ( result == 1 )
        v11 = (unsigned int *)(v9 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 8))(v9);
        if ( &pthread_create )
        {
          __dmb();
          do
            result = __ldrex(v11);
          while ( __strex(result - 1, v11) );
        }
        else
          result = (*v11)--;
        if ( result == 1 )
          result = (*(int (__fastcall **)(int))(*(_DWORD *)v9 + 12))(v9);
  else
    *(_DWORD *)v6 = v12;
    *(_DWORD *)(v6 + 4) = v13;
    v8 = v14;
    v14 = 0;
    *(_DWORD *)(v6 + 8) = v8;
    v13 = 0;
    *(_DWORD *)(result + 88) = v6 + 12;
  return result;
}


void __fastcall MobEffect::~MobEffect(MobEffect *this)
{
  MobEffect *v1; // r0@1

  v1 = MobEffect::~MobEffect(this);
  j_j_j__ZdlPv_6((void *)v1);
}


char *__fastcall MobEffect::getComponentName(MobEffect *this)
{
  return (char *)this + 52;
}


signed int __fastcall MobEffect::hasIcon(MobEffect *this)
{
  signed int v1; // r1@1
  signed int result; // r0@1

  v1 = *((_DWORD *)this + 8);
  result = 0;
  if ( v1 > -1 )
    result = 1;
  return result;
}


char *__fastcall MobEffect::getResourceName(MobEffect *this)
{
  return (char *)this + 44;
}


int __fastcall MobEffect::_createAttributeModifer(int a1, int a2, AttributeModifier **a3, int a4)
{
  AttributeModifier **v4; // r7@1
  int v5; // ST20_4@1
  int v6; // r4@1
  int v7; // r5@1
  char *v8; // r0@1
  int v9; // r9@1
  float v10; // r10@1
  int v11; // r11@1
  int v12; // r8@1
  char *v13; // r6@1
  int v14; // r4@1
  int v15; // r5@1
  int v16; // r0@1

  v4 = a3;
  v5 = a1;
  v6 = a4;
  v7 = a2;
  v8 = AttributeModifier::getId(*a3);
  v9 = *(_DWORD *)v8;
  v10 = *((float *)v8 + 1);
  v11 = *((_DWORD *)v8 + 2);
  v12 = *((_DWORD *)v8 + 3);
  v13 = AttributeModifier::getName(*v4);
  v14 = (*(int (__fastcall **)(int, int, AttributeModifier *))(*(_DWORD *)v7 + 24))(v7, v6, *v4);
  v15 = AttributeModifier::getOperation(*v4);
  v16 = AttributeModifier::getOperand(*v4);
  return AttributeModifier::AttributeModifier(v5, 0, v9, v10, v11, v12, (int)v13, v14, __PAIR__(v16, v15), 0);
}


void __fastcall MobEffect::~MobEffect(MobEffect *this)
{
  MobEffect::~MobEffect(this);
}


char *__fastcall MobEffect::getIconName(MobEffect *this)
{
  MobEffect *v1; // r4@1
  _DWORD *v2; // r0@1
  char *v3; // r5@1
  size_t v4; // r2@1
  signed int v5; // r0@2

  v1 = this;
  v3 = (char *)this + 48;
  v2 = (_DWORD *)*((_DWORD *)this + 12);
  v4 = *(v2 - 3);
  if ( v4 == *((_DWORD *)Util::EMPTY_STRING - 3) )
    v5 = memcmp(v2, Util::EMPTY_STRING, v4) != 0;
  else
    v5 = 1;
  if ( !v5 )
    v3 = (char *)v1 + 44;
  return v3;
}


char *__fastcall MobEffect::viewAttributeModifiers(MobEffect *this)
{
  return (char *)this + 84;
}


void __fastcall MobEffect::removeEffects(MobEffect *this, Mob *a2)
{
  MobEffect *v2; // r9@1
  Mob *v3; // r4@1
  int i; // r6@1
  int v5; // r11@1
  int v6; // r0@2
  int v7; // r1@3
  unsigned int *v8; // r1@4
  unsigned int v9; // r2@6
  int v10; // r5@9
  unsigned int *v11; // r1@10
  unsigned int v12; // r0@12
  unsigned int *v13; // r7@16
  unsigned int v14; // r0@18
  int j; // r7@24
  int v16; // r10@24
  AttributeInstance *v17; // r0@25
  int v18; // r1@26
  unsigned int *v19; // r1@27
  unsigned int v20; // r2@29
  int v21; // r5@32
  unsigned int *v22; // r1@33
  unsigned int v23; // r0@35
  unsigned int *v24; // r6@39
  unsigned int v25; // r0@41
  int v26; // [sp+4h] [bp-34h]@26
  int v27; // [sp+8h] [bp-30h]@26
  int v28; // [sp+Ch] [bp-2Ch]@3
  int v29; // [sp+10h] [bp-28h]@3

  v2 = this;
  v3 = a2;
  v5 = *((_QWORD *)this + 9) >> 32;
  for ( i = *((_QWORD *)this + 9); i != v5; i += 12 )
  {
    v6 = (*(int (__fastcall **)(Mob *, _DWORD))(*(_DWORD *)v3 + 1000))(v3, *(_DWORD *)i);
    if ( v6 )
    {
      v28 = *(_DWORD *)(i + 4);
      v7 = *(_DWORD *)(i + 8);
      v29 = v7;
      if ( v7 )
      {
        v8 = (unsigned int *)(v7 + 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v9 = __ldrex(v8);
          while ( __strex(v9 + 1, v8) );
        }
        else
          ++*v8;
      }
      AttributeInstance::removeBuff(v6, &v28);
      v10 = v29;
      if ( v29 )
        v11 = (unsigned int *)(v29 + 4);
            v12 = __ldrex(v11);
          while ( __strex(v12 - 1, v11) );
          v12 = (*v11)--;
        if ( v12 == 1 )
          v13 = (unsigned int *)(v10 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 8))(v10);
          if ( &pthread_create )
          {
            __dmb();
            do
              v14 = __ldrex(v13);
            while ( __strex(v14 - 1, v13) );
          }
          else
            v14 = (*v13)--;
          if ( v14 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 12))(v10);
    }
  }
  v16 = *(_QWORD *)((char *)v2 + 84) >> 32;
  for ( j = *(_QWORD *)((char *)v2 + 84); j != v16; j += 12 )
    v17 = (AttributeInstance *)(*(int (__fastcall **)(Mob *, _DWORD))(*(_DWORD *)v3 + 1000))(v3, *(_DWORD *)j);
    if ( v17 )
      v26 = *(_DWORD *)(j + 4);
      v18 = *(_DWORD *)(j + 8);
      v27 = v18;
      if ( v18 )
        v19 = (unsigned int *)(v18 + 4);
            v20 = __ldrex(v19);
          while ( __strex(v20 + 1, v19) );
          ++*v19;
      AttributeInstance::removeModifier(v17, (const AttributeModifier **)&v26);
      v21 = v27;
      if ( v27 )
        v22 = (unsigned int *)(v27 + 4);
            v23 = __ldrex(v22);
          while ( __strex(v23 - 1, v22) );
          v23 = (*v22)--;
        if ( v23 == 1 )
          v24 = (unsigned int *)(v21 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v21 + 8))(v21);
              v25 = __ldrex(v24);
            while ( __strex(v25 - 1, v24) );
            v25 = (*v24)--;
          if ( v25 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v21 + 12))(v21);
}


MobEffect *__fastcall MobEffect::~MobEffect(MobEffect *this)
{
  MobEffect *v1; // r8@1
  int v2; // r5@1
  int v3; // r7@1
  int v4; // r4@2
  unsigned int *v5; // r1@3
  unsigned int v6; // r0@5
  unsigned int *v7; // r6@9
  unsigned int v8; // r0@11
  int v9; // r5@20
  int v10; // r7@20
  int v11; // r4@21
  unsigned int *v12; // r1@22
  unsigned int v13; // r0@24
  unsigned int *v14; // r6@28
  unsigned int v15; // r0@30
  int v16; // r5@39
  unsigned int *v17; // r1@40
  unsigned int v18; // r0@42
  unsigned int *v19; // r4@46
  unsigned int v20; // r0@48
  int v21; // r5@53
  unsigned int *v22; // r1@54
  unsigned int v23; // r0@56
  unsigned int *v24; // r4@60
  unsigned int v25; // r0@62
  int v26; // r1@67
  void *v27; // r0@67
  int v28; // r1@68
  void *v29; // r0@68
  int v30; // r1@69
  void *v31; // r0@69
  int v32; // r1@70
  void *v33; // r0@70
  unsigned int *v35; // r2@72
  signed int v36; // r1@74
  unsigned int *v37; // r2@76
  signed int v38; // r1@78
  unsigned int *v39; // r2@80
  signed int v40; // r1@82
  unsigned int *v41; // r2@84
  signed int v42; // r1@86

  v1 = this;
  *(_DWORD *)this = &off_26ED754;
  v3 = *(_QWORD *)((char *)this + 84) >> 32;
  v2 = *(_QWORD *)((char *)this + 84);
  if ( v2 != v3 )
  {
    do
    {
      v4 = *(_DWORD *)(v2 + 8);
      if ( v4 )
      {
        v5 = (unsigned int *)(v4 + 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v6 = __ldrex(v5);
          while ( __strex(v6 - 1, v5) );
        }
        else
          v6 = (*v5)--;
        if ( v6 == 1 )
          v7 = (unsigned int *)(v4 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v8 = __ldrex(v7);
            while ( __strex(v8 - 1, v7) );
          }
          else
            v8 = (*v7)--;
          if ( v8 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
      }
      v2 += 12;
    }
    while ( v2 != v3 );
    v2 = *((_DWORD *)v1 + 21);
  }
  if ( v2 )
    operator delete((void *)v2);
  v10 = *((_QWORD *)v1 + 9) >> 32;
  v9 = *((_QWORD *)v1 + 9);
  if ( v9 != v10 )
      v11 = *(_DWORD *)(v9 + 8);
      if ( v11 )
        v12 = (unsigned int *)(v11 + 4);
            v13 = __ldrex(v12);
          while ( __strex(v13 - 1, v12) );
          v13 = (*v12)--;
        if ( v13 == 1 )
          v14 = (unsigned int *)(v11 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 8))(v11);
              v15 = __ldrex(v14);
            while ( __strex(v15 - 1, v14) );
            v15 = (*v14)--;
          if ( v15 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 12))(v11);
      v9 += 12;
    while ( v9 != v10 );
    v9 = *((_DWORD *)v1 + 18);
  if ( v9 )
    operator delete((void *)v9);
  v16 = *((_DWORD *)v1 + 17);
  if ( v16 )
    v17 = (unsigned int *)(v16 + 4);
    if ( &pthread_create )
      __dmb();
      do
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
    else
      v18 = (*v17)--;
    if ( v18 == 1 )
      v19 = (unsigned int *)(v16 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 8))(v16);
      if ( &pthread_create )
        __dmb();
        do
          v20 = __ldrex(v19);
        while ( __strex(v20 - 1, v19) );
      else
        v20 = (*v19)--;
      if ( v20 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 12))(v16);
  v21 = *((_DWORD *)v1 + 15);
  if ( v21 )
    v22 = (unsigned int *)(v21 + 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 == 1 )
      v24 = (unsigned int *)(v21 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v21 + 8))(v21);
          v25 = __ldrex(v24);
        while ( __strex(v25 - 1, v24) );
        v25 = (*v24)--;
      if ( v25 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v21 + 12))(v21);
  v26 = *((_DWORD *)v1 + 13);
  v27 = (void *)(v26 - 12);
  if ( (int *)(v26 - 12) != &dword_28898C0 )
    v35 = (unsigned int *)(v26 - 4);
        v36 = __ldrex(v35);
      while ( __strex(v36 - 1, v35) );
      v36 = (*v35)--;
    if ( v36 <= 0 )
      j_j_j_j__ZdlPv_9(v27);
  v28 = *((_DWORD *)v1 + 12);
  v29 = (void *)(v28 - 12);
  if ( (int *)(v28 - 12) != &dword_28898C0 )
    v37 = (unsigned int *)(v28 - 4);
        v38 = __ldrex(v37);
      while ( __strex(v38 - 1, v37) );
      v38 = (*v37)--;
    if ( v38 <= 0 )
      j_j_j_j__ZdlPv_9(v29);
  v30 = *((_DWORD *)v1 + 11);
  v31 = (void *)(v30 - 12);
  if ( (int *)(v30 - 12) != &dword_28898C0 )
    v39 = (unsigned int *)(v30 - 4);
        v40 = __ldrex(v39);
      while ( __strex(v40 - 1, v39) );
      v40 = (*v39)--;
    if ( v40 <= 0 )
      j_j_j_j__ZdlPv_9(v31);
  v32 = *((_DWORD *)v1 + 7);
  v33 = (void *)(v32 - 12);
  if ( (int *)(v32 - 12) != &dword_28898C0 )
    v41 = (unsigned int *)(v32 - 4);
        v42 = __ldrex(v41);
      while ( __strex(v42 - 1, v41) );
      v42 = (*v41)--;
    if ( v42 <= 0 )
      j_j_j_j__ZdlPv_9(v33);
  return v1;
}


void __fastcall MobEffect::formatDuration(MobEffect *this, const MobEffectInstance *a2)
{
  MobEffectInstance *v2; // r5@1
  void **v3; // r4@1
  int v4; // r0@4

  v2 = a2;
  v3 = (void **)this;
  if ( MobEffectInstance::isNoCounter(a2) || MobEffectInstance::getDuration(v2) > 119999 )
  {
    sub_21E94B4(v3, "**:**");
  }
  else
    v4 = MobEffectInstance::getDuration(v2);
    Util::formatTickDuration((Util *)v3, v4);
}


unsigned int *__fastcall MobEffect::initEffects(MobEffect *this)
{
  int v1; // r5@1
  int v2; // r2@1
  _DWORD *v3; // r0@1
  void *v4; // r0@3
  int v5; // r0@4
  unsigned int *v6; // r1@5
  unsigned int v7; // r2@7
  int v8; // r4@10
  unsigned int *v9; // r1@11
  unsigned int v10; // r0@13
  unsigned int *v11; // r5@17
  unsigned int v12; // r0@19
  int v13; // r5@24
  int v14; // r2@24
  _DWORD *v15; // r0@24
  void *v16; // r0@26
  int v17; // r0@27
  unsigned int *v18; // r1@28
  unsigned int v19; // r2@30
  int v20; // r4@33
  unsigned int *v21; // r1@34
  unsigned int v22; // r0@36
  unsigned int *v23; // r5@40
  unsigned int v24; // r0@42
  int v25; // r5@47
  int v26; // r2@47
  _DWORD *v27; // r0@47
  void *v28; // r0@49
  int v29; // r5@50
  int v30; // r2@50
  _DWORD *v31; // r0@50
  void *v32; // r0@52
  int v33; // r5@53
  int v34; // r2@53
  _DWORD *v35; // r0@53
  void *v36; // r0@55
  int v37; // r0@56
  unsigned int *v38; // r1@57
  unsigned int v39; // r2@59
  int v40; // r4@62
  unsigned int *v41; // r1@63
  unsigned int v42; // r0@65
  unsigned int *v43; // r5@69
  unsigned int v44; // r0@71
  int v45; // r5@76
  int v46; // r2@76
  _DWORD *v47; // r0@76
  void *v48; // r0@78
  int v49; // r0@79
  unsigned int *v50; // r1@80
  unsigned int v51; // r2@82
  int v52; // r4@85
  unsigned int *v53; // r1@86
  unsigned int v54; // r0@88
  unsigned int *v55; // r5@92
  unsigned int v56; // r0@94
  int v57; // r6@99
  __int64 v58; // kr00_8@99
  unsigned int *v59; // r1@100
  unsigned int v60; // r2@102
  int v61; // r5@105
  unsigned int *v62; // r0@107
  unsigned int v63; // r1@109
  unsigned int *v64; // r1@113
  unsigned int v65; // r0@115
  unsigned int *v66; // r7@119
  unsigned int v67; // r0@121
  unsigned int *v68; // r1@128
  unsigned int v69; // r0@130
  unsigned int *v70; // r5@134
  unsigned int v71; // r0@136
  int v72; // r5@141
  int v73; // r2@141
  _DWORD *v74; // r0@141
  void *v75; // r0@143
  int v76; // r0@144
  unsigned int *v77; // r1@145
  unsigned int v78; // r2@147
  int v79; // r4@150
  unsigned int *v80; // r1@151
  unsigned int v81; // r0@153
  unsigned int *v82; // r5@157
  unsigned int v83; // r0@159
  int v84; // r6@164
  __int64 v85; // kr08_8@164
  unsigned int *v86; // r1@165
  unsigned int v87; // r2@167
  int v88; // r5@170
  unsigned int *v89; // r0@172
  unsigned int v90; // r1@174
  unsigned int *v91; // r1@178
  unsigned int v92; // r0@180
  unsigned int *v93; // r7@184
  unsigned int v94; // r0@186
  unsigned int *v95; // r1@193
  unsigned int v96; // r0@195
  unsigned int *v97; // r5@199
  unsigned int v98; // r0@201
  int v99; // r5@206
  int v100; // r2@206
  _DWORD *v101; // r0@206
  void *v102; // r0@208
  int v103; // r5@209
  int v104; // r2@209
  _DWORD *v105; // r0@209
  void *v106; // r0@211
  int v107; // r5@212
  int v108; // r2@212
  _DWORD *v109; // r0@212
  void *v110; // r0@214
  int v111; // r0@215
  unsigned int *v112; // r1@216
  unsigned int v113; // r2@218
  int v114; // r4@221
  unsigned int *v115; // r1@222
  unsigned int v116; // r0@224
  unsigned int *v117; // r5@228
  unsigned int v118; // r0@230
  int v119; // r6@235
  __int64 v120; // kr10_8@235
  unsigned int *v121; // r1@236
  unsigned int v122; // r2@238
  int v123; // r5@241
  unsigned int *v124; // r0@243
  unsigned int v125; // r1@245
  unsigned int *v126; // r1@249
  unsigned int v127; // r0@251
  unsigned int *v128; // r7@255
  unsigned int v129; // r0@257
  unsigned int *v130; // r1@264
  unsigned int v131; // r0@266
  unsigned int *v132; // r5@270
  unsigned int v133; // r0@272
  int v134; // r5@277
  int v135; // r2@277
  _DWORD *v136; // r0@277
  void *v137; // r0@279
  int v138; // r5@280
  int v139; // r2@280
  _DWORD *v140; // r0@280
  void *v141; // r0@282
  int v142; // r5@283
  int v143; // r2@283
  _DWORD *v144; // r0@283
  void *v145; // r0@285
  int v146; // r5@286
  int v147; // r2@286
  _DWORD *v148; // r0@286
  void *v149; // r0@288
  int v150; // r5@289
  int v151; // r2@289
  _DWORD *v152; // r0@289
  void *v153; // r0@291
  int v154; // r5@292
  int v155; // r2@292
  _DWORD *v156; // r0@292
  void *v157; // r0@294
  int v158; // r5@295
  int v159; // r2@295
  _DWORD *v160; // r0@295
  void *v161; // r0@297
  int v162; // r0@298
  unsigned int *v163; // r1@299
  unsigned int v164; // r2@301
  int v165; // r4@304
  unsigned int *v166; // r1@305
  unsigned int v167; // r0@307
  unsigned int *v168; // r5@311
  unsigned int v169; // r0@313
  int v170; // r6@318
  __int64 v171; // kr18_8@318
  unsigned int *v172; // r1@319
  unsigned int v173; // r2@321
  int v174; // r5@324
  unsigned int *v175; // r0@326
  unsigned int v176; // r1@328
  unsigned int *v177; // r1@332
  unsigned int v178; // r0@334
  unsigned int *v179; // r7@338
  unsigned int v180; // r0@340
  unsigned int *v181; // r1@347
  unsigned int v182; // r0@349
  unsigned int *v183; // r5@353
  unsigned int v184; // r0@355
  int v185; // r6@360
  __int64 v186; // kr20_8@360
  unsigned int *v187; // r1@361
  unsigned int v188; // r2@363
  int v189; // r5@366
  unsigned int *v190; // r0@368
  unsigned int v191; // r1@370
  unsigned int *v192; // r1@374
  unsigned int v193; // r0@376
  unsigned int *v194; // r7@380
  unsigned int v195; // r0@382
  unsigned int *v196; // r1@389
  unsigned int v197; // r0@391
  unsigned int *v198; // r5@395
  unsigned int v199; // r0@397
  int v200; // r5@402
  int v201; // r2@402
  _DWORD *v202; // r0@402
  void *v203; // r0@404
  int v204; // r0@405
  unsigned int *v205; // r1@406
  unsigned int v206; // r2@408
  int v207; // r4@411
  unsigned int *v208; // r1@412
  unsigned int v209; // r0@414
  unsigned int *v210; // r5@418
  unsigned int v211; // r0@420
  int v212; // r5@425
  int v213; // r2@425
  _DWORD *v214; // r0@425
  void *v215; // r0@427
  int v216; // r0@428
  unsigned int *v217; // r1@429
  unsigned int v218; // r2@431
  int v219; // r4@434
  unsigned int *v220; // r1@435
  unsigned int v221; // r0@437
  unsigned int *v222; // r5@441
  unsigned int v223; // r0@443
  int v224; // r6@448
  __int64 v225; // kr28_8@448
  unsigned int *v226; // r1@449
  unsigned int v227; // r2@451
  int v228; // r7@454
  unsigned int *v229; // r0@456
  unsigned int v230; // r1@458
  unsigned int *v231; // r1@462
  unsigned int v232; // r0@464
  unsigned int *v233; // r5@468
  unsigned int v234; // r0@470
  unsigned int *v235; // r1@477
  unsigned int v236; // r0@479
  unsigned int *v237; // r5@483
  unsigned int v238; // r0@485
  int v239; // r5@490
  int v240; // r2@490
  _DWORD *v241; // r0@490
  void *v242; // r0@492
  int v243; // r0@493
  unsigned int *v244; // r1@494
  unsigned int v245; // r2@496
  int v246; // r4@499
  unsigned int *v247; // r1@500
  unsigned int v248; // r0@502
  unsigned int *v249; // r5@506
  unsigned int v250; // r0@508
  int v251; // r6@513
  __int64 v252; // kr30_8@513
  unsigned int *v253; // r1@514
  unsigned int v254; // r2@516
  int v255; // r5@519
  unsigned int *v256; // r0@521
  unsigned int v257; // r1@523
  unsigned int *v258; // r1@527
  unsigned int v259; // r0@529
  unsigned int *v260; // r7@533
  unsigned int v261; // r0@535
  unsigned int *v262; // r1@542
  unsigned int v263; // r0@544
  unsigned int *v264; // r5@548
  unsigned int v265; // r0@550
  int v266; // r5@555
  int v267; // r2@555
  _DWORD *v268; // r0@555
  void *v269; // r0@557
  int v270; // r0@558
  unsigned int *v271; // r1@559
  unsigned int v272; // r2@561
  int v273; // r4@564
  unsigned int *v274; // r1@565
  unsigned int v275; // r0@567
  unsigned int *v276; // r5@571
  unsigned int v277; // r0@573
  int v278; // r5@578
  int v279; // r2@578
  _DWORD *v280; // r0@578
  void *v281; // r0@580
  int v282; // r0@581
  unsigned int *v283; // r1@582
  unsigned int v284; // r2@584
  int v285; // r4@587
  unsigned int *v286; // r1@588
  unsigned int v287; // r0@590
  unsigned int *v288; // r5@594
  unsigned int v289; // r0@596
  int v290; // r6@601
  __int64 v291; // kr38_8@601
  unsigned int *v292; // r1@602
  unsigned int v293; // r2@604
  int v294; // r5@607
  unsigned int *v295; // r0@609
  unsigned int v296; // r1@611
  unsigned int *v297; // r1@615
  unsigned int v298; // r0@617
  unsigned int *v299; // r7@621
  unsigned int v300; // r0@623
  unsigned int *v301; // r1@630
  unsigned int v302; // r0@632
  unsigned int *v303; // r5@636
  unsigned int v304; // r0@638
  int v305; // r5@643
  int v306; // r2@643
  _DWORD *v307; // r0@643
  void *v308; // r0@645
  int v309; // r0@646
  unsigned int *v310; // r1@647
  unsigned int v311; // r2@649
  int v312; // r4@652
  unsigned int *v313; // r1@653
  unsigned int v314; // r0@655
  unsigned int *v315; // r5@659
  unsigned int v316; // r0@661
  int v317; // r6@666
  __int64 v318; // kr40_8@666
  unsigned int *v319; // r1@667
  unsigned int v320; // r2@669
  int v321; // r5@672
  unsigned int *v322; // r0@674
  unsigned int v323; // r1@676
  unsigned int *v324; // r1@680
  unsigned int v325; // r0@682
  unsigned int *v326; // r7@686
  unsigned int v327; // r0@688
  unsigned int *v328; // r1@695
  unsigned int v329; // r0@697
  unsigned int *v330; // r5@701
  unsigned int v331; // r0@703
  int v332; // r5@708
  int v333; // r2@708
  _DWORD *v334; // r0@708
  void *v335; // r0@710
  int v336; // r5@711
  int v337; // r2@711
  _DWORD *v338; // r0@711
  void *v339; // r0@713
  int v340; // r0@714
  unsigned int *v341; // r1@715
  unsigned int v342; // r2@717
  int v343; // r4@720
  unsigned int *v344; // r1@721
  unsigned int v345; // r0@723
  unsigned int *v346; // r5@727
  unsigned int v347; // r0@729
  int v348; // r6@734
  unsigned int *result; // r0@734
  int v350; // r4@734
  unsigned int *v351; // r1@735
  unsigned int v352; // r2@737
  int v353; // r5@740
  unsigned int v354; // r1@744
  unsigned int *v355; // r1@748
  unsigned int *v356; // r7@754
  unsigned int *v357; // r1@763
  unsigned int *v358; // r5@769
  unsigned int *v359; // r2@777
  signed int v360; // r1@779
  unsigned int *v361; // r2@781
  signed int v362; // r1@783
  unsigned int *v363; // r2@785
  signed int v364; // r1@787
  unsigned int *v365; // r2@789
  signed int v366; // r1@791
  unsigned int *v367; // r2@793
  signed int v368; // r1@795
  unsigned int *v369; // r2@797
  signed int v370; // r1@799
  unsigned int *v371; // r2@801
  signed int v372; // r1@803
  unsigned int *v373; // r2@805
  signed int v374; // r1@807
  unsigned int *v375; // r2@809
  signed int v376; // r1@811
  unsigned int *v377; // r2@813
  signed int v378; // r1@815
  unsigned int *v379; // r2@817
  signed int v380; // r1@819
  unsigned int *v381; // r2@821
  signed int v382; // r1@823
  unsigned int *v383; // r2@825
  signed int v384; // r1@827
  unsigned int *v385; // r2@829
  signed int v386; // r1@831
  unsigned int *v387; // r2@833
  signed int v388; // r1@835
  unsigned int *v389; // r2@837
  signed int v390; // r1@839
  unsigned int *v391; // r2@841
  signed int v392; // r1@843
  unsigned int *v393; // r2@845
  signed int v394; // r1@847
  unsigned int *v395; // r2@849
  signed int v396; // r1@851
  unsigned int *v397; // r2@853
  signed int v398; // r1@855
  unsigned int *v399; // r2@857
  signed int v400; // r1@859
  unsigned int *v401; // r2@861
  signed int v402; // r1@863
  unsigned int *v403; // r2@865
  signed int v404; // r1@867
  unsigned int *v405; // r2@869
  signed int v406; // r1@871
  unsigned int *v407; // r2@873
  signed int v408; // r1@875
  int v409; // [sp+14h] [bp-34Ch]@714
  int v410; // [sp+18h] [bp-348h]@714
  int v411; // [sp+1Ch] [bp-344h]@711
  int v412; // [sp+20h] [bp-340h]@711
  char v413; // [sp+27h] [bp-339h]@711
  int v414; // [sp+2Ch] [bp-334h]@711
  int v415; // [sp+30h] [bp-330h]@708
  int v416; // [sp+34h] [bp-32Ch]@708
  char v417; // [sp+3Bh] [bp-325h]@708
  int v418; // [sp+40h] [bp-320h]@708
  int v419; // [sp+44h] [bp-31Ch]@646
  int v420; // [sp+48h] [bp-318h]@646
  int v421; // [sp+4Ch] [bp-314h]@643
  int v422; // [sp+50h] [bp-310h]@643
  char v423; // [sp+57h] [bp-309h]@643
  int v424; // [sp+5Ch] [bp-304h]@643
  int v425; // [sp+60h] [bp-300h]@581
  int v426; // [sp+64h] [bp-2FCh]@581
  int v427; // [sp+68h] [bp-2F8h]@578
  int v428; // [sp+6Ch] [bp-2F4h]@578
  char v429; // [sp+73h] [bp-2EDh]@578
  int v430; // [sp+78h] [bp-2E8h]@578
  int v431; // [sp+7Ch] [bp-2E4h]@558
  int v432; // [sp+80h] [bp-2E0h]@558
  int v433; // [sp+84h] [bp-2DCh]@555
  int v434; // [sp+88h] [bp-2D8h]@555
  char v435; // [sp+8Fh] [bp-2D1h]@555
  int v436; // [sp+94h] [bp-2CCh]@555
  int v437; // [sp+98h] [bp-2C8h]@493
  int v438; // [sp+9Ch] [bp-2C4h]@493
  int v439; // [sp+A0h] [bp-2C0h]@490
  int v440; // [sp+A4h] [bp-2BCh]@490
  char v441; // [sp+ABh] [bp-2B5h]@490
  int v442; // [sp+B0h] [bp-2B0h]@490
  int v443; // [sp+B4h] [bp-2ACh]@428
  int v444; // [sp+B8h] [bp-2A8h]@428
  int v445; // [sp+BCh] [bp-2A4h]@425
  int v446; // [sp+C0h] [bp-2A0h]@425
  char v447; // [sp+C7h] [bp-299h]@425
  int v448; // [sp+CCh] [bp-294h]@425
  int v449; // [sp+D0h] [bp-290h]@405
  int v450; // [sp+D4h] [bp-28Ch]@405
  int v451; // [sp+D8h] [bp-288h]@402
  int v452; // [sp+DCh] [bp-284h]@402
  char v453; // [sp+E3h] [bp-27Dh]@402
  int v454; // [sp+E8h] [bp-278h]@402
  int v455; // [sp+ECh] [bp-274h]@298
  int v456; // [sp+F0h] [bp-270h]@298
  int v457; // [sp+F4h] [bp-26Ch]@295
  int v458; // [sp+F8h] [bp-268h]@295
  char v459; // [sp+FFh] [bp-261h]@295
  int v460; // [sp+104h] [bp-25Ch]@295
  int v461; // [sp+108h] [bp-258h]@292
  int v462; // [sp+10Ch] [bp-254h]@292
  char v463; // [sp+113h] [bp-24Dh]@292
  int v464; // [sp+118h] [bp-248h]@292
  int v465; // [sp+11Ch] [bp-244h]@289
  int v466; // [sp+120h] [bp-240h]@289
  char v467; // [sp+127h] [bp-239h]@289
  int v468; // [sp+12Ch] [bp-234h]@289
  int v469; // [sp+130h] [bp-230h]@286
  int v470; // [sp+134h] [bp-22Ch]@286
  char v471; // [sp+13Bh] [bp-225h]@286
  int v472; // [sp+140h] [bp-220h]@286
  int v473; // [sp+144h] [bp-21Ch]@283
  int v474; // [sp+148h] [bp-218h]@283
  char v475; // [sp+14Fh] [bp-211h]@283
  int v476; // [sp+154h] [bp-20Ch]@283
  int v477; // [sp+158h] [bp-208h]@280
  int v478; // [sp+15Ch] [bp-204h]@280
  char v479; // [sp+163h] [bp-1FDh]@280
  int v480; // [sp+168h] [bp-1F8h]@280
  int v481; // [sp+16Ch] [bp-1F4h]@277
  int v482; // [sp+170h] [bp-1F0h]@277
  char v483; // [sp+177h] [bp-1E9h]@277
  int v484; // [sp+17Ch] [bp-1E4h]@277
  int v485; // [sp+180h] [bp-1E0h]@215
  int v486; // [sp+184h] [bp-1DCh]@215
  int v487; // [sp+188h] [bp-1D8h]@212
  int v488; // [sp+18Ch] [bp-1D4h]@212
  char v489; // [sp+193h] [bp-1CDh]@212
  int v490; // [sp+198h] [bp-1C8h]@212
  int v491; // [sp+19Ch] [bp-1C4h]@209
  int v492; // [sp+1A0h] [bp-1C0h]@209
  char v493; // [sp+1A7h] [bp-1B9h]@209
  int v494; // [sp+1ACh] [bp-1B4h]@209
  int v495; // [sp+1B0h] [bp-1B0h]@206
  int v496; // [sp+1B4h] [bp-1ACh]@206
  char v497; // [sp+1BBh] [bp-1A5h]@206
  int v498; // [sp+1C0h] [bp-1A0h]@206
  int v499; // [sp+1C4h] [bp-19Ch]@144
  int v500; // [sp+1C8h] [bp-198h]@144
  int v501; // [sp+1CCh] [bp-194h]@141
  int v502; // [sp+1D0h] [bp-190h]@141
  char v503; // [sp+1D7h] [bp-189h]@141
  int v504; // [sp+1DCh] [bp-184h]@141
  int v505; // [sp+1E0h] [bp-180h]@79
  int v506; // [sp+1E4h] [bp-17Ch]@79
  int v507; // [sp+1E8h] [bp-178h]@76
  int v508; // [sp+1ECh] [bp-174h]@76
  char v509; // [sp+1F3h] [bp-16Dh]@76
  int v510; // [sp+1F8h] [bp-168h]@76
  int v511; // [sp+1FCh] [bp-164h]@56
  int v512; // [sp+200h] [bp-160h]@56
  int v513; // [sp+204h] [bp-15Ch]@53
  int v514; // [sp+208h] [bp-158h]@53
  char v515; // [sp+20Fh] [bp-151h]@53
  int v516; // [sp+214h] [bp-14Ch]@53
  int v517; // [sp+218h] [bp-148h]@50
  int v518; // [sp+21Ch] [bp-144h]@50
  char v519; // [sp+223h] [bp-13Dh]@50
  int v520; // [sp+228h] [bp-138h]@50
  int v521; // [sp+22Ch] [bp-134h]@47
  int v522; // [sp+230h] [bp-130h]@47
  char v523; // [sp+237h] [bp-129h]@47
  int v524; // [sp+23Ch] [bp-124h]@47
  int v525; // [sp+240h] [bp-120h]@27
  int v526; // [sp+244h] [bp-11Ch]@27
  __int64 v527; // [sp+248h] [bp-118h]@24
  char v528; // [sp+253h] [bp-10Dh]@24
  int v529; // [sp+258h] [bp-108h]@24
  int v530; // [sp+25Ch] [bp-104h]@4
  int v531; // [sp+260h] [bp-100h]@4
  __int64 v532; // [sp+264h] [bp-FCh]@1
  char v533; // [sp+26Fh] [bp-F1h]@1
  int v534; // [sp+274h] [bp-ECh]@1
  int v535; // [sp+278h] [bp-E8h]@1
  int v536; // [sp+27Ch] [bp-E4h]@1
  int v537; // [sp+280h] [bp-E0h]@24
  int v538; // [sp+284h] [bp-DCh]@24
  int v539; // [sp+288h] [bp-D8h]@47
  int v540; // [sp+28Ch] [bp-D4h]@47
  int v541; // [sp+290h] [bp-D0h]@50
  int v542; // [sp+294h] [bp-CCh]@50
  int v543; // [sp+298h] [bp-C8h]@53
  int v544; // [sp+29Ch] [bp-C4h]@53
  int v545; // [sp+2A0h] [bp-C0h]@76
  int v546; // [sp+2A4h] [bp-BCh]@76
  int v547; // [sp+2A8h] [bp-B8h]@141
  int v548; // [sp+2ACh] [bp-B4h]@141
  int v549; // [sp+2B0h] [bp-B0h]@206
  int v550; // [sp+2B4h] [bp-ACh]@206
  int v551; // [sp+2B8h] [bp-A8h]@209
  int v552; // [sp+2BCh] [bp-A4h]@209
  int v553; // [sp+2C0h] [bp-A0h]@212
  int v554; // [sp+2C4h] [bp-9Ch]@212
  int v555; // [sp+2C8h] [bp-98h]@277
  int v556; // [sp+2CCh] [bp-94h]@277
  int v557; // [sp+2D0h] [bp-90h]@280
  int v558; // [sp+2D4h] [bp-8Ch]@280
  int v559; // [sp+2D8h] [bp-88h]@283
  int v560; // [sp+2DCh] [bp-84h]@283
  int v561; // [sp+2E0h] [bp-80h]@286
  int v562; // [sp+2E4h] [bp-7Ch]@286
  int v563; // [sp+2E8h] [bp-78h]@289
  int v564; // [sp+2ECh] [bp-74h]@289
  int v565; // [sp+2F0h] [bp-70h]@292
  int v566; // [sp+2F4h] [bp-6Ch]@292
  int v567; // [sp+2F8h] [bp-68h]@295
  int v568; // [sp+2FCh] [bp-64h]@295
  int v569; // [sp+300h] [bp-60h]@402
  int v570; // [sp+304h] [bp-5Ch]@402
  int v571; // [sp+308h] [bp-58h]@425
  int v572; // [sp+30Ch] [bp-54h]@425
  int v573; // [sp+310h] [bp-50h]@490
  int v574; // [sp+314h] [bp-4Ch]@490
  int v575; // [sp+318h] [bp-48h]@555
  int v576; // [sp+31Ch] [bp-44h]@555
  int v577; // [sp+320h] [bp-40h]@578
  int v578; // [sp+324h] [bp-3Ch]@578
  int v579; // [sp+328h] [bp-38h]@643
  int v580; // [sp+32Ch] [bp-34h]@643
  int v581; // [sp+330h] [bp-30h]@708
  int v582; // [sp+334h] [bp-2Ch]@708
  int v583; // [sp+338h] [bp-28h]@711
  int v584; // [sp+33Ch] [bp-24h]@711

  sub_21E94B4((void **)&v534, "speed");
  v533 = 0;
  v532 = 35096162050506752LL;
  v536 = 1;
  std::make_unique<MobEffect,int &,std::string const&,char const(&)[17],bool,int,int>(
    (unsigned int *)&v535,
    (unsigned int *)&v536,
    &v534,
    "potion.moveSpeed",
    &v533,
    (unsigned int *)&v532 + 1,
    (int *)&v532);
  v1 = v535;
  *(_DWORD *)std::__detail::_Map_base<std::string,std::pair<std::string const,MobEffect *>,std::allocator<std::pair<std::string const,MobEffect *>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
               (int)&dword_27FB5F4,
               (int **)&v534) = v1;
  v2 = *(_DWORD *)(v1 + 4);
  v535 = 0;
  v3 = MobEffect::mMobEffects[v2];
  MobEffect::mMobEffects[v2] = (_DWORD *)v1;
  if ( v3 )
    (*(void (**)(void))(*v3 + 4))();
  MobEffect::MOVEMENT_SPEED = v1;
  v4 = (void *)(v534 - 12);
  if ( (int *)(v534 - 12) != &dword_28898C0 )
  {
    v359 = (unsigned int *)(v534 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v360 = __ldrex(v359);
      while ( __strex(v360 - 1, v359) );
    }
    else
      v360 = (*v359)--;
    if ( v360 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  v5 = MobEffect::MOVEMENT_SPEED;
  v530 = SharedModifiers::MOVEMENT_SPEED;
  v531 = unk_27F82D4;
  if ( unk_27F82D4 )
    v6 = (unsigned int *)(unk_27F82D4 + 4);
        v7 = __ldrex(v6);
      while ( __strex(v7 + 1, v6) );
      ++*v6;
  MobEffect::addAttributeModifier(v5, (int)&SharedAttributes::MOVEMENT_SPEED, (int)&v530);
  v8 = v531;
  if ( v531 )
    v9 = (unsigned int *)(v531 + 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 == 1 )
      v11 = (unsigned int *)(v8 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v8);
      if ( &pthread_create )
      {
        __dmb();
        do
          v12 = __ldrex(v11);
        while ( __strex(v12 - 1, v11) );
      }
      else
        v12 = (*v11)--;
      if ( v12 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 12))(v8);
  sub_21E94B4((void **)&v529, "slowness");
  v528 = 1;
  v527 = 25452049210540033LL;
  v538 = 2;
  std::make_unique<MobEffect,int &,std::string const&,char const(&)[20],bool,int,int>(
    (unsigned int *)&v537,
    (unsigned int *)&v538,
    &v529,
    "potion.moveSlowdown",
    &v528,
    (unsigned int *)&v527 + 1,
    (int *)&v527);
  v13 = v537;
               (int **)&v529) = v13;
  v14 = *(_DWORD *)(v13 + 4);
  v537 = 0;
  v15 = MobEffect::mMobEffects[v14];
  MobEffect::mMobEffects[v14] = (_DWORD *)v13;
  if ( v15 )
    (*(void (**)(void))(*v15 + 4))();
  MobEffect::MOVEMENT_SLOWDOWN = v13;
  v16 = (void *)(v529 - 12);
  if ( (int *)(v529 - 12) != &dword_28898C0 )
    v361 = (unsigned int *)(v529 - 4);
        v362 = __ldrex(v361);
      while ( __strex(v362 - 1, v361) );
      v362 = (*v361)--;
    if ( v362 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  v17 = MobEffect::MOVEMENT_SLOWDOWN;
  v525 = SharedModifiers::MOVEMENT_SLOWDOWN;
  v526 = unk_27F82DC;
  if ( unk_27F82DC )
    v18 = (unsigned int *)(unk_27F82DC + 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 + 1, v18) );
      ++*v18;
  MobEffect::addAttributeModifier(v17, (int)&SharedAttributes::MOVEMENT_SPEED, (int)&v525);
  v20 = v526;
  if ( v526 )
    v21 = (unsigned int *)(v526 + 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 == 1 )
      v23 = (unsigned int *)(v20 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v20 + 8))(v20);
          v24 = __ldrex(v23);
        while ( __strex(v24 - 1, v23) );
        v24 = (*v23)--;
      if ( v24 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v20 + 12))(v20);
  sub_21E94B4((void **)&v524, "haste");
  v523 = 0;
  v522 = 14270531;
  v521 = 2;
  v540 = 3;
  std::make_unique<MobEffect,int &,std::string const&,char const(&)[16],bool,int,int>(
    (unsigned int *)&v539,
    (unsigned int *)&v540,
    &v524,
    "potion.digSpeed",
    &v523,
    (unsigned int *)&v522,
    &v521);
  v25 = v539;
               (int **)&v524) = v25;
  v26 = *(_DWORD *)(v25 + 4);
  v539 = 0;
  v27 = MobEffect::mMobEffects[v26];
  MobEffect::mMobEffects[v26] = (_DWORD *)v25;
  if ( v27 )
    (*(void (**)(void))(*v27 + 4))();
  MobEffect::DIG_SPEED = v25;
  v28 = (void *)(v524 - 12);
  if ( (int *)(v524 - 12) != &dword_28898C0 )
    v363 = (unsigned int *)(v524 - 4);
        v364 = __ldrex(v363);
      while ( __strex(v364 - 1, v363) );
      v364 = (*v363)--;
    if ( v364 <= 0 )
      j_j_j_j__ZdlPv_9(v28);
  *(_DWORD *)(MobEffect::DIG_SPEED + 36) = 1069547520;
  sub_21E94B4((void **)&v520, "mining_fatigue");
  v519 = 1;
  v518 = 4866583;
  v517 = 3;
  v542 = 4;
  std::make_unique<MobEffect,int &,std::string const&,char const(&)[19],bool,int,int>(
    (unsigned int *)&v541,
    (unsigned int *)&v542,
    &v520,
    "potion.digSlowDown",
    &v519,
    (unsigned int *)&v518,
    &v517);
  v29 = v541;
               (int **)&v520) = v29;
  v30 = *(_DWORD *)(v29 + 4);
  v541 = 0;
  v31 = MobEffect::mMobEffects[v30];
  MobEffect::mMobEffects[v30] = (_DWORD *)v29;
  if ( v31 )
    (*(void (**)(void))(*v31 + 4))();
  MobEffect::DIG_SLOWDOWN = v29;
  v32 = (void *)(v520 - 12);
  if ( (int *)(v520 - 12) != &dword_28898C0 )
    v365 = (unsigned int *)(v520 - 4);
        v366 = __ldrex(v365);
      while ( __strex(v366 - 1, v365) );
      v366 = (*v365)--;
    if ( v366 <= 0 )
      j_j_j_j__ZdlPv_9(v32);
  sub_21E94B4((void **)&v516, "strength");
  v515 = 0;
  v514 = 9643043;
  v513 = 4;
  v544 = 5;
  std::make_unique<AttackDamageMobEffect,int &,std::string const&,char const(&)[19],bool,int,int>(
    &v543,
    (unsigned int *)&v544,
    &v516,
    "potion.damageBoost",
    &v515,
    (unsigned int *)&v514,
    &v513);
  v33 = v543;
               (int **)&v516) = v33;
  v34 = *(_DWORD *)(v33 + 4);
  v543 = 0;
  v35 = MobEffect::mMobEffects[v34];
  MobEffect::mMobEffects[v34] = (_DWORD *)v33;
  if ( v35 )
    (*(void (**)(void))(*v35 + 4))();
  MobEffect::DAMAGE_BOOST = v33;
  v36 = (void *)(v516 - 12);
  if ( (int *)(v516 - 12) != &dword_28898C0 )
    v367 = (unsigned int *)(v516 - 4);
        v368 = __ldrex(v367);
      while ( __strex(v368 - 1, v367) );
      v368 = (*v367)--;
    if ( v368 <= 0 )
      j_j_j_j__ZdlPv_9(v36);
  v37 = MobEffect::DAMAGE_BOOST;
  v511 = SharedModifiers::DAMAGE_BOOST;
  v512 = unk_27F82C4;
  if ( unk_27F82C4 )
    v38 = (unsigned int *)(unk_27F82C4 + 4);
        v39 = __ldrex(v38);
      while ( __strex(v39 + 1, v38) );
      ++*v38;
  MobEffect::addAttributeModifier(v37, (int)&SharedAttributes::ATTACK_DAMAGE, (int)&v511);
  v40 = v512;
  if ( v512 )
    v41 = (unsigned int *)(v512 + 4);
        v42 = __ldrex(v41);
      while ( __strex(v42 - 1, v41) );
      v42 = (*v41)--;
    if ( v42 == 1 )
      v43 = (unsigned int *)(v40 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v40 + 8))(v40);
          v44 = __ldrex(v43);
        while ( __strex(v44 - 1, v43) );
        v44 = (*v43)--;
      if ( v44 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v40 + 12))(v40);
  sub_21E94B4((void **)&v510, "instant_health");
  v509 = 0;
  v507 = -1;
  v508 = 16262179;
  v546 = 6;
  std::make_unique<InstantaneousMobEffect,int &,std::string const&,char const(&)[12],bool,int,int>(
    &v545,
    (unsigned int *)&v546,
    &v510,
    "potion.heal",
    &v509,
    (unsigned int *)&v508,
    &v507);
  v45 = v545;
               (int **)&v510) = v45;
  v46 = *(_DWORD *)(v45 + 4);
  v545 = 0;
  v47 = MobEffect::mMobEffects[v46];
  MobEffect::mMobEffects[v46] = (_DWORD *)v45;
  if ( v47 )
    (*(void (**)(void))(*v47 + 4))();
  MobEffect::HEAL = v45;
  v48 = (void *)(v510 - 12);
  if ( (int *)(v510 - 12) != &dword_28898C0 )
    v369 = (unsigned int *)(v510 - 4);
        v370 = __ldrex(v369);
      while ( __strex(v370 - 1, v369) );
      v370 = (*v369)--;
    if ( v370 <= 0 )
      j_j_j_j__ZdlPv_9(v48);
  v49 = MobEffect::HEAL;
  v505 = SharedBuffs::HEAL;
  v506 = dword_27F828C;
  if ( dword_27F828C )
    v50 = (unsigned int *)(dword_27F828C + 4);
        v51 = __ldrex(v50);
      while ( __strex(v51 + 1, v50) );
      ++*v50;
  MobEffect::addAttributeBuff(v49, (int)&SharedAttributes::HEALTH, (int)&v505);
  v52 = v506;
  if ( v506 )
    v53 = (unsigned int *)(v506 + 4);
        v54 = __ldrex(v53);
      while ( __strex(v54 - 1, v53) );
      v54 = (*v53)--;
    if ( v54 == 1 )
      v55 = (unsigned int *)(v52 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v52 + 8))(v52);
          v56 = __ldrex(v55);
        while ( __strex(v56 - 1, v55) );
        v56 = (*v55)--;
      if ( v56 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v52 + 12))(v52);
  v57 = MobEffect::HEAL;
  v58 = *(_QWORD *)&SharedAmplifiers::HEAL;
  if ( dword_27F821C )
    v59 = (unsigned int *)(dword_27F821C + 4);
        v60 = __ldrex(v59);
      while ( __strex(v60 + 1, v59) );
      ++*v59;
  *(_DWORD *)(v57 + 56) = v58;
  v61 = *(_DWORD *)(v57 + 60);
  if ( HIDWORD(v58) != v61 )
    if ( HIDWORD(v58) )
      v62 = (unsigned int *)(HIDWORD(v58) + 4);
          v63 = __ldrex(v62);
        while ( __strex(v63 + 1, v62) );
        v61 = *(_DWORD *)(v57 + 60);
        ++*v62;
    if ( v61 )
      v64 = (unsigned int *)(v61 + 4);
          v65 = __ldrex(v64);
        while ( __strex(v65 - 1, v64) );
        v65 = (*v64)--;
      if ( v65 == 1 )
        v66 = (unsigned int *)(v61 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v61 + 8))(v61);
        if ( &pthread_create )
        {
          __dmb();
          do
            v67 = __ldrex(v66);
          while ( __strex(v67 - 1, v66) );
        }
        else
          v67 = (*v66)--;
        if ( v67 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v61 + 12))(v61);
    *(_DWORD *)(v57 + 60) = HIDWORD(v58);
  if ( HIDWORD(v58) )
    v68 = (unsigned int *)(HIDWORD(v58) + 4);
        v69 = __ldrex(v68);
      while ( __strex(v69 - 1, v68) );
      v69 = (*v68)--;
    if ( v69 == 1 )
      v70 = (unsigned int *)(HIDWORD(v58) + 8);
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v58) + 8))(HIDWORD(v58));
          v71 = __ldrex(v70);
        while ( __strex(v71 - 1, v70) );
        v71 = (*v70)--;
      if ( v71 == 1 )
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v58) + 12))(HIDWORD(v58));
  sub_21E94B4((void **)&v504, "instant_damage");
  v503 = 1;
  v502 = 4393481;
  v501 = -1;
  v548 = 7;
    &v547,
    (unsigned int *)&v548,
    &v504,
    "potion.harm",
    &v503,
    (unsigned int *)&v502,
    &v501);
  v72 = v547;
               (int **)&v504) = v72;
  v73 = *(_DWORD *)(v72 + 4);
  v547 = 0;
  v74 = MobEffect::mMobEffects[v73];
  MobEffect::mMobEffects[v73] = (_DWORD *)v72;
  if ( v74 )
    (*(void (**)(void))(*v74 + 4))();
  MobEffect::HARM = v72;
  v75 = (void *)(v504 - 12);
  if ( (int *)(v504 - 12) != &dword_28898C0 )
    v371 = (unsigned int *)(v504 - 4);
        v372 = __ldrex(v371);
      while ( __strex(v372 - 1, v371) );
      v372 = (*v371)--;
    if ( v372 <= 0 )
      j_j_j_j__ZdlPv_9(v75);
  v76 = MobEffect::HARM;
  v499 = SharedBuffs::HARM;
  v500 = dword_27F8284;
  if ( dword_27F8284 )
    v77 = (unsigned int *)(dword_27F8284 + 4);
        v78 = __ldrex(v77);
      while ( __strex(v78 + 1, v77) );
      ++*v77;
  MobEffect::addAttributeBuff(v76, (int)&SharedAttributes::HEALTH, (int)&v499);
  v79 = v500;
  if ( v500 )
    v80 = (unsigned int *)(v500 + 4);
        v81 = __ldrex(v80);
      while ( __strex(v81 - 1, v80) );
      v81 = (*v80)--;
    if ( v81 == 1 )
      v82 = (unsigned int *)(v79 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v79 + 8))(v79);
          v83 = __ldrex(v82);
        while ( __strex(v83 - 1, v82) );
        v83 = (*v82)--;
      if ( v83 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v79 + 12))(v79);
  v84 = MobEffect::HARM;
  v85 = *(_QWORD *)&SharedAmplifiers::HARM;
  if ( dword_27F8224 )
    v86 = (unsigned int *)(dword_27F8224 + 4);
        v87 = __ldrex(v86);
      while ( __strex(v87 + 1, v86) );
      ++*v86;
  *(_DWORD *)(v84 + 56) = v85;
  v88 = *(_DWORD *)(v84 + 60);
  if ( HIDWORD(v85) != v88 )
    if ( HIDWORD(v85) )
      v89 = (unsigned int *)(HIDWORD(v85) + 4);
          v90 = __ldrex(v89);
        while ( __strex(v90 + 1, v89) );
        v88 = *(_DWORD *)(v84 + 60);
        ++*v89;
    if ( v88 )
      v91 = (unsigned int *)(v88 + 4);
          v92 = __ldrex(v91);
        while ( __strex(v92 - 1, v91) );
        v92 = (*v91)--;
      if ( v92 == 1 )
        v93 = (unsigned int *)(v88 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v88 + 8))(v88);
            v94 = __ldrex(v93);
          while ( __strex(v94 - 1, v93) );
          v94 = (*v93)--;
        if ( v94 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v88 + 12))(v88);
    *(_DWORD *)(v84 + 60) = HIDWORD(v85);
  if ( HIDWORD(v85) )
    v95 = (unsigned int *)(HIDWORD(v85) + 4);
        v96 = __ldrex(v95);
      while ( __strex(v96 - 1, v95) );
      v96 = (*v95)--;
    if ( v96 == 1 )
      v97 = (unsigned int *)(HIDWORD(v85) + 8);
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v85) + 8))(HIDWORD(v85));
          v98 = __ldrex(v97);
        while ( __strex(v98 - 1, v97) );
        v98 = (*v97)--;
      if ( v98 == 1 )
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v85) + 12))(HIDWORD(v85));
  sub_21E94B4((void **)&v498, "jump_boost");
  v497 = 0;
  v496 = 2293580;
  v495 = 10;
  v550 = 8;
  std::make_unique<MobEffect,int &,std::string const&,char const(&)[12],bool,int,int>(
    (unsigned int *)&v549,
    (unsigned int *)&v550,
    &v498,
    "potion.jump",
    &v497,
    (unsigned int *)&v496,
    &v495);
  v99 = v549;
               (int **)&v498) = v99;
  v100 = *(_DWORD *)(v99 + 4);
  v549 = 0;
  v101 = MobEffect::mMobEffects[v100];
  MobEffect::mMobEffects[v100] = (_DWORD *)v99;
  if ( v101 )
    (*(void (**)(void))(*v101 + 4))();
  MobEffect::JUMP = v99;
  v102 = (void *)(v498 - 12);
  if ( (int *)(v498 - 12) != &dword_28898C0 )
    v373 = (unsigned int *)(v498 - 4);
        v374 = __ldrex(v373);
      while ( __strex(v374 - 1, v373) );
      v374 = (*v373)--;
    if ( v374 <= 0 )
      j_j_j_j__ZdlPv_9(v102);
  sub_21E94B4((void **)&v494, "nausea");
  v493 = 1;
  v492 = 5578058;
  v491 = 11;
  v552 = 9;
    (unsigned int *)&v551,
    (unsigned int *)&v552,
    &v494,
    "potion.confusion",
    &v493,
    (unsigned int *)&v492,
    &v491);
  v103 = v551;
               (int **)&v494) = v103;
  v104 = *(_DWORD *)(v103 + 4);
  v551 = 0;
  v105 = MobEffect::mMobEffects[v104];
  MobEffect::mMobEffects[v104] = (_DWORD *)v103;
  if ( v105 )
    (*(void (**)(void))(*v105 + 4))();
  MobEffect::CONFUSION = v103;
  v106 = (void *)(v494 - 12);
  if ( (int *)(v494 - 12) != &dword_28898C0 )
    v375 = (unsigned int *)(v494 - 4);
        v376 = __ldrex(v375);
      while ( __strex(v376 - 1, v375) );
      v376 = (*v375)--;
    if ( v376 <= 0 )
      j_j_j_j__ZdlPv_9(v106);
  *(_DWORD *)(MobEffect::CONFUSION + 36) = 1048576000;
  sub_21E94B4((void **)&v490, "regeneration");
  v489 = 0;
  v488 = 13458603;
  v487 = 7;
  v554 = 10;
    (unsigned int *)&v553,
    (unsigned int *)&v554,
    &v490,
    "potion.regeneration",
    &v489,
    (unsigned int *)&v488,
    &v487);
  v107 = v553;
               (int **)&v490) = v107;
  v108 = *(_DWORD *)(v107 + 4);
  v553 = 0;
  v109 = MobEffect::mMobEffects[v108];
  MobEffect::mMobEffects[v108] = (_DWORD *)v107;
  if ( v109 )
    (*(void (**)(void))(*v109 + 4))();
  MobEffect::REGENERATION = v107;
  v110 = (void *)(v490 - 12);
  if ( (int *)(v490 - 12) != &dword_28898C0 )
    v377 = (unsigned int *)(v490 - 4);
        v378 = __ldrex(v377);
      while ( __strex(v378 - 1, v377) );
      v378 = (*v377)--;
    if ( v378 <= 0 )
      j_j_j_j__ZdlPv_9(v110);
  v111 = MobEffect::REGENERATION;
  *(_DWORD *)(MobEffect::REGENERATION + 36) = 1048576000;
  v485 = SharedBuffs::REGENERATION;
  v486 = dword_27F82BC;
  if ( dword_27F82BC )
    v112 = (unsigned int *)(dword_27F82BC + 4);
        v113 = __ldrex(v112);
      while ( __strex(v113 + 1, v112) );
      ++*v112;
  MobEffect::addAttributeBuff(v111, (int)&SharedAttributes::HEALTH, (int)&v485);
  v114 = v486;
  if ( v486 )
    v115 = (unsigned int *)(v486 + 4);
        v116 = __ldrex(v115);
      while ( __strex(v116 - 1, v115) );
      v116 = (*v115)--;
    if ( v116 == 1 )
      v117 = (unsigned int *)(v114 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v114 + 8))(v114);
          v118 = __ldrex(v117);
        while ( __strex(v118 - 1, v117) );
        v118 = (*v117)--;
      if ( v118 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v114 + 12))(v114);
  v119 = MobEffect::REGENERATION;
  v120 = *(_QWORD *)&SharedAmplifiers::REGENERATION;
  if ( dword_27F8244 )
    v121 = (unsigned int *)(dword_27F8244 + 4);
        v122 = __ldrex(v121);
      while ( __strex(v122 + 1, v121) );
      ++*v121;
  *(_DWORD *)(v119 + 64) = v120;
  v123 = *(_DWORD *)(v119 + 68);
  if ( HIDWORD(v120) != v123 )
    if ( HIDWORD(v120) )
      v124 = (unsigned int *)(HIDWORD(v120) + 4);
          v125 = __ldrex(v124);
        while ( __strex(v125 + 1, v124) );
        v123 = *(_DWORD *)(v119 + 68);
        ++*v124;
    if ( v123 )
      v126 = (unsigned int *)(v123 + 4);
          v127 = __ldrex(v126);
        while ( __strex(v127 - 1, v126) );
        v127 = (*v126)--;
      if ( v127 == 1 )
        v128 = (unsigned int *)(v123 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v123 + 8))(v123);
            v129 = __ldrex(v128);
          while ( __strex(v129 - 1, v128) );
          v129 = (*v128)--;
        if ( v129 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v123 + 12))(v123);
    *(_DWORD *)(v119 + 68) = HIDWORD(v120);
  if ( HIDWORD(v120) )
    v130 = (unsigned int *)(HIDWORD(v120) + 4);
        v131 = __ldrex(v130);
      while ( __strex(v131 - 1, v130) );
      v131 = (*v130)--;
    if ( v131 == 1 )
      v132 = (unsigned int *)(HIDWORD(v120) + 8);
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v120) + 8))(HIDWORD(v120));
          v133 = __ldrex(v132);
        while ( __strex(v133 - 1, v132) );
        v133 = (*v132)--;
      if ( v133 == 1 )
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v120) + 12))(HIDWORD(v120));
  sub_21E94B4((void **)&v484, "resistance");
  v483 = 0;
  v482 = 10044730;
  v481 = 14;
  v556 = 11;
  std::make_unique<MobEffect,int &,std::string const&,char const(&)[18],bool,int,int>(
    (unsigned int *)&v555,
    (unsigned int *)&v556,
    &v484,
    "potion.resistance",
    &v483,
    (unsigned int *)&v482,
    &v481);
  v134 = v555;
               (int **)&v484) = v134;
  v135 = *(_DWORD *)(v134 + 4);
  v555 = 0;
  v136 = MobEffect::mMobEffects[v135];
  MobEffect::mMobEffects[v135] = (_DWORD *)v134;
  if ( v136 )
    (*(void (**)(void))(*v136 + 4))();
  MobEffect::DAMAGE_RESISTANCE = v134;
  v137 = (void *)(v484 - 12);
  if ( (int *)(v484 - 12) != &dword_28898C0 )
    v379 = (unsigned int *)(v484 - 4);
        v380 = __ldrex(v379);
      while ( __strex(v380 - 1, v379) );
      v380 = (*v379)--;
    if ( v380 <= 0 )
      j_j_j_j__ZdlPv_9(v137);
  sub_21E94B4((void **)&v480, "fire_resistance");
  v479 = 0;
  v478 = 14981690;
  v477 = 15;
  v558 = 12;
  std::make_unique<MobEffect,int &,std::string const&,char const(&)[22],bool,int,int>(
    (unsigned int *)&v557,
    (unsigned int *)&v558,
    &v480,
    "potion.fireResistance",
    &v479,
    (unsigned int *)&v478,
    &v477);
  v138 = v557;
               (int **)&v480) = v138;
  v139 = *(_DWORD *)(v138 + 4);
  v557 = 0;
  v140 = MobEffect::mMobEffects[v139];
  MobEffect::mMobEffects[v139] = (_DWORD *)v138;
  if ( v140 )
    (*(void (**)(void))(*v140 + 4))();
  MobEffect::FIRE_RESISTANCE = v138;
  v141 = (void *)(v480 - 12);
  if ( (int *)(v480 - 12) != &dword_28898C0 )
    v381 = (unsigned int *)(v480 - 4);
        v382 = __ldrex(v381);
      while ( __strex(v382 - 1, v381) );
      v382 = (*v381)--;
    if ( v382 <= 0 )
      j_j_j_j__ZdlPv_9(v141);
  sub_21E94B4((void **)&v476, "water_breathing");
  v475 = 0;
  v474 = 3035801;
  v473 = 16;
  v560 = 13;
    (unsigned int *)&v559,
    (unsigned int *)&v560,
    &v476,
    "potion.waterBreathing",
    &v475,
    (unsigned int *)&v474,
    &v473);
  v142 = v559;
               (int **)&v476) = v142;
  v143 = *(_DWORD *)(v142 + 4);
  v559 = 0;
  v144 = MobEffect::mMobEffects[v143];
  MobEffect::mMobEffects[v143] = (_DWORD *)v142;
  if ( v144 )
    (*(void (**)(void))(*v144 + 4))();
  MobEffect::WATER_BREATHING = v142;
  v145 = (void *)(v476 - 12);
  if ( (int *)(v476 - 12) != &dword_28898C0 )
    v383 = (unsigned int *)(v476 - 4);
        v384 = __ldrex(v383);
      while ( __strex(v384 - 1, v383) );
      v384 = (*v383)--;
    if ( v384 <= 0 )
      j_j_j_j__ZdlPv_9(v145);
  sub_21E94B4((void **)&v472, "invisibility");
  v471 = 0;
  v470 = 8356754;
  v469 = 8;
  v562 = 14;
    (unsigned int *)&v561,
    (unsigned int *)&v562,
    &v472,
    "potion.invisibility",
    &v471,
    (unsigned int *)&v470,
    &v469);
  v146 = v561;
               (int **)&v472) = v146;
  v147 = *(_DWORD *)(v146 + 4);
  v561 = 0;
  v148 = MobEffect::mMobEffects[v147];
  MobEffect::mMobEffects[v147] = (_DWORD *)v146;
  if ( v148 )
    (*(void (**)(void))(*v148 + 4))();
  MobEffect::INVISIBILITY = v146;
  v149 = (void *)(v472 - 12);
  if ( (int *)(v472 - 12) != &dword_28898C0 )
    v385 = (unsigned int *)(v472 - 4);
        v386 = __ldrex(v385);
      while ( __strex(v386 - 1, v385) );
      v386 = (*v385)--;
    if ( v386 <= 0 )
      j_j_j_j__ZdlPv_9(v149);
  sub_21E94B4((void **)&v468, "blindness");
  v467 = 1;
  v466 = 2039587;
  v465 = 13;
  v564 = 15;
    (unsigned int *)&v563,
    (unsigned int *)&v564,
    &v468,
    "potion.blindness",
    &v467,
    (unsigned int *)&v466,
    &v465);
  v150 = v563;
               (int **)&v468) = v150;
  v151 = *(_DWORD *)(v150 + 4);
  v563 = 0;
  v152 = MobEffect::mMobEffects[v151];
  MobEffect::mMobEffects[v151] = (_DWORD *)v150;
  if ( v152 )
    (*(void (**)(void))(*v152 + 4))();
  MobEffect::BLINDNESS = v150;
  v153 = (void *)(v468 - 12);
  if ( (int *)(v468 - 12) != &dword_28898C0 )
    v387 = (unsigned int *)(v468 - 4);
        v388 = __ldrex(v387);
      while ( __strex(v388 - 1, v387) );
      v388 = (*v387)--;
    if ( v388 <= 0 )
      j_j_j_j__ZdlPv_9(v153);
  *(_DWORD *)(MobEffect::BLINDNESS + 36) = 1048576000;
  sub_21E94B4((void **)&v464, "night_vision");
  v463 = 0;
  v462 = 2039713;
  v461 = 12;
  v566 = 16;
    (unsigned int *)&v565,
    (unsigned int *)&v566,
    &v464,
    "potion.nightVision",
    &v463,
    (unsigned int *)&v462,
    &v461);
  v154 = v565;
               (int **)&v464) = v154;
  v155 = *(_DWORD *)(v154 + 4);
  v565 = 0;
  v156 = MobEffect::mMobEffects[v155];
  MobEffect::mMobEffects[v155] = (_DWORD *)v154;
  if ( v156 )
    (*(void (**)(void))(*v156 + 4))();
  MobEffect::NIGHT_VISION = v154;
  v157 = (void *)(v464 - 12);
  if ( (int *)(v464 - 12) != &dword_28898C0 )
    v389 = (unsigned int *)(v464 - 4);
        v390 = __ldrex(v389);
      while ( __strex(v390 - 1, v389) );
      v390 = (*v389)--;
    if ( v390 <= 0 )
      j_j_j_j__ZdlPv_9(v157);
  sub_21E94B4((void **)&v460, "hunger");
  v459 = 1;
  v458 = 5797459;
  v457 = 9;
  v568 = 17;
  std::make_unique<MobEffect,int &,std::string const&,char const(&)[14],bool,int,int>(
    (unsigned int *)&v567,
    (unsigned int *)&v568,
    &v460,
    "potion.hunger",
    &v459,
    (unsigned int *)&v458,
    &v457);
  v158 = v567;
               (int **)&v460) = v158;
  v159 = *(_DWORD *)(v158 + 4);
  v567 = 0;
  v160 = MobEffect::mMobEffects[v159];
  MobEffect::mMobEffects[v159] = (_DWORD *)v158;
  if ( v160 )
    (*(void (**)(void))(*v160 + 4))();
  MobEffect::HUNGER = v158;
  v161 = (void *)(v460 - 12);
  if ( (int *)(v460 - 12) != &dword_28898C0 )
    v391 = (unsigned int *)(v460 - 4);
        v392 = __ldrex(v391);
      while ( __strex(v392 - 1, v391) );
      v392 = (*v391)--;
    if ( v392 <= 0 )
      j_j_j_j__ZdlPv_9(v161);
  v162 = MobEffect::HUNGER;
  v455 = SharedBuffs::FOOD_POSIONING;
  v456 = dword_27F8274;
  if ( dword_27F8274 )
    v163 = (unsigned int *)(dword_27F8274 + 4);
        v164 = __ldrex(v163);
      while ( __strex(v164 + 1, v163) );
      ++*v163;
  MobEffect::addAttributeBuff(v162, (int)&Player::EXHAUSTION, (int)&v455);
  v165 = v456;
  if ( v456 )
    v166 = (unsigned int *)(v456 + 4);
        v167 = __ldrex(v166);
      while ( __strex(v167 - 1, v166) );
      v167 = (*v166)--;
    if ( v167 == 1 )
      v168 = (unsigned int *)(v165 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v165 + 8))(v165);
          v169 = __ldrex(v168);
        while ( __strex(v169 - 1, v168) );
        v169 = (*v168)--;
      if ( v169 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v165 + 12))(v165);
  v170 = MobEffect::HUNGER;
  v171 = *(_QWORD *)&SharedAmplifiers::HUNGER_DURATION;
  if ( dword_27F826C )
    v172 = (unsigned int *)(dword_27F826C + 4);
        v173 = __ldrex(v172);
      while ( __strex(v173 + 1, v172) );
      ++*v172;
  *(_DWORD *)(v170 + 64) = v171;
  v174 = *(_DWORD *)(v170 + 68);
  if ( HIDWORD(v171) != v174 )
    if ( HIDWORD(v171) )
      v175 = (unsigned int *)(HIDWORD(v171) + 4);
          v176 = __ldrex(v175);
        while ( __strex(v176 + 1, v175) );
        v174 = *(_DWORD *)(v170 + 68);
        ++*v175;
    if ( v174 )
      v177 = (unsigned int *)(v174 + 4);
          v178 = __ldrex(v177);
        while ( __strex(v178 - 1, v177) );
        v178 = (*v177)--;
      if ( v178 == 1 )
        v179 = (unsigned int *)(v174 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v174 + 8))(v174);
            v180 = __ldrex(v179);
          while ( __strex(v180 - 1, v179) );
          v180 = (*v179)--;
        if ( v180 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v174 + 12))(v174);
    *(_DWORD *)(v170 + 68) = HIDWORD(v171);
  if ( HIDWORD(v171) )
    v181 = (unsigned int *)(HIDWORD(v171) + 4);
        v182 = __ldrex(v181);
      while ( __strex(v182 - 1, v181) );
      v182 = (*v181)--;
    if ( v182 == 1 )
      v183 = (unsigned int *)(HIDWORD(v171) + 8);
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v171) + 8))(HIDWORD(v171));
          v184 = __ldrex(v183);
        while ( __strex(v184 - 1, v183) );
        v184 = (*v183)--;
      if ( v184 == 1 )
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v171) + 12))(HIDWORD(v171));
  v185 = MobEffect::HUNGER;
  v186 = *(_QWORD *)&SharedAmplifiers::HUNGER_VALUE;
  if ( dword_27F822C )
    v187 = (unsigned int *)(dword_27F822C + 4);
        v188 = __ldrex(v187);
      while ( __strex(v188 + 1, v187) );
      ++*v187;
  *(_DWORD *)(v185 + 56) = v186;
  v189 = *(_DWORD *)(v185 + 60);
  if ( HIDWORD(v186) != v189 )
    if ( HIDWORD(v186) )
      v190 = (unsigned int *)(HIDWORD(v186) + 4);
          v191 = __ldrex(v190);
        while ( __strex(v191 + 1, v190) );
        v189 = *(_DWORD *)(v185 + 60);
        ++*v190;
    if ( v189 )
      v192 = (unsigned int *)(v189 + 4);
          v193 = __ldrex(v192);
        while ( __strex(v193 - 1, v192) );
        v193 = (*v192)--;
      if ( v193 == 1 )
        v194 = (unsigned int *)(v189 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v189 + 8))(v189);
            v195 = __ldrex(v194);
          while ( __strex(v195 - 1, v194) );
          v195 = (*v194)--;
        if ( v195 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v189 + 12))(v189);
    *(_DWORD *)(v185 + 60) = HIDWORD(v186);
  if ( HIDWORD(v186) )
    v196 = (unsigned int *)(HIDWORD(v186) + 4);
        v197 = __ldrex(v196);
      while ( __strex(v197 - 1, v196) );
      v197 = (*v196)--;
    if ( v197 == 1 )
      v198 = (unsigned int *)(HIDWORD(v186) + 8);
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v186) + 8))(HIDWORD(v186));
          v199 = __ldrex(v198);
        while ( __strex(v199 - 1, v198) );
        v199 = (*v198)--;
      if ( v199 == 1 )
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v186) + 12))(HIDWORD(v186));
  sub_21E94B4((void **)&v454, "weakness");
  v453 = 1;
  v452 = 4738376;
  v451 = 5;
  v570 = 18;
  std::make_unique<AttackDamageMobEffect,int &,std::string const&,char const(&)[16],bool,int,int>(
    &v569,
    (unsigned int *)&v570,
    &v454,
    "potion.weakness",
    &v453,
    (unsigned int *)&v452,
    &v451);
  v200 = v569;
               (int **)&v454) = v200;
  v201 = *(_DWORD *)(v200 + 4);
  v569 = 0;
  v202 = MobEffect::mMobEffects[v201];
  MobEffect::mMobEffects[v201] = (_DWORD *)v200;
  if ( v202 )
    (*(void (**)(void))(*v202 + 4))();
  MobEffect::WEAKNESS = v200;
  v203 = (void *)(v454 - 12);
  if ( (int *)(v454 - 12) != &dword_28898C0 )
    v393 = (unsigned int *)(v454 - 4);
        v394 = __ldrex(v393);
      while ( __strex(v394 - 1, v393) );
      v394 = (*v393)--;
    if ( v394 <= 0 )
      j_j_j_j__ZdlPv_9(v203);
  v204 = MobEffect::WEAKNESS;
  v449 = SharedModifiers::WEAKNESS;
  v450 = unk_27F82E4;
  if ( unk_27F82E4 )
    v205 = (unsigned int *)(unk_27F82E4 + 4);
        v206 = __ldrex(v205);
      while ( __strex(v206 + 1, v205) );
      ++*v205;
  MobEffect::addAttributeModifier(v204, (int)&SharedAttributes::ATTACK_DAMAGE, (int)&v449);
  v207 = v450;
  if ( v450 )
    v208 = (unsigned int *)(v450 + 4);
        v209 = __ldrex(v208);
      while ( __strex(v209 - 1, v208) );
      v209 = (*v208)--;
    if ( v209 == 1 )
      v210 = (unsigned int *)(v207 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v207 + 8))(v207);
          v211 = __ldrex(v210);
        while ( __strex(v211 - 1, v210) );
        v211 = (*v210)--;
      if ( v211 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v207 + 12))(v207);
  sub_21E94B4((void **)&v448, "poison");
  v447 = 1;
  v445 = 6;
  v446 = 5149489;
  v572 = 19;
    (unsigned int *)&v571,
    (unsigned int *)&v572,
    &v448,
    "potion.poison",
    &v447,
    (unsigned int *)&v446,
    &v445);
  v212 = v571;
               (int **)&v448) = v212;
  v213 = *(_DWORD *)(v212 + 4);
  v571 = 0;
  v214 = MobEffect::mMobEffects[v213];
  MobEffect::mMobEffects[v213] = (_DWORD *)v212;
  if ( v214 )
    (*(void (**)(void))(*v214 + 4))();
  MobEffect::POISON = v212;
  v215 = (void *)(v448 - 12);
  if ( (int *)(v448 - 12) != &dword_28898C0 )
    v395 = (unsigned int *)(v448 - 4);
        v396 = __ldrex(v395);
      while ( __strex(v396 - 1, v395) );
      v396 = (*v395)--;
    if ( v396 <= 0 )
      j_j_j_j__ZdlPv_9(v215);
  v216 = MobEffect::POISON;
  v443 = SharedBuffs::POISON;
  v444 = dword_27F82AC;
  if ( dword_27F82AC )
    v217 = (unsigned int *)(dword_27F82AC + 4);
        v218 = __ldrex(v217);
      while ( __strex(v218 + 1, v217) );
      ++*v217;
  MobEffect::addAttributeBuff(v216, (int)&SharedAttributes::HEALTH, (int)&v443);
  v219 = v444;
  if ( v444 )
    v220 = (unsigned int *)(v444 + 4);
        v221 = __ldrex(v220);
      while ( __strex(v221 - 1, v220) );
      v221 = (*v220)--;
    if ( v221 == 1 )
      v222 = (unsigned int *)(v219 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v219 + 8))(v219);
          v223 = __ldrex(v222);
        while ( __strex(v223 - 1, v222) );
        v223 = (*v222)--;
      if ( v223 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v219 + 12))(v219);
  v224 = MobEffect::POISON;
  *(_DWORD *)(MobEffect::POISON + 36) = 1048576000;
  v225 = *(_QWORD *)&SharedAmplifiers::POISON;
  if ( dword_27F8254 )
    v226 = (unsigned int *)(dword_27F8254 + 4);
        v227 = __ldrex(v226);
      while ( __strex(v227 + 1, v226) );
      ++*v226;
  *(_DWORD *)(v224 + 64) = v225;
  v228 = *(_DWORD *)(v224 + 68);
  if ( HIDWORD(v225) != v228 )
    if ( HIDWORD(v225) )
      v229 = (unsigned int *)(HIDWORD(v225) + 4);
          v230 = __ldrex(v229);
        while ( __strex(v230 + 1, v229) );
        v228 = *(_DWORD *)(v224 + 68);
        ++*v229;
    if ( v228 )
      v231 = (unsigned int *)(v228 + 4);
          v232 = __ldrex(v231);
        while ( __strex(v232 - 1, v231) );
        v232 = (*v231)--;
      if ( v232 == 1 )
        v233 = (unsigned int *)(v228 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v228 + 8))(v228);
            v234 = __ldrex(v233);
          while ( __strex(v234 - 1, v233) );
          v234 = (*v233)--;
        if ( v234 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v228 + 12))(v228);
    *(_DWORD *)(v224 + 68) = HIDWORD(v225);
  if ( HIDWORD(v225) )
    v235 = (unsigned int *)(HIDWORD(v225) + 4);
        v236 = __ldrex(v235);
      while ( __strex(v236 - 1, v235) );
      v236 = (*v235)--;
    if ( v236 == 1 )
      v237 = (unsigned int *)(HIDWORD(v225) + 8);
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v225) + 8))(HIDWORD(v225));
          v238 = __ldrex(v237);
        while ( __strex(v238 - 1, v237) );
        v238 = (*v237)--;
      if ( v238 == 1 )
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v225) + 12))(HIDWORD(v225));
  sub_21E94B4((void **)&v442, "wither");
  v441 = 1;
  v440 = 3484199;
  v439 = 17;
  v574 = 20;
    (unsigned int *)&v573,
    (unsigned int *)&v574,
    &v442,
    "potion.wither",
    &v441,
    (unsigned int *)&v440,
    &v439);
  v239 = v573;
               (int **)&v442) = v239;
  v240 = *(_DWORD *)(v239 + 4);
  v573 = 0;
  v241 = MobEffect::mMobEffects[v240];
  MobEffect::mMobEffects[v240] = (_DWORD *)v239;
  if ( v241 )
    (*(void (**)(void))(*v241 + 4))();
  MobEffect::WITHER = v239;
  v242 = (void *)(v442 - 12);
  if ( (int *)(v442 - 12) != &dword_28898C0 )
    v397 = (unsigned int *)(v442 - 4);
        v398 = __ldrex(v397);
      while ( __strex(v398 - 1, v397) );
      v398 = (*v397)--;
    if ( v398 <= 0 )
      j_j_j_j__ZdlPv_9(v242);
  v243 = MobEffect::WITHER;
  *(_DWORD *)(MobEffect::WITHER + 36) = 1048576000;
  v437 = SharedBuffs::WITHER;
  v438 = dword_27F82A4;
  if ( dword_27F82A4 )
    v244 = (unsigned int *)(dword_27F82A4 + 4);
        v245 = __ldrex(v244);
      while ( __strex(v245 + 1, v244) );
      ++*v244;
  MobEffect::addAttributeBuff(v243, (int)&SharedAttributes::HEALTH, (int)&v437);
  v246 = v438;
  if ( v438 )
    v247 = (unsigned int *)(v438 + 4);
        v248 = __ldrex(v247);
      while ( __strex(v248 - 1, v247) );
      v248 = (*v247)--;
    if ( v248 == 1 )
      v249 = (unsigned int *)(v246 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v246 + 8))(v246);
          v250 = __ldrex(v249);
        while ( __strex(v250 - 1, v249) );
        v250 = (*v249)--;
      if ( v250 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v246 + 12))(v246);
  v251 = MobEffect::WITHER;
  v252 = *(_QWORD *)&SharedAmplifiers::WITHER;
  if ( dword_27F8264 )
    v253 = (unsigned int *)(dword_27F8264 + 4);
        v254 = __ldrex(v253);
      while ( __strex(v254 + 1, v253) );
      ++*v253;
  *(_DWORD *)(v251 + 64) = v252;
  v255 = *(_DWORD *)(v251 + 68);
  if ( HIDWORD(v252) != v255 )
    if ( HIDWORD(v252) )
      v256 = (unsigned int *)(HIDWORD(v252) + 4);
          v257 = __ldrex(v256);
        while ( __strex(v257 + 1, v256) );
        v255 = *(_DWORD *)(v251 + 68);
        ++*v256;
    if ( v255 )
      v258 = (unsigned int *)(v255 + 4);
          v259 = __ldrex(v258);
        while ( __strex(v259 - 1, v258) );
        v259 = (*v258)--;
      if ( v259 == 1 )
        v260 = (unsigned int *)(v255 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v255 + 8))(v255);
            v261 = __ldrex(v260);
          while ( __strex(v261 - 1, v260) );
          v261 = (*v260)--;
        if ( v261 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v255 + 12))(v255);
    *(_DWORD *)(v251 + 68) = HIDWORD(v252);
  if ( HIDWORD(v252) )
    v262 = (unsigned int *)(HIDWORD(v252) + 4);
        v263 = __ldrex(v262);
      while ( __strex(v263 - 1, v262) );
      v263 = (*v262)--;
    if ( v263 == 1 )
      v264 = (unsigned int *)(HIDWORD(v252) + 8);
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v252) + 8))(HIDWORD(v252));
          v265 = __ldrex(v264);
        while ( __strex(v265 - 1, v264) );
        v265 = (*v264)--;
      if ( v265 == 1 )
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v252) + 12))(HIDWORD(v252));
  sub_21E94B4((void **)&v436, "health_boost");
  v435 = 0;
  v434 = 16284963;
  v433 = 18;
  v576 = 21;
    (unsigned int *)&v575,
    (unsigned int *)&v576,
    &v436,
    "potion.healthBoost",
    &v435,
    (unsigned int *)&v434,
    &v433);
  v266 = v575;
               (int **)&v436) = v266;
  v267 = *(_DWORD *)(v266 + 4);
  v575 = 0;
  v268 = MobEffect::mMobEffects[v267];
  MobEffect::mMobEffects[v267] = (_DWORD *)v266;
  if ( v268 )
    (*(void (**)(void))(*v268 + 4))();
  MobEffect::HEALTH_BOOST = v266;
  v269 = (void *)(v436 - 12);
  if ( (int *)(v436 - 12) != &dword_28898C0 )
    v399 = (unsigned int *)(v436 - 4);
        v400 = __ldrex(v399);
      while ( __strex(v400 - 1, v399) );
      v400 = (*v399)--;
    if ( v400 <= 0 )
      j_j_j_j__ZdlPv_9(v269);
  v270 = MobEffect::HEALTH_BOOST;
  v431 = SharedModifiers::HEALTH_BOOST;
  v432 = unk_27F82EC;
  if ( unk_27F82EC )
    v271 = (unsigned int *)(unk_27F82EC + 4);
        v272 = __ldrex(v271);
      while ( __strex(v272 + 1, v271) );
      ++*v271;
  MobEffect::addAttributeModifier(v270, (int)&SharedAttributes::HEALTH, (int)&v431);
  v273 = v432;
  if ( v432 )
    v274 = (unsigned int *)(v432 + 4);
        v275 = __ldrex(v274);
      while ( __strex(v275 - 1, v274) );
      v275 = (*v274)--;
    if ( v275 == 1 )
      v276 = (unsigned int *)(v273 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v273 + 8))(v273);
          v277 = __ldrex(v276);
        while ( __strex(v277 - 1, v276) );
        v277 = (*v276)--;
      if ( v277 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v273 + 12))(v273);
  sub_21E94B4((void **)&v430, "absorption");
  v429 = 0;
  v428 = 2445989;
  v427 = 18;
  v578 = 22;
  std::make_unique<AbsorptionMobEffect,int &,std::string const&,char const(&)[18],bool,int,int>(
    &v577,
    (unsigned int *)&v578,
    &v430,
    "potion.absorption",
    &v429,
    (unsigned int *)&v428,
    &v427);
  v278 = v577;
               (int **)&v430) = v278;
  v279 = *(_DWORD *)(v278 + 4);
  v577 = 0;
  v280 = MobEffect::mMobEffects[v279];
  MobEffect::mMobEffects[v279] = (_DWORD *)v278;
  if ( v280 )
    (*(void (**)(void))(*v280 + 4))();
  MobEffect::ABSORPTION = v278;
  v281 = (void *)(v430 - 12);
  if ( (int *)(v430 - 12) != &dword_28898C0 )
    v401 = (unsigned int *)(v430 - 4);
        v402 = __ldrex(v401);
      while ( __strex(v402 - 1, v401) );
      v402 = (*v401)--;
    if ( v402 <= 0 )
      j_j_j_j__ZdlPv_9(v281);
  v282 = MobEffect::ABSORPTION;
  v425 = SharedBuffs::ABSORPTION;
  v426 = dword_27F829C;
  if ( dword_27F829C )
    v283 = (unsigned int *)(dword_27F829C + 4);
        v284 = __ldrex(v283);
      while ( __strex(v284 + 1, v283) );
      ++*v283;
  MobEffect::addAttributeBuff(v282, (int)&SharedAttributes::ABSORPTION, (int)&v425);
  v285 = v426;
  if ( v426 )
    v286 = (unsigned int *)(v426 + 4);
        v287 = __ldrex(v286);
      while ( __strex(v287 - 1, v286) );
      v287 = (*v286)--;
    if ( v287 == 1 )
      v288 = (unsigned int *)(v285 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v285 + 8))(v285);
          v289 = __ldrex(v288);
        while ( __strex(v289 - 1, v288) );
        v289 = (*v288)--;
      if ( v289 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v285 + 12))(v285);
  v290 = MobEffect::ABSORPTION;
  v291 = *(_QWORD *)&SharedAmplifiers::ABSORPTION;
  if ( dword_27F823C )
    v292 = (unsigned int *)(dword_27F823C + 4);
        v293 = __ldrex(v292);
      while ( __strex(v293 + 1, v292) );
      ++*v292;
  *(_DWORD *)(v290 + 56) = v291;
  v294 = *(_DWORD *)(v290 + 60);
  if ( HIDWORD(v291) != v294 )
    if ( HIDWORD(v291) )
      v295 = (unsigned int *)(HIDWORD(v291) + 4);
          v296 = __ldrex(v295);
        while ( __strex(v296 + 1, v295) );
        v294 = *(_DWORD *)(v290 + 60);
        ++*v295;
    if ( v294 )
      v297 = (unsigned int *)(v294 + 4);
          v298 = __ldrex(v297);
        while ( __strex(v298 - 1, v297) );
        v298 = (*v297)--;
      if ( v298 == 1 )
        v299 = (unsigned int *)(v294 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v294 + 8))(v294);
            v300 = __ldrex(v299);
          while ( __strex(v300 - 1, v299) );
          v300 = (*v299)--;
        if ( v300 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v294 + 12))(v294);
    *(_DWORD *)(v290 + 60) = HIDWORD(v291);
  if ( HIDWORD(v291) )
    v301 = (unsigned int *)(HIDWORD(v291) + 4);
        v302 = __ldrex(v301);
      while ( __strex(v302 - 1, v301) );
      v302 = (*v301)--;
    if ( v302 == 1 )
      v303 = (unsigned int *)(HIDWORD(v291) + 8);
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v291) + 8))(HIDWORD(v291));
          v304 = __ldrex(v303);
        while ( __strex(v304 - 1, v303) );
        v304 = (*v303)--;
      if ( v304 == 1 )
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v291) + 12))(HIDWORD(v291));
  sub_21E94B4((void **)&v424, "saturation");
  v423 = 0;
  v421 = -1;
  v422 = 16262179;
  v580 = 23;
  std::make_unique<InstantaneousMobEffect,int &,std::string const&,char const(&)[18],bool,int,int>(
    &v579,
    (unsigned int *)&v580,
    &v424,
    "potion.saturation",
    &v423,
    (unsigned int *)&v422,
    &v421);
  v305 = v579;
               (int **)&v424) = v305;
  v306 = *(_DWORD *)(v305 + 4);
  v579 = 0;
  v307 = MobEffect::mMobEffects[v306];
  MobEffect::mMobEffects[v306] = (_DWORD *)v305;
  if ( v307 )
    (*(void (**)(void))(*v307 + 4))();
  MobEffect::SATURATION = v305;
  v308 = (void *)(v424 - 12);
  if ( (int *)(v424 - 12) != &dword_28898C0 )
    v403 = (unsigned int *)(v424 - 4);
        v404 = __ldrex(v403);
      while ( __strex(v404 - 1, v403) );
      v404 = (*v403)--;
    if ( v404 <= 0 )
      j_j_j_j__ZdlPv_9(v308);
  v309 = MobEffect::SATURATION;
  v419 = SharedBuffs::SATURATION;
  v420 = dword_27F8294;
  if ( dword_27F8294 )
    v310 = (unsigned int *)(dword_27F8294 + 4);
        v311 = __ldrex(v310);
      while ( __strex(v311 + 1, v310) );
      ++*v310;
  MobEffect::addAttributeBuff(v309, (int)&Player::HUNGER, (int)&v419);
  v312 = v420;
  if ( v420 )
    v313 = (unsigned int *)(v420 + 4);
        v314 = __ldrex(v313);
      while ( __strex(v314 - 1, v313) );
      v314 = (*v313)--;
    if ( v314 == 1 )
      v315 = (unsigned int *)(v312 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v312 + 8))(v312);
          v316 = __ldrex(v315);
        while ( __strex(v316 - 1, v315) );
        v316 = (*v315)--;
      if ( v316 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v312 + 12))(v312);
  v317 = MobEffect::SATURATION;
  v318 = *(_QWORD *)&SharedAmplifiers::SATURATION;
  if ( dword_27F8234 )
    v319 = (unsigned int *)(dword_27F8234 + 4);
        v320 = __ldrex(v319);
      while ( __strex(v320 + 1, v319) );
      ++*v319;
  *(_DWORD *)(v317 + 56) = v318;
  v321 = *(_DWORD *)(v317 + 60);
  if ( HIDWORD(v318) != v321 )
    if ( HIDWORD(v318) )
      v322 = (unsigned int *)(HIDWORD(v318) + 4);
          v323 = __ldrex(v322);
        while ( __strex(v323 + 1, v322) );
        v321 = *(_DWORD *)(v317 + 60);
        ++*v322;
    if ( v321 )
      v324 = (unsigned int *)(v321 + 4);
          v325 = __ldrex(v324);
        while ( __strex(v325 - 1, v324) );
        v325 = (*v324)--;
      if ( v325 == 1 )
        v326 = (unsigned int *)(v321 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v321 + 8))(v321);
            v327 = __ldrex(v326);
          while ( __strex(v327 - 1, v326) );
          v327 = (*v326)--;
        if ( v327 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v321 + 12))(v321);
    *(_DWORD *)(v317 + 60) = HIDWORD(v318);
  if ( HIDWORD(v318) )
    v328 = (unsigned int *)(HIDWORD(v318) + 4);
        v329 = __ldrex(v328);
      while ( __strex(v329 - 1, v328) );
      v329 = (*v328)--;
    if ( v329 == 1 )
      v330 = (unsigned int *)(HIDWORD(v318) + 8);
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v318) + 8))(HIDWORD(v318));
          v331 = __ldrex(v330);
        while ( __strex(v331 - 1, v330) );
        v331 = (*v330)--;
      if ( v331 == 1 )
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v318) + 12))(HIDWORD(v318));
  sub_21E94B4((void **)&v418, "levitation");
  v417 = 1;
  v416 = 13565951;
  v415 = 19;
  v582 = 24;
    (unsigned int *)&v581,
    (unsigned int *)&v582,
    &v418,
    "potion.levitation",
    &v417,
    (unsigned int *)&v416,
    &v415);
  v332 = v581;
               (int **)&v418) = v332;
  v333 = *(_DWORD *)(v332 + 4);
  v581 = 0;
  v334 = MobEffect::mMobEffects[v333];
  MobEffect::mMobEffects[v333] = (_DWORD *)v332;
  if ( v334 )
    (*(void (**)(void))(*v334 + 4))();
  MobEffect::LEVITATION = v332;
  v335 = (void *)(v418 - 12);
  if ( (int *)(v418 - 12) != &dword_28898C0 )
    v405 = (unsigned int *)(v418 - 4);
        v406 = __ldrex(v405);
      while ( __strex(v406 - 1, v405) );
      v406 = (*v405)--;
    if ( v406 <= 0 )
      j_j_j_j__ZdlPv_9(v335);
  sub_21E94B4((void **)&v414, "fatal_poison");
  v413 = 1;
  v411 = 6;
  v412 = 5149489;
  v584 = 25;
  std::make_unique<MobEffect,int &,std::string const&,char const(&)[14],bool,int,int,char const(&)[7]>(
    (unsigned int *)&v583,
    (unsigned int *)&v584,
    &v414,
    &v413,
    (unsigned int *)&v412,
    &v411,
    "poison");
  v336 = v583;
               (int **)&v414) = v336;
  v337 = *(_DWORD *)(v336 + 4);
  v583 = 0;
  v338 = MobEffect::mMobEffects[v337];
  MobEffect::mMobEffects[v337] = (_DWORD *)v336;
  if ( v338 )
    (*(void (**)(void))(*v338 + 4))();
  MobEffect::FATAL_POISON = v336;
  v339 = (void *)(v414 - 12);
  if ( (int *)(v414 - 12) != &dword_28898C0 )
    v407 = (unsigned int *)(v414 - 4);
        v408 = __ldrex(v407);
      while ( __strex(v408 - 1, v407) );
      v408 = (*v407)--;
    if ( v408 <= 0 )
      j_j_j_j__ZdlPv_9(v339);
  v340 = MobEffect::FATAL_POISON;
  v409 = SharedBuffs::FATAL_POISON;
  v410 = dword_27F82B4;
  if ( dword_27F82B4 )
    v341 = (unsigned int *)(dword_27F82B4 + 4);
        v342 = __ldrex(v341);
      while ( __strex(v342 + 1, v341) );
      ++*v341;
  MobEffect::addAttributeBuff(v340, (int)&SharedAttributes::HEALTH, (int)&v409);
  v343 = v410;
  if ( v410 )
    v344 = (unsigned int *)(v410 + 4);
        v345 = __ldrex(v344);
      while ( __strex(v345 - 1, v344) );
      v345 = (*v344)--;
    if ( v345 == 1 )
      v346 = (unsigned int *)(v343 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v343 + 8))(v343);
          v347 = __ldrex(v346);
        while ( __strex(v347 - 1, v346) );
        v347 = (*v346)--;
      if ( v347 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v343 + 12))(v343);
  v348 = MobEffect::FATAL_POISON;
  *(_DWORD *)(MobEffect::FATAL_POISON + 36) = 1048576000;
  v350 = dword_27F825C;
  result = (unsigned int *)SharedAmplifiers::FATAL_POISON;
  if ( dword_27F825C )
    v351 = (unsigned int *)(dword_27F825C + 4);
        v352 = __ldrex(v351);
      while ( __strex(v352 + 1, v351) );
      ++*v351;
  *(_DWORD *)(v348 + 64) = result;
  v353 = *(_DWORD *)(v348 + 68);
  if ( v350 != v353 )
    if ( v350 )
      result = (unsigned int *)(v350 + 4);
          v354 = __ldrex(result);
        while ( __strex(v354 + 1, result) );
        v353 = *(_DWORD *)(v348 + 68);
        ++*result;
    if ( v353 )
      v355 = (unsigned int *)(v353 + 4);
          result = (unsigned int *)__ldrex(v355);
        while ( __strex((unsigned int)result - 1, v355) );
        result = (unsigned int *)(*v355)--;
      if ( result == (unsigned int *)1 )
        v356 = (unsigned int *)(v353 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v353 + 8))(v353);
            result = (unsigned int *)__ldrex(v356);
          while ( __strex((unsigned int)result - 1, v356) );
          result = (unsigned int *)(*v356)--;
        if ( result == (unsigned int *)1 )
          result = (unsigned int *)(*(int (__fastcall **)(int))(*(_DWORD *)v353 + 12))(v353);
    *(_DWORD *)(v348 + 68) = v350;
  if ( v350 )
    v357 = (unsigned int *)(v350 + 4);
        result = (unsigned int *)__ldrex(v357);
      while ( __strex((unsigned int)result - 1, v357) );
      result = (unsigned int *)(*v357)--;
    if ( result == (unsigned int *)1 )
      v358 = (unsigned int *)(v350 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v350 + 8))(v350);
          result = (unsigned int *)__ldrex(v358);
        while ( __strex((unsigned int)result - 1, v358) );
        result = (unsigned int *)(*v358)--;
        result = (unsigned int *)(*(int (__fastcall **)(int))(*(_DWORD *)v350 + 12))(v350);
  return result;
}


char *__fastcall MobEffect::getColor(MobEffect *this)
{
  return (char *)this + 12;
}


int __fastcall MobEffect::getById(MobEffect *this, int a2)
{
  int i; // r2@2
  int v3; // r1@5

  if ( (unsigned int)this <= 0x19 )
  {
    for ( i = dword_27FB5FC; i; i = *(_DWORD *)i )
    {
      v3 = *(_DWORD *)(i + 8);
      if ( v3 && *(MobEffect **)(v3 + 4) == this )
        return v3;
    }
  }
  return 0;
}


unsigned int *__fastcall MobEffect::setDurationAmplifier(int a1, int a2)
{
  int v2; // r4@1
  unsigned int *result; // r0@1
  int v4; // r5@1
  int v5; // r6@1
  unsigned int v6; // r1@5
  unsigned int *v7; // r1@9
  unsigned int *v8; // r7@15

  v2 = a1;
  result = *(unsigned int **)a2;
  *(_DWORD *)(v2 + 64) = *(_DWORD *)a2;
  v4 = *(_DWORD *)(v2 + 68);
  v5 = *(_DWORD *)(a2 + 4);
  if ( v5 != v4 )
  {
    if ( v5 )
    {
      result = (unsigned int *)(v5 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v6 = __ldrex(result);
        while ( __strex(v6 + 1, result) );
        v4 = *(_DWORD *)(v2 + 68);
      }
      else
        ++*result;
    }
    if ( v4 )
      v7 = (unsigned int *)(v4 + 4);
          result = (unsigned int *)__ldrex(v7);
        while ( __strex((unsigned int)result - 1, v7) );
        result = (unsigned int *)(*v7)--;
      if ( result == (unsigned int *)1 )
        v8 = (unsigned int *)(v4 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
        if ( &pthread_create )
        {
          __dmb();
          do
            result = (unsigned int *)__ldrex(v8);
          while ( __strex((unsigned int)result - 1, v8) );
        }
        else
          result = (unsigned int *)(*v8)--;
        if ( result == (unsigned int *)1 )
          result = (unsigned int *)(*(int (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
    *(_DWORD *)(v2 + 68) = v5;
  }
  return result;
}


int __fastcall MobEffect::MobEffect(__int64 _R0, int *a2, int *a3, char a4, unsigned int a5, int a6, int *a7)
{
  int v7; // r5@1
  int *v8; // r4@1
  int result; // r0@1

  v7 = _R0;
  v8 = a2;
  __asm { VLDR            S6, =0.0039216 }
  _R2 = (a5 >> 16) & 0xFF;
  _R7 = (unsigned __int16)a5 >> 8;
  LODWORD(_R0) = (unsigned __int8)a5;
  __asm
  {
    VMOV            S0, R2
    VMOV            S4, R0
    VMOV            S2, R7
    VCVT.F32.S32    S0, S0
    VCVT.F32.S32    S2, S2
    VCVT.F32.S32    S4, S4
  }
  LODWORD(_R0) = &off_26ED754;
  *(_QWORD *)v7 = _R0;
  *(_BYTE *)(v7 + 8) = a4;
  *(_DWORD *)(v7 + 24) = 1065353216;
    VMUL.F32        S0, S0, S6
    VMUL.F32        S2, S2, S6
    VMUL.F32        S4, S4, S6
    VSTR            S0, [R5,#0xC]
    VSTR            S2, [R5,#0x10]
    VSTR            S4, [R5,#0x14]
  sub_21E8AF4((int *)(v7 + 28), a3);
  *(_DWORD *)(v7 + 32) = a6;
  *(_BYTE *)(v7 + 40) = 0;
  sub_21E8AF4((int *)(v7 + 44), v8);
  sub_21E8AF4((int *)(v7 + 48), a7);
  *(_DWORD *)(v7 + 52) = &unk_28898CC;
  sub_21E6FCC((const void **)(v7 + 52), *(_DWORD *)(*v8 - 12) + 17);
  sub_21E7408((const void **)(v7 + 52), "minecraft:effect.", 0x11u);
  sub_21E72F0((const void **)(v7 + 52), (const void **)v8);
  _aeabi_memclr4(v7 + 56, 40);
    VMOV.F32        S2, #0.5
    VMOV.F32        S0, #1.0
  result = v7;
  if ( !_ZF )
    __asm { VMOVNE.F32      S0, S2 }
  __asm { VSTR            S0, [R5,#0x24] }
  return result;
}


int __fastcall MobEffect::_createTemporalBuff(AttributeBuff *a1, int a2, TemporalAttributeBuff **a3, unsigned int a4, int a5)
{
  AttributeBuff **v5; // r8@1
  AttributeBuff *v6; // r9@1
  AttributeBuff *v7; // r6@1
  unsigned int v8; // r7@1
  int v9; // r10@1
  int v10; // r5@1
  int v11; // r4@1
  void **v12; // r0@1
  void *v13; // r0@1
  int v14; // r0@2
  int v15; // r0@2
  unsigned int *v16; // r0@3
  unsigned int v17; // r1@5
  int v18; // r7@8
  unsigned int *v19; // r1@9
  unsigned int v20; // r0@11
  unsigned int *v21; // r4@15
  unsigned int v22; // r0@17
  int v23; // r0@22
  unsigned int *v24; // r0@23
  unsigned int v25; // r1@25
  int v26; // r6@28
  unsigned int *v27; // r1@29
  unsigned int v28; // r0@31
  unsigned int *v29; // r4@35
  unsigned int v30; // r0@37
  int v31; // r0@42
  unsigned int *v33; // r2@43
  signed int v34; // r1@45
  int v35; // [sp+Ch] [bp-3Ch]@22
  int v36; // [sp+10h] [bp-38h]@22
  int v37; // [sp+14h] [bp-34h]@2
  int v38; // [sp+18h] [bp-30h]@2
  int v39; // [sp+20h] [bp-28h]@1

  v5 = a3;
  v6 = a1;
  v7 = *a3;
  v8 = a4;
  v9 = a2;
  v10 = TemporalAttributeBuff::getBaseAmount(*a3);
  v11 = AttributeBuff::getType(v7);
  LOBYTE(v7) = (*(int (__fastcall **)(AttributeBuff *))(*(_DWORD *)v7 + 12))(v7);
  v12 = sub_21E94B4((void **)&v39, (const char *)&unk_257BC67);
  TemporalAttributeBuff::TemporalAttributeBuff((int)v6, v10, __PAIR__(v11, v8), (char)v7, (int **)v12);
  v13 = (void *)(v39 - 12);
  if ( (int *)(v39 - 12) != &dword_28898C0 )
  {
    v33 = (unsigned int *)(v39 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
    }
    else
      v34 = (*v33)--;
    if ( v34 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  }
  v14 = AttributeBuff::getOperand(*v5);
  AttributeBuff::setOperand(v6, v14);
  v37 = *(_DWORD *)(v9 + 56);
  v15 = *(_DWORD *)(v9 + 60);
  v38 = v15;
  if ( v15 )
    v16 = (unsigned int *)(v15 + 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 + 1, v16) );
      ++*v16;
  AttributeBuff::setValueAmplifier((int)v6, (int)&v37);
  v18 = v38;
  if ( v38 )
    v19 = (unsigned int *)(v38 + 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 == 1 )
      v21 = (unsigned int *)(v18 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v18 + 8))(v18);
      if ( &pthread_create )
      {
        __dmb();
        do
          v22 = __ldrex(v21);
        while ( __strex(v22 - 1, v21) );
      }
      else
        v22 = (*v21)--;
      if ( v22 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v18 + 12))(v18);
  v35 = *(_DWORD *)(v9 + 64);
  v23 = *(_DWORD *)(v9 + 68);
  v36 = v23;
  if ( v23 )
    v24 = (unsigned int *)(v23 + 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 + 1, v24) );
      ++*v24;
  TemporalAttributeBuff::setDurationAmplifier((int)v6, (unsigned __int64 *)&v35);
  v26 = v36;
  if ( v36 )
    v27 = (unsigned int *)(v36 + 4);
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      v28 = (*v27)--;
    if ( v28 == 1 )
      v29 = (unsigned int *)(v26 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v26 + 8))(v26);
          v30 = __ldrex(v29);
        while ( __strex(v30 - 1, v29) );
        v30 = (*v29)--;
      if ( v30 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v26 + 12))(v26);
  v31 = AttributeBuff::getId(*v5);
  AttributeBuff::setId(v6, v31);
  return AttributeBuff::setAmplificationAmount(v6, a5, 1.0);
}


int __fastcall MobEffect::getByName(int **a1)
{
  int v1; // r0@1
  int result; // r0@2

  v1 = std::_Hashtable<std::string,std::pair<std::string const,MobEffect *>,std::allocator<std::pair<std::string const,MobEffect *>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
         (unsigned __int64 *)&dword_27FB5F4,
         a1);
  if ( v1 )
    result = *(_DWORD *)(v1 + 8);
  else
    result = 0;
  return result;
}


int __fastcall MobEffect::getAttributeModifierValue(MobEffect *this, int a2, const AttributeModifier *a3)
{
  int v3; // r4@1
  int result; // r0@1

  v3 = a2;
  _R0 = AttributeModifier::getAmount(a3);
  _R1 = v3 + 1;
  __asm
  {
    VMOV            S2, R0
    VMOV            S0, R1
    VCVT.F32.S32    S0, S0
    VMUL.F32        S0, S2, S0
    VMOV            R0, S0
  }
  return result;
}


void __fastcall MobEffect::removeEffects(MobEffect *this, Mob *a2)
{
  MobEffect::removeEffects(this, a2);
}


_DWORD *__fastcall MobEffect::teardownEffects(MobEffect *this)
{
  int v1; // r6@1
  _DWORD *result; // r0@2

  v1 = 0;
  do
  {
    result = MobEffect::mMobEffects[v1];
    MobEffect::mMobEffects[v1] = 0;
    if ( result )
      result = (_DWORD *)(*(int (**)(void))(*result + 4))();
    ++v1;
  }
  while ( v1 != 26 );
  return result;
}


char *__fastcall MobEffect::getDescriptionId(MobEffect *this)
{
  return (char *)this + 28;
}


InstantaneousAttributeBuff *__fastcall MobEffect::applyInstantaneousEffect(MobEffect *this, Entity *a2, Entity *a3, Mob *a4, int a5, float a6)
{
  Entity *v6; // r4@1
  MobEffect *v7; // r10@1
  InstantaneousAttributeBuff *result; // r0@1
  Entity *v9; // r9@1
  Level *v10; // r0@10
  unsigned __int64 *v11; // r0@10
  int v12; // r6@11
  int v13; // r11@11
  AttributeInstance *v18; // r5@13
  __int64 v19; // r0@14
  int v20; // [sp+0h] [bp-70h]@0
  char v21; // [sp+8h] [bp-68h]@14

  v6 = a4;
  v7 = this;
  result = (InstantaneousAttributeBuff *)*((_DWORD *)a4 + 862);
  v9 = a3;
  if ( (signed int)result > 0 )
    return result;
  if ( a2 )
  {
    result = (InstantaneousAttributeBuff *)(*(int (__fastcall **)(Entity *))(*(_DWORD *)a2 + 488))(a2);
    if ( result == (InstantaneousAttributeBuff *)319 )
    {
      if ( !v6 )
        goto LABEL_11;
LABEL_9:
      result = (InstantaneousAttributeBuff *)(*(int (__fastcall **)(Entity *))(*(_DWORD *)v6 + 488))(v6);
      if ( result == (InstantaneousAttributeBuff *)319 )
      {
        v10 = (Level *)Entity::getLevel(v6);
        v11 = (unsigned __int64 *)Level::getGameRules(v10);
        result = (InstantaneousAttributeBuff *)GameRules::getBool(v11, (int **)&GameRules::PVP);
        if ( result != (InstantaneousAttributeBuff *)1 )
          return result;
      }
      goto LABEL_11;
    }
  }
  if ( v9 )
    result = (InstantaneousAttributeBuff *)(*(int (__fastcall **)(Entity *))(*(_DWORD *)v9 + 488))(v9);
    if ( v6 )
        goto LABEL_9;
LABEL_11:
  v13 = *((_QWORD *)v7 + 9) >> 32;
  v12 = *((_QWORD *)v7 + 9);
  if ( v12 != v13 )
    __asm { VLDR            S16, [SP,#0x70+arg_4] }
    do
      result = (InstantaneousAttributeBuff *)(*(int (__fastcall **)(Entity *, _DWORD))(*(_DWORD *)v6 + 1000))(
                                               v6,
                                               *(_DWORD *)v12);
      v18 = result;
      if ( result )
        __asm { VSTR            S16, [SP,#0x70+var_70] }
        MobEffect::_createInstantBuff(COERCE_FLOAT(&v21), (int)v7, (AttributeBuff **)(v12 + 4), a5, v20);
        if ( Mob::getHealth(v6) >= 1 && (*(int (__fastcall **)(Entity *))(*(_DWORD *)v6 + 856))(v6) == 1 )
        {
          if ( AttributeBuff::getType((AttributeBuff *)&v21) == 3 )
          {
            AttributeBuff::setId((AttributeBuff *)&v21, 4u);
          }
          else if ( AttributeBuff::getType((AttributeBuff *)&v21) == 2 )
            AttributeBuff::setId((AttributeBuff *)&v21, 7u);
        }
        LODWORD(v19) = &v21;
        AttributeBuff::setSource(v19);
        AttributeInstance::addBuff(v18, (const AttributeBuff *)&v21);
        result = InstantaneousAttributeBuff::~InstantaneousAttributeBuff((InstantaneousAttributeBuff *)&v21);
      v12 += 12;
    while ( v13 != v12 );
  return result;
}


unsigned int *__fastcall MobEffect::setValueAmplifier(int a1, int a2)
{
  int v2; // r4@1
  unsigned int *result; // r0@1
  int v4; // r5@1
  int v5; // r6@1
  unsigned int v6; // r1@5
  unsigned int *v7; // r1@9
  unsigned int *v8; // r7@15

  v2 = a1;
  result = *(unsigned int **)a2;
  *(_DWORD *)(v2 + 56) = *(_DWORD *)a2;
  v4 = *(_DWORD *)(v2 + 60);
  v5 = *(_DWORD *)(a2 + 4);
  if ( v5 != v4 )
  {
    if ( v5 )
    {
      result = (unsigned int *)(v5 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v6 = __ldrex(result);
        while ( __strex(v6 + 1, result) );
        v4 = *(_DWORD *)(v2 + 60);
      }
      else
        ++*result;
    }
    if ( v4 )
      v7 = (unsigned int *)(v4 + 4);
          result = (unsigned int *)__ldrex(v7);
        while ( __strex((unsigned int)result - 1, v7) );
        result = (unsigned int *)(*v7)--;
      if ( result == (unsigned int *)1 )
        v8 = (unsigned int *)(v4 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
        if ( &pthread_create )
        {
          __dmb();
          do
            result = (unsigned int *)__ldrex(v8);
          while ( __strex((unsigned int)result - 1, v8) );
        }
        else
          result = (unsigned int *)(*v8)--;
        if ( result == (unsigned int *)1 )
          result = (unsigned int *)(*(int (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
    *(_DWORD *)(v2 + 60) = v5;
  }
  return result;
}


int __fastcall MobEffect::clearAttributeModifiers(int result)
{
  int v1; // r9@1
  __int64 v2; // kr00_8@1
  int v3; // r4@2
  int v4; // r6@3
  unsigned int *v5; // r1@4
  unsigned int *v6; // r5@10

  v1 = result;
  v2 = *(_QWORD *)(result + 84);
  if ( HIDWORD(v2) != (_DWORD)v2 )
  {
    v3 = v2;
    result = (int)&pthread_create_ptr;
    do
    {
      v4 = *(_DWORD *)(v3 + 8);
      if ( v4 )
      {
        v5 = (unsigned int *)(v4 + 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            result = __ldrex(v5);
          while ( __strex(result - 1, v5) );
        }
        else
          result = (*v5)--;
        if ( result == 1 )
          v6 = (unsigned int *)(v4 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
          if ( &pthread_create )
          {
            __dmb();
            do
              result = __ldrex(v6);
            while ( __strex(result - 1, v6) );
          }
          else
            result = (*v6)--;
          if ( result == 1 )
            result = (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
      }
      v3 += 12;
    }
    while ( v3 != HIDWORD(v2) );
  }
  *(_DWORD *)(v1 + 88) = v2;
  return result;
}
