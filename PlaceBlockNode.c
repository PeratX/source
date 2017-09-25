

signed int __fastcall PlaceBlockNode::tick(PlaceBlockNode *this)
{
  PlaceBlockNode *v1; // r4@1
  signed int v2; // r6@1
  int v3; // r5@2
  Entity *v4; // r0@3
  const BlockPos *v5; // r7@3
  void *v6; // r0@4
  unsigned int *v8; // r2@8
  signed int v9; // r1@10
  int v10; // [sp+4h] [bp-24h]@4
  unsigned __int8 v11; // [sp+8h] [bp-20h]@3

  v1 = this;
  v2 = *((_DWORD *)this + 7);
  if ( v2 == 1 )
  {
    v3 = j_BehaviorComponent::getEntity(*((BehaviorComponent **)this + 5));
    if ( *((_BYTE *)v1 + 44) )
    {
      v4 = (Entity *)j_BehaviorComponent::getEntity(*((BehaviorComponent **)v1 + 5));
      v5 = (const BlockPos *)j_Entity::getRegion(v4);
      j_Entity::pushBackActionEventToActionQueue(v3, 23, 2, 512);
      v2 = 0;
      *((_BYTE *)v1 + 44) = 0;
      j_BlockSource::getBlockID((BlockSource *)&v11, v5, (int)v1 + 32);
      if ( v11 == BlockID::AIR )
      {
        j_Util::format(
          (Util *)&v10,
          "PlaceBlockNode: Failed to modify the block at (%d,%d,%d).",
          *((_QWORD *)v1 + 4),
          *((_DWORD *)v1 + 10));
        j_MinecraftEventing::fireEventBehaviorFailed(v3, (const char **)&v10);
        v6 = (void *)(v10 - 12);
        if ( (int *)(v10 - 12) != &dword_28898C0 )
        {
          v8 = (unsigned int *)(v10 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v9 = __ldrex(v8);
            while ( __strex(v9 - 1, v8) );
          }
          else
            v9 = (*v8)--;
          if ( v9 <= 0 )
            j_j_j_j__ZdlPv_9(v6);
        }
        v2 = 2;
      }
    }
    else
      v2 = 1;
      j_Entity::pushBackActionEventToActionQueue(v3, 23, 1, 512);
      *((_BYTE *)v1 + 44) = 1;
  }
  return v2;
}


int __fastcall PlaceBlockNode::initializeFromDefinition(PlaceBlockNode *this)
{
  PlaceBlockNode *v1; // r4@1
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


void __fastcall PlaceBlockNode::~PlaceBlockNode(PlaceBlockNode *this)
{
  PlaceBlockNode::~PlaceBlockNode(this);
}


void __fastcall PlaceBlockNode::~PlaceBlockNode(PlaceBlockNode *this)
{
  PlaceBlockNode *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_271E268;
  j_BehaviorTreeDefinitionPtr::~BehaviorTreeDefinitionPtr((PlaceBlockNode *)((char *)this + 8));
  j_j_j__ZdlPv_7((void *)v1);
}


int __fastcall PlaceBlockNode::PlaceBlockNode(BehaviorNode *a1)
{
  int result; // r0@1

  result = j_BehaviorNode::BehaviorNode(a1);
  *(_DWORD *)result = &off_271E3A0;
  *(_DWORD *)(result + 32) = BlockPos::ZERO;
  *(_DWORD *)(result + 36) = unk_2816278;
  *(_DWORD *)(result + 40) = dword_281627C;
  *(_BYTE *)(result + 44) = 0;
  return result;
}
