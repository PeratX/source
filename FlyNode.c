

signed int __fastcall FlyNode::tick(FlyNode *this)
{
  FlyNode *v1; // r4@1
  int v2; // r5@2
  __int64 v3; // r2@2
  int v4; // r0@7
  signed int v5; // r5@8
  void *v6; // r0@13
  unsigned int *v8; // r2@17
  signed int v9; // r1@19
  int v10; // [sp+4h] [bp-1Ch]@13

  v1 = this;
  if ( *((_BYTE *)this + 32) )
  {
LABEL_7:
    v4 = j_BehaviorComponent::getEntity(*((BehaviorComponent **)v1 + 5));
    if ( *((_BYTE *)v1 + 33) )
    {
      j_Entity::pushBackActionEventToActionQueue(v4, 11, 2, 512);
      v5 = 0;
      *((_BYTE *)v1 + 33) = 0;
      if ( !*((_BYTE *)v1 + 34) )
      {
        v5 = 1;
        *((_BYTE *)v1 + 34) = 1;
      }
    }
    else
      v5 = 1;
      j_Entity::pushBackActionEventToActionQueue(v4, 11, 1, 512);
      *((_BYTE *)v1 + 33) = 1;
    return v5;
  }
  v2 = j_BehaviorComponent::getEntity(*((BehaviorComponent **)this + 5));
  if ( j_Abilities::getBool(v2 + 4320, (int **)&Abilities::FLYING) == 1 )
    if ( !*((_BYTE *)v1 + 35) )
      goto LABEL_6;
  else if ( *((_BYTE *)v1 + 35) )
LABEL_6:
    *((_BYTE *)v1 + 32) = 1;
    goto LABEL_7;
  if ( *((_BYTE *)v1 + 36) )
    j_Util::format((Util *)&v10, "FlyNode: Did not need to change the flight state and expected to.", v3);
    j_MinecraftEventing::fireEventBehaviorErrored(v2, (const char **)&v10);
    v6 = (void *)(v10 - 12);
    if ( (int *)(v10 - 12) != &dword_28898C0 )
      v8 = (unsigned int *)(v10 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v9 = __ldrex(v8);
        while ( __strex(v9 - 1, v8) );
      else
        v9 = (*v8)--;
      if ( v9 <= 0 )
        j_j_j_j__ZdlPv_9(v6);
    v5 = 0;
  else
  return v5;
}


void __fastcall FlyNode::~FlyNode(FlyNode *this)
{
  FlyNode *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_271E268;
  j_BehaviorTreeDefinitionPtr::~BehaviorTreeDefinitionPtr((FlyNode *)((char *)this + 8));
  j_j_j__ZdlPv_7((void *)v1);
}


int __fastcall FlyNode::initializeFromDefinition(FlyNode *this)
{
  FlyNode *v1; // r4@1
  int v2; // r0@1
  int v3; // r6@1
  char v4; // r0@3
  int v5; // r0@5
  int result; // r0@7

  v1 = this;
  v2 = *((_DWORD *)this + 6);
  v3 = *((_DWORD *)v1 + 1);
  if ( v2 && j_BehaviorData::hasDataOfType(v2, (int **)(v3 + 20), 1) == 1 )
    v4 = *(_BYTE *)(*(_DWORD *)(j_std::_Hashtable<std::string,std::pair<std::string const,std::unique_ptr<BehaviorData::DataProxy,std::default_delete<BehaviorData::DataProxy>>>,std::allocator<std::pair<std::string const,std::unique_ptr<BehaviorData::DataProxy,std::default_delete<BehaviorData::DataProxy>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
                                  *((unsigned __int64 **)v1 + 6),
                                  (int **)(v3 + 20))
                              + 8)
                  + 9);
  else
    v4 = *(_BYTE *)(v3 + 16);
  *((_BYTE *)v1 + 35) = v4;
  v5 = *((_DWORD *)v1 + 6);
  if ( v5 && j_BehaviorData::hasDataOfType(v5, (int **)(v3 + 28), 1) == 1 )
  {
    result = *(_BYTE *)(*(_DWORD *)(j_std::_Hashtable<std::string,std::pair<std::string const,std::unique_ptr<BehaviorData::DataProxy,std::default_delete<BehaviorData::DataProxy>>>,std::allocator<std::pair<std::string const,std::unique_ptr<BehaviorData::DataProxy,std::default_delete<BehaviorData::DataProxy>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
                                      *((unsigned __int64 **)v1 + 6),
                                      (int **)(v3 + 28))
                                  + 8)
                      + 9);
    *((_BYTE *)v1 + 36) = result;
  }
    result = *(_BYTE *)(v3 + 16);
  return result;
}


void __fastcall FlyNode::~FlyNode(FlyNode *this)
{
  FlyNode::~FlyNode(this);
}


int __fastcall FlyNode::FlyNode(BehaviorNode *a1)
{
  int result; // r0@1

  result = j_BehaviorNode::BehaviorNode(a1);
  *(_DWORD *)result = &off_271E328;
  *(_DWORD *)(result + 32) = 0x1000000;
  return result;
}
