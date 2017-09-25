

CompositeDefinition *__fastcall CompositeDefinition::~CompositeDefinition(CompositeDefinition *this)
{
  CompositeDefinition *v1; // r4@1
  char *v2; // r5@1 OVERLAPPED
  char *v3; // r6@1 OVERLAPPED
  int v4; // r1@8
  void *v5; // r0@8
  unsigned int *v7; // r2@10
  signed int v8; // r1@12

  v1 = this;
  *(_DWORD *)this = &off_271E118;
  *(_QWORD *)&v2 = *((_QWORD *)this + 2);
  if ( v2 != v3 )
  {
    do
    {
      if ( *(_DWORD *)v2 )
        (*(void (**)(void))(**(_DWORD **)v2 + 4))();
      *(_DWORD *)v2 = 0;
      v2 += 4;
    }
    while ( v3 != v2 );
    v2 = (char *)*((_DWORD *)v1 + 4);
  }
  if ( v2 )
    j_operator delete(v2);
  *(_DWORD *)v1 = &off_271E0B8;
  j_BehaviorTreeDefinitionPtr::~BehaviorTreeDefinitionPtr((CompositeDefinition *)((char *)v1 + 8));
  v4 = *((_DWORD *)v1 + 1);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v7 = (unsigned int *)(v4 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
    else
      v8 = (*v7)--;
    if ( v8 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  return v1;
}


void __fastcall CompositeDefinition::~CompositeDefinition(CompositeDefinition *this)
{
  CompositeDefinition::~CompositeDefinition(this);
}


void __fastcall CompositeDefinition::~CompositeDefinition(CompositeDefinition *this)
{
  CompositeDefinition *v1; // r4@1
  char *v2; // r5@1 OVERLAPPED
  char *v3; // r6@1 OVERLAPPED
  int v4; // r1@8
  void *v5; // r0@8
  unsigned int *v6; // r2@10
  signed int v7; // r1@12

  v1 = this;
  *(_DWORD *)this = &off_271E118;
  *(_QWORD *)&v2 = *((_QWORD *)this + 2);
  if ( v2 != v3 )
  {
    do
    {
      if ( *(_DWORD *)v2 )
        (*(void (**)(void))(**(_DWORD **)v2 + 4))();
      *(_DWORD *)v2 = 0;
      v2 += 4;
    }
    while ( v3 != v2 );
    v2 = (char *)*((_DWORD *)v1 + 4);
  }
  if ( v2 )
    j_operator delete(v2);
  *(_DWORD *)v1 = &off_271E0B8;
  j_BehaviorTreeDefinitionPtr::~BehaviorTreeDefinitionPtr((CompositeDefinition *)((char *)v1 + 8));
  v4 = *((_DWORD *)v1 + 1);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v6 = (unsigned int *)(v4 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v7 = __ldrex(v6);
      while ( __strex(v7 - 1, v6) );
    else
      v7 = (*v6)--;
    if ( v7 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  j_operator delete((void *)v1);
}


Json::Value *__fastcall CompositeDefinition::_compositeLoadChildrenBehaviors(Json::Value *a1, int a2, unsigned __int64 *a3, int a4)
{
  int v4; // r5@1
  unsigned __int64 *v5; // r4@1
  const Json::Value *v6; // r0@1
  Json::Value *v7; // r0@1
  char *v8; // r6@3
  Json::ValueIteratorBase *v9; // r7@3
  int *v10; // r8@3
  Json::Value *v11; // r0@4
  Json::Value *v12; // r0@5
  int v13; // r0@6
  int *v14; // r8@6
  int *v15; // r11@6
  unsigned int *v16; // r2@8
  signed int v17; // r1@10
  int *v18; // r0@16
  const Json::Value *v19; // r0@21
  int v20; // r3@21
  int *v21; // r1@22 OVERLAPPED
  int *v22; // r2@22
  void *v23; // r0@27
  unsigned int *v24; // r2@29
  signed int v25; // r1@31
  int v27; // [sp+8h] [bp-78h]@1
  char v28; // [sp+10h] [bp-70h]@21
  int v29; // [sp+24h] [bp-5Ch]@21
  int *v30; // [sp+28h] [bp-58h]@6
  int *v31; // [sp+2Ch] [bp-54h]@6
  int v32; // [sp+34h] [bp-4Ch]@3
  char v33; // [sp+38h] [bp-48h]@37
  char v34; // [sp+40h] [bp-40h]@3
  char v35; // [sp+48h] [bp-38h]@1

  v27 = a2;
  v4 = a4;
  v5 = a3;
  v6 = (const Json::Value *)j_Json::Value::operator[](a1, "children");
  v7 = j_Json::Value::Value((Json::Value *)&v35, v6);
  if ( !j_Json::Value::isNull(v7) && j_Json::Value::isArray((Json::Value *)&v35) )
  {
    j_Json::Value::begin((Json::Value *)&v34, (int)&v35);
    v8 = &v35;
    v9 = (Json::ValueIteratorBase *)&v34;
    v10 = &v32;
    while ( 1 )
    {
      j_Json::Value::end((Json::Value *)&v33, (int)v8);
      if ( j_Json::ValueIteratorBase::isEqual(v9, (const Json::ValueIteratorBase *)&v33) == 1 )
        break;
      v11 = (Json::Value *)j_Json::ValueIteratorBase::deref(v9);
      if ( j_Json::Value::isObject(v11) == 1 )
      {
        v12 = (Json::Value *)j_Json::ValueIteratorBase::deref(v9);
        if ( j_Json::Value::size(v12) == 1 )
        {
          v13 = j_Json::ValueIteratorBase::deref(v9);
          j_Json::Value::getMemberNames((Json::Value *)&v30, v13);
          sub_21E8AF4(v10, v30);
          v14 = v31;
          v15 = v30;
          if ( v30 != v31 )
          {
            do
            {
              v18 = (int *)(*v15 - 12);
              if ( v18 != &dword_28898C0 )
              {
                v16 = (unsigned int *)(*v15 - 4);
                if ( &pthread_create )
                {
                  __dmb();
                  do
                    v17 = __ldrex(v16);
                  while ( __strex(v17 - 1, v16) );
                }
                else
                  v17 = (*v16)--;
                if ( v17 <= 0 )
                  j_j_j_j__ZdlPv_9(v18);
              }
              ++v15;
            }
            while ( v15 != v14 );
            v15 = v30;
          }
          if ( v15 )
            j_operator delete(v15);
          v19 = (const Json::Value *)j_Json::ValueIteratorBase::deref((Json::ValueIteratorBase *)&v34);
          j_Json::Value::Value((Json::Value *)&v28, v19);
          v10 = &v32;
          j_BehaviorFactory::loadNodeDefinition(&v29, v5, (int **)&v32, (Json::Value *)&v28, v4);
          j_Json::Value::~Value((Json::Value *)&v28);
          v20 = v29;
          v8 = &v35;
          if ( v29 )
            *(_QWORD *)&v21 = *(_QWORD *)(v27 + 4);
            if ( v21 == v22 )
              j_std::vector<std::unique_ptr<BehaviorDefinition,std::default_delete<BehaviorDefinition>>,std::allocator<std::unique_ptr<BehaviorDefinition,std::default_delete<BehaviorDefinition>>>>::_M_emplace_back_aux<std::unique_ptr<BehaviorDefinition,std::default_delete<BehaviorDefinition>>>(
                (_QWORD *)v27,
                &v29);
            else
              v29 = 0;
              *v21 = v20;
              *(_DWORD *)(v27 + 4) = v21 + 1;
            if ( v29 )
              (*(void (**)(void))(*(_DWORD *)v29 + 4))();
          v9 = (Json::ValueIteratorBase *)&v34;
          v23 = (void *)(v32 - 12);
          if ( (int *)(v32 - 12) != &dword_28898C0 )
            v24 = (unsigned int *)(v32 - 4);
            if ( &pthread_create )
              __dmb();
              do
                v25 = __ldrex(v24);
              while ( __strex(v25 - 1, v24) );
              v25 = (*v24)--;
            if ( v25 <= 0 )
              j_j_j_j__ZdlPv_9(v23);
        }
      }
      j_Json::ValueIteratorBase::increment(v9);
    }
  }
  return j_Json::Value::~Value((Json::Value *)&v35);
}


signed int __fastcall CompositeDefinition::getCount(CompositeDefinition *this)
{
  return (signed int)((*((_QWORD *)this + 2) >> 32) - *((_QWORD *)this + 2)) >> 2;
}
