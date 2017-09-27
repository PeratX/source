

BehaviorNode *__fastcall SubtreeNode::SubtreeNode(BehaviorNode *a1)
{
  BehaviorNode *v1; // r4@1
  double v2; // r0@1
  unsigned int v3; // r0@1
  int v4; // r7@3
  void *v5; // r6@3

  v1 = a1;
  j_BehaviorNode::BehaviorNode(a1);
  *(_DWORD *)v1 = &off_271E3B8;
  j_BehaviorTreeDefinitionPtr::BehaviorTreeDefinitionPtr((int)v1 + 32);
  *((_DWORD *)v1 + 10) = 0;
  *((_DWORD *)v1 + 13) = 0;
  *((_DWORD *)v1 + 14) = 0;
  *((_DWORD *)v1 + 15) = 1065353216;
  LODWORD(v2) = (char *)v1 + 60;
  *(_DWORD *)(LODWORD(v2) + 4) = 0;
  v3 = sub_21E6254(v2);
  *((_DWORD *)v1 + 12) = v3;
  if ( v3 == 1 )
  {
    *((_DWORD *)v1 + 17) = 0;
    v5 = (char *)v1 + 68;
  }
  else
    if ( v3 >= 0x40000000 )
      sub_21E57F4();
    v4 = 4 * v3;
    v5 = j_operator new(4 * v3);
    j___aeabi_memclr4_0((int)v5, v4);
  *((_DWORD *)v1 + 11) = v5;
  *((_DWORD *)v1 + 18) = 0;
  *((_DWORD *)v1 + 19) = 0;
  *((_DWORD *)v1 + 20) = 0;
  return v1;
}


void __fastcall SubtreeNode::~SubtreeNode(SubtreeNode *this)
{
  SubtreeNode *v1; // r9@1
  char *v2; // r4@1
  char *v3; // r5@1
  int v4; // r7@8
  unsigned int *v5; // r2@10
  signed int v6; // r1@12
  int v7; // r6@18
  int v8; // r0@18
  int v9; // r1@20
  void *v10; // r0@20
  char *v11; // r0@22
  int v12; // r0@25

  v1 = this;
  *(_DWORD *)this = &off_271E3B8;
  v2 = (char *)(*((_QWORD *)this + 9) >> 32);
  v3 = (char *)*((_QWORD *)this + 9);
  if ( v3 != v2 )
  {
    do
    {
      if ( *(_DWORD *)v3 )
        (*(void (**)(void))(**(_DWORD **)v3 + 4))();
      *(_DWORD *)v3 = 0;
      v3 += 4;
    }
    while ( v2 != v3 );
    v3 = (char *)*((_DWORD *)v1 + 18);
  }
  if ( v3 )
    j_operator delete(v3);
  v4 = *((_DWORD *)v1 + 13);
  while ( v4 )
    v7 = v4;
    v8 = *(_DWORD *)(v4 + 8);
    v4 = *(_DWORD *)v4;
    if ( v8 )
      (*(void (**)(void))(*(_DWORD *)v8 + 4))();
    *(_DWORD *)(v7 + 8) = 0;
    v9 = *(_DWORD *)(v7 + 4);
    v10 = (void *)(v9 - 12);
    if ( (int *)(v9 - 12) != &dword_28898C0 )
      v5 = (unsigned int *)(v9 - 4);
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
        j_j_j_j__ZdlPv_9(v10);
    j_operator delete((void *)v7);
  j___aeabi_memclr4_0(*(_QWORD *)((char *)v1 + 44), 4 * (*(_QWORD *)((char *)v1 + 44) >> 32));
  *((_DWORD *)v1 + 13) = 0;
  *((_DWORD *)v1 + 14) = 0;
  v11 = (char *)*((_DWORD *)v1 + 11);
  if ( v11 && (char *)v1 + 68 != v11 )
    j_operator delete(v11);
  v12 = *((_DWORD *)v1 + 10);
  if ( v12 )
    (*(void (**)(void))(*(_DWORD *)v12 + 4))();
  *((_DWORD *)v1 + 10) = 0;
  j_BehaviorTreeDefinitionPtr::~BehaviorTreeDefinitionPtr((SubtreeNode *)((char *)v1 + 32));
  *(_DWORD *)v1 = &off_271E268;
  j_BehaviorTreeDefinitionPtr::~BehaviorTreeDefinitionPtr((SubtreeNode *)((char *)v1 + 8));
  j_operator delete((void *)v1);
}


void __fastcall SubtreeNode::initializeFromDefinition(SubtreeNode *this)
{
  SubtreeNode::initializeFromDefinition(this);
}


int __fastcall SubtreeNode::tick(SubtreeNode *this)
{
  SubtreeNode *v1; // r4@1
  int result; // r0@1
  int v3; // r0@2
  int v4; // r5@5
  void *v5; // r0@5
  void *v6; // r0@6
  int v7; // r1@8
  unsigned int *v8; // r2@11
  signed int v9; // r1@13
  unsigned int *v10; // r2@15
  signed int v11; // r1@17
  int v12; // [sp+4h] [bp-2Ch]@5
  int v13; // [sp+Ch] [bp-24h]@5

  v1 = this;
  result = *((_DWORD *)this + 7);
  if ( result == 1 )
  {
    v3 = *((_DWORD *)v1 + 10);
    if ( v3 )
    {
      result = (*(int (**)(void))(*(_DWORD *)v3 + 8))();
      *((_DWORD *)v1 + 7) = result;
      if ( result == 1 )
      {
        result = 1;
      }
      else
        v7 = *((_DWORD *)v1 + 10);
        *((_DWORD *)v1 + 10) = 0;
        if ( v7 )
        {
          (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 4))(v7);
          result = *((_DWORD *)v1 + 7);
        }
    }
    else
      v4 = j_BehaviorComponent::getEntity(*((BehaviorComponent **)v1 + 5));
      sub_21E94B4((void **)&v13, "SubtreeNode: Subtree head was null.");
      sub_21E8AF4(&v12, &v13);
      j_MinecraftEventing::fireEventBehaviorErrored(v4, (const char **)&v12);
      v5 = (void *)(v12 - 12);
      if ( (int *)(v12 - 12) != &dword_28898C0 )
        v8 = (unsigned int *)(v12 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v9 = __ldrex(v8);
          while ( __strex(v9 - 1, v8) );
        else
          v9 = (*v8)--;
        if ( v9 <= 0 )
          j_j_j_j__ZdlPv_9(v5);
      *((_DWORD *)v1 + 7) = 3;
      v6 = (void *)(v13 - 12);
      if ( (int *)(v13 - 12) != &dword_28898C0 )
        v10 = (unsigned int *)(v13 - 4);
            v11 = __ldrex(v10);
          while ( __strex(v11 - 1, v10) );
          v11 = (*v10)--;
        if ( v11 <= 0 )
          j_j_j_j__ZdlPv_9(v6);
      result = 3;
  }
  return result;
}


void __fastcall SubtreeNode::initializeFromDefinition(SubtreeNode *this)
{
  SubtreeNode *v1; // r4@1
  char *v2; // r5@1
  int v3; // r9@1
  Entity *v4; // r0@1
  Entity *v5; // r8@1
  Level *v6; // r0@1
  int v7; // r0@1
  __int64 v8; // r2@1
  BehaviorTreeDefinition *v9; // r0@1
  int v10; // r0@2
  int v11; // r6@2
  void (__fastcall *v12)(int *, int, int, SubtreeNode *); // r7@2
  Level *v13; // r0@2
  int v14; // r0@2
  int v15; // r1@2
  int v16; // r0@2
  __int64 i; // r6@5
  int v18; // r0@6
  void *v19; // r0@9
  unsigned int *v20; // r2@11
  signed int v21; // r1@13
  int v22; // [sp+8h] [bp-30h]@2
  int v23; // [sp+Ch] [bp-2Ch]@9
  char v24; // [sp+10h] [bp-28h]@1

  v1 = this;
  v2 = (char *)this + 44;
  *((_DWORD *)this + 6) = (char *)this + 44;
  v3 = *((_DWORD *)this + 1);
  v4 = (Entity *)j_BehaviorComponent::getEntity(*((BehaviorComponent **)this + 5));
  v5 = v4;
  v6 = (Level *)j_Entity::getLevel(v4);
  v7 = j_Level::getBehaviorTreeGroup(v6);
  j_BehaviorTreeGroup::tryGetDefinition((BehaviorTreeDefinitionPtr *)&v24, v7, (int **)(v3 + 16));
  j_BehaviorTreeDefinitionPtr::operator=((SubtreeNode *)((char *)v1 + 32), (BehaviorTreeDefinitionPtr *)&v24);
  j_BehaviorTreeDefinitionPtr::~BehaviorTreeDefinitionPtr((BehaviorTreeDefinitionPtr *)&v24);
  v9 = (BehaviorTreeDefinition *)*((_DWORD *)v1 + 9);
  if ( v9 )
  {
    v10 = j_BehaviorTreeDefinition::getRoot(v9);
    v11 = v10;
    v12 = *(void (__fastcall **)(int *, int, int, SubtreeNode *))(*(_DWORD *)v10 + 12);
    v13 = (Level *)j_Entity::getLevel(v5);
    v14 = j_Level::getBehaviorFactory(v13);
    v12(&v22, v11, v14, v1);
    v15 = v22;
    v22 = 0;
    v16 = *((_DWORD *)v1 + 10);
    *((_DWORD *)v1 + 10) = v15;
    if ( v16 )
    {
      (*(void (__cdecl **)(int))(*(_DWORD *)v16 + 4))(v16);
      if ( v22 )
        (*(void (__cdecl **)(int))(*(_DWORD *)v22 + 4))(v22);
    }
    for ( i = *(_QWORD *)(v3 + 20); (_DWORD)i != HIDWORD(i); LODWORD(i) = i + 8 )
      v18 = j_BehaviorNode::getBehaviorData(*((BehaviorNode **)v1 + 4));
      j_BehaviorData::copyData((int)v2, (int **)i, (int **)(i + 4), v18);
  }
  else
    *((_DWORD *)v1 + 7) = 3;
    LODWORD(v8) = *(_DWORD *)(v3 + 16);
    j_Util::format((Util *)&v23, "SubtreeNode: Could not get definition for tree id %s.", v8);
    j_MinecraftEventing::fireEventBehaviorErrored((int)v5, (const char **)&v23);
    v19 = (void *)(v23 - 12);
    if ( (int *)(v23 - 12) != &dword_28898C0 )
      v20 = (unsigned int *)(v23 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v21 = __ldrex(v20);
        while ( __strex(v21 - 1, v20) );
      }
      else
        v21 = (*v20)--;
      if ( v21 <= 0 )
        j_j_j_j__ZdlPv_9(v19);
}


void __fastcall SubtreeNode::~SubtreeNode(SubtreeNode *this)
{
  SubtreeNode::~SubtreeNode(this);
}


SubtreeNode *__fastcall SubtreeNode::~SubtreeNode(SubtreeNode *this)
{
  SubtreeNode *v1; // r4@1
  char *v2; // r5@1 OVERLAPPED
  char *v3; // r6@1 OVERLAPPED
  int v4; // r0@8

  v1 = this;
  *(_DWORD *)this = &off_271E3B8;
  *(_QWORD *)&v2 = *((_QWORD *)this + 9);
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
    v2 = (char *)*((_DWORD *)v1 + 18);
  }
  if ( v2 )
    j_operator delete(v2);
  j_std::unordered_map<std::string,std::unique_ptr<BehaviorData::DataProxy,std::default_delete<BehaviorData::DataProxy>>,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string const,std::unique_ptr<BehaviorData::DataProxy,std::default_delete<BehaviorData::DataProxy>>>>>::~unordered_map((int)v1 + 44);
  v4 = *((_DWORD *)v1 + 10);
  if ( v4 )
    (*(void (**)(void))(*(_DWORD *)v4 + 4))();
  *((_DWORD *)v1 + 10) = 0;
  j_BehaviorTreeDefinitionPtr::~BehaviorTreeDefinitionPtr((SubtreeNode *)((char *)v1 + 32));
  *(_DWORD *)v1 = &off_271E268;
  j_BehaviorTreeDefinitionPtr::~BehaviorTreeDefinitionPtr((SubtreeNode *)((char *)v1 + 8));
  return v1;
}
