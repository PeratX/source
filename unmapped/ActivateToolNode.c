

signed int __fastcall ActivateToolNode::tick(ActivateToolNode *this)
{
  ActivateToolNode *v1; // r5@1
  signed int v2; // r6@1
  __int64 v3; // r2@2
  int v4; // r4@2
  void *v5; // r0@5
  Entity *v6; // r0@7
  const BlockPos *v7; // r7@7
  int v8; // r0@7
  signed int v9; // r1@9
  unsigned __int8 v10; // vf@10
  int v11; // r1@10
  __int64 v12; // r2@12
  void *v13; // r0@13
  void *v14; // r0@19
  unsigned int *v15; // r2@20
  signed int v16; // r1@22
  unsigned int *v18; // r2@29
  signed int v19; // r1@31
  unsigned int *v20; // r2@33
  signed int v21; // r1@35
  int v22; // [sp+0h] [bp-30h]@13
  unsigned __int8 v23; // [sp+4h] [bp-2Ch]@12
  int v24; // [sp+8h] [bp-28h]@12
  unsigned __int8 v25; // [sp+Ch] [bp-24h]@12
  unsigned __int8 v26; // [sp+Eh] [bp-22h]@12
  unsigned __int8 v27; // [sp+Fh] [bp-21h]@12
  char v28; // [sp+10h] [bp-20h]@8
  int v29; // [sp+14h] [bp-1Ch]@5

  v1 = this;
  v2 = *((_DWORD *)this + 7);
  if ( v2 != 1 )
    return v2;
  v4 = j_BehaviorComponent::getEntity(*((BehaviorComponent **)this + 5));
  if ( *((_DWORD *)v1 + 8) == BlockPos::ZERO
    && *((_DWORD *)v1 + 9) == unk_2816278
    && *((_DWORD *)v1 + 10) == dword_281627C )
  {
    j_Util::format((Util *)&v29, "ActivateToolNode: mBlockPos was still set to the default invalid value.", v3);
    j_MinecraftEventing::fireEventBehaviorErrored(v4, (const char **)&v29);
    v5 = (void *)(v29 - 12);
    if ( (int *)(v29 - 12) != &dword_28898C0 )
    {
      v20 = (unsigned int *)(v29 - 4);
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
        j_j_j_j__ZdlPv_9(v5);
    }
    return 3;
  }
  v6 = (Entity *)j_BehaviorComponent::getEntity(*((BehaviorComponent **)v1 + 5));
  v7 = (const BlockPos *)j_Entity::getRegion(v6);
  v8 = *((_BYTE *)v1 + 44);
  if ( v8 == BlockID::AIR )
    j_BlockSource::getBlockID((BlockSource *)&v28, v7, (int)v1 + 32);
    LOBYTE(v8) = v28;
    *((_BYTE *)v1 + 44) = v28;
  v9 = *((_DWORD *)v1 + 13);
  if ( v9 < 1 )
    if ( !*((_BYTE *)v1 + 45) )
      v2 = 1;
      j_Entity::pushBackActionEventToActionQueue(v4, 23, 1, 512);
      *((_BYTE *)v1 + 45) = 1;
      return v2;
    j_Entity::pushBackActionEventToActionQueue(v4, 23, 2, 512);
    *((_DWORD *)v1 + 13) = *((_DWORD *)v1 + 12);
    *((_BYTE *)v1 + 45) = 0;
    return 1;
  v10 = __OFSUB__(v9, 1);
  v11 = v9 - 1;
  *((_DWORD *)v1 + 13) = v11;
  if ( !((unsigned __int8)((v11 < 0) ^ v10) | (v11 == 0)) )
  v27 = v8;
  j_BlockSource::getBlockID((BlockSource *)&v25, v7, (int)v1 + 32);
  v26 = v25;
  LODWORD(v12) = v27;
  HIDWORD(v12) = v25;
  j_Util::format((Util *)&v24, "ActivateToolNode: Failed to change block id.  Started with %u and is now %u.", v12);
  j_BlockSource::getBlockID((BlockSource *)&v23, v7, (int)v1 + 32);
  if ( v23 == v27 )
    sub_21E8AF4(&v22, &v24);
    j_MinecraftEventing::fireEventBehaviorFailed(v4, (const char **)&v22);
    v13 = (void *)(v22 - 12);
    if ( (int *)(v22 - 12) != &dword_28898C0 )
      v18 = (unsigned int *)(v22 - 4);
          v19 = __ldrex(v18);
        while ( __strex(v19 - 1, v18) );
        v19 = (*v18)--;
      if ( v19 <= 0 )
        j_j_j_j__ZdlPv_9(v13);
    v2 = 2;
  else
    v2 = 0;
  v14 = (void *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v24 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
    else
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  return v2;
}


void __fastcall ActivateToolNode::~ActivateToolNode(ActivateToolNode *this)
{
  ActivateToolNode::~ActivateToolNode(this);
}


int __fastcall ActivateToolNode::initializeFromDefinition(ActivateToolNode *this)
{
  ActivateToolNode *v1; // r4@1
  int v2; // r0@1
  int v3; // r6@1
  int v4; // r0@3
  __int64 v5; // r1@3
  int result; // r0@3

  v1 = this;
  v2 = *((_DWORD *)this + 6);
  v3 = *((_DWORD *)v1 + 1);
  if ( v2 && j_BehaviorData::hasDataOfType(v2, (int **)(v3 + 28), 0) == 1 )
  {
    v4 = *(_DWORD *)(j_std::_Hashtable<std::string,std::pair<std::string const,std::unique_ptr<BehaviorData::DataProxy,std::default_delete<BehaviorData::DataProxy>>>,std::allocator<std::pair<std::string const,std::unique_ptr<BehaviorData::DataProxy,std::default_delete<BehaviorData::DataProxy>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
                       *((unsigned __int64 **)v1 + 6),
                       (int **)(v3 + 28))
                   + 8);
    v5 = *(_QWORD *)(v4 + 12);
    result = *(_DWORD *)(v4 + 20);
    *((_QWORD *)v1 + 4) = v5;
    *((_DWORD *)v1 + 10) = result;
  }
  else
    *((_DWORD *)v1 + 8) = *(_DWORD *)(v3 + 16);
    *((_DWORD *)v1 + 9) = *(_DWORD *)(v3 + 20);
    result = *(_DWORD *)(v3 + 24);
  return result;
}


int __fastcall ActivateToolNode::ActivateToolNode(BehaviorNode *a1)
{
  int result; // r0@1

  result = j_BehaviorNode::BehaviorNode(a1);
  *(_DWORD *)result = &off_271E250;
  *(_DWORD *)(result + 32) = BlockPos::ZERO;
  *(_DWORD *)(result + 36) = unk_2816278;
  *(_DWORD *)(result + 40) = dword_281627C;
  *(_BYTE *)(result + 44) = BlockID::AIR;
  *(_BYTE *)(result + 45) = 0;
  *(_DWORD *)(result + 48) = 20;
  *(_DWORD *)(result + 52) = 0;
  return result;
}


void __fastcall ActivateToolNode::~ActivateToolNode(ActivateToolNode *this)
{
  ActivateToolNode *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_271E268;
  j_BehaviorTreeDefinitionPtr::~BehaviorTreeDefinitionPtr((ActivateToolNode *)((char *)this + 8));
  j_j_j__ZdlPv_7((void *)v1);
}
