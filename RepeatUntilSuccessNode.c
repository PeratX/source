

void __fastcall RepeatUntilSuccessNode::~RepeatUntilSuccessNode(RepeatUntilSuccessNode *this)
{
  RepeatUntilSuccessNode::~RepeatUntilSuccessNode(this);
}


void __fastcall RepeatUntilSuccessNode::~RepeatUntilSuccessNode(RepeatUntilSuccessNode *this)
{
  RepeatUntilSuccessNode *v1; // r4@1
  int v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_271E2C8;
  v2 = *((_DWORD *)this + 8);
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  *((_DWORD *)v1 + 8) = 0;
  *(_DWORD *)v1 = &off_271E268;
  j_BehaviorTreeDefinitionPtr::~BehaviorTreeDefinitionPtr((RepeatUntilSuccessNode *)((char *)v1 + 8));
  j_j_j__ZdlPv_7((void *)v1);
}


RepeatUntilSuccessNode *__fastcall RepeatUntilSuccessNode::~RepeatUntilSuccessNode(RepeatUntilSuccessNode *this)
{
  RepeatUntilSuccessNode *v1; // r4@1
  int v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_271E2C8;
  v2 = *((_DWORD *)this + 8);
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  *((_DWORD *)v1 + 8) = 0;
  *(_DWORD *)v1 = &off_271E268;
  j_BehaviorTreeDefinitionPtr::~BehaviorTreeDefinitionPtr((RepeatUntilSuccessNode *)((char *)v1 + 8));
  return v1;
}


int __fastcall RepeatUntilSuccessNode::initializeFromDefinition(RepeatUntilSuccessNode *this)
{
  RepeatUntilSuccessNode *v1; // r4@1
  int v2; // r0@1
  int v3; // r6@1
  int result; // r0@3

  v1 = this;
  v2 = *((_DWORD *)this + 6);
  v3 = *((_DWORD *)v1 + 1);
  if ( v2 && j_BehaviorData::hasDataOfType(v2, (int **)(v3 + 24), 3) == 1 )
  {
    result = *(_DWORD *)(*(_DWORD *)(j_std::_Hashtable<std::string,std::pair<std::string const,std::unique_ptr<BehaviorData::DataProxy,std::default_delete<BehaviorData::DataProxy>>>,std::allocator<std::pair<std::string const,std::unique_ptr<BehaviorData::DataProxy,std::default_delete<BehaviorData::DataProxy>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
                                       *((unsigned __int64 **)v1 + 6),
                                       (int **)(v3 + 24))
                                   + 8)
                       + 12);
    *((_DWORD *)v1 + 9) = result;
  }
  else
    result = *(_DWORD *)(v3 + 20);
  return result;
}


int __fastcall RepeatUntilSuccessNode::RepeatUntilSuccessNode(BehaviorNode *a1)
{
  int result; // r0@1

  result = j_BehaviorNode::BehaviorNode(a1);
  *(_DWORD *)result = &off_271E2C8;
  *(_DWORD *)(result + 32) = 0;
  *(_DWORD *)(result + 36) = 0;
  *(_DWORD *)(result + 40) = 1;
  return result;
}


signed int __fastcall RepeatUntilSuccessNode::tick(RepeatUntilSuccessNode *this)
{
  RepeatUntilSuccessNode *v1; // r4@1
  signed int v2; // r5@1
  int v3; // r0@2
  int v4; // r0@3
  int v5; // r5@3
  void (__fastcall *v6)(int *, int, int, RepeatUntilSuccessNode *); // r7@3
  Entity *v7; // r0@3
  Level *v8; // r0@3
  int v9; // r0@3
  int v10; // r1@3
  int v11; // r0@3
  int v12; // r0@7
  __int64 v13; // kr00_8@10
  int v14; // r0@11
  int v15; // r0@13
  __int64 v16; // kr08_8@15
  int v18; // [sp+8h] [bp-18h]@3

  v1 = this;
  v2 = *((_DWORD *)this + 7);
  if ( v2 == 1 )
  {
    v3 = *((_DWORD *)this + 8);
    if ( !v3 )
    {
      v4 = j_DecoratorDefinition::get(*((DecoratorDefinition **)v1 + 1));
      v5 = v4;
      v6 = *(void (__fastcall **)(int *, int, int, RepeatUntilSuccessNode *))(*(_DWORD *)v4 + 12);
      v7 = (Entity *)j_BehaviorComponent::getEntity(*((BehaviorComponent **)v1 + 5));
      v8 = (Level *)j_Entity::getLevel(v7);
      v9 = j_Level::getBehaviorFactory(v8);
      v6(&v18, v5, v9, v1);
      v10 = v18;
      v18 = 0;
      v11 = *((_DWORD *)v1 + 8);
      *((_DWORD *)v1 + 8) = v10;
      if ( v11 )
      {
        (*(void (__cdecl **)(int))(*(_DWORD *)v11 + 4))(v11);
        if ( v18 )
          (*(void (__cdecl **)(int))(*(_DWORD *)v18 + 4))(v18);
      }
      v3 = *((_DWORD *)v1 + 8);
    }
    v12 = (*(int (__cdecl **)(int))(*(_DWORD *)v3 + 8))(v3);
    if ( !v12 )
      v15 = *((_DWORD *)v1 + 8);
      v2 = 0;
      *((_DWORD *)v1 + 8) = 0;
      if ( v15 )
        (*(void (__cdecl **)(int))(*(_DWORD *)v15 + 4))(v15);
      goto LABEL_20;
    if ( v12 == 1 )
      v16 = *(_QWORD *)((char *)v1 + 36);
      if ( HIDWORD(v16) != (_DWORD)v16 )
        *((_DWORD *)v1 + 10) = HIDWORD(v16) + 1;
LABEL_19:
        v2 = 1;
        goto LABEL_20;
LABEL_16:
      v2 = 2;
LABEL_20:
      *((_DWORD *)v1 + 7) = v2;
      return v2;
    if ( v12 == 2 )
      v13 = *(_QWORD *)((char *)v1 + 36);
      if ( HIDWORD(v13) != (_DWORD)v13 )
        *((_DWORD *)v1 + 10) = HIDWORD(v13) + 1;
        v14 = *((_DWORD *)v1 + 8);
        *((_DWORD *)v1 + 8) = 0;
        if ( v14 )
          (*(void (__cdecl **)(int))(*(_DWORD *)v14 + 4))(v14);
        goto LABEL_19;
      goto LABEL_16;
    v2 = *((_DWORD *)v1 + 7);
  }
  return v2;
}
