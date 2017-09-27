

void __fastcall MoveToNode::~MoveToNode(MoveToNode *this)
{
  MoveToNode::~MoveToNode(this);
}


int __fastcall MoveToNode::MoveToNode(BehaviorNode *a1)
{
  int result; // r0@1
  int v2; // r1@1

  result = j_BehaviorNode::BehaviorNode(a1);
  *(_DWORD *)result = &off_271E388;
  v2 = dword_2822498;
  *(_QWORD *)(result + 32) = *(_QWORD *)&Vec3::ZERO;
  *(_DWORD *)(result + 40) = v2;
  return result;
}


void __fastcall MoveToNode::~MoveToNode(MoveToNode *this)
{
  MoveToNode *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_271E268;
  j_BehaviorTreeDefinitionPtr::~BehaviorTreeDefinitionPtr((MoveToNode *)((char *)this + 8));
  j_j_j__ZdlPv_7((void *)v1);
}


signed int __fastcall MoveToNode::tick(MoveToNode *this)
{
  int v2; // r0@1
  Entity *v3; // r4@1
  int v4; // r0@1
  MoveToNode *v9; // r0@1
  signed int v10; // r5@2
  char v12; // [sp+4h] [bp-34h]@1
  float v13; // [sp+10h] [bp-28h]@1

  _R5 = this;
  v2 = j_BehaviorComponent::getEntity(*((BehaviorComponent **)this + 5));
  v3 = (Entity *)v2;
  v4 = (*(int (**)(void))(*(_DWORD *)v2 + 52))();
  j_BlockPos::BlockPos((BlockPos *)&v12, *(float *)v4, *((float *)_R5 + 9), *(float *)(v4 + 8));
  j_Vec3::Vec3((int)&v13, (int)&v12);
  __asm
  {
    VLDR            S0, [R5,#0x20]
    VLDR            S6, [SP,#0x38+var_28]
    VLDR            S2, [R5,#0x24]
    VLDR            S8, [SP,#0x38+var_24]
    VSUB.F32        S0, S6, S0
    VLDR            S4, [R5,#0x28]
    VSUB.F32        S2, S8, S2
    VLDR            S10, [SP,#0x38+var_20]
    VSUB.F32        S4, S10, S4
    VMUL.F32        S0, S0, S0
    VMUL.F32        S2, S2, S2
    VMUL.F32        S4, S4, S4
    VADD.F32        S0, S2, S0
    VADD.F32        S0, S0, S4
    VSTR            S0, [SP,#0x38+var_1C]
    VLDR            S16, [SP,#0x38+var_1C]
  }
  j_MoveToNode::lookAt(v9, v3, (MoveToNode *)((char *)_R5 + 32), 180.0, 180.0);
    VLDR            S0, =2.1
    VCMPE.F32       S16, S0
    VMRS            APSR_nzcv, FPSCR
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    j_Entity::pushBackActionEventToActionQueue((int)v3, 3, 2, 512);
    v10 = 0;
  else
    v10 = 1;
    j_Entity::pushBackActionEventToActionQueue((int)v3, 3, 1, 512);
  return v10;
}


int __fastcall MoveToNode::initializeFromDefinition(MoveToNode *this)
{
  MoveToNode *v1; // r4@1
  int v2; // r0@1
  int v3; // r6@1
  int v4; // r0@3
  __int64 v5; // r1@3
  int result; // r0@3

  v1 = this;
  v2 = *((_DWORD *)this + 6);
  v3 = *((_DWORD *)v1 + 1);
  if ( v2 && j_BehaviorData::hasDataOfType(v2, (int **)(v3 + 28), 5) == 1 )
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


int __fastcall MoveToNode::lookAt(MoveToNode *this, Entity *a2, const Vec3 *a3, float a4, float a5)
{
  float v5; // r5@1
  Entity *v7; // r4@1
  float v13; // r1@1
  int v14; // r0@1
  float *v24; // r0@1
  int v25; // r0@1
  float v27; // r3@1
  int result; // r0@1
  float v29; // [sp+4h] [bp-44h]@1
  float v30; // [sp+8h] [bp-40h]@1
  float v31; // [sp+Ch] [bp-3Ch]@1

  v5 = a4;
  _R6 = a3;
  v7 = a2;
  j_Entity::getAttachPos((AABB *)&v31, (int)a2, 3, 0);
  __asm
  {
    VLDR            S0, [R6]
    VLDR            S4, [SP,#0x48+var_3C]
    VLDR            S2, [R6,#8]
    VLDR            S6, [SP,#0x48+var_34]
    VSUB.F32        S20, S0, S4
    VLDR            S16, [R6,#4]
    VSUB.F32        S22, S2, S6
    VLDR            S18, [SP,#0x48+var_38]
    VMUL.F32        S0, S20, S20
    VMUL.F32        S2, S22, S22
    VADD.F32        S0, S2, S0
    VMOV            R0, S0
  }
  v14 = j_mce::Math::sqrt(_R0, v13);
  __asm { VCVT.F64.F32    D1, S20 }
  _R6 = v14;
    VCVT.F64.F32    D0, S22
    VMOV            R0, R1, D0
    VMOV            R2, R3, D1
  _R0 = COERCE_UNSIGNED_INT64(j_atan2(_R0, _R2));
    VMOV            D0, R0, R1
    VSUB.F32        S2, S16, S18
    VCVT.F32.F64    S0, D0
    VMOV            S4, R6
    VSTR            S0, [SP,#0x48+var_40]
    VCVT.F64.F32    D8, S2
    VCVT.F64.F32    D9, S4
  _R0 = j_mce::Degree::asFloat((mce::Degree *)&v30);
    VMOV            R6, R1, D8
    VLDR            S16, [R0]
    VMOV            R2, R3, D9
  LODWORD(_R0) = _R6;
    VSTR            S0, [SP,#0x48+var_44]
  v24 = (float *)j_mce::Degree::asFloat((mce::Degree *)&v29);
  v25 = j_mce::Math::clampRotate(*((mce::Math **)v7 + 30), *v24, a5, *((float *)v7 + 30));
  __asm { VLDR            S0, =-90.0 }
  *((_DWORD *)v7 + 30) = v25 ^ 0x80000000;
    VADD.F32        S0, S16, S0
    VMOV            R1, S0
  result = j_mce::Math::clampRotate(*((mce::Math **)v7 + 31), _R1, v5, v27);
  *((_DWORD *)v7 + 31) = result;
  return result;
}
