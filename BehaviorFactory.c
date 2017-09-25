

int __fastcall BehaviorFactory::bhaveMakeUnique<GetInteractionPositionForBlockNode>(GetInteractionPositionForBlockNode **a1)
{
  GetInteractionPositionForBlockNode **v1; // r4@1
  GetInteractionPositionForBlockNode *v2; // r5@1
  int result; // r0@1

  v1 = a1;
  v2 = (GetInteractionPositionForBlockNode *)j_operator new(0x40u);
  result = j_GetInteractionPositionForBlockNode::GetInteractionPositionForBlockNode(v2);
  *v1 = v2;
  return result;
}


int __fastcall BehaviorFactory::bhaveMakeUnique<RepeatUntilFailureNode>(RepeatUntilFailureNode **a1)
{
  RepeatUntilFailureNode **v1; // r4@1
  RepeatUntilFailureNode *v2; // r5@1
  int result; // r0@1

  v1 = a1;
  v2 = (RepeatUntilFailureNode *)j_operator new(0x24u);
  result = j_RepeatUntilFailureNode::RepeatUntilFailureNode(v2);
  *v1 = v2;
  return result;
}


void *__fastcall BehaviorFactory::bhaveMakeUnique<MoveDefinition>(_DWORD *a1)
{
  _DWORD *v1; // r5@1
  _DWORD *v2; // r4@1
  __int64 v3; // r0@1
  void *result; // r0@1

  v1 = a1;
  v2 = j_operator new(0x28u);
  j___aeabi_memclr4_0((int)v2, 40);
  LODWORD(v3) = &off_271E0B8;
  HIDWORD(v3) = &unk_28898CC;
  *(_QWORD *)v2 = v3;
  j_BehaviorTreeDefinitionPtr::BehaviorTreeDefinitionPtr((int)(v2 + 2));
  *v2 = &off_271E1F0;
  result = &unk_28898CC;
  v2[9] = &unk_28898CC;
  v2[4] = &unk_28898CC;
  v2[5] = &unk_28898CC;
  v2[6] = &unk_28898CC;
  v2[7] = &unk_28898CC;
  *v1 = v2;
  return result;
}


void *__fastcall BehaviorFactory::bhaveMakeUnique<LookAtBlockDefinition>(_DWORD *a1)
{
  _DWORD *v1; // r5@1
  _DWORD *v2; // r0@1
  _DWORD *v3; // r4@1
  void *result; // r0@1

  v1 = a1;
  v2 = j_operator new(0x20u);
  v3 = v2;
  v2[3] = 0;
  v2[4] = 0;
  v2[5] = 0;
  v2[6] = 0;
  v2[7] = 0;
  *v2 = 0;
  v2[1] = 0;
  v2[2] = 0;
  *v2 = &off_271E0B8;
  v2[1] = &unk_28898CC;
  j_BehaviorTreeDefinitionPtr::BehaviorTreeDefinitionPtr((int)(v2 + 2));
  *v3 = &off_271E1D8;
  result = &unk_28898CC;
  v3[4] = 0;
  v3[5] = 0;
  v3[6] = 0;
  v3[7] = &unk_28898CC;
  *v1 = v3;
  return result;
}


int __fastcall BehaviorFactory::bhaveMakeUnique<ActivateToolNode>(ActivateToolNode **a1)
{
  ActivateToolNode **v1; // r4@1
  ActivateToolNode *v2; // r5@1
  int result; // r0@1

  v1 = a1;
  v2 = (ActivateToolNode *)j_operator new(0x38u);
  result = j_ActivateToolNode::ActivateToolNode(v2);
  *v1 = v2;
  return result;
}


int __fastcall BehaviorFactory::bhaveMakeUnique<GetInteractionPositionForBlockDefinition>(_DWORD *a1)
{
  _DWORD *v1; // r5@1
  _DWORD *v2; // r4@1
  __int64 v3; // r0@1
  int result; // r0@1

  v1 = a1;
  v2 = j_operator new(0x40u);
  j___aeabi_memclr4_0((int)v2, 64);
  LODWORD(v3) = &off_271E0B8;
  HIDWORD(v3) = &unk_28898CC;
  *(_QWORD *)v2 = v3;
  j_BehaviorTreeDefinitionPtr::BehaviorTreeDefinitionPtr((int)(v2 + 2));
  *v2 = &off_271E1C0;
  result = 0;
  v2[4] = 0;
  v2[5] = 0;
  v2[6] = 0;
  v2[7] = &unk_28898CC;
  v2[8] = 0;
  v2[9] = 0;
  v2[10] = 0;
  v2[15] = &unk_28898CC;
  v2[11] = &unk_28898CC;
  v2[12] = &unk_28898CC;
  v2[13] = &unk_28898CC;
  *v1 = v2;
  return result;
}


int __fastcall BehaviorFactory::bhaveMakeUnique<InverterNode>(InverterNode **a1)
{
  InverterNode **v1; // r4@1
  InverterNode *v2; // r5@1
  int result; // r0@1

  v1 = a1;
  v2 = (InverterNode *)j_operator new(0x24u);
  result = j_InverterNode::InverterNode(v2);
  *v1 = v2;
  return result;
}


int __fastcall BehaviorFactory::bhaveMakeUnique<RepeatUntilSuccessNode>(RepeatUntilSuccessNode **a1)
{
  RepeatUntilSuccessNode **v1; // r4@1
  RepeatUntilSuccessNode *v2; // r5@1
  int result; // r0@1

  v1 = a1;
  v2 = (RepeatUntilSuccessNode *)j_operator new(0x2Cu);
  result = j_RepeatUntilSuccessNode::RepeatUntilSuccessNode(v2);
  *v1 = v2;
  return result;
}


void **__fastcall BehaviorFactory::bhaveMakeUnique<InverterDefinition>(_DWORD *a1)
{
  _DWORD *v1; // r5@1
  _DWORD *v2; // r0@1
  _DWORD *v3; // r4@1
  void **result; // r0@1

  v1 = a1;
  v2 = j_operator new(0x14u);
  v3 = v2;
  v2[3] = 0;
  v2[4] = 0;
  *v2 = 0;
  v2[1] = 0;
  v2[2] = 0;
  *v2 = &off_271E0B8;
  v2[1] = &unk_28898CC;
  j_BehaviorTreeDefinitionPtr::BehaviorTreeDefinitionPtr((int)(v2 + 2));
  v3[4] = 0;
  *v1 = v3;
  result = &off_271E160;
  *v3 = &off_271E160;
  return result;
}


void **__fastcall BehaviorFactory::bhaveMakeUnique<SequenceDefinition>(_DWORD *a1)
{
  _DWORD *v1; // r5@1
  _DWORD *v2; // r0@1
  _DWORD *v3; // r4@1
  void **result; // r0@1

  v1 = a1;
  v2 = j_operator new(0x1Cu);
  v3 = v2;
  v2[3] = 0;
  v2[4] = 0;
  v2[5] = 0;
  v2[6] = 0;
  *v2 = 0;
  v2[1] = 0;
  v2[2] = 0;
  *v2 = &off_271E0B8;
  v2[1] = &unk_28898CC;
  j_BehaviorTreeDefinitionPtr::BehaviorTreeDefinitionPtr((int)(v2 + 2));
  v3[4] = 0;
  v3[5] = 0;
  v3[6] = 0;
  *v1 = v3;
  result = &off_271E0E8;
  *v3 = &off_271E0E8;
  return result;
}


void *__fastcall BehaviorFactory::loadNodeDefinition(_DWORD *a1, unsigned __int64 *a2, int **a3, Json::Value *a4, int a5)
{
  int **v5; // r7@1
  unsigned __int64 *v6; // r5@1
  _DWORD *v7; // r8@1
  Json::Value *v8; // r4@1
  int v9; // r0@1
  int v10; // r6@1
  void *result; // r0@3
  int v12; // r6@3
  void (__fastcall *v13)(int, int *, unsigned __int64 *); // r9@4
  const Json::Value *v14; // r0@4
  int v15; // [sp+0h] [bp-30h]@4
  int v16; // [sp+10h] [bp-20h]@3

  v5 = a3;
  v6 = a2;
  v7 = a1;
  v8 = a4;
  v9 = j_std::_Hashtable<std::string,std::pair<std::string const,std::pair<std::function<std::unique_ptr<BehaviorDefinition,std::default_delete<BehaviorDefinition>> ()(void)>,std::function<std::unique_ptr<BehaviorNode,std::default_delete<BehaviorNode>> ()(void)>>>,std::allocator<std::pair<std::string const,std::pair<std::function<std::unique_ptr<BehaviorDefinition,std::default_delete<BehaviorDefinition>> ()(void)>,std::function<std::unique_ptr<BehaviorNode,std::default_delete<BehaviorNode>> ()(void)>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
         a2,
         a3);
  v10 = v9;
  if ( v9 )
  {
    if ( !*(_DWORD *)(v9 + 16) )
      sub_21E5F48();
    (*(void (__fastcall **)(int *, int))(v9 + 20))(&v16, v9 + 8);
    result = EntityInteraction::setInteractText((int *)(v16 + 4), (int *)(v10 + 4));
    v12 = v16;
    *v7 = v16;
    if ( v12 )
    {
      j_BehaviorTreeDefinitionPtr::operator=((BehaviorTreeDefinitionPtr *)(v12 + 8), a5);
      v13 = *(void (__fastcall **)(int, int *, unsigned __int64 *))(*(_DWORD *)v12 + 8);
      v14 = (const Json::Value *)j_Json::Value::operator[](v8, (const char **)v5);
      j_Json::Value::Value((Json::Value *)&v15, v14);
      v13(v12, &v15, v6);
      result = (void *)j_Json::Value::~Value((Json::Value *)&v15);
    }
  }
  else
    result = 0;
    *v7 = 0;
  return result;
}


int __fastcall BehaviorFactory::bhaveMakeUnique<LookAtBlockNode>(LookAtBlockNode **a1)
{
  LookAtBlockNode **v1; // r4@1
  LookAtBlockNode *v2; // r5@1
  int result; // r0@1

  v1 = a1;
  v2 = (LookAtBlockNode *)j_operator new(0x34u);
  result = j_LookAtBlockNode::LookAtBlockNode(v2);
  *v1 = v2;
  return result;
}


void *__fastcall BehaviorFactory::bhaveMakeUnique<FindBlockDefinition>(_DWORD *a1)
{
  _DWORD *v1; // r5@1
  _DWORD *v2; // r0@1
  _DWORD *v3; // r4@1
  void *result; // r0@1

  v1 = a1;
  v2 = j_operator new(0x18u);
  v3 = v2;
  v2[3] = 0;
  v2[4] = 0;
  v2[5] = 0;
  *v2 = 0;
  v2[1] = 0;
  v2[2] = 0;
  *v2 = &off_271E0B8;
  v2[1] = &unk_28898CC;
  j_BehaviorTreeDefinitionPtr::BehaviorTreeDefinitionPtr((int)(v2 + 2));
  *v3 = &off_271E190;
  result = &unk_28898CC;
  v3[4] = &unk_28898CC;
  v3[5] = &unk_28898CC;
  *v1 = v3;
  return result;
}


int __fastcall BehaviorFactory::bhaveMakeUnique<SequenceBehaviorNode>(SequenceBehaviorNode **a1)
{
  SequenceBehaviorNode **v1; // r4@1
  SequenceBehaviorNode *v2; // r5@1
  int result; // r0@1

  v1 = a1;
  v2 = (SequenceBehaviorNode *)j_operator new(0x28u);
  result = j_SequenceBehaviorNode::SequenceBehaviorNode(v2);
  *v1 = v2;
  return result;
}


int __fastcall BehaviorFactory::bhaveMakeUnique<FindBlockNode>(FindBlockNode **a1)
{
  FindBlockNode **v1; // r4@1
  FindBlockNode *v2; // r5@1
  int result; // r0@1

  v1 = a1;
  v2 = (FindBlockNode *)j_operator new(0x24u);
  result = j_FindBlockNode::FindBlockNode(v2);
  *v1 = v2;
  return result;
}


void __fastcall BehaviorFactory::_initNodes(BehaviorFactory *this)
{
  unsigned __int64 *v1; // r6@1
  void *v2; // r0@5
  __int64 v3; // r4@6
  void *v4; // r0@10
  __int64 v5; // r4@11
  void *v6; // r0@15
  __int64 v7; // r4@16
  void *v8; // r0@20
  __int64 v9; // r4@21
  void *v10; // r0@25
  __int64 v11; // r4@26
  void *v12; // r0@30
  __int64 v13; // r4@31
  void *v14; // r0@35
  __int64 v15; // r4@36
  void *v16; // r0@40
  __int64 v17; // r4@41
  void *v18; // r0@45
  __int64 v19; // r4@46
  void *v20; // r0@50
  __int64 v21; // r4@51
  void *v22; // r0@55
  __int64 v23; // r4@56
  void *v24; // r0@60
  __int64 v25; // r4@61
  void *v26; // r0@65
  __int64 v27; // r4@66
  void *v28; // r0@70
  __int64 v29; // r4@71
  void *v30; // r0@75
  unsigned int *v31; // r2@77
  signed int v32; // r1@79
  unsigned int *v33; // r2@81
  signed int v34; // r1@83
  unsigned int *v35; // r2@85
  signed int v36; // r1@87
  unsigned int *v37; // r2@89
  signed int v38; // r1@91
  unsigned int *v39; // r2@93
  signed int v40; // r1@95
  unsigned int *v41; // r2@97
  signed int v42; // r1@99
  unsigned int *v43; // r2@101
  signed int v44; // r1@103
  unsigned int *v45; // r2@105
  signed int v46; // r1@107
  unsigned int *v47; // r2@109
  signed int v48; // r1@111
  unsigned int *v49; // r2@113
  signed int v50; // r1@115
  unsigned int *v51; // r2@117
  signed int v52; // r1@119
  unsigned int *v53; // r2@121
  signed int v54; // r1@123
  unsigned int *v55; // r2@125
  signed int v56; // r1@127
  unsigned int *v57; // r2@129
  signed int v58; // r1@131
  unsigned int *v59; // r2@133
  signed int v60; // r1@135
  int (*v61)(); // [sp+4h] [bp-26Ch]@71
  __int64 v62; // [sp+Ch] [bp-264h]@71
  int (*v63)(); // [sp+14h] [bp-25Ch]@71
  void (*v64)(void); // [sp+1Ch] [bp-254h]@71
  int (__fastcall *v65)(_DWORD *, void (__fastcall **)(_DWORD)); // [sp+20h] [bp-250h]@71
  int v66; // [sp+28h] [bp-248h]@71
  int (*v67)(); // [sp+2Ch] [bp-244h]@66
  __int64 v68; // [sp+34h] [bp-23Ch]@66
  int (*v69)(); // [sp+3Ch] [bp-234h]@66
  void (*v70)(void); // [sp+44h] [bp-22Ch]@66
  int (__fastcall *v71)(_DWORD *, void (__fastcall **)(_DWORD)); // [sp+48h] [bp-228h]@66
  int v72; // [sp+50h] [bp-220h]@66
  int (*v73)(); // [sp+54h] [bp-21Ch]@61
  __int64 v74; // [sp+5Ch] [bp-214h]@61
  int (*v75)(); // [sp+64h] [bp-20Ch]@61
  void (*v76)(void); // [sp+6Ch] [bp-204h]@61
  int (__fastcall *v77)(_DWORD *, void (__fastcall **)(_DWORD)); // [sp+70h] [bp-200h]@61
  int v78; // [sp+78h] [bp-1F8h]@61
  int (*v79)(); // [sp+7Ch] [bp-1F4h]@56
  __int64 v80; // [sp+84h] [bp-1ECh]@56
  int (*v81)(); // [sp+8Ch] [bp-1E4h]@56
  void (*v82)(void); // [sp+94h] [bp-1DCh]@56
  int (__fastcall *v83)(_DWORD *, void (__fastcall **)(_DWORD)); // [sp+98h] [bp-1D8h]@56
  int v84; // [sp+A0h] [bp-1D0h]@56
  int (*v85)(); // [sp+A4h] [bp-1CCh]@51
  __int64 v86; // [sp+ACh] [bp-1C4h]@51
  int (*v87)(); // [sp+B4h] [bp-1BCh]@51
  void (*v88)(void); // [sp+BCh] [bp-1B4h]@51
  int (__fastcall *v89)(_DWORD *, void (__fastcall **)(_DWORD)); // [sp+C0h] [bp-1B0h]@51
  int v90; // [sp+C8h] [bp-1A8h]@51
  int (*v91)(); // [sp+CCh] [bp-1A4h]@46
  __int64 v92; // [sp+D4h] [bp-19Ch]@46
  void *(__fastcall *v93)(_DWORD *); // [sp+DCh] [bp-194h]@46
  void (*v94)(void); // [sp+E4h] [bp-18Ch]@46
  int (__fastcall *v95)(_DWORD *, void (__fastcall **)(_DWORD)); // [sp+E8h] [bp-188h]@46
  int v96; // [sp+F0h] [bp-180h]@46
  int (__fastcall *v97)(FindBlockNode **); // [sp+F4h] [bp-17Ch]@41
  __int64 v98; // [sp+FCh] [bp-174h]@41
  void *(__fastcall *v99)(_DWORD *); // [sp+104h] [bp-16Ch]@41
  void (*v100)(void); // [sp+10Ch] [bp-164h]@41
  int (__fastcall *v101)(_DWORD *, void (__fastcall **)(_DWORD)); // [sp+110h] [bp-160h]@41
  int v102; // [sp+118h] [bp-158h]@41
  int (__fastcall *v103)(BreakBlockNode **); // [sp+11Ch] [bp-154h]@36
  __int64 v104; // [sp+124h] [bp-14Ch]@36
  void *(__fastcall *v105)(_DWORD *); // [sp+12Ch] [bp-144h]@36
  void (*v106)(void); // [sp+134h] [bp-13Ch]@36
  int (__fastcall *v107)(_DWORD *, void (__fastcall **)(_DWORD)); // [sp+138h] [bp-138h]@36
  int v108; // [sp+140h] [bp-130h]@36
  int (__fastcall *v109)(ActivateToolNode **); // [sp+144h] [bp-12Ch]@31
  __int64 v110; // [sp+14Ch] [bp-124h]@31
  void *(__fastcall *v111)(_DWORD *); // [sp+154h] [bp-11Ch]@31
  void (*v112)(void); // [sp+15Ch] [bp-114h]@31
  int (__fastcall *v113)(_DWORD *, void (__fastcall **)(_DWORD)); // [sp+160h] [bp-110h]@31
  int v114; // [sp+168h] [bp-108h]@31
  int (__fastcall *v115)(InverterNode **); // [sp+16Ch] [bp-104h]@26
  __int64 v116; // [sp+174h] [bp-FCh]@26
  void **(__fastcall *v117)(_DWORD *); // [sp+17Ch] [bp-F4h]@26
  void (*v118)(void); // [sp+184h] [bp-ECh]@26
  int (__fastcall *v119)(_DWORD *, void (__fastcall **)(_DWORD)); // [sp+188h] [bp-E8h]@26
  int v120; // [sp+190h] [bp-E0h]@26
  int (__fastcall *v121)(RepeatUntilFailureNode **); // [sp+194h] [bp-DCh]@21
  __int64 v122; // [sp+19Ch] [bp-D4h]@21
  void **(__fastcall *v123)(_DWORD *); // [sp+1A4h] [bp-CCh]@21
  void (*v124)(void); // [sp+1ACh] [bp-C4h]@21
  int (__fastcall *v125)(_DWORD *, void (__fastcall **)(_DWORD)); // [sp+1B0h] [bp-C0h]@21
  int v126; // [sp+1B8h] [bp-B8h]@21
  int (__fastcall *v127)(RepeatUntilSuccessNode **); // [sp+1BCh] [bp-B4h]@16
  __int64 v128; // [sp+1C4h] [bp-ACh]@16
  void *(__fastcall *v129)(_DWORD *); // [sp+1CCh] [bp-A4h]@16
  void (*v130)(void); // [sp+1D4h] [bp-9Ch]@16
  int (__fastcall *v131)(_DWORD *, void (__fastcall **)(_DWORD)); // [sp+1D8h] [bp-98h]@16
  int v132; // [sp+1E0h] [bp-90h]@16
  BehaviorNode *(__fastcall *v133)(SubtreeNode **); // [sp+1E4h] [bp-8Ch]@11
  __int64 v134; // [sp+1ECh] [bp-84h]@11
  void *(__fastcall *v135)(_DWORD *); // [sp+1F4h] [bp-7Ch]@11
  void (*v136)(void); // [sp+1FCh] [bp-74h]@11
  int (__fastcall *v137)(_DWORD *, void (__fastcall **)(_DWORD)); // [sp+200h] [bp-70h]@11
  int v138; // [sp+208h] [bp-68h]@11
  int (__fastcall *v139)(SelectorBehaviorNode **); // [sp+20Ch] [bp-64h]@6
  __int64 v140; // [sp+214h] [bp-5Ch]@6
  void **(__fastcall *v141)(_DWORD *); // [sp+21Ch] [bp-54h]@6
  void (*v142)(void); // [sp+224h] [bp-4Ch]@6
  int (__fastcall *v143)(_DWORD *, void (__fastcall **)(_DWORD)); // [sp+228h] [bp-48h]@6
  int v144; // [sp+230h] [bp-40h]@6
  int (__fastcall *v145)(SequenceBehaviorNode **); // [sp+234h] [bp-3Ch]@1
  void (*v146)(void); // [sp+23Ch] [bp-34h]@1
  int (__fastcall *v147)(_DWORD *, void (__fastcall **)(_DWORD)); // [sp+240h] [bp-30h]@1
  void **(__fastcall *v148)(_DWORD *); // [sp+244h] [bp-2Ch]@1
  void (*v149)(void); // [sp+24Ch] [bp-24h]@1
  int (__fastcall *v150)(_DWORD *, void (__fastcall **)(_DWORD)); // [sp+250h] [bp-20h]@1
  int v151; // [sp+258h] [bp-18h]@1

  v1 = (unsigned __int64 *)this;
  sub_21E94B4((void **)&v151, "minecraft:sequence");
  v148 = BehaviorFactory::bhaveMakeUnique<SequenceDefinition>;
  v149 = (void (*)(void))std::_Function_base::_Base_manager<std::unique_ptr<SequenceDefinition,std::default_delete<SequenceDefinition>> (*)(void)>::_M_manager;
  v150 = std::_Function_handler<std::unique_ptr<BehaviorDefinition,std::default_delete<BehaviorDefinition>> ()(void),std::unique_ptr<SequenceDefinition,std::default_delete<SequenceDefinition>> (*)(void)>::_M_invoke;
  v145 = BehaviorFactory::bhaveMakeUnique<SequenceBehaviorNode>;
  v146 = (void (*)(void))std::_Function_base::_Base_manager<std::unique_ptr<SequenceBehaviorNode,std::default_delete<SequenceBehaviorNode>> (*)(void)>::_M_manager;
  v147 = std::_Function_handler<std::unique_ptr<BehaviorNode,std::default_delete<BehaviorNode>> ()(void),std::unique_ptr<SequenceBehaviorNode,std::default_delete<SequenceBehaviorNode>> (*)(void)>::_M_invoke;
  j_BehaviorFactory::registerNodePair(v1, (int **)&v151, (int)&v148, (int)&v145);
  if ( v146 )
    v146();
  if ( v149 )
    v149();
  v2 = (void *)(v151 - 12);
  if ( (int *)(v151 - 12) != &dword_28898C0 )
  {
    v31 = (unsigned int *)(v151 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
    }
    else
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j__ZdlPv_9(v2);
  }
  sub_21E94B4((void **)&v144, "minecraft:selector");
  HIDWORD(v3) = std::_Function_handler<std::unique_ptr<BehaviorNode,std::default_delete<BehaviorNode>> ()(void),std::unique_ptr<SelectorBehaviorNode,std::default_delete<SelectorBehaviorNode>> (*)(void)>::_M_invoke;
  LODWORD(v3) = std::_Function_base::_Base_manager<std::unique_ptr<SelectorBehaviorNode,std::default_delete<SelectorBehaviorNode>> (*)(void)>::_M_manager;
  v141 = BehaviorFactory::bhaveMakeUnique<SelectorDefinition>;
  v142 = (void (*)(void))std::_Function_base::_Base_manager<std::unique_ptr<SelectorDefinition,std::default_delete<SelectorDefinition>> (*)(void)>::_M_manager;
  v143 = std::_Function_handler<std::unique_ptr<BehaviorDefinition,std::default_delete<BehaviorDefinition>> ()(void),std::unique_ptr<SelectorDefinition,std::default_delete<SelectorDefinition>> (*)(void)>::_M_invoke;
  v139 = BehaviorFactory::bhaveMakeUnique<SelectorBehaviorNode>;
  v140 = v3;
  j_BehaviorFactory::registerNodePair(v1, (int **)&v144, (int)&v141, (int)&v139);
  if ( (_DWORD)v140 )
    ((void (*)(void))v140)();
  if ( v142 )
    v142();
  v4 = (void *)(v144 - 12);
  if ( (int *)(v144 - 12) != &dword_28898C0 )
    v33 = (unsigned int *)(v144 - 4);
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
      v34 = (*v33)--;
    if ( v34 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  sub_21E94B4((void **)&v138, "minecraft:subtree");
  HIDWORD(v5) = std::_Function_handler<std::unique_ptr<BehaviorNode,std::default_delete<BehaviorNode>> ()(void),std::unique_ptr<SubtreeNode,std::default_delete<SubtreeNode>> (*)(void)>::_M_invoke;
  LODWORD(v5) = std::_Function_base::_Base_manager<std::unique_ptr<SubtreeNode,std::default_delete<SubtreeNode>> (*)(void)>::_M_manager;
  v135 = BehaviorFactory::bhaveMakeUnique<SubtreeDefinition>;
  v136 = (void (*)(void))std::_Function_base::_Base_manager<std::unique_ptr<SubtreeDefinition,std::default_delete<SubtreeDefinition>> (*)(void)>::_M_manager;
  v137 = std::_Function_handler<std::unique_ptr<BehaviorDefinition,std::default_delete<BehaviorDefinition>> ()(void),std::unique_ptr<SubtreeDefinition,std::default_delete<SubtreeDefinition>> (*)(void)>::_M_invoke;
  v133 = BehaviorFactory::bhaveMakeUnique<SubtreeNode>;
  v134 = v5;
  j_BehaviorFactory::registerNodePair(v1, (int **)&v138, (int)&v135, (int)&v133);
  if ( (_DWORD)v134 )
    ((void (*)(void))v134)();
  if ( v136 )
    v136();
  v6 = (void *)(v138 - 12);
  if ( (int *)(v138 - 12) != &dword_28898C0 )
    v35 = (unsigned int *)(v138 - 4);
        v36 = __ldrex(v35);
      while ( __strex(v36 - 1, v35) );
      v36 = (*v35)--;
    if ( v36 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  sub_21E94B4((void **)&v132, "minecraft:repeat_until_success");
  HIDWORD(v7) = std::_Function_handler<std::unique_ptr<BehaviorNode,std::default_delete<BehaviorNode>> ()(void),std::unique_ptr<RepeatUntilSuccessNode,std::default_delete<RepeatUntilSuccessNode>> (*)(void)>::_M_invoke;
  LODWORD(v7) = std::_Function_base::_Base_manager<std::unique_ptr<RepeatUntilSuccessNode,std::default_delete<RepeatUntilSuccessNode>> (*)(void)>::_M_manager;
  v129 = BehaviorFactory::bhaveMakeUnique<RepeatUntilSuccessDefinition>;
  v130 = (void (*)(void))std::_Function_base::_Base_manager<std::unique_ptr<RepeatUntilSuccessDefinition,std::default_delete<RepeatUntilSuccessDefinition>> (*)(void)>::_M_manager;
  v131 = std::_Function_handler<std::unique_ptr<BehaviorDefinition,std::default_delete<BehaviorDefinition>> ()(void),std::unique_ptr<RepeatUntilSuccessDefinition,std::default_delete<RepeatUntilSuccessDefinition>> (*)(void)>::_M_invoke;
  v127 = BehaviorFactory::bhaveMakeUnique<RepeatUntilSuccessNode>;
  v128 = v7;
  j_BehaviorFactory::registerNodePair(v1, (int **)&v132, (int)&v129, (int)&v127);
  if ( (_DWORD)v128 )
    ((void (*)(void))v128)();
  if ( v130 )
    v130();
  v8 = (void *)(v132 - 12);
  if ( (int *)(v132 - 12) != &dword_28898C0 )
    v37 = (unsigned int *)(v132 - 4);
        v38 = __ldrex(v37);
      while ( __strex(v38 - 1, v37) );
      v38 = (*v37)--;
    if ( v38 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  sub_21E94B4((void **)&v126, "minecraft:repeat_until_failure");
  HIDWORD(v9) = std::_Function_handler<std::unique_ptr<BehaviorNode,std::default_delete<BehaviorNode>> ()(void),std::unique_ptr<RepeatUntilFailureNode,std::default_delete<RepeatUntilFailureNode>> (*)(void)>::_M_invoke;
  LODWORD(v9) = std::_Function_base::_Base_manager<std::unique_ptr<RepeatUntilFailureNode,std::default_delete<RepeatUntilFailureNode>> (*)(void)>::_M_manager;
  v123 = BehaviorFactory::bhaveMakeUnique<RepeatUntilFailureDefinition>;
  v124 = (void (*)(void))std::_Function_base::_Base_manager<std::unique_ptr<RepeatUntilFailureDefinition,std::default_delete<RepeatUntilFailureDefinition>> (*)(void)>::_M_manager;
  v125 = std::_Function_handler<std::unique_ptr<BehaviorDefinition,std::default_delete<BehaviorDefinition>> ()(void),std::unique_ptr<RepeatUntilFailureDefinition,std::default_delete<RepeatUntilFailureDefinition>> (*)(void)>::_M_invoke;
  v121 = BehaviorFactory::bhaveMakeUnique<RepeatUntilFailureNode>;
  v122 = v9;
  j_BehaviorFactory::registerNodePair(v1, (int **)&v126, (int)&v123, (int)&v121);
  if ( (_DWORD)v122 )
    ((void (*)(void))v122)();
  if ( v124 )
    v124();
  v10 = (void *)(v126 - 12);
  if ( (int *)(v126 - 12) != &dword_28898C0 )
    v39 = (unsigned int *)(v126 - 4);
        v40 = __ldrex(v39);
      while ( __strex(v40 - 1, v39) );
      v40 = (*v39)--;
    if ( v40 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  sub_21E94B4((void **)&v120, "minecraft:inverter");
  HIDWORD(v11) = std::_Function_handler<std::unique_ptr<BehaviorNode,std::default_delete<BehaviorNode>> ()(void),std::unique_ptr<InverterNode,std::default_delete<InverterNode>> (*)(void)>::_M_invoke;
  LODWORD(v11) = std::_Function_base::_Base_manager<std::unique_ptr<InverterNode,std::default_delete<InverterNode>> (*)(void)>::_M_manager;
  v117 = BehaviorFactory::bhaveMakeUnique<InverterDefinition>;
  v118 = (void (*)(void))std::_Function_base::_Base_manager<std::unique_ptr<InverterDefinition,std::default_delete<InverterDefinition>> (*)(void)>::_M_manager;
  v119 = std::_Function_handler<std::unique_ptr<BehaviorDefinition,std::default_delete<BehaviorDefinition>> ()(void),std::unique_ptr<InverterDefinition,std::default_delete<InverterDefinition>> (*)(void)>::_M_invoke;
  v115 = BehaviorFactory::bhaveMakeUnique<InverterNode>;
  v116 = v11;
  j_BehaviorFactory::registerNodePair(v1, (int **)&v120, (int)&v117, (int)&v115);
  if ( (_DWORD)v116 )
    ((void (*)(void))v116)();
  if ( v118 )
    v118();
  v12 = (void *)(v120 - 12);
  if ( (int *)(v120 - 12) != &dword_28898C0 )
    v41 = (unsigned int *)(v120 - 4);
        v42 = __ldrex(v41);
      while ( __strex(v42 - 1, v41) );
      v42 = (*v41)--;
    if ( v42 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  sub_21E94B4((void **)&v114, "minecraft:activate_tool");
  HIDWORD(v13) = std::_Function_handler<std::unique_ptr<BehaviorNode,std::default_delete<BehaviorNode>> ()(void),std::unique_ptr<ActivateToolNode,std::default_delete<ActivateToolNode>> (*)(void)>::_M_invoke;
  LODWORD(v13) = std::_Function_base::_Base_manager<std::unique_ptr<ActivateToolNode,std::default_delete<ActivateToolNode>> (*)(void)>::_M_manager;
  v111 = BehaviorFactory::bhaveMakeUnique<ActivateToolDefinition>;
  v112 = (void (*)(void))std::_Function_base::_Base_manager<std::unique_ptr<ActivateToolDefinition,std::default_delete<ActivateToolDefinition>> (*)(void)>::_M_manager;
  v113 = std::_Function_handler<std::unique_ptr<BehaviorDefinition,std::default_delete<BehaviorDefinition>> ()(void),std::unique_ptr<ActivateToolDefinition,std::default_delete<ActivateToolDefinition>> (*)(void)>::_M_invoke;
  v109 = BehaviorFactory::bhaveMakeUnique<ActivateToolNode>;
  v110 = v13;
  j_BehaviorFactory::registerNodePair(v1, (int **)&v114, (int)&v111, (int)&v109);
  if ( (_DWORD)v110 )
    ((void (*)(void))v110)();
  if ( v112 )
    v112();
  v14 = (void *)(v114 - 12);
  if ( (int *)(v114 - 12) != &dword_28898C0 )
    v43 = (unsigned int *)(v114 - 4);
        v44 = __ldrex(v43);
      while ( __strex(v44 - 1, v43) );
      v44 = (*v43)--;
    if ( v44 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  sub_21E94B4((void **)&v108, "minecraft:break_block");
  HIDWORD(v15) = std::_Function_handler<std::unique_ptr<BehaviorNode,std::default_delete<BehaviorNode>> ()(void),std::unique_ptr<BreakBlockNode,std::default_delete<BreakBlockNode>> (*)(void)>::_M_invoke;
  LODWORD(v15) = std::_Function_base::_Base_manager<std::unique_ptr<BreakBlockNode,std::default_delete<BreakBlockNode>> (*)(void)>::_M_manager;
  v105 = BehaviorFactory::bhaveMakeUnique<BreakBlockDefinition>;
  v106 = (void (*)(void))std::_Function_base::_Base_manager<std::unique_ptr<BreakBlockDefinition,std::default_delete<BreakBlockDefinition>> (*)(void)>::_M_manager;
  v107 = std::_Function_handler<std::unique_ptr<BehaviorDefinition,std::default_delete<BehaviorDefinition>> ()(void),std::unique_ptr<BreakBlockDefinition,std::default_delete<BreakBlockDefinition>> (*)(void)>::_M_invoke;
  v103 = BehaviorFactory::bhaveMakeUnique<BreakBlockNode>;
  v104 = v15;
  j_BehaviorFactory::registerNodePair(v1, (int **)&v108, (int)&v105, (int)&v103);
  if ( (_DWORD)v104 )
    ((void (*)(void))v104)();
  if ( v106 )
    v106();
  v16 = (void *)(v108 - 12);
  if ( (int *)(v108 - 12) != &dword_28898C0 )
    v45 = (unsigned int *)(v108 - 4);
        v46 = __ldrex(v45);
      while ( __strex(v46 - 1, v45) );
      v46 = (*v45)--;
    if ( v46 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  sub_21E94B4((void **)&v102, "minecraft:find_block");
  HIDWORD(v17) = std::_Function_handler<std::unique_ptr<BehaviorNode,std::default_delete<BehaviorNode>> ()(void),std::unique_ptr<FindBlockNode,std::default_delete<FindBlockNode>> (*)(void)>::_M_invoke;
  LODWORD(v17) = std::_Function_base::_Base_manager<std::unique_ptr<FindBlockNode,std::default_delete<FindBlockNode>> (*)(void)>::_M_manager;
  v99 = BehaviorFactory::bhaveMakeUnique<FindBlockDefinition>;
  v100 = (void (*)(void))std::_Function_base::_Base_manager<std::unique_ptr<FindBlockDefinition,std::default_delete<FindBlockDefinition>> (*)(void)>::_M_manager;
  v101 = std::_Function_handler<std::unique_ptr<BehaviorDefinition,std::default_delete<BehaviorDefinition>> ()(void),std::unique_ptr<FindBlockDefinition,std::default_delete<FindBlockDefinition>> (*)(void)>::_M_invoke;
  v97 = BehaviorFactory::bhaveMakeUnique<FindBlockNode>;
  v98 = v17;
  j_BehaviorFactory::registerNodePair(v1, (int **)&v102, (int)&v99, (int)&v97);
  if ( (_DWORD)v98 )
    ((void (*)(void))v98)();
  if ( v100 )
    v100();
  v18 = (void *)(v102 - 12);
  if ( (int *)(v102 - 12) != &dword_28898C0 )
    v47 = (unsigned int *)(v102 - 4);
        v48 = __ldrex(v47);
      while ( __strex(v48 - 1, v47) );
      v48 = (*v47)--;
    if ( v48 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  sub_21E94B4((void **)&v96, "minecraft:fly");
  HIDWORD(v19) = std::_Function_handler<std::unique_ptr<BehaviorNode,std::default_delete<BehaviorNode>> ()(void),std::unique_ptr<FlyNode,std::default_delete<FlyNode>> (*)(void)>::_M_invoke;
  LODWORD(v19) = std::_Function_base::_Base_manager<std::unique_ptr<FlyNode,std::default_delete<FlyNode>> (*)(void)>::_M_manager;
  v93 = BehaviorFactory::bhaveMakeUnique<FlyDefinition>;
  v94 = (void (*)(void))std::_Function_base::_Base_manager<std::unique_ptr<FlyDefinition,std::default_delete<FlyDefinition>> (*)(void)>::_M_manager;
  v95 = std::_Function_handler<std::unique_ptr<BehaviorDefinition,std::default_delete<BehaviorDefinition>> ()(void),std::unique_ptr<FlyDefinition,std::default_delete<FlyDefinition>> (*)(void)>::_M_invoke;
  v91 = BehaviorFactory::bhaveMakeUnique<FlyNode>;
  v92 = v19;
  j_BehaviorFactory::registerNodePair(v1, (int **)&v96, (int)&v93, (int)&v91);
  if ( (_DWORD)v92 )
    ((void (*)(void))v92)();
  if ( v94 )
    v94();
  v20 = (void *)(v96 - 12);
  if ( (int *)(v96 - 12) != &dword_28898C0 )
    v49 = (unsigned int *)(v96 - 4);
        v50 = __ldrex(v49);
      while ( __strex(v50 - 1, v49) );
      v50 = (*v49)--;
    if ( v50 <= 0 )
      j_j_j_j__ZdlPv_9(v20);
  sub_21E94B4((void **)&v90, "minecraft:get_interaction_position_for_block");
  HIDWORD(v21) = std::_Function_handler<std::unique_ptr<BehaviorNode,std::default_delete<BehaviorNode>> ()(void),std::unique_ptr<GetInteractionPositionForBlockNode,std::default_delete<GetInteractionPositionForBlockNode>> (*)(void)>::_M_invoke;
  LODWORD(v21) = std::_Function_base::_Base_manager<std::unique_ptr<GetInteractionPositionForBlockNode,std::default_delete<GetInteractionPositionForBlockNode>> (*)(void)>::_M_manager;
  v87 = BehaviorFactory::bhaveMakeUnique<GetInteractionPositionForBlockDefinition>;
  v88 = (void (*)(void))std::_Function_base::_Base_manager<std::unique_ptr<GetInteractionPositionForBlockDefinition,std::default_delete<GetInteractionPositionForBlockDefinition>> (*)(void)>::_M_manager;
  v89 = std::_Function_handler<std::unique_ptr<BehaviorDefinition,std::default_delete<BehaviorDefinition>> ()(void),std::unique_ptr<GetInteractionPositionForBlockDefinition,std::default_delete<GetInteractionPositionForBlockDefinition>> (*)(void)>::_M_invoke;
  v85 = BehaviorFactory::bhaveMakeUnique<GetInteractionPositionForBlockNode>;
  v86 = v21;
  j_BehaviorFactory::registerNodePair(v1, (int **)&v90, (int)&v87, (int)&v85);
  if ( (_DWORD)v86 )
    ((void (*)(void))v86)();
  if ( v88 )
    v88();
  v22 = (void *)(v90 - 12);
  if ( (int *)(v90 - 12) != &dword_28898C0 )
    v51 = (unsigned int *)(v90 - 4);
        v52 = __ldrex(v51);
      while ( __strex(v52 - 1, v51) );
      v52 = (*v51)--;
    if ( v52 <= 0 )
      j_j_j_j__ZdlPv_9(v22);
  sub_21E94B4((void **)&v84, "minecraft:look_at");
  HIDWORD(v23) = std::_Function_handler<std::unique_ptr<BehaviorNode,std::default_delete<BehaviorNode>> ()(void),std::unique_ptr<LookAtBlockNode,std::default_delete<LookAtBlockNode>> (*)(void)>::_M_invoke;
  LODWORD(v23) = std::_Function_base::_Base_manager<std::unique_ptr<LookAtBlockNode,std::default_delete<LookAtBlockNode>> (*)(void)>::_M_manager;
  v81 = BehaviorFactory::bhaveMakeUnique<LookAtBlockDefinition>;
  v82 = (void (*)(void))std::_Function_base::_Base_manager<std::unique_ptr<LookAtBlockDefinition,std::default_delete<LookAtBlockDefinition>> (*)(void)>::_M_manager;
  v83 = std::_Function_handler<std::unique_ptr<BehaviorDefinition,std::default_delete<BehaviorDefinition>> ()(void),std::unique_ptr<LookAtBlockDefinition,std::default_delete<LookAtBlockDefinition>> (*)(void)>::_M_invoke;
  v79 = BehaviorFactory::bhaveMakeUnique<LookAtBlockNode>;
  v80 = v23;
  j_BehaviorFactory::registerNodePair(v1, (int **)&v84, (int)&v81, (int)&v79);
  if ( (_DWORD)v80 )
    ((void (*)(void))v80)();
  if ( v82 )
    v82();
  v24 = (void *)(v84 - 12);
  if ( (int *)(v84 - 12) != &dword_28898C0 )
    v53 = (unsigned int *)(v84 - 4);
        v54 = __ldrex(v53);
      while ( __strex(v54 - 1, v53) );
      v54 = (*v53)--;
    if ( v54 <= 0 )
      j_j_j_j__ZdlPv_9(v24);
  sub_21E94B4((void **)&v78, "minecraft:move");
  HIDWORD(v25) = std::_Function_handler<std::unique_ptr<BehaviorNode,std::default_delete<BehaviorNode>> ()(void),std::unique_ptr<MoveNode,std::default_delete<MoveNode>> (*)(void)>::_M_invoke;
  LODWORD(v25) = std::_Function_base::_Base_manager<std::unique_ptr<MoveNode,std::default_delete<MoveNode>> (*)(void)>::_M_manager;
  v75 = BehaviorFactory::bhaveMakeUnique<MoveDefinition>;
  v76 = (void (*)(void))std::_Function_base::_Base_manager<std::unique_ptr<MoveDefinition,std::default_delete<MoveDefinition>> (*)(void)>::_M_manager;
  v77 = std::_Function_handler<std::unique_ptr<BehaviorDefinition,std::default_delete<BehaviorDefinition>> ()(void),std::unique_ptr<MoveDefinition,std::default_delete<MoveDefinition>> (*)(void)>::_M_invoke;
  v73 = BehaviorFactory::bhaveMakeUnique<MoveNode>;
  v74 = v25;
  j_BehaviorFactory::registerNodePair(v1, (int **)&v78, (int)&v75, (int)&v73);
  if ( (_DWORD)v74 )
    ((void (*)(void))v74)();
  if ( v76 )
    v76();
  v26 = (void *)(v78 - 12);
  if ( (int *)(v78 - 12) != &dword_28898C0 )
    v55 = (unsigned int *)(v78 - 4);
        v56 = __ldrex(v55);
      while ( __strex(v56 - 1, v55) );
      v56 = (*v55)--;
    if ( v56 <= 0 )
      j_j_j_j__ZdlPv_9(v26);
  sub_21E94B4((void **)&v72, "minecraft:move_to");
  HIDWORD(v27) = std::_Function_handler<std::unique_ptr<BehaviorNode,std::default_delete<BehaviorNode>> ()(void),std::unique_ptr<MoveToNode,std::default_delete<MoveToNode>> (*)(void)>::_M_invoke;
  LODWORD(v27) = std::_Function_base::_Base_manager<std::unique_ptr<MoveToNode,std::default_delete<MoveToNode>> (*)(void)>::_M_manager;
  v69 = BehaviorFactory::bhaveMakeUnique<MoveToDefinition>;
  v70 = (void (*)(void))std::_Function_base::_Base_manager<std::unique_ptr<MoveToDefinition,std::default_delete<MoveToDefinition>> (*)(void)>::_M_manager;
  v71 = std::_Function_handler<std::unique_ptr<BehaviorDefinition,std::default_delete<BehaviorDefinition>> ()(void),std::unique_ptr<MoveToDefinition,std::default_delete<MoveToDefinition>> (*)(void)>::_M_invoke;
  v67 = BehaviorFactory::bhaveMakeUnique<MoveToNode>;
  v68 = v27;
  j_BehaviorFactory::registerNodePair(v1, (int **)&v72, (int)&v69, (int)&v67);
  if ( (_DWORD)v68 )
    ((void (*)(void))v68)();
  if ( v70 )
    v70();
  v28 = (void *)(v72 - 12);
  if ( (int *)(v72 - 12) != &dword_28898C0 )
    v57 = (unsigned int *)(v72 - 4);
        v58 = __ldrex(v57);
      while ( __strex(v58 - 1, v57) );
      v58 = (*v57)--;
    if ( v58 <= 0 )
      j_j_j_j__ZdlPv_9(v28);
  sub_21E94B4((void **)&v66, "minecraft:place_block");
  HIDWORD(v29) = std::_Function_handler<std::unique_ptr<BehaviorNode,std::default_delete<BehaviorNode>> ()(void),std::unique_ptr<PlaceBlockNode,std::default_delete<PlaceBlockNode>> (*)(void)>::_M_invoke;
  LODWORD(v29) = std::_Function_base::_Base_manager<std::unique_ptr<PlaceBlockNode,std::default_delete<PlaceBlockNode>> (*)(void)>::_M_manager;
  v63 = BehaviorFactory::bhaveMakeUnique<PlaceBlockDefinition>;
  v64 = (void (*)(void))std::_Function_base::_Base_manager<std::unique_ptr<PlaceBlockDefinition,std::default_delete<PlaceBlockDefinition>> (*)(void)>::_M_manager;
  v65 = std::_Function_handler<std::unique_ptr<BehaviorDefinition,std::default_delete<BehaviorDefinition>> ()(void),std::unique_ptr<PlaceBlockDefinition,std::default_delete<PlaceBlockDefinition>> (*)(void)>::_M_invoke;
  v61 = BehaviorFactory::bhaveMakeUnique<PlaceBlockNode>;
  v62 = v29;
  j_BehaviorFactory::registerNodePair(v1, (int **)&v66, (int)&v63, (int)&v61);
  if ( (_DWORD)v62 )
    ((void (*)(void))v62)();
  if ( v64 )
    v64();
  v30 = (void *)(v66 - 12);
  if ( (int *)(v66 - 12) != &dword_28898C0 )
    v59 = (unsigned int *)(v66 - 4);
        v60 = __ldrex(v59);
      while ( __strex(v60 - 1, v59) );
      v60 = (*v59)--;
    if ( v60 <= 0 )
      j_j_j_j__ZdlPv_9(v30);
}


int __fastcall BehaviorFactory::registerNodePair(unsigned __int64 *a1, int **a2, int a3, int a4)
{
  int v4; // r6@1
  int v5; // r7@1
  int v6; // r5@1
  int (*v7)(void); // r2@1
  __int64 v8; // kr00_8@1
  int v9; // r4@1
  void (*v10)(void); // r3@1
  int (*v11)(void); // r2@3
  __int64 v12; // kr08_8@3
  int v13; // r6@3
  int (*v14)(void); // r3@3
  int result; // r0@3
  __int64 v16; // [sp+0h] [bp-48h]@1
  int (*v17)(void); // [sp+8h] [bp-40h]@1
  int v18; // [sp+Ch] [bp-3Ch]@1
  __int64 v19; // [sp+10h] [bp-38h]@3
  int (*v20)(void); // [sp+18h] [bp-30h]@3
  int v21; // [sp+1Ch] [bp-2Ch]@3
  int v22; // [sp+20h] [bp-28h]@1
  int v23; // [sp+24h] [bp-24h]@1
  void (*v24)(void); // [sp+28h] [bp-20h]@1
  int v25; // [sp+2Ch] [bp-1Ch]@1

  v4 = a4;
  v5 = a3;
  v6 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,std::pair<std::function<std::unique_ptr<BehaviorDefinition,std::default_delete<BehaviorDefinition>> ()(void)>,std::function<std::unique_ptr<BehaviorNode,std::default_delete<BehaviorNode>> ()(void)>>>,std::allocator<std::pair<std::string const,std::pair<std::function<std::unique_ptr<BehaviorDefinition,std::default_delete<BehaviorDefinition>> ()(void)>,std::function<std::unique_ptr<BehaviorNode,std::default_delete<BehaviorNode>> ()(void)>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
         a1,
         a2);
  j_std::pair<std::function<std::unique_ptr<BehaviorDefinition,std::default_delete<BehaviorDefinition>> ()(void)>,std::function<std::unique_ptr<BehaviorNode,std::default_delete<BehaviorNode>> ()(void)>>::pair<std::function<std::unique_ptr<BehaviorDefinition,std::default_delete<BehaviorDefinition>> ()(void)>&,std::function<std::unique_ptr<BehaviorNode,std::default_delete<BehaviorNode>> ()(void)>&,void>(
    (int)&v16,
    v5,
    v4);
  v7 = v17;
  v17 = 0;
  v8 = *(_QWORD *)v6;
  v9 = v18;
  v22 = *(_QWORD *)v6;
  v23 = HIDWORD(v8);
  *(_QWORD *)v6 = v16;
  v24 = *(void (**)(void))(v6 + 8);
  v10 = v24;
  *(_DWORD *)(v6 + 8) = v7;
  v25 = *(_DWORD *)(v6 + 12);
  *(_DWORD *)(v6 + 12) = v9;
  if ( v10 )
    v10();
  v11 = v20;
  v20 = 0;
  v12 = *(_QWORD *)(v6 + 16);
  v13 = v21;
  v22 = *(_QWORD *)(v6 + 16);
  v23 = HIDWORD(v12);
  *(_QWORD *)(v6 + 16) = v19;
  v24 = *(void (**)(void))(v6 + 24);
  v14 = (int (*)(void))v24;
  *(_DWORD *)(v6 + 24) = v11;
  result = *(_DWORD *)(v6 + 28);
  v25 = *(_DWORD *)(v6 + 28);
  *(_DWORD *)(v6 + 28) = v13;
  if ( v14 )
    result = v14();
  if ( v20 )
    result = v20();
  if ( v17 )
    result = v17();
  return result;
}


int __fastcall BehaviorFactory::tryGetDefinition(int *a1, unsigned __int64 *a2, int **a3)
{
  int *v3; // r4@1
  int v4; // r0@1
  int v5; // r5@1
  int result; // r0@3
  int v7; // [sp+4h] [bp-14h]@3

  v3 = a1;
  v4 = j_std::_Hashtable<std::string,std::pair<std::string const,std::pair<std::function<std::unique_ptr<BehaviorDefinition,std::default_delete<BehaviorDefinition>> ()(void)>,std::function<std::unique_ptr<BehaviorNode,std::default_delete<BehaviorNode>> ()(void)>>>,std::allocator<std::pair<std::string const,std::pair<std::function<std::unique_ptr<BehaviorDefinition,std::default_delete<BehaviorDefinition>> ()(void)>,std::function<std::unique_ptr<BehaviorNode,std::default_delete<BehaviorNode>> ()(void)>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
         a2,
         a3);
  v5 = v4;
  if ( v4 )
  {
    if ( !*(_DWORD *)(v4 + 16) )
      sub_21E5F48();
    (*(void (__fastcall **)(int *, int))(v4 + 20))(&v7, v4 + 8);
    EntityInteraction::setInteractText((int *)(v7 + 4), (int *)(v5 + 4));
    result = v7;
  }
  else
    result = 0;
  *v3 = result;
  return result;
}


int __fastcall BehaviorFactory::bhaveMakeUnique<PlaceBlockNode>(PlaceBlockNode **a1)
{
  PlaceBlockNode **v1; // r4@1
  PlaceBlockNode *v2; // r5@1
  int result; // r0@1

  v1 = a1;
  v2 = (PlaceBlockNode *)j_operator new(0x30u);
  result = j_PlaceBlockNode::PlaceBlockNode(v2);
  *v1 = v2;
  return result;
}


void *__fastcall BehaviorFactory::bhaveMakeUnique<RepeatUntilSuccessDefinition>(_DWORD *a1)
{
  _DWORD *v1; // r5@1
  _DWORD *v2; // r0@1
  _DWORD *v3; // r4@1
  void *result; // r0@1

  v1 = a1;
  v2 = j_operator new(0x1Cu);
  v3 = v2;
  v2[3] = 0;
  v2[4] = 0;
  v2[5] = 0;
  v2[6] = 0;
  *v2 = 0;
  v2[1] = 0;
  v2[2] = 0;
  *v2 = &off_271E0B8;
  v2[1] = &unk_28898CC;
  j_BehaviorTreeDefinitionPtr::BehaviorTreeDefinitionPtr((int)(v2 + 2));
  v3[4] = 0;
  *v1 = v3;
  *v3 = &off_271E130;
  result = &unk_28898CC;
  v3[6] = &unk_28898CC;
  return result;
}


void __fastcall BehaviorFactory::_initNodes(BehaviorFactory *this)
{
  BehaviorFactory::_initNodes(this);
}


int __fastcall BehaviorFactory::bhaveMakeUnique<BreakBlockNode>(BreakBlockNode **a1)
{
  BreakBlockNode **v1; // r4@1
  BreakBlockNode *v2; // r5@1
  int result; // r0@1

  v1 = a1;
  v2 = (BreakBlockNode *)j_operator new(0x30u);
  result = j_BreakBlockNode::BreakBlockNode(v2);
  *v1 = v2;
  return result;
}


void *__fastcall BehaviorFactory::bhaveMakeUnique<SubtreeDefinition>(_DWORD *a1)
{
  _DWORD *v1; // r5@1
  _DWORD *v2; // r0@1
  _DWORD *v3; // r4@1
  void *result; // r0@1

  v1 = a1;
  v2 = j_operator new(0x20u);
  v3 = v2;
  v2[3] = 0;
  v2[4] = 0;
  v2[5] = 0;
  v2[6] = 0;
  v2[7] = 0;
  *v2 = 0;
  v2[1] = 0;
  v2[2] = 0;
  *v2 = &off_271E0B8;
  v2[1] = &unk_28898CC;
  j_BehaviorTreeDefinitionPtr::BehaviorTreeDefinitionPtr((int)(v2 + 2));
  *v3 = &off_271E238;
  result = &unk_28898CC;
  v3[4] = &unk_28898CC;
  v3[5] = 0;
  v3[6] = 0;
  v3[7] = 0;
  *v1 = v3;
  return result;
}


void *__fastcall BehaviorFactory::bhaveMakeUnique<ActivateToolDefinition>(_DWORD *a1)
{
  _DWORD *v1; // r5@1
  _DWORD *v2; // r0@1
  _DWORD *v3; // r4@1
  void *result; // r0@1

  v1 = a1;
  v2 = j_operator new(0x20u);
  v3 = v2;
  v2[3] = 0;
  v2[4] = 0;
  v2[5] = 0;
  v2[6] = 0;
  v2[7] = 0;
  *v2 = 0;
  v2[1] = 0;
  v2[2] = 0;
  *v2 = &off_271E0B8;
  v2[1] = &unk_28898CC;
  j_BehaviorTreeDefinitionPtr::BehaviorTreeDefinitionPtr((int)(v2 + 2));
  *v3 = &off_271E0A0;
  result = &unk_28898CC;
  v3[4] = 0;
  v3[5] = 0;
  v3[6] = 0;
  v3[7] = &unk_28898CC;
  *v1 = v3;
  return result;
}


void *__fastcall BehaviorFactory::bhaveMakeUnique<FlyDefinition>(_DWORD *a1)
{
  _DWORD *v1; // r5@1
  _DWORD *v2; // r0@1
  _DWORD *v3; // r4@1
  void *result; // r0@1

  v1 = a1;
  v2 = j_operator new(0x20u);
  v3 = v2;
  v2[3] = 0;
  v2[4] = 0;
  v2[5] = 0;
  v2[6] = 0;
  v2[7] = 0;
  *v2 = 0;
  v2[1] = 0;
  v2[2] = 0;
  *v2 = &off_271E0B8;
  v2[1] = &unk_28898CC;
  j_BehaviorTreeDefinitionPtr::BehaviorTreeDefinitionPtr((int)(v2 + 2));
  *v1 = v3;
  *v3 = &off_271E1A8;
  result = &unk_28898CC;
  v3[5] = &unk_28898CC;
  v3[7] = &unk_28898CC;
  return result;
}


int __fastcall BehaviorFactory::bhaveMakeUnique<SelectorBehaviorNode>(SelectorBehaviorNode **a1)
{
  SelectorBehaviorNode **v1; // r4@1
  SelectorBehaviorNode *v2; // r5@1
  int result; // r0@1

  v1 = a1;
  v2 = (SelectorBehaviorNode *)j_operator new(0x28u);
  result = j_SelectorBehaviorNode::SelectorBehaviorNode(v2);
  *v1 = v2;
  return result;
}


int __fastcall BehaviorFactory::BehaviorFactory(double a1)
{
  int v1; // r4@1
  unsigned int v2; // r0@1
  int v3; // r6@3
  void *v4; // r5@3

  v1 = LODWORD(a1);
  *(_DWORD *)(LODWORD(a1) + 8) = 0;
  *(_DWORD *)(LODWORD(a1) + 12) = 0;
  *(_DWORD *)(LODWORD(a1) + 16) = 1065353216;
  LODWORD(a1) += 16;
  *(_DWORD *)(LODWORD(a1) + 4) = 0;
  v2 = sub_21E6254(a1);
  *(_DWORD *)(v1 + 4) = v2;
  if ( v2 == 1 )
  {
    *(_DWORD *)(v1 + 24) = 0;
    v4 = (void *)(v1 + 24);
  }
  else
    if ( v2 >= 0x40000000 )
      sub_21E57F4();
    v3 = 4 * v2;
    v4 = j_operator new(4 * v2);
    j___aeabi_memclr4_0((int)v4, v3);
  *(_DWORD *)v1 = v4;
  j_BehaviorFactory::_initNodes((BehaviorFactory *)v1);
  return v1;
}


void *__fastcall BehaviorFactory::bhaveMakeUnique<BreakBlockDefinition>(_DWORD *a1)
{
  _DWORD *v1; // r5@1
  _DWORD *v2; // r0@1
  _DWORD *v3; // r4@1
  void *result; // r0@1

  v1 = a1;
  v2 = j_operator new(0x20u);
  v3 = v2;
  v2[3] = 0;
  v2[4] = 0;
  v2[5] = 0;
  v2[6] = 0;
  v2[7] = 0;
  *v2 = 0;
  v2[1] = 0;
  v2[2] = 0;
  *v2 = &off_271E0B8;
  v2[1] = &unk_28898CC;
  j_BehaviorTreeDefinitionPtr::BehaviorTreeDefinitionPtr((int)(v2 + 2));
  *v3 = &off_271E0D0;
  result = &unk_28898CC;
  v3[4] = 0;
  v3[5] = 0;
  v3[6] = 0;
  v3[7] = &unk_28898CC;
  *v1 = v3;
  return result;
}


void **__fastcall BehaviorFactory::bhaveMakeUnique<RepeatUntilFailureDefinition>(_DWORD *a1)
{
  _DWORD *v1; // r5@1
  _DWORD *v2; // r0@1
  _DWORD *v3; // r4@1
  void **result; // r0@1

  v1 = a1;
  v2 = j_operator new(0x14u);
  v3 = v2;
  v2[3] = 0;
  v2[4] = 0;
  *v2 = 0;
  v2[1] = 0;
  v2[2] = 0;
  *v2 = &off_271E0B8;
  v2[1] = &unk_28898CC;
  j_BehaviorTreeDefinitionPtr::BehaviorTreeDefinitionPtr((int)(v2 + 2));
  v3[4] = 0;
  *v1 = v3;
  result = &off_271E148;
  *v3 = &off_271E148;
  return result;
}


int __fastcall BehaviorFactory::bhaveMakeUnique<MoveNode>(MoveNode **a1)
{
  MoveNode **v1; // r4@1
  MoveNode *v2; // r5@1
  int result; // r0@1

  v1 = a1;
  v2 = (MoveNode *)j_operator new(0x2Cu);
  result = j_MoveNode::MoveNode(v2);
  *v1 = v2;
  return result;
}


int __fastcall BehaviorFactory::tryGetNode(_DWORD *a1, unsigned __int64 *a2, int **a3)
{
  _DWORD *v3; // r4@1
  int v4; // r0@1
  int result; // r0@3

  v3 = a1;
  v4 = j_std::_Hashtable<std::string,std::pair<std::string const,std::pair<std::function<std::unique_ptr<BehaviorDefinition,std::default_delete<BehaviorDefinition>> ()(void)>,std::function<std::unique_ptr<BehaviorNode,std::default_delete<BehaviorNode>> ()(void)>>>,std::allocator<std::pair<std::string const,std::pair<std::function<std::unique_ptr<BehaviorDefinition,std::default_delete<BehaviorDefinition>> ()(void)>,std::function<std::unique_ptr<BehaviorNode,std::default_delete<BehaviorNode>> ()(void)>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
         a2,
         a3);
  if ( v4 )
  {
    if ( !*(_DWORD *)(v4 + 32) )
      sub_21E5F48();
    result = (*(int (__fastcall **)(_DWORD *, int))(v4 + 36))(v3, v4 + 24);
  }
  else
    result = 0;
    *v3 = 0;
  return result;
}


int __fastcall BehaviorFactory::bhaveMakeUnique<FlyNode>(FlyNode **a1)
{
  FlyNode **v1; // r4@1
  FlyNode *v2; // r5@1
  int result; // r0@1

  v1 = a1;
  v2 = (FlyNode *)j_operator new(0x28u);
  result = j_FlyNode::FlyNode(v2);
  *v1 = v2;
  return result;
}


BehaviorNode *__fastcall BehaviorFactory::bhaveMakeUnique<SubtreeNode>(SubtreeNode **a1)
{
  SubtreeNode **v1; // r4@1
  SubtreeNode *v2; // r5@1
  BehaviorNode *result; // r0@1

  v1 = a1;
  v2 = (SubtreeNode *)j_operator new(0x54u);
  result = j_SubtreeNode::SubtreeNode(v2);
  *v1 = v2;
  return result;
}


void *__fastcall BehaviorFactory::bhaveMakeUnique<MoveToDefinition>(_DWORD *a1)
{
  _DWORD *v1; // r5@1
  _DWORD *v2; // r0@1
  _DWORD *v3; // r4@1
  void *result; // r0@1

  v1 = a1;
  v2 = j_operator new(0x20u);
  v3 = v2;
  v2[3] = 0;
  v2[4] = 0;
  v2[5] = 0;
  v2[6] = 0;
  v2[7] = 0;
  *v2 = 0;
  v2[1] = 0;
  v2[2] = 0;
  *v2 = &off_271E0B8;
  v2[1] = &unk_28898CC;
  j_BehaviorTreeDefinitionPtr::BehaviorTreeDefinitionPtr((int)(v2 + 2));
  *v3 = &off_271E208;
  result = &unk_28898CC;
  v3[4] = 0;
  v3[5] = 0;
  v3[6] = 0;
  v3[7] = &unk_28898CC;
  *v1 = v3;
  return result;
}


void **__fastcall BehaviorFactory::bhaveMakeUnique<SelectorDefinition>(_DWORD *a1)
{
  _DWORD *v1; // r5@1
  _DWORD *v2; // r0@1
  _DWORD *v3; // r4@1
  void **result; // r0@1

  v1 = a1;
  v2 = j_operator new(0x1Cu);
  v3 = v2;
  v2[3] = 0;
  v2[4] = 0;
  v2[5] = 0;
  v2[6] = 0;
  *v2 = 0;
  v2[1] = 0;
  v2[2] = 0;
  *v2 = &off_271E0B8;
  v2[1] = &unk_28898CC;
  j_BehaviorTreeDefinitionPtr::BehaviorTreeDefinitionPtr((int)(v2 + 2));
  v3[4] = 0;
  v3[5] = 0;
  v3[6] = 0;
  *v1 = v3;
  result = &off_271E100;
  *v3 = &off_271E100;
  return result;
}


void *__fastcall BehaviorFactory::bhaveMakeUnique<PlaceBlockDefinition>(_DWORD *a1)
{
  _DWORD *v1; // r5@1
  _DWORD *v2; // r0@1
  _DWORD *v3; // r4@1
  void *result; // r0@1

  v1 = a1;
  v2 = j_operator new(0x20u);
  v3 = v2;
  v2[3] = 0;
  v2[4] = 0;
  v2[5] = 0;
  v2[6] = 0;
  v2[7] = 0;
  *v2 = 0;
  v2[1] = 0;
  v2[2] = 0;
  *v2 = &off_271E0B8;
  v2[1] = &unk_28898CC;
  j_BehaviorTreeDefinitionPtr::BehaviorTreeDefinitionPtr((int)(v2 + 2));
  *v3 = &off_271E220;
  result = &unk_28898CC;
  v3[4] = 0;
  v3[5] = 0;
  v3[6] = 0;
  v3[7] = &unk_28898CC;
  *v1 = v3;
  return result;
}


int __fastcall BehaviorFactory::bhaveMakeUnique<MoveToNode>(MoveToNode **a1)
{
  MoveToNode **v1; // r4@1
  MoveToNode *v2; // r5@1
  int result; // r0@1

  v1 = a1;
  v2 = (MoveToNode *)j_operator new(0x2Cu);
  result = j_MoveToNode::MoveToNode(v2);
  *v1 = v2;
  return result;
}
