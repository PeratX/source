

void __fastcall DecoratorDefinition::~DecoratorDefinition(DecoratorDefinition *this)
{
  DecoratorDefinition *v1; // r4@1
  int v2; // r0@1
  int v3; // r1@3
  void *v4; // r0@3
  unsigned int *v5; // r12@5
  signed int v6; // r1@7

  v1 = this;
  *(_DWORD *)this = &off_271E178;
  v2 = *((_DWORD *)this + 4);
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  *((_DWORD *)v1 + 4) = 0;
  *(_DWORD *)v1 = &off_271E0B8;
  j_BehaviorTreeDefinitionPtr::~BehaviorTreeDefinitionPtr((DecoratorDefinition *)((char *)v1 + 8));
  v3 = *((_DWORD *)v1 + 1);
  v4 = (void *)(v3 - 12);
  if ( (int *)(v3 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v3 - 4);
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
      j_j_j_j__ZdlPv_9(v4);
  }
  j_operator delete((void *)v1);
}


DecoratorDefinition *__fastcall DecoratorDefinition::~DecoratorDefinition(DecoratorDefinition *this)
{
  DecoratorDefinition *v1; // r4@1
  int v2; // r0@1
  int v3; // r1@3
  void *v4; // r0@3
  unsigned int *v6; // r12@5
  signed int v7; // r1@7

  v1 = this;
  *(_DWORD *)this = &off_271E178;
  v2 = *((_DWORD *)this + 4);
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  *((_DWORD *)v1 + 4) = 0;
  *(_DWORD *)v1 = &off_271E0B8;
  j_BehaviorTreeDefinitionPtr::~BehaviorTreeDefinitionPtr((DecoratorDefinition *)((char *)v1 + 8));
  v3 = *((_DWORD *)v1 + 1);
  v4 = (void *)(v3 - 12);
  if ( (int *)(v3 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v3 - 4);
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
      j_j_j_j__ZdlPv_9(v4);
  }
  return v1;
}


void __fastcall DecoratorDefinition::~DecoratorDefinition(DecoratorDefinition *this)
{
  DecoratorDefinition::~DecoratorDefinition(this);
}


Json::Value *__fastcall DecoratorDefinition::_decoratorLoadChildBehavior(int *a1, Json::Value *a2, unsigned __int64 *a3, int a4)
{
  unsigned __int64 *v4; // r9@1
  int *v5; // r8@1
  int v6; // r10@1
  const Json::Value *v7; // r0@1
  Json::Value *v8; // r0@1
  int *v9; // r5@4
  int *v10; // r7@4
  char *v11; // r1@5
  int (**v12)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r12@5
  unsigned int *v14; // r2@8
  signed int v15; // r6@10
  char *v16; // r4@14
  int (**v17)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r6@14
  int *v18; // r0@15
  int v19; // r0@20
  void *v20; // r0@23
  unsigned int *v21; // r2@24
  signed int v22; // r1@26
  char v23; // [sp+8h] [bp-60h]@20
  int v24; // [sp+1Ch] [bp-4Ch]@20
  int *v25; // [sp+20h] [bp-48h]@4
  int *v26; // [sp+24h] [bp-44h]@4
  int v27; // [sp+2Ch] [bp-3Ch]@4
  char v28; // [sp+30h] [bp-38h]@1
  char v29; // [sp+40h] [bp-28h]@5

  v4 = a3;
  v5 = a1;
  v6 = a4;
  v7 = (const Json::Value *)j_Json::Value::operator[](a2, "child");
  v8 = j_Json::Value::Value((Json::Value *)&v28, v7);
  if ( j_Json::Value::isNull(v8)
    || j_Json::Value::isObject((Json::Value *)&v28) != 1
    || j_Json::Value::size((Json::Value *)&v28) != 1 )
  {
    *v5 = 0;
  }
  else
    j_Json::Value::getMemberNames((Json::Value *)&v25, (int)&v28);
    sub_21E8AF4(&v27, v25);
    v9 = v26;
    v10 = v25;
    if ( v25 != v26 )
    {
      v11 = &v29;
      v12 = &pthread_create;
      do
      {
        v18 = (int *)(*v10 - 12);
        if ( v18 != &dword_28898C0 )
        {
          v14 = (unsigned int *)(*v10 - 4);
          if ( v12 )
          {
            __dmb();
            do
              v15 = __ldrex(v14);
            while ( __strex(v15 - 1, v14) );
          }
          else
            v15 = (*v14)--;
          if ( v15 <= 0 )
            v16 = v11;
            v17 = v12;
            j_j_j_j__ZdlPv_9(v18);
            v12 = v17;
            v11 = v16;
        }
        ++v10;
      }
      while ( v10 != v9 );
      v10 = v25;
    }
    if ( v10 )
      j_operator delete(v10);
    j_Json::Value::Value((Json::Value *)&v23, (const Json::Value *)&v28);
    j_BehaviorFactory::loadNodeDefinition(&v24, v4, (int **)&v27, (Json::Value *)&v23, v6);
    j_Json::Value::~Value((Json::Value *)&v23);
    v19 = v24;
    if ( v24 )
      v24 = 0;
    else
      v19 = 0;
    *v5 = v19;
    v20 = (void *)(v27 - 12);
    if ( (int *)(v27 - 12) != &dword_28898C0 )
      v21 = (unsigned int *)(v27 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v22 = __ldrex(v21);
        while ( __strex(v22 - 1, v21) );
      else
        v22 = (*v21)--;
      if ( v22 <= 0 )
        j_j_j_j__ZdlPv_9(v20);
  return j_Json::Value::~Value((Json::Value *)&v28);
}
