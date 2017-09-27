

int __fastcall LookAtBlockNode::lookAt(LookAtBlockNode *this, Entity *a2, Vec3 *a3, float a4, float a5)
{
  float v5; // r5@1
  Entity *v7; // r4@1
  float v13; // r1@1
  float v24; // r3@1
  int v25; // r0@1
  float v27; // r3@1
  int result; // r0@1
  float v29; // [sp+4h] [bp-44h]@1

  v5 = a4;
  _R6 = a3;
  v7 = a2;
  j_Entity::getAttachPos((AABB *)&v29, (int)a2, 3, 0);
  __asm
  {
    VLDR            S0, [R6]
    VLDR            S4, [SP,#0x48+var_44]
    VLDR            S2, [R6,#8]
    VLDR            S6, [SP,#0x48+var_3C]
    VSUB.F32        S20, S0, S4
    VLDR            S16, [R6,#4]
    VSUB.F32        S22, S2, S6
    VLDR            S18, [SP,#0x48+var_40]
    VMUL.F32        S0, S20, S20
    VMUL.F32        S2, S22, S22
    VADD.F32        S0, S2, S0
    VMOV            R0, S0
  }
  _R0 = j_mce::Math::sqrt(_R0, v13);
    VCVT.F64.F32    D0, S22
    VCVT.F64.F32    D1, S20
    VMOV            R6, R1, D0
    VMOV            R2, R3, D1
    VMOV            S20, R0
  LODWORD(_R0) = _R6;
  _R0 = j_atan2(_R0, _R2);
  __asm { VSUB.F32        S0, S16, S18 }
  _R6 = LODWORD(_R0);
    VCVT.F64.F32    D0, S0
    VMOV            R0, R1, D0
  _R0 = COERCE_UNSIGNED_INT64(j_atan2(_R0, _R2));
    VMOV            D1, R0, R1
    VLDR            D0, =180.0
    VMOV            D3, R6, R7
    VMUL.F64        D1, D1, D0
  _R2 = &mce::Math::PI;
    VLDR            S4, [R2]
    VMUL.F64        D0, D3, D0
    VCVT.F64.F32    D2, S4
    VDIV.F64        D1, D1, D2
    VDIV.F64        D0, D0, D2
    VCVT.F32.F64    S2, D1
    VMOV            R1, S2
    VLDR            S2, =-90.0
    VCVT.F32.F64    S0, D0
    VADD.F32        S16, S0, S2
  v25 = j_mce::Math::clampRotate(*((mce::Math **)v7 + 30), _R1, a5, v24);
  __asm { VMOV            R1, S16 }
  *((_DWORD *)v7 + 30) = v25 ^ 0x80000000;
  result = j_mce::Math::clampRotate(*((mce::Math **)v7 + 31), _R1, v5, v27);
  *((_DWORD *)v7 + 31) = result;
  return result;
}


void __fastcall LookAtBlockNode::~LookAtBlockNode(LookAtBlockNode *this)
{
  LookAtBlockNode::~LookAtBlockNode(this);
}


int __fastcall LookAtBlockNode::LookAtBlockNode(BehaviorNode *a1)
{
  int result; // r0@1

  result = j_BehaviorNode::BehaviorNode(a1);
  *(_DWORD *)result = &off_271E358;
  *(_DWORD *)(result + 32) = BlockPos::ZERO;
  *(_DWORD *)(result + 36) = unk_2816278;
  *(_DWORD *)(result + 40) = dword_281627C;
  *(_DWORD *)(result + 44) = 20;
  *(_DWORD *)(result + 48) = 20;
  return result;
}


int __fastcall LookAtBlockNode::initializeFromDefinition(LookAtBlockNode *this)
{
  LookAtBlockNode *v1; // r4@1
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


void __fastcall LookAtBlockNode::~LookAtBlockNode(LookAtBlockNode *this)
{
  LookAtBlockNode *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_271E268;
  j_BehaviorTreeDefinitionPtr::~BehaviorTreeDefinitionPtr((LookAtBlockNode *)((char *)this + 8));
  j_j_j__ZdlPv_7((void *)v1);
}


signed int __fastcall LookAtBlockNode::tick(LookAtBlockNode *this)
{
  LookAtBlockNode *v1; // r4@1
  signed int result; // r0@1
  int v3; // r0@2
  int v4; // r6@3
  float v10; // r1@3
  float v21; // r3@3
  int v22; // r0@3
  float v24; // r3@3
  int v25; // r0@4
  float v26; // [sp+0h] [bp-50h]@3
  float v29; // [sp+Ch] [bp-44h]@3

  v1 = this;
  result = *((_DWORD *)this + 7);
  if ( result == 1 )
  {
    v3 = *(_QWORD *)((char *)v1 + 44) >> 32;
    if ( v3 == (unsigned int)*(_QWORD *)((char *)v1 + 44) )
    {
      j_BlockPos::center((BlockPos *)&v26, (int)v1 + 32);
      v4 = j_BehaviorComponent::getEntity(*((BehaviorComponent **)v1 + 5));
      j_Entity::getAttachPos((AABB *)&v29, v4, 3, 0);
      __asm
      {
        VLDR            S0, [SP,#0x50+var_44]
        VLDR            S4, [SP,#0x50+var_50]
        VLDR            S2, [SP,#0x50+var_3C]
        VLDR            S6, [SP,#0x50+var_48]
        VSUB.F32        S20, S4, S0
        VLDR            S16, [SP,#0x50+var_40]
        VSUB.F32        S22, S6, S2
        VLDR            S18, [SP,#0x50+var_4C]
        VMUL.F32        S0, S20, S20
        VMUL.F32        S2, S22, S22
        VADD.F32        S0, S2, S0
        VMOV            R0, S0
      }
      _R0 = j_mce::Math::sqrt(_R0, v10);
        VCVT.F64.F32    D0, S22
        VCVT.F64.F32    D1, S20
        VMOV            R5, R1, D0
        VMOV            R2, R3, D1
        VMOV            S20, R0
      LODWORD(_R0) = _R5;
      _R0 = j_atan2(_R0, _R2);
      __asm { VSUB.F32        S0, S18, S16 }
      _R5 = LODWORD(_R0);
        VCVT.F64.F32    D0, S0
        VMOV            R0, R1, D0
      _R0 = COERCE_UNSIGNED_INT64(j_atan2(_R0, _R2));
        VMOV            D1, R0, R1
        VLDR            D0, =180.0
        VMOV            D3, R5, R7
        VMUL.F64        D1, D1, D0
      _R2 = &mce::Math::PI;
        VLDR            S4, [R2]
        VMUL.F64        D0, D3, D0
        VCVT.F64.F32    D2, S4
        VDIV.F64        D1, D1, D2
        VDIV.F64        D0, D0, D2
        VCVT.F32.F64    S2, D1
        VMOV            R1, S2
        VLDR            S2, =-90.0
        VCVT.F32.F64    S0, D0
        VADD.F32        S16, S0, S2
      v22 = j_mce::Math::clampRotate(*(mce::Math **)(v4 + 120), _R1, 180.0, v21);
      __asm { VMOV            R1, S16 }
      *(_DWORD *)(v4 + 120) = v22 ^ 0x80000000;
      *(_DWORD *)(v4 + 124) = j_mce::Math::clampRotate(*(mce::Math **)(v4 + 124), _R1, 180.0, v24);
      v3 = *((_DWORD *)v1 + 12);
    }
    _VF = __OFSUB__(v3, 1);
    v25 = v3 - 1;
    _ZF = v25 == 0;
    _NF = v25 < 0;
    *((_DWORD *)v1 + 12) = v25;
    result = 0;
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      result = 1;
  }
  return result;
}
