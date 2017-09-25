

int __fastcall BreakBlockNode::initializeFromDefinition(BreakBlockNode *this)
{
  BreakBlockNode *v1; // r4@1
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


void __fastcall BreakBlockNode::~BreakBlockNode(BreakBlockNode *this)
{
  BreakBlockNode *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_271E268;
  j_BehaviorTreeDefinitionPtr::~BehaviorTreeDefinitionPtr((BreakBlockNode *)((char *)this + 8));
  j_j_j__ZdlPv_7((void *)v1);
}


void __fastcall BreakBlockNode::~BreakBlockNode(BreakBlockNode *this)
{
  BreakBlockNode::~BreakBlockNode(this);
}


int __fastcall BreakBlockNode::BreakBlockNode(BehaviorNode *a1)
{
  int result; // r0@1

  result = j_BehaviorNode::BehaviorNode(a1);
  *(_DWORD *)result = &off_271E280;
  *(_DWORD *)(result + 32) = BlockPos::ZERO;
  *(_DWORD *)(result + 36) = unk_2816278;
  *(_DWORD *)(result + 40) = dword_281627C;
  *(_BYTE *)(result + 44) = BlockID::AIR;
  return result;
}


signed int __fastcall BreakBlockNode::tick(BreakBlockNode *this)
{
  BreakBlockNode *v1; // r5@1
  signed int v2; // r6@1
  __int64 v3; // r2@2
  int v4; // r4@2
  void *v5; // r0@5
  Entity *v6; // r0@7
  const BlockPos *v7; // r7@7
  unsigned int *v9; // r2@12
  signed int v10; // r1@14
  unsigned __int8 v11; // [sp+0h] [bp-28h]@9
  char v12; // [sp+4h] [bp-24h]@8
  int v13; // [sp+8h] [bp-20h]@5

  v1 = this;
  v2 = *((_DWORD *)this + 7);
  if ( v2 == 1 )
  {
    v4 = j_BehaviorComponent::getEntity(*((BehaviorComponent **)this + 5));
    if ( *((_DWORD *)v1 + 8) != BlockPos::ZERO
      || *((_DWORD *)v1 + 9) != unk_2816278
      || *((_DWORD *)v1 + 10) != dword_281627C )
    {
      v6 = (Entity *)j_BehaviorComponent::getEntity(*((BehaviorComponent **)v1 + 5));
      v7 = (const BlockPos *)j_Entity::getRegion(v6);
      if ( *((_BYTE *)v1 + 44) == BlockID::AIR )
      {
        j_BlockSource::getBlockID((BlockSource *)&v12, v7, (int)v1 + 32);
        *((_BYTE *)v1 + 44) = v12;
      }
      j_BlockSource::getBlockID((BlockSource *)&v11, v7, (int)v1 + 32);
      v2 = 1;
      j_Entity::pushBackActionEventToActionQueue(v4, 24, 1, 512);
      if ( v11 != *((_BYTE *)v1 + 44) )
        j_Entity::pushBackActionEventToActionQueue(v4, 24, 2, 512);
        v2 = 0;
    }
    else
      j_Util::format((Util *)&v13, "BreakBlockNode: mBlockPos was still set to the default invalid value.", v3);
      j_MinecraftEventing::fireEventBehaviorFailed(v4, (const char **)&v13);
      v5 = (void *)(v13 - 12);
      if ( (int *)(v13 - 12) != &dword_28898C0 )
        v9 = (unsigned int *)(v13 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v10 = __ldrex(v9);
          while ( __strex(v10 - 1, v9) );
        }
        else
          v10 = (*v9)--;
        if ( v10 <= 0 )
          j_j_j_j__ZdlPv_9(v5);
      v2 = 2;
  }
  return v2;
}
