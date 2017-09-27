

signed int __fastcall MoveNode::tick(MoveNode *this)
{
  MoveNode *v1; // r4@1
  int v2; // r5@2
  __int64 v3; // r2@2
  void *v4; // r0@2
  int v5; // r0@3
  int v6; // r1@3
  int v7; // r5@3
  int v8; // r1@4
  signed int result; // r0@6
  int v10; // r1@7
  unsigned int *v11; // r2@10
  signed int v12; // r1@12
  int v13; // [sp+4h] [bp-1Ch]@2

  v1 = this;
  if ( *((_DWORD *)this + 9) <= 0 )
  {
    v2 = j_BehaviorComponent::getEntity(*((BehaviorComponent **)this + 5));
    j_Util::format((Util *)&v13, "MoveNode: mNumTicksToMove was non-positive.", v3);
    j_MinecraftEventing::fireEventBehaviorErrored(v2, (const char **)&v13);
    v4 = (void *)(v13 - 12);
    if ( (int *)(v13 - 12) != &dword_28898C0 )
    {
      v11 = (unsigned int *)(v13 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v12 = __ldrex(v11);
        while ( __strex(v12 - 1, v11) );
      }
      else
        v12 = (*v11)--;
      if ( v12 <= 0 )
        j_j_j_j__ZdlPv_9(v4);
    }
  }
  v5 = j_BehaviorComponent::getEntity(*((BehaviorComponent **)v1 + 5));
  v6 = *((_BYTE *)v1 + 32);
  v7 = v5;
  if ( (signed int)(*(_QWORD *)((char *)v1 + 36) >> 32) >= (signed int)*(_QWORD *)((char *)v1 + 36) )
    j_Entity::pushBackActionEventToActionQueue(v5, v6, 2, 512);
    v10 = *((_BYTE *)v1 + 33);
    if ( v10 != 32 )
      j_Entity::pushBackActionEventToActionQueue(v7, v10, 2, 512);
    result = 0;
  else
    j_Entity::pushBackActionEventToActionQueue(v5, v6, 1, 512);
    v8 = *((_BYTE *)v1 + 33);
    if ( v8 != 32 )
      j_Entity::pushBackActionEventToActionQueue(v7, v8, 1, 512);
    ++*((_DWORD *)v1 + 10);
    result = 1;
  return result;
}


int __fastcall MoveNode::MoveNode(BehaviorNode *a1)
{
  int result; // r0@1

  result = j_BehaviorNode::BehaviorNode(a1);
  *(_DWORD *)result = &off_271E370;
  *(_BYTE *)(result + 32) = 87;
  *(_BYTE *)(result + 33) = 32;
  *(_QWORD *)(result + 36) = 1LL;
  return result;
}


void __fastcall MoveNode::~MoveNode(MoveNode *this)
{
  MoveNode::~MoveNode(this);
}


signed int __fastcall MoveNode::convertDirectionStringToKeyPress(int a1, const void **a2)
{
  const void **v2; // r4@1
  _BYTE *v3; // r5@1
  _BYTE *v4; // r0@3
  int v5; // r6@6
  int v6; // t1@9
  int v7; // r0@20
  signed int v8; // r1@20
  signed int result; // r0@22

  v2 = a2;
  v3 = *a2;
  if ( *((_DWORD *)*a2 - 1) <= -1 )
  {
    v4 = *a2;
  }
  else
    sub_21E8010(a2);
    v3 = *v2;
    if ( *((_DWORD *)*v2 - 1) < 0 )
    {
      v4 = *v2;
    }
    else
      sub_21E8010(v2);
  v5 = (int)&v4[*((_DWORD *)v4 - 3)];
  if ( *((_DWORD *)v4 - 1) > -1 )
    sub_21E8010(v2);
    v4 = *v2;
  for ( ; (_BYTE *)v5 != v3; ++v4 )
    v6 = *v3++;
    *v4 = *(_BYTE *)(tolower_tab_ + 2 * v6 + 2);
  if ( sub_21E7D6C(v2, "forward") && sub_21E7D6C(v2, "fore") )
    if ( sub_21E7D6C(v2, "left") )
      if ( sub_21E7D6C(v2, "right") )
      {
        if ( sub_21E7D6C(v2, "backward") && sub_21E7D6C(v2, "back") && sub_21E7D6C(v2, "reverse") )
        {
          if ( sub_21E7D6C(v2, "ascend") && sub_21E7D6C(v2, "up") )
          {
            if ( sub_21E7D6C(v2, "descend") )
            {
              v7 = sub_21E7D6C(v2, "down");
              v8 = 32;
              if ( !v7 )
                v8 = 6;
              result = v8;
            }
            else
              result = 6;
          }
          else
            result = 5;
        }
        else
          result = 4;
      }
      else
        result = 2;
      result = 1;
    result = 3;
  return result;
}


int __fastcall MoveNode::initializeFromDefinition(MoveNode *this)
{
  MoveNode *v1; // r4@1
  int v2; // r0@1
  int v3; // r6@1
  int v4; // r0@3
  int *v5; // r0@3
  void *v6; // r0@3
  unsigned int *v7; // r2@4
  signed int v8; // r1@6
  int *v9; // r0@8
  int v10; // r0@9
  int v11; // r0@11
  int *v12; // r0@11
  void *v13; // r0@11
  unsigned int *v14; // r2@12
  signed int v15; // r1@14
  int *v16; // r0@16
  int v17; // r0@17
  int result; // r0@19
  int v19; // [sp+4h] [bp-24h]@16
  int v20; // [sp+8h] [bp-20h]@11
  int v21; // [sp+Ch] [bp-1Ch]@8
  int v22; // [sp+10h] [bp-18h]@3

  v1 = this;
  v2 = *((_DWORD *)this + 6);
  v3 = *((_DWORD *)v1 + 1);
  if ( v2 && j_BehaviorData::hasDataOfType(v2, (int **)(v3 + 20), 4) == 1 )
  {
    v4 = j_std::_Hashtable<std::string,std::pair<std::string const,std::unique_ptr<BehaviorData::DataProxy,std::default_delete<BehaviorData::DataProxy>>>,std::allocator<std::pair<std::string const,std::unique_ptr<BehaviorData::DataProxy,std::default_delete<BehaviorData::DataProxy>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
           *((unsigned __int64 **)v1 + 6),
           (int **)(v3 + 20));
    v5 = sub_21E8AF4(&v22, (int *)(*(_DWORD *)(v4 + 8) + 12));
    *((_BYTE *)v1 + 32) = j_MoveNode::convertDirectionStringToKeyPress((int)v5, (const void **)v5);
    v6 = (void *)(v22 - 12);
    if ( (int *)(v22 - 12) == &dword_28898C0 )
      goto LABEL_9;
    v7 = (unsigned int *)(v22 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
      goto LABEL_31;
    }
LABEL_30:
    v8 = (*v7)--;
    goto LABEL_31;
  }
  v9 = sub_21E8AF4(&v21, (int *)(v3 + 16));
  *((_BYTE *)v1 + 32) = j_MoveNode::convertDirectionStringToKeyPress((int)v9, (const void **)v9);
  v6 = (void *)(v21 - 12);
  if ( (int *)(v21 - 12) == &dword_28898C0 )
    goto LABEL_9;
  v7 = (unsigned int *)(v21 - 4);
  if ( !&pthread_create )
    goto LABEL_30;
  __dmb();
  do
    v8 = __ldrex(v7);
  while ( __strex(v8 - 1, v7) );
LABEL_31:
  if ( v8 <= 0 )
    j_j_j_j__ZdlPv_9(v6);
LABEL_9:
  v10 = *((_DWORD *)v1 + 6);
  if ( v10 && j_BehaviorData::hasDataOfType(v10, (int **)(v3 + 28), 4) == 1 )
    v11 = j_std::_Hashtable<std::string,std::pair<std::string const,std::unique_ptr<BehaviorData::DataProxy,std::default_delete<BehaviorData::DataProxy>>>,std::allocator<std::pair<std::string const,std::unique_ptr<BehaviorData::DataProxy,std::default_delete<BehaviorData::DataProxy>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
            *((unsigned __int64 **)v1 + 6),
            (int **)(v3 + 28));
    v12 = sub_21E8AF4(&v20, (int *)(*(_DWORD *)(v11 + 8) + 12));
    *((_BYTE *)v1 + 33) = j_MoveNode::convertDirectionStringToKeyPress((int)v12, (const void **)v12);
    v13 = (void *)(v20 - 12);
    if ( (int *)(v20 - 12) == &dword_28898C0 )
      goto LABEL_17;
    v14 = (unsigned int *)(v20 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      goto LABEL_35;
LABEL_34:
    v15 = (*v14)--;
    goto LABEL_35;
  v16 = sub_21E8AF4(&v19, (int *)(v3 + 24));
  *((_BYTE *)v1 + 33) = j_MoveNode::convertDirectionStringToKeyPress((int)v16, (const void **)v16);
  v13 = (void *)(v19 - 12);
  if ( (int *)(v19 - 12) == &dword_28898C0 )
    goto LABEL_17;
  v14 = (unsigned int *)(v19 - 4);
    goto LABEL_34;
    v15 = __ldrex(v14);
  while ( __strex(v15 - 1, v14) );
LABEL_35:
  if ( v15 <= 0 )
    j_j_j_j__ZdlPv_9(v13);
LABEL_17:
  v17 = *((_DWORD *)v1 + 6);
  if ( v17 && j_BehaviorData::hasDataOfType(v17, (int **)(v3 + 36), 3) == 1 )
    result = *(_DWORD *)(*(_DWORD *)(j_std::_Hashtable<std::string,std::pair<std::string const,std::unique_ptr<BehaviorData::DataProxy,std::default_delete<BehaviorData::DataProxy>>>,std::allocator<std::pair<std::string const,std::unique_ptr<BehaviorData::DataProxy,std::default_delete<BehaviorData::DataProxy>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
                                       *((unsigned __int64 **)v1 + 6),
                                       (int **)(v3 + 36))
                                   + 8)
                       + 12);
  else
    result = *(_DWORD *)(v3 + 32);
  *((_DWORD *)v1 + 9) = result;
  return result;
}


void __fastcall MoveNode::~MoveNode(MoveNode *this)
{
  MoveNode *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_271E268;
  j_BehaviorTreeDefinitionPtr::~BehaviorTreeDefinitionPtr((MoveNode *)((char *)this + 8));
  j_j_j__ZdlPv_7((void *)v1);
}
