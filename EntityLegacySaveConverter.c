

signed int __fastcall EntityLegacySaveConverter::convertSave(EntityLegacySaveConverter *this, Entity *a2, const CompoundTag *a3)
{
  EntityLegacySaveConverter *v3; // r9@1
  Entity *v4; // r8@1
  char v5; // r0@1
  __int64 v6; // r6@3
  signed int v7; // r4@3
  void (__cdecl *v8)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD); // r3@4
  unsigned int v9; // r0@8
  unsigned int v10; // r6@8
  int v11; // r11@8
  signed int result; // r0@8
  signed int v13; // r5@9
  int v14; // r4@9
  bool v15; // zf@10
  signed int v16; // r7@13
  bool v17; // zf@16
  __int64 v18; // [sp+0h] [bp-2D8h]@3
  char v19; // [sp+24h] [bp-2B4h]@3
  int v20; // [sp+28h] [bp-2B0h]@3
  void (__fastcall *v21)(EntityLegacySaveConverter *, Entity *, const CompoundTag *); // [sp+2Ch] [bp-2ACh]@3
  int (__fastcall *v22)(_DWORD *, _DWORD *, int); // [sp+34h] [bp-2A4h]@3
  int (__fastcall *v23)(int (__fastcall **)(_DWORD, _DWORD), int, int); // [sp+38h] [bp-2A0h]@3
  int v24; // [sp+3Ch] [bp-29Ch]@3
  void (__fastcall *v25)(EntityLegacySaveConverter *, Entity *, const CompoundTag *); // [sp+40h] [bp-298h]@3
  int (__fastcall *v26)(_DWORD *, _DWORD *, int); // [sp+48h] [bp-290h]@3
  int (__fastcall *v27)(int (__fastcall **)(_DWORD, _DWORD), int, int); // [sp+4Ch] [bp-28Ch]@3
  int v28; // [sp+50h] [bp-288h]@3
  void (__fastcall *v29)(EntityLegacySaveConverter *, Entity *, const CompoundTag *); // [sp+54h] [bp-284h]@3
  int (__fastcall *v30)(_DWORD *, _DWORD *, int); // [sp+5Ch] [bp-27Ch]@3
  int (__fastcall *v31)(int (__fastcall **)(_DWORD, _DWORD), int, int); // [sp+60h] [bp-278h]@3
  int v32; // [sp+64h] [bp-274h]@3
  void (__fastcall *v33)(EntityLegacySaveConverter *, Entity *, const CompoundTag *); // [sp+68h] [bp-270h]@3
  int (__fastcall *v34)(_DWORD *, _DWORD *, int); // [sp+70h] [bp-268h]@3
  int (__fastcall *v35)(int (__fastcall **)(_DWORD, _DWORD), int, int); // [sp+74h] [bp-264h]@3
  int v36; // [sp+78h] [bp-260h]@3
  void (__fastcall *v37)(EntityLegacySaveConverter *, Entity *, const CompoundTag *); // [sp+7Ch] [bp-25Ch]@3
  int (__fastcall *v38)(_DWORD *, _DWORD *, int); // [sp+84h] [bp-254h]@3
  int (__fastcall *v39)(int (__fastcall **)(_DWORD, _DWORD), int, int); // [sp+88h] [bp-250h]@3
  signed int v40; // [sp+8Ch] [bp-24Ch]@3
  void (__fastcall *v41)(EntityLegacySaveConverter *, Entity *, const CompoundTag *); // [sp+90h] [bp-248h]@3
  int (__fastcall *v42)(_DWORD *, _DWORD *, int); // [sp+98h] [bp-240h]@3
  int (__fastcall *v43)(int (__fastcall **)(_DWORD, _DWORD), int, int); // [sp+9Ch] [bp-23Ch]@3
  int v44; // [sp+A0h] [bp-238h]@3
  void (__fastcall *v45)(EntityLegacySaveConverter *, Entity *, const CompoundTag *); // [sp+A4h] [bp-234h]@3
  int (__fastcall *v46)(_DWORD *, _DWORD *, int); // [sp+ACh] [bp-22Ch]@3
  int (__fastcall *v47)(int (__fastcall **)(_DWORD, _DWORD), int, int); // [sp+B0h] [bp-228h]@3
  int v48; // [sp+B4h] [bp-224h]@3
  void (__fastcall *v49)(EntityLegacySaveConverter *, Entity *, const CompoundTag *); // [sp+B8h] [bp-220h]@3
  int (__fastcall *v50)(_DWORD *, _DWORD *, int); // [sp+C0h] [bp-218h]@3
  int (__fastcall *v51)(int (__fastcall **)(_DWORD, _DWORD), int, int); // [sp+C4h] [bp-214h]@3
  signed int v52; // [sp+C8h] [bp-210h]@3
  int (__fastcall *v53)(EntityLegacySaveConverter *, Entity *, const CompoundTag *); // [sp+CCh] [bp-20Ch]@3
  int (__fastcall *v54)(_DWORD *, _DWORD *, int); // [sp+D4h] [bp-204h]@3
  int (__fastcall *v55)(int (__fastcall **)(_DWORD, _DWORD), int, int); // [sp+D8h] [bp-200h]@3
  signed int v56; // [sp+DCh] [bp-1FCh]@3
  int (__fastcall *v57)(EntityLegacySaveConverter *, Entity *, const CompoundTag *); // [sp+E0h] [bp-1F8h]@3
  int (__fastcall *v58)(_DWORD *, _DWORD *, int); // [sp+E8h] [bp-1F0h]@3
  int (__fastcall *v59)(int (__fastcall **)(_DWORD, _DWORD), int, int); // [sp+ECh] [bp-1ECh]@3
  signed int v60; // [sp+F0h] [bp-1E8h]@3
  int (__fastcall *v61)(EntityLegacySaveConverter *, Entity *, const CompoundTag *); // [sp+F4h] [bp-1E4h]@3
  int (__fastcall *v62)(_DWORD *, _DWORD *, int); // [sp+FCh] [bp-1DCh]@3
  int (__fastcall *v63)(int (__fastcall **)(_DWORD, _DWORD), int, int); // [sp+100h] [bp-1D8h]@3
  signed int v64; // [sp+104h] [bp-1D4h]@3
  int (__fastcall *v65)(EntityLegacySaveConverter *, Entity *, const CompoundTag *); // [sp+108h] [bp-1D0h]@3
  int (__fastcall *v66)(_DWORD *, _DWORD *, int); // [sp+110h] [bp-1C8h]@3
  int (__fastcall *v67)(int (__fastcall **)(_DWORD, _DWORD), int, int); // [sp+114h] [bp-1C4h]@3
  int v68; // [sp+118h] [bp-1C0h]@3
  int (__fastcall *v69)(EntityLegacySaveConverter *, Entity *, const CompoundTag *); // [sp+11Ch] [bp-1BCh]@3
  int (__fastcall *v70)(_DWORD *, _DWORD *, int); // [sp+124h] [bp-1B4h]@3
  int (__fastcall *v71)(int (__fastcall **)(_DWORD, _DWORD), int, int); // [sp+128h] [bp-1B0h]@3
  int v72; // [sp+12Ch] [bp-1ACh]@3
  void (__fastcall *v73)(EntityLegacySaveConverter *, Entity *, const CompoundTag *); // [sp+130h] [bp-1A8h]@3
  int (__fastcall *v74)(_DWORD *, _DWORD *, int); // [sp+138h] [bp-1A0h]@3
  int (__fastcall *v75)(int (__fastcall **)(_DWORD, _DWORD), int, int); // [sp+13Ch] [bp-19Ch]@3
  signed int v76; // [sp+140h] [bp-198h]@3
  void (__fastcall *v77)(EntityLegacySaveConverter *, Entity *, const CompoundTag *); // [sp+144h] [bp-194h]@3
  int (__fastcall *v78)(_DWORD *, _DWORD *, int); // [sp+14Ch] [bp-18Ch]@3
  int (__fastcall *v79)(int (__fastcall **)(_DWORD, _DWORD), int, int); // [sp+150h] [bp-188h]@3
  int v80; // [sp+154h] [bp-184h]@3
  void (__fastcall *v81)(EntityLegacySaveConverter *, Entity *, const CompoundTag *); // [sp+158h] [bp-180h]@3
  int (__fastcall *v82)(_DWORD *, _DWORD *, int); // [sp+160h] [bp-178h]@3
  int (__fastcall *v83)(int (__fastcall **)(_DWORD, _DWORD), int, int); // [sp+164h] [bp-174h]@3
  signed int v84; // [sp+168h] [bp-170h]@3
  void (__fastcall *v85)(EntityLegacySaveConverter *, Entity *, const CompoundTag *); // [sp+16Ch] [bp-16Ch]@3
  int (__fastcall *v86)(_DWORD *, _DWORD *, int); // [sp+174h] [bp-164h]@3
  int (__fastcall *v87)(int (__fastcall **)(_DWORD, _DWORD), int, int); // [sp+178h] [bp-160h]@3
  int v88; // [sp+17Ch] [bp-15Ch]@3
  void (__fastcall *v89)(EntityLegacySaveConverter *, Entity *, const CompoundTag *); // [sp+180h] [bp-158h]@3
  int (__fastcall *v90)(_DWORD *, _DWORD *, int); // [sp+188h] [bp-150h]@3
  int (__fastcall *v91)(int (__fastcall **)(_DWORD, _DWORD), int, int); // [sp+18Ch] [bp-14Ch]@3
  int v92; // [sp+190h] [bp-148h]@3
  void (__fastcall *v93)(EntityLegacySaveConverter *, Entity *, const CompoundTag *); // [sp+194h] [bp-144h]@3
  int (__fastcall *v94)(_DWORD *, _DWORD *, int); // [sp+19Ch] [bp-13Ch]@3
  int (__fastcall *v95)(int (__fastcall **)(_DWORD, _DWORD), int, int); // [sp+1A0h] [bp-138h]@3
  int v96; // [sp+1A4h] [bp-134h]@3
  void (__fastcall *v97)(EntityLegacySaveConverter *, Entity *, const CompoundTag *); // [sp+1A8h] [bp-130h]@3
  int (__fastcall *v98)(_DWORD *, _DWORD *, int); // [sp+1B0h] [bp-128h]@3
  int (__fastcall *v99)(int (__fastcall **)(_DWORD, _DWORD), int, int); // [sp+1B4h] [bp-124h]@3
  int v100; // [sp+1B8h] [bp-120h]@3
  void (__fastcall *v101)(EntityLegacySaveConverter *, Entity *, const CompoundTag *); // [sp+1BCh] [bp-11Ch]@3
  int (__fastcall *v102)(_DWORD *, _DWORD *, int); // [sp+1C4h] [bp-114h]@3
  int (__fastcall *v103)(int (__fastcall **)(_DWORD, _DWORD), int, int); // [sp+1C8h] [bp-110h]@3
  int v104; // [sp+1CCh] [bp-10Ch]@3
  void (__fastcall *v105)(EntityLegacySaveConverter *, Entity *, const CompoundTag *); // [sp+1D0h] [bp-108h]@3
  int (__fastcall *v106)(_DWORD *, _DWORD *, int); // [sp+1D8h] [bp-100h]@3
  int (__fastcall *v107)(int (__fastcall **)(_DWORD, _DWORD), int, int); // [sp+1DCh] [bp-FCh]@3
  signed int v108; // [sp+1E0h] [bp-F8h]@3
  void (__fastcall *v109)(EntityLegacySaveConverter *, Entity *, const CompoundTag *); // [sp+1E4h] [bp-F4h]@3
  int (__fastcall *v110)(_DWORD *, _DWORD *, int); // [sp+1ECh] [bp-ECh]@3
  int (__fastcall *v111)(int (__fastcall **)(_DWORD, _DWORD), int, int); // [sp+1F0h] [bp-E8h]@3
  int v112; // [sp+1F4h] [bp-E4h]@3
  void (__fastcall *v113)(EntityLegacySaveConverter *, Entity *, const CompoundTag *); // [sp+1F8h] [bp-E0h]@3
  int (__fastcall *v114)(_DWORD *, _DWORD *, int); // [sp+200h] [bp-D8h]@3
  int (__fastcall *v115)(int (__fastcall **)(_DWORD, _DWORD), int, int); // [sp+204h] [bp-D4h]@3
  int v116; // [sp+208h] [bp-D0h]@3
  void (__fastcall *v117)(EntityLegacySaveConverter *, Entity *, const CompoundTag *); // [sp+20Ch] [bp-CCh]@3
  int (__fastcall *v118)(_DWORD *, _DWORD *, int); // [sp+214h] [bp-C4h]@3
  int (__fastcall *v119)(int (__fastcall **)(_DWORD, _DWORD), int, int); // [sp+218h] [bp-C0h]@3
  int v120; // [sp+21Ch] [bp-BCh]@3
  void (__fastcall *v121)(EntityLegacySaveConverter *, Entity *, const CompoundTag *); // [sp+220h] [bp-B8h]@3
  int (__fastcall *v122)(_DWORD *, _DWORD *, int); // [sp+228h] [bp-B0h]@3
  int (__fastcall *v123)(int (__fastcall **)(_DWORD, _DWORD), int, int); // [sp+22Ch] [bp-ACh]@3
  int v124; // [sp+230h] [bp-A8h]@3
  void (__fastcall *v125)(EntityLegacySaveConverter *, Entity *, const CompoundTag *); // [sp+234h] [bp-A4h]@3
  int (__fastcall *v126)(_DWORD *, _DWORD *, int); // [sp+23Ch] [bp-9Ch]@3
  int (__fastcall *v127)(int (__fastcall **)(_DWORD, _DWORD), int, int); // [sp+240h] [bp-98h]@3
  signed int v128; // [sp+244h] [bp-94h]@3
  _DWORD (__fastcall *v129)(EntityLegacySaveConverter *__hidden, Entity *, const CompoundTag *); // [sp+248h] [bp-90h]@3
  int (__fastcall *v130)(_DWORD *, _DWORD *, int); // [sp+250h] [bp-88h]@3
  int (__fastcall *v131)(int (__fastcall **)(_DWORD, _DWORD), int, int); // [sp+254h] [bp-84h]@3
  signed int v132; // [sp+258h] [bp-80h]@3
  _DWORD (__fastcall *v133)(EntityLegacySaveConverter *__hidden, Entity *, const CompoundTag *); // [sp+25Ch] [bp-7Ch]@3
  int (__fastcall *v134)(_DWORD *, _DWORD *, int); // [sp+264h] [bp-74h]@3
  int (__fastcall *v135)(int (__fastcall **)(_DWORD, _DWORD), int, int); // [sp+268h] [bp-70h]@3
  signed int v136; // [sp+26Ch] [bp-6Ch]@3
  _DWORD (__fastcall *v137)(EntityLegacySaveConverter *__hidden, Entity *, const CompoundTag *); // [sp+270h] [bp-68h]@3
  int (__fastcall *v138)(_DWORD *, _DWORD *, int); // [sp+278h] [bp-60h]@3
  int (__fastcall *v139)(int (__fastcall **)(_DWORD, _DWORD), int, int); // [sp+27Ch] [bp-5Ch]@3
  signed int v140; // [sp+280h] [bp-58h]@3
  _DWORD (__fastcall *v141)(EntityLegacySaveConverter *__hidden, Entity *, const CompoundTag *); // [sp+284h] [bp-54h]@3
  int (__fastcall *v142)(_DWORD *, _DWORD *, int); // [sp+28Ch] [bp-4Ch]@3
  int (__fastcall *v143)(int (__fastcall **)(_DWORD, _DWORD), int, int); // [sp+290h] [bp-48h]@3
  signed int v144; // [sp+294h] [bp-44h]@3
  _DWORD (__fastcall *v145)(EntityLegacySaveConverter *__hidden, Entity *, const CompoundTag *); // [sp+298h] [bp-40h]@3
  int (__fastcall *v146)(_DWORD *, _DWORD *, int); // [sp+2A0h] [bp-38h]@3
  int (__fastcall *v147)(int (__fastcall **)(_DWORD, _DWORD), int, int); // [sp+2A4h] [bp-34h]@3
  char v148; // [sp+2A8h] [bp-30h]@3
  char v149; // [sp+2B0h] [bp-28h]@3

  v3 = this;
  v4 = a2;
  v5 = byte_27FE814;
  __dmb();
  if ( !(v5 & 1) && j___cxa_guard_acquire(&byte_27FE814) )
  {
    v20 = 90;
    v21 = EntityLegacySaveConverter::convertBoat;
    v22 = std::_Function_base::_Base_manager<void (*)(Entity &,CompoundTag const&)>::_M_manager;
    v23 = std::_Function_handler<void ()(Entity &,CompoundTag const&),void (*)(Entity &,CompoundTag const&)>::_M_invoke;
    v24 = 21270;
    v25 = EntityLegacySaveConverter::convertOcelot;
    v26 = std::_Function_base::_Base_manager<void (*)(Entity &,CompoundTag const&)>::_M_manager;
    v27 = std::_Function_handler<void ()(Entity &,CompoundTag const&),void (*)(Entity &,CompoundTag const&)>::_M_invoke;
    v28 = 783;
    v29 = EntityLegacySaveConverter::convertVillager;
    v30 = std::_Function_base::_Base_manager<void (*)(Entity &,CompoundTag const&)>::_M_manager;
    v31 = std::_Function_handler<void ()(Entity &,CompoundTag const&),void (*)(Entity &,CompoundTag const&)>::_M_invoke;
    v32 = 4882;
    v33 = EntityLegacySaveConverter::convertRabbit;
    v34 = std::_Function_base::_Base_manager<void (*)(Entity &,CompoundTag const&)>::_M_manager;
    v35 = std::_Function_handler<void ()(Entity &,CompoundTag const&),void (*)(Entity &,CompoundTag const&)>::_M_invoke;
    v36 = 1116962;
    v37 = EntityLegacySaveConverter::convertSkeleton;
    v38 = std::_Function_base::_Base_manager<void (*)(Entity &,CompoundTag const&)>::_M_manager;
    v39 = std::_Function_handler<void ()(Entity &,CompoundTag const&),void (*)(Entity &,CompoundTag const&)>::_M_invoke;
    v40 = 199456;
    v41 = EntityLegacySaveConverter::convertZombie;
    v42 = std::_Function_base::_Base_manager<void (*)(Entity &,CompoundTag const&)>::_M_manager;
    v43 = std::_Function_handler<void ()(Entity &,CompoundTag const&),void (*)(Entity &,CompoundTag const&)>::_M_invoke;
    v44 = 68388;
    v45 = EntityLegacySaveConverter::convertZombie;
    v46 = std::_Function_base::_Base_manager<void (*)(Entity &,CompoundTag const&)>::_M_manager;
    v47 = std::_Function_handler<void ()(Entity &,CompoundTag const&),void (*)(Entity &,CompoundTag const&)>::_M_invoke;
    v48 = 21262;
    v49 = EntityLegacySaveConverter::convertWolf;
    v50 = std::_Function_base::_Base_manager<void (*)(Entity &,CompoundTag const&)>::_M_manager;
    v51 = std::_Function_handler<void ()(Entity &,CompoundTag const&),void (*)(Entity &,CompoundTag const&)>::_M_invoke;
    v52 = 2118423;
    v53 = EntityLegacySaveConverter::convertHorse;
    v54 = std::_Function_base::_Base_manager<void (*)(Entity &,CompoundTag const&)>::_M_manager;
    v55 = std::_Function_handler<void ()(Entity &,CompoundTag const&),void (*)(Entity &,CompoundTag const&)>::_M_invoke;
    v56 = 2186010;
    v57 = EntityLegacySaveConverter::convertHorse;
    v58 = std::_Function_base::_Base_manager<void (*)(Entity &,CompoundTag const&)>::_M_manager;
    v59 = std::_Function_handler<void ()(Entity &,CompoundTag const&),void (*)(Entity &,CompoundTag const&)>::_M_invoke;
    v60 = 2186011;
    v61 = EntityLegacySaveConverter::convertHorse;
    v62 = std::_Function_base::_Base_manager<void (*)(Entity &,CompoundTag const&)>::_M_manager;
    v63 = std::_Function_handler<void ()(Entity &,CompoundTag const&),void (*)(Entity &,CompoundTag const&)>::_M_invoke;
    v64 = 2118425;
    v65 = EntityLegacySaveConverter::convertHorse;
    v66 = std::_Function_base::_Base_manager<void (*)(Entity &,CompoundTag const&)>::_M_manager;
    v67 = std::_Function_handler<void ()(Entity &,CompoundTag const&),void (*)(Entity &,CompoundTag const&)>::_M_invoke;
    v68 = 2118424;
    v69 = EntityLegacySaveConverter::convertHorse;
    v70 = std::_Function_base::_Base_manager<void (*)(Entity &,CompoundTag const&)>::_M_manager;
    v71 = std::_Function_handler<void ()(Entity &,CompoundTag const&),void (*)(Entity &,CompoundTag const&)>::_M_invoke;
    v72 = 8977;
    v73 = EntityLegacySaveConverter::convertSquid;
    v74 = std::_Function_base::_Base_manager<void (*)(Entity &,CompoundTag const&)>::_M_manager;
    v75 = std::_Function_handler<void ()(Entity &,CompoundTag const&),void (*)(Entity &,CompoundTag const&)>::_M_invoke;
    v76 = 264995;
    v77 = EntityLegacySaveConverter::convertSpider;
    v78 = std::_Function_base::_Base_manager<void (*)(Entity &,CompoundTag const&)>::_M_manager;
    v79 = std::_Function_handler<void ()(Entity &,CompoundTag const&),void (*)(Entity &,CompoundTag const&)>::_M_invoke;
    v80 = 265000;
    v81 = EntityLegacySaveConverter::convertSpider;
    v82 = std::_Function_base::_Base_manager<void (*)(Entity &,CompoundTag const&)>::_M_manager;
    v83 = std::_Function_handler<void ()(Entity &,CompoundTag const&),void (*)(Entity &,CompoundTag const&)>::_M_invoke;
    v84 = 2853;
    v85 = EntityLegacySaveConverter::convertSlime;
    v86 = std::_Function_base::_Base_manager<void (*)(Entity &,CompoundTag const&)>::_M_manager;
    v87 = std::_Function_handler<void ()(Entity &,CompoundTag const&),void (*)(Entity &,CompoundTag const&)>::_M_invoke;
    v88 = 2858;
    v89 = EntityLegacySaveConverter::convertSlime;
    v90 = std::_Function_base::_Base_manager<void (*)(Entity &,CompoundTag const&)>::_M_manager;
    v91 = std::_Function_handler<void ()(Entity &,CompoundTag const&),void (*)(Entity &,CompoundTag const&)>::_M_invoke;
    v92 = 264999;
    v93 = EntityLegacySaveConverter::convertSilverfish;
    v94 = std::_Function_base::_Base_manager<void (*)(Entity &,CompoundTag const&)>::_M_manager;
    v95 = std::_Function_handler<void ()(Entity &,CompoundTag const&),void (*)(Entity &,CompoundTag const&)>::_M_invoke;
    v96 = 4877;
    v97 = EntityLegacySaveConverter::convertSheep;
    v98 = std::_Function_base::_Base_manager<void (*)(Entity &,CompoundTag const&)>::_M_manager;
    v99 = std::_Function_handler<void ()(Entity &,CompoundTag const&),void (*)(Entity &,CompoundTag const&)>::_M_invoke;
    v100 = 4876;
    v101 = EntityLegacySaveConverter::convertPig;
    v102 = std::_Function_base::_Base_manager<void (*)(Entity &,CompoundTag const&)>::_M_manager;
    v103 = std::_Function_handler<void ()(Entity &,CompoundTag const&),void (*)(Entity &,CompoundTag const&)>::_M_invoke;
    v104 = 789;
    v105 = EntityLegacySaveConverter::convertSnowgolem;
    v106 = std::_Function_base::_Base_manager<void (*)(Entity &,CompoundTag const&)>::_M_manager;
    v107 = std::_Function_handler<void ()(Entity &,CompoundTag const&),void (*)(Entity &,CompoundTag const&)>::_M_invoke;
    v108 = 4875;
    v109 = EntityLegacySaveConverter::convertCow;
    v110 = std::_Function_base::_Base_manager<void (*)(Entity &,CompoundTag const&)>::_M_manager;
    v111 = std::_Function_handler<void ()(Entity &,CompoundTag const&),void (*)(Entity &,CompoundTag const&)>::_M_invoke;
    v112 = 4880;
    v113 = EntityLegacySaveConverter::convertCow;
    v114 = std::_Function_base::_Base_manager<void (*)(Entity &,CompoundTag const&)>::_M_manager;
    v115 = std::_Function_handler<void ()(Entity &,CompoundTag const&),void (*)(Entity &,CompoundTag const&)>::_M_invoke;
    v116 = 524372;
    v117 = EntityLegacySaveConverter::convertMinecart;
    v118 = std::_Function_base::_Base_manager<void (*)(Entity &,CompoundTag const&)>::_M_manager;
    v119 = std::_Function_handler<void ()(Entity &,CompoundTag const&),void (*)(Entity &,CompoundTag const&)>::_M_invoke;
    v120 = 524384;
    v121 = EntityLegacySaveConverter::convertMinecartHopper;
    v122 = std::_Function_base::_Base_manager<void (*)(Entity &,CompoundTag const&)>::_M_manager;
    v123 = std::_Function_handler<void ()(Entity &,CompoundTag const&),void (*)(Entity &,CompoundTag const&)>::_M_invoke;
    v124 = 524385;
    v125 = EntityLegacySaveConverter::convertMinecartTNT;
    v126 = std::_Function_base::_Base_manager<void (*)(Entity &,CompoundTag const&)>::_M_manager;
    v127 = std::_Function_handler<void ()(Entity &,CompoundTag const&),void (*)(Entity &,CompoundTag const&)>::_M_invoke;
    v128 = 2854;
    v129 = EntityLegacySaveConverter::convertEnderman;
    v130 = std::_Function_base::_Base_manager<void (*)(Entity &,CompoundTag const&)>::_M_manager;
    v131 = std::_Function_handler<void ()(Entity &,CompoundTag const&),void (*)(Entity &,CompoundTag const&)>::_M_invoke;
    v132 = 2849;
    v133 = EntityLegacySaveConverter::convertCreeper;
    v134 = std::_Function_base::_Base_manager<void (*)(Entity &,CompoundTag const&)>::_M_manager;
    v135 = std::_Function_handler<void ()(Entity &,CompoundTag const&),void (*)(Entity &,CompoundTag const&)>::_M_invoke;
    v136 = 4874;
    v137 = EntityLegacySaveConverter::convertChicken;
    v138 = std::_Function_base::_Base_manager<void (*)(Entity &,CompoundTag const&)>::_M_manager;
    v139 = std::_Function_handler<void ()(Entity &,CompoundTag const&),void (*)(Entity &,CompoundTag const&)>::_M_invoke;
    v140 = 788;
    v141 = EntityLegacySaveConverter::convertIronGolem;
    v142 = std::_Function_base::_Base_manager<void (*)(Entity &,CompoundTag const&)>::_M_manager;
    v143 = std::_Function_handler<void ()(Entity &,CompoundTag const&),void (*)(Entity &,CompoundTag const&)>::_M_invoke;
    v144 = 199468;
    v145 = EntityLegacySaveConverter::convertZombieVillager;
    v146 = std::_Function_base::_Base_manager<void (*)(Entity &,CompoundTag const&)>::_M_manager;
    v147 = std::_Function_handler<void ()(Entity &,CompoundTag const&),void (*)(Entity &,CompoundTag const&)>::_M_invoke;
    HIDWORD(v6) = &v149;
    LODWORD(v6) = &v19;
    v18 = v6;
    std::_Hashtable<EntityType,std::pair<EntityType const,std::function<void ()(Entity &,CompoundTag const&)>>,std::allocator<std::pair<EntityType const,std::function<void ()(Entity &,CompoundTag const&)>>>,std::__detail::_Select1st,std::equal_to<EntityType>,std::hash<EntityType>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_Hashtable<std::pair<EntityType const,std::function<void ()(Entity &,CompoundTag const&)>> const*>(
      &dword_27FE818,
      (unsigned int *)&v20,
      &v148,
      0);
    v7 = 640;
    do
    {
      v8 = *(void (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))((char *)&v20 + v7 - 8);
      if ( v8 )
        v8((char *)&v20 + v7 - 16, (char *)&v20 + v7 - 16, 3, v8, v18, HIDWORD(v18));
      v7 -= 20;
    }
    while ( v7 );
    _cxa_atexit(std::unordered_map<EntityType,std::function<void ()(Entity &,CompoundTag const&)>,std::hash<EntityType>,std::equal_to<EntityType>,std::allocator<std::pair<EntityType const,std::function<void ()(Entity &,CompoundTag const&)>>>>::~unordered_map);
    j___cxa_guard_release(&byte_27FE814);
  }
  EntityLegacySaveConverter::genericConvert(v3, v4, a3);
  v9 = (*(int (__fastcall **)(EntityLegacySaveConverter *))(*(_DWORD *)v3 + 488))(v3);
  v10 = v9;
  v11 = v9 % unk_27FE81C;
  result = *(_DWORD *)(dword_27FE818 + 4 * (v9 % unk_27FE81C));
  if ( result )
    v13 = *(_DWORD *)result;
    v14 = *(_DWORD *)(*(_DWORD *)result + 24);
    while ( 1 )
      v15 = v14 == v10;
      if ( v14 == v10 )
        v15 = v10 == *(_DWORD *)(v13 + 4);
      if ( v15 )
        break;
      v16 = *(_DWORD *)v13;
      if ( *(_DWORD *)v13 )
      {
        v14 = *(_DWORD *)(v16 + 24);
        result = v13;
        v13 = *(_DWORD *)v13;
        if ( *(_DWORD *)(v16 + 24) % unk_27FE81C == v11 )
          continue;
      }
      return result;
    v17 = result == 0;
    if ( result )
      result = *(_DWORD *)result;
      v17 = result == 0;
    if ( !v17 )
      if ( !*(_DWORD *)(result + 16) )
        sub_21E5F48();
      (*(void (__fastcall **)(int, EntityLegacySaveConverter *, Entity *))(result + 20))(result + 8, v3, v4);
      result = 6;
      *((_BYTE *)v3 + 4) = 6;
  return result;
}


void __fastcall EntityLegacySaveConverter::convertChicken(EntityLegacySaveConverter *this, Entity *a2, const CompoundTag *a3)
{
  Entity *v3; // r5@1
  EntityLegacySaveConverter *v4; // r6@1
  int v5; // r5@1
  void *v6; // r0@1
  void *v7; // r0@3
  unsigned int *v8; // r2@4
  signed int v9; // r1@6
  unsigned int *v10; // r2@10
  signed int v11; // r1@12
  int v12; // [sp+8h] [bp-28h]@3
  int v13; // [sp+10h] [bp-20h]@8
  int v14; // [sp+18h] [bp-18h]@1

  v3 = a2;
  v4 = this;
  sub_21E94B4((void **)&v14, "Age");
  v5 = CompoundTag::getInt((int)v3, (const void **)&v14);
  v6 = (void *)(v14 - 12);
  if ( (int *)(v14 - 12) != &dword_28898C0 )
  {
    v10 = (unsigned int *)(v14 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
    }
    else
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  }
  if ( v5 <= -1 )
    sub_21E94B4((void **)&v13, "minecraft:chicken_baby");
    Entity::addDefinitionGroup((int)v4, (int **)&v13);
    v7 = (void *)(v13 - 12);
    if ( (int *)(v13 - 12) == &dword_28898C0 )
      return;
    v8 = (unsigned int *)(v13 - 4);
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
      goto LABEL_23;
  else
    sub_21E94B4((void **)&v12, "minecraft:chicken_adult");
    Entity::addDefinitionGroup((int)v4, (int **)&v12);
    v7 = (void *)(v12 - 12);
    if ( (int *)(v12 - 12) == &dword_28898C0 )
    v8 = (unsigned int *)(v12 - 4);
  v9 = (*v8)--;
LABEL_23:
  if ( v9 <= 0 )
    j_j_j_j__ZdlPv_9(v7);
}


void __fastcall EntityLegacySaveConverter::convertCow(EntityLegacySaveConverter *this, Entity *a2, const CompoundTag *a3)
{
  Entity *v3; // r5@1
  EntityLegacySaveConverter *v4; // r6@1
  int v5; // r5@1
  void *v6; // r0@1
  void *v7; // r0@3
  unsigned int *v8; // r2@4
  signed int v9; // r1@6
  unsigned int *v10; // r2@10
  signed int v11; // r1@12
  int v12; // [sp+8h] [bp-28h]@3
  int v13; // [sp+10h] [bp-20h]@8
  int v14; // [sp+18h] [bp-18h]@1

  v3 = a2;
  v4 = this;
  sub_21E94B4((void **)&v14, "Age");
  v5 = CompoundTag::getInt((int)v3, (const void **)&v14);
  v6 = (void *)(v14 - 12);
  if ( (int *)(v14 - 12) != &dword_28898C0 )
  {
    v10 = (unsigned int *)(v14 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
    }
    else
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  }
  if ( v5 <= -1 )
    sub_21E94B4((void **)&v13, "minecraft:cow_baby");
    Entity::addDefinitionGroup((int)v4, (int **)&v13);
    v7 = (void *)(v13 - 12);
    if ( (int *)(v13 - 12) == &dword_28898C0 )
      return;
    v8 = (unsigned int *)(v13 - 4);
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
      goto LABEL_23;
  else
    sub_21E94B4((void **)&v12, "minecraft:cow_adult");
    Entity::addDefinitionGroup((int)v4, (int **)&v12);
    v7 = (void *)(v12 - 12);
    if ( (int *)(v12 - 12) == &dword_28898C0 )
    v8 = (unsigned int *)(v12 - 4);
  v9 = (*v8)--;
LABEL_23:
  if ( v9 <= 0 )
    j_j_j_j__ZdlPv_9(v7);
}


void __fastcall EntityLegacySaveConverter::genericConvert(EntityLegacySaveConverter *this, Entity *a2, const CompoundTag *a3)
{
  EntityLegacySaveConverter::genericConvert(this, a2, a3);
}


void __fastcall EntityLegacySaveConverter::convertSquid(EntityLegacySaveConverter *this, Entity *a2, const CompoundTag *a3)
{
  Entity *v3; // r5@1
  EntityLegacySaveConverter *v4; // r6@1
  int v5; // r5@1
  void *v6; // r0@1
  void *v7; // r0@3
  unsigned int *v8; // r2@5
  signed int v9; // r1@7
  unsigned int *v10; // r2@13
  signed int v11; // r1@15
  int v12; // [sp+4h] [bp-2Ch]@3
  int v13; // [sp+Ch] [bp-24h]@1

  v3 = a2;
  v4 = this;
  sub_21E94B4((void **)&v13, "Age");
  v5 = CompoundTag::getInt((int)v3, (const void **)&v13);
  v6 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
  {
    v8 = (unsigned int *)(v13 - 4);
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
  if ( v5 <= -1 )
    sub_21E94B4((void **)&v12, "minecraft:squid_baby");
    Entity::addDefinitionGroup((int)v4, (int **)&v12);
    v7 = (void *)(v12 - 12);
    if ( (int *)(v12 - 12) != &dword_28898C0 )
      v10 = (unsigned int *)(v12 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v11 = __ldrex(v10);
        while ( __strex(v11 - 1, v10) );
      }
      else
        v11 = (*v10)--;
      if ( v11 <= 0 )
        j_j_j_j__ZdlPv_9(v7);
}


void __fastcall EntityLegacySaveConverter::convertSilverfish(EntityLegacySaveConverter *this, Entity *a2, const CompoundTag *a3)
{
  EntityLegacySaveConverter *v3; // r4@1
  void *v4; // r0@1
  unsigned int *v5; // r2@3
  signed int v6; // r1@5
  int v7; // [sp+4h] [bp-1Ch]@1

  v3 = this;
  sub_21E94B4((void **)&v7, "minecraft:silverfish_calm");
  Entity::addDefinitionGroup((int)v3, (int **)&v7);
  v4 = (void *)(v7 - 12);
  if ( (int *)(v7 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v7 - 4);
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
      j_j_j_j__ZdlPv_9(v4);
  }
}


void __fastcall EntityLegacySaveConverter::convertMinecart(EntityLegacySaveConverter *this, Entity *a2, const CompoundTag *a3)
{
  EntityLegacySaveConverter *v3; // r4@1
  void *v4; // r0@1
  unsigned int *v5; // r2@3
  signed int v6; // r1@5
  int v7; // [sp+4h] [bp-1Ch]@1

  v3 = this;
  sub_21E94B4((void **)&v7, "minecraft:cart_active");
  Entity::addDefinitionGroup((int)v3, (int **)&v7);
  v4 = (void *)(v7 - 12);
  if ( (int *)(v7 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v7 - 4);
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
      j_j_j_j__ZdlPv_9(v4);
  }
}


void __fastcall EntityLegacySaveConverter::convertBoat(EntityLegacySaveConverter *this, Entity *a2, const CompoundTag *a3)
{
  Entity *v3; // r5@1
  Entity *v4; // r7@1
  signed int v5; // r6@1
  void *v6; // r0@1
  int v7; // r0@3
  void *v8; // r0@3
  unsigned int *v9; // r2@5
  signed int v10; // r1@7
  unsigned int *v11; // r2@13
  signed int v12; // r1@15
  int v13; // [sp+8h] [bp-30h]@3
  int v14; // [sp+10h] [bp-28h]@1

  v3 = a2;
  v4 = this;
  sub_21E94B4((void **)&v14, "woodID");
  v5 = CompoundTag::contains((int)v3, (const void **)&v14);
  v6 = (void *)(v14 - 12);
  if ( (int *)(v14 - 12) != &dword_28898C0 )
  {
    v9 = (unsigned int *)(v14 - 4);
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
      j_j_j_j__ZdlPv_9(v6);
  }
  if ( v5 == 1 )
    sub_21E94B4((void **)&v13, "woodID");
    v7 = CompoundTag::getByte((int)v3, (const void **)&v13);
    Entity::setVariant(v4, v7);
    v8 = (void *)(v13 - 12);
    if ( (int *)(v13 - 12) != &dword_28898C0 )
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
        j_j_j_j__ZdlPv_9(v8);
}


void __fastcall EntityLegacySaveConverter::convertZombie(EntityLegacySaveConverter *this, Entity *a2, const CompoundTag *a3)
{
  Entity *v3; // r6@1
  Entity *v4; // r9@1
  int v5; // r5@1
  void *v6; // r0@1
  _BOOL4 v7; // r7@2
  void *v8; // r0@2
  _BOOL4 v9; // r8@3
  void *v10; // r0@3
  void *v11; // r0@5
  void *v12; // r0@7
  unsigned int *v13; // r2@8
  signed int v14; // r1@10
  void *v15; // r0@12
  void *v16; // r0@14
  unsigned int *v17; // r2@15
  signed int v18; // r1@17
  void *v19; // r0@19
  void *v20; // r0@21
  unsigned int *v21; // r2@22
  signed int v22; // r1@24
  void *v23; // r0@26
  void *v24; // r0@28
  unsigned int *v25; // r2@29
  signed int v26; // r1@31
  void *v27; // r0@54
  int v28; // r5@55
  void *v29; // r0@55
  unsigned int *v30; // r2@62
  signed int v31; // r1@64
  unsigned int *v32; // r2@66
  signed int v33; // r1@68
  unsigned int *v34; // r2@70
  signed int v35; // r1@72
  unsigned int *v36; // r2@110
  signed int v37; // r1@112
  unsigned int *v38; // r2@114
  signed int v39; // r1@116
  unsigned int *v40; // r2@118
  signed int v41; // r1@120
  unsigned int *v42; // r2@122
  signed int v43; // r1@124
  unsigned int *v44; // r2@126
  signed int v45; // r1@128
  unsigned int *v46; // r2@170
  signed int v47; // r1@172
  int v48; // [sp+4h] [bp-CCh]@74
  int v49; // [sp+Ch] [bp-C4h]@84
  int v50; // [sp+14h] [bp-BCh]@79
  int v51; // [sp+1Ch] [bp-B4h]@89
  int v52; // [sp+24h] [bp-ACh]@57
  int v53; // [sp+2Ch] [bp-A4h]@55
  int v54; // [sp+34h] [bp-9Ch]@54
  int v55; // [sp+3Ch] [bp-94h]@52
  int v56; // [sp+44h] [bp-8Ch]@28
  int v57; // [sp+48h] [bp-88h]@26
  int v58; // [sp+50h] [bp-80h]@40
  int v59; // [sp+58h] [bp-78h]@21
  int v60; // [sp+5Ch] [bp-74h]@19
  int v61; // [sp+64h] [bp-6Ch]@35
  int v62; // [sp+6Ch] [bp-64h]@33
  int v63; // [sp+74h] [bp-5Ch]@14
  int v64; // [sp+78h] [bp-58h]@12
  int v65; // [sp+80h] [bp-50h]@47
  int v66; // [sp+88h] [bp-48h]@45
  int v67; // [sp+90h] [bp-40h]@7
  int v68; // [sp+94h] [bp-3Ch]@5
  int v69; // [sp+9Ch] [bp-34h]@3
  int v70; // [sp+A4h] [bp-2Ch]@2
  int v71; // [sp+ACh] [bp-24h]@1

  v3 = a2;
  v4 = this;
  sub_21E94B4((void **)&v71, "ZombieType");
  v5 = CompoundTag::getByte((int)v3, (const void **)&v71);
  v6 = (void *)(v71 - 12);
  if ( (int *)(v71 - 12) != &dword_28898C0 )
  {
    v30 = (unsigned int *)(v71 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
    }
    else
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  }
  Entity::setVariant(v4, v5);
  sub_21E94B4((void **)&v70, "IsBaby");
  v7 = CompoundTag::getBoolean((int)v3, (const void **)&v70);
  v8 = (void *)(v70 - 12);
  if ( (int *)(v70 - 12) != &dword_28898C0 )
    v32 = (unsigned int *)(v70 - 4);
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  sub_21E94B4((void **)&v69, "WantsToBeJockey");
  v9 = CompoundTag::getBoolean((int)v3, (const void **)&v69);
  v10 = (void *)(v69 - 12);
  if ( (int *)(v69 - 12) != &dword_28898C0 )
    v34 = (unsigned int *)(v69 - 4);
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
      v35 = (*v34)--;
    if ( v35 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  switch ( v5 )
    case 0:
      EntityTypeToString((void **)&v68, 0x30B20u, 1);
      Entity::setBaseDefinition((int)v4, (int **)&v68, 1, 0);
      v11 = (void *)(v68 - 12);
      if ( (int *)(v68 - 12) != &dword_28898C0 )
      {
        v40 = (unsigned int *)(v68 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v41 = __ldrex(v40);
          while ( __strex(v41 - 1, v40) );
        }
        else
          v41 = (*v40)--;
        if ( v41 <= 0 )
          j_j_j_j__ZdlPv_9(v11);
      }
      if ( v7 == 1 )
        sub_21E94B4((void **)&v67, "minecraft:zombie_baby");
        Entity::addDefinitionGroup((int)v4, (int **)&v67);
        v12 = (void *)(v67 - 12);
        if ( (int *)(v67 - 12) == &dword_28898C0 )
          goto LABEL_46;
        v13 = (unsigned int *)(v67 - 4);
            v14 = __ldrex(v13);
          while ( __strex(v14 - 1, v13) );
LABEL_163:
          if ( v14 <= 0 )
            j_j_j_j__ZdlPv_9(v12);
LABEL_46:
          if ( v9 == 1 )
          {
            sub_21E94B4((void **)&v65, "minecraft:zombie_jockey");
            Entity::addDefinitionGroup((int)v4, (int **)&v65);
            v20 = (void *)(v65 - 12);
            if ( (int *)(v65 - 12) != &dword_28898C0 )
            {
              v21 = (unsigned int *)(v65 - 4);
              if ( !&pthread_create )
                goto LABEL_106;
              __dmb();
              do
                v22 = __ldrex(v21);
              while ( __strex(v22 - 1, v21) );
              goto LABEL_107;
            }
          }
          return;
      else
        sub_21E94B4((void **)&v66, "minecraft:zombie_adult");
        Entity::addDefinitionGroup((int)v4, (int **)&v66);
        v12 = (void *)(v66 - 12);
        if ( (int *)(v66 - 12) == &dword_28898C0 )
        v13 = (unsigned int *)(v66 - 4);
          goto LABEL_163;
      v14 = (*v13)--;
      goto LABEL_163;
    case 2:
      EntityTypeToString((void **)&v64, 0x30B2Fu, 1);
      Entity::setBaseDefinition((int)v4, (int **)&v64, 1, 0);
      v15 = (void *)(v64 - 12);
      if ( (int *)(v64 - 12) != &dword_28898C0 )
        v36 = (unsigned int *)(v64 - 4);
            v37 = __ldrex(v36);
          while ( __strex(v37 - 1, v36) );
          v37 = (*v36)--;
        if ( v37 <= 0 )
          j_j_j_j__ZdlPv_9(v15);
        sub_21E94B4((void **)&v63, "minecraft:zombie_husk_baby");
        Entity::addDefinitionGroup((int)v4, (int **)&v63);
        v16 = (void *)(v63 - 12);
        if ( (int *)(v63 - 12) == &dword_28898C0 )
          goto LABEL_34;
        v17 = (unsigned int *)(v63 - 4);
            v18 = __ldrex(v17);
          while ( __strex(v18 - 1, v17) );
LABEL_151:
          if ( v18 <= 0 )
            j_j_j_j__ZdlPv_9(v16);
LABEL_34:
            sub_21E94B4((void **)&v61, "minecraft:zombie_husk_jockey");
            Entity::addDefinitionGroup((int)v4, (int **)&v61);
            v20 = (void *)(v61 - 12);
            if ( (int *)(v61 - 12) != &dword_28898C0 )
              v21 = (unsigned int *)(v61 - 4);
        sub_21E94B4((void **)&v62, "minecraft:zombie_husk_adult");
        Entity::addDefinitionGroup((int)v4, (int **)&v62);
        v16 = (void *)(v62 - 12);
        if ( (int *)(v62 - 12) == &dword_28898C0 )
        v17 = (unsigned int *)(v62 - 4);
          goto LABEL_151;
      v18 = (*v17)--;
      goto LABEL_151;
    case 3:
      EntityTypeToString((void **)&v60, 0x10B24u, 1);
      Entity::setBaseDefinition((int)v4, (int **)&v60, 1, 0);
      v19 = (void *)(v60 - 12);
      if ( (int *)(v60 - 12) != &dword_28898C0 )
        v38 = (unsigned int *)(v60 - 4);
            v39 = __ldrex(v38);
          while ( __strex(v39 - 1, v38) );
          v39 = (*v38)--;
        if ( v39 <= 0 )
          j_j_j_j__ZdlPv_9(v19);
        sub_21E94B4((void **)&v59, "minecraft:pig_zombie_baby");
        Entity::addDefinitionGroup((int)v4, (int **)&v59);
        v20 = (void *)(v59 - 12);
        if ( (int *)(v59 - 12) == &dword_28898C0 )
        v21 = (unsigned int *)(v59 - 4);
            v22 = __ldrex(v21);
          while ( __strex(v22 - 1, v21) );
LABEL_107:
          if ( v22 <= 0 )
            j_j_j_j__ZdlPv_9(v20);
        sub_21E94B4((void **)&v58, "minecraft:pig_zombie_adult");
        Entity::addDefinitionGroup((int)v4, (int **)&v58);
        v20 = (void *)(v58 - 12);
        if ( (int *)(v58 - 12) == &dword_28898C0 )
        v21 = (unsigned int *)(v58 - 4);
          goto LABEL_107;
LABEL_106:
      v22 = (*v21)--;
      goto LABEL_107;
    case 1:
      EntityTypeToString((void **)&v57, 0x30B2Cu, 1);
      Entity::setBaseDefinition((int)v4, (int **)&v57, 1, 0);
      v23 = (void *)(v57 - 12);
      if ( (int *)(v57 - 12) != &dword_28898C0 )
        v42 = (unsigned int *)(v57 - 4);
            v43 = __ldrex(v42);
          while ( __strex(v43 - 1, v42) );
          v43 = (*v42)--;
        if ( v43 <= 0 )
          j_j_j_j__ZdlPv_9(v23);
      if ( v7 != 1 )
        sub_21E94B4((void **)&v55, "adult");
        Entity::addDefinitionGroup((int)v4, (int **)&v55);
        v24 = (void *)(v55 - 12);
        if ( (int *)(v55 - 12) == &dword_28898C0 )
          goto LABEL_53;
        v25 = (unsigned int *)(v55 - 4);
            v26 = __ldrex(v25);
          while ( __strex(v26 - 1, v25) );
          goto LABEL_167;
LABEL_166:
        v26 = (*v25)--;
        goto LABEL_167;
      sub_21E94B4((void **)&v56, "baby");
      Entity::addDefinitionGroup((int)v4, (int **)&v56);
      v24 = (void *)(v56 - 12);
      if ( (int *)(v56 - 12) == &dword_28898C0 )
        goto LABEL_53;
      v25 = (unsigned int *)(v56 - 4);
      if ( !&pthread_create )
        goto LABEL_166;
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
LABEL_167:
      if ( v26 <= 0 )
        j_j_j_j__ZdlPv_9(v24);
LABEL_53:
      if ( v9 == 1 )
        sub_21E94B4((void **)&v54, "jockey");
        Entity::addDefinitionGroup((int)v4, (int **)&v54);
        v27 = (void *)(v54 - 12);
        if ( (int *)(v54 - 12) != &dword_28898C0 )
          v46 = (unsigned int *)(v54 - 4);
          if ( &pthread_create )
            __dmb();
            do
              v47 = __ldrex(v46);
            while ( __strex(v47 - 1, v46) );
          else
            v47 = (*v46)--;
          if ( v47 <= 0 )
            j_j_j_j__ZdlPv_9(v27);
      sub_21E94B4((void **)&v53, "Profession");
      v28 = CompoundTag::getInt((int)v3, (const void **)&v53);
      v29 = (void *)(v53 - 12);
      if ( (int *)(v53 - 12) != &dword_28898C0 )
        v44 = (unsigned int *)(v53 - 4);
            v45 = __ldrex(v44);
          while ( __strex(v45 - 1, v44) );
          v45 = (*v44)--;
        if ( v45 <= 0 )
          j_j_j_j__ZdlPv_9(v29);
      switch ( v28 )
        case 0:
          sub_21E94B4((void **)&v52, "farmer");
          Entity::addDefinitionGroup((int)v4, (int **)&v52);
          v20 = (void *)(v52 - 12);
          if ( (int *)(v52 - 12) != &dword_28898C0 )
            v21 = (unsigned int *)(v52 - 4);
            if ( !&pthread_create )
              goto LABEL_106;
              v22 = __ldrex(v21);
            while ( __strex(v22 - 1, v21) );
            goto LABEL_107;
          break;
        case 4:
          sub_21E94B4((void **)&v48, "butcher");
          Entity::addDefinitionGroup((int)v4, (int **)&v48);
          v20 = (void *)(v48 - 12);
          if ( (int *)(v48 - 12) != &dword_28898C0 )
            v21 = (unsigned int *)(v48 - 4);
        case 2:
          sub_21E94B4((void **)&v50, "cleric");
          Entity::addDefinitionGroup((int)v4, (int **)&v50);
          v20 = (void *)(v50 - 12);
          if ( (int *)(v50 - 12) != &dword_28898C0 )
            v21 = (unsigned int *)(v50 - 4);
        case 3:
          sub_21E94B4((void **)&v49, "weaponsmith");
          Entity::addDefinitionGroup((int)v4, (int **)&v49);
          v20 = (void *)(v49 - 12);
          if ( (int *)(v49 - 12) != &dword_28898C0 )
            v21 = (unsigned int *)(v49 - 4);
        case 1:
          sub_21E94B4((void **)&v51, "librarian");
          Entity::addDefinitionGroup((int)v4, (int **)&v51);
          v20 = (void *)(v51 - 12);
          if ( (int *)(v51 - 12) != &dword_28898C0 )
            v21 = (unsigned int *)(v51 - 4);
        default:
      return;
    default:
}


void __fastcall EntityLegacySaveConverter::convertRabbit(EntityLegacySaveConverter *this, Entity *a2, const CompoundTag *a3)
{
  Entity *v3; // r6@1
  Entity *v4; // r7@1
  int v5; // r5@1
  void *v6; // r0@1
  int v7; // r6@2
  void *v8; // r0@2
  void *v9; // r0@4
  unsigned int *v10; // r2@5
  signed int v11; // r1@7
  void *v12; // r0@11
  unsigned int *v13; // r2@12
  signed int v14; // r1@14
  unsigned int *v15; // r2@41
  signed int v16; // r1@43
  unsigned int *v17; // r2@45
  signed int v18; // r1@47
  int v19; // [sp+4h] [bp-64h]@36
  int v20; // [sp+Ch] [bp-5Ch]@16
  int v21; // [sp+14h] [bp-54h]@26
  int v22; // [sp+1Ch] [bp-4Ch]@21
  int v23; // [sp+24h] [bp-44h]@31
  int v24; // [sp+2Ch] [bp-3Ch]@11
  int v25; // [sp+34h] [bp-34h]@4
  int v26; // [sp+3Ch] [bp-2Ch]@9
  int v27; // [sp+44h] [bp-24h]@2
  int v28; // [sp+4Ch] [bp-1Ch]@1

  v3 = a2;
  v4 = this;
  sub_21E94B4((void **)&v28, "RabbitType");
  v5 = CompoundTag::getInt((int)v3, (const void **)&v28);
  v6 = (void *)(v28 - 12);
  if ( (int *)(v28 - 12) != &dword_28898C0 )
  {
    v15 = (unsigned int *)(v28 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
    }
    else
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  }
  Entity::setVariant(v4, v5);
  sub_21E94B4((void **)&v27, "Age");
  v7 = CompoundTag::getInt((int)v3, (const void **)&v27);
  v8 = (void *)(v27 - 12);
  if ( (int *)(v27 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v27 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  if ( v7 > -1 )
    sub_21E94B4((void **)&v25, "adult");
    Entity::addDefinitionGroup((int)v4, (int **)&v25);
    v9 = (void *)(v25 - 12);
    if ( (int *)(v25 - 12) == &dword_28898C0 )
      goto LABEL_10;
    v10 = (unsigned int *)(v25 - 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      goto LABEL_66;
LABEL_65:
    v11 = (*v10)--;
    goto LABEL_66;
  sub_21E94B4((void **)&v26, "baby");
  Entity::addDefinitionGroup((int)v4, (int **)&v26);
  v9 = (void *)(v26 - 12);
  if ( (int *)(v26 - 12) == &dword_28898C0 )
    goto LABEL_10;
  v10 = (unsigned int *)(v26 - 4);
  if ( !&pthread_create )
    goto LABEL_65;
  __dmb();
  do
    v11 = __ldrex(v10);
  while ( __strex(v11 - 1, v10) );
LABEL_66:
  if ( v11 <= 0 )
    j_j_j_j__ZdlPv_9(v9);
LABEL_10:
  switch ( v5 )
    case 0:
      sub_21E94B4((void **)&v24, "coat_brown");
      Entity::addDefinitionGroup((int)v4, (int **)&v24);
      v12 = (void *)(v24 - 12);
      if ( (int *)(v24 - 12) != &dword_28898C0 )
      {
        v13 = (unsigned int *)(v24 - 4);
        if ( !&pthread_create )
          goto LABEL_57;
        __dmb();
        do
          v14 = __ldrex(v13);
        while ( __strex(v14 - 1, v13) );
        goto LABEL_58;
      }
      break;
    case 4:
      sub_21E94B4((void **)&v20, "coat_desert");
      Entity::addDefinitionGroup((int)v4, (int **)&v20);
      v12 = (void *)(v20 - 12);
      if ( (int *)(v20 - 12) != &dword_28898C0 )
        v13 = (unsigned int *)(v20 - 4);
    case 2:
      sub_21E94B4((void **)&v22, "coat_black");
      Entity::addDefinitionGroup((int)v4, (int **)&v22);
      v12 = (void *)(v22 - 12);
      if ( (int *)(v22 - 12) != &dword_28898C0 )
        v13 = (unsigned int *)(v22 - 4);
    case 3:
      sub_21E94B4((void **)&v21, "coat_splotched");
      Entity::addDefinitionGroup((int)v4, (int **)&v21);
      v12 = (void *)(v21 - 12);
      if ( (int *)(v21 - 12) != &dword_28898C0 )
        v13 = (unsigned int *)(v21 - 4);
    case 1:
      sub_21E94B4((void **)&v23, "coat_white");
      Entity::addDefinitionGroup((int)v4, (int **)&v23);
      v12 = (void *)(v23 - 12);
      if ( (int *)(v23 - 12) != &dword_28898C0 )
        v13 = (unsigned int *)(v23 - 4);
    case 5:
      sub_21E94B4((void **)&v19, "coat_salt");
      Entity::addDefinitionGroup((int)v4, (int **)&v19);
      v12 = (void *)(v19 - 12);
      if ( (int *)(v19 - 12) != &dword_28898C0 )
        v13 = (unsigned int *)(v19 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v14 = __ldrex(v13);
          while ( __strex(v14 - 1, v13) );
        }
        else
LABEL_57:
          v14 = (*v13)--;
LABEL_58:
        if ( v14 <= 0 )
          j_j_j_j__ZdlPv_9(v12);
    default:
      return;
}


void __fastcall EntityLegacySaveConverter::convertVillager(EntityLegacySaveConverter *this, Entity *a2, const CompoundTag *a3)
{
  Entity *v3; // r5@1
  EntityLegacySaveConverter *v4; // r7@1
  int v5; // r6@1
  void *v6; // r0@1
  void *v7; // r0@3
  unsigned int *v8; // r2@4
  signed int v9; // r1@6
  int v10; // r6@9
  void *v11; // r0@9
  int v12; // r5@10
  void *v13; // r0@10
  void *v14; // r0@15
  void *v15; // r0@16
  unsigned int *v16; // r2@17
  signed int v17; // r1@19
  void *v18; // r0@22
  void *v19; // r0@28
  void *v20; // r0@36
  void *v21; // r0@42
  void *v22; // r0@48
  unsigned int *v23; // r2@54
  signed int v24; // r1@56
  unsigned int *v25; // r2@58
  signed int v26; // r1@60
  unsigned int *v27; // r2@62
  signed int v28; // r1@64
  void *v29; // r0@66
  void *v30; // r0@72
  void *v31; // r0@78
  void *v32; // r0@84
  void *v33; // r0@90
  unsigned int *v34; // r2@120
  signed int v35; // r1@122
  unsigned int *v36; // r2@124
  signed int v37; // r1@126
  unsigned int *v38; // r2@128
  signed int v39; // r1@130
  unsigned int *v40; // r2@132
  signed int v41; // r1@134
  unsigned int *v42; // r2@144
  signed int v43; // r1@146
  unsigned int *v44; // r2@148
  signed int v45; // r1@150
  unsigned int *v46; // r2@152
  signed int v47; // r1@154
  unsigned int *v48; // r2@164
  signed int v49; // r1@166
  unsigned int *v50; // r2@168
  signed int v51; // r1@170
  unsigned int *v52; // r2@172
  signed int v53; // r1@174
  unsigned int *v54; // r2@176
  signed int v55; // r1@178
  int v56; // [sp+4h] [bp-ECh]@23
  int v57; // [sp+Ch] [bp-E4h]@22
  int v58; // [sp+14h] [bp-DCh]@49
  int v59; // [sp+1Ch] [bp-D4h]@48
  int v60; // [sp+24h] [bp-CCh]@37
  int v61; // [sp+2Ch] [bp-C4h]@36
  int v62; // [sp+34h] [bp-BCh]@67
  int v63; // [sp+3Ch] [bp-B4h]@66
  int v64; // [sp+44h] [bp-ACh]@73
  int v65; // [sp+4Ch] [bp-A4h]@72
  int v66; // [sp+54h] [bp-9Ch]@29
  int v67; // [sp+5Ch] [bp-94h]@28
  int v68; // [sp+64h] [bp-8Ch]@43
  int v69; // [sp+6Ch] [bp-84h]@42
  int v70; // [sp+74h] [bp-7Ch]@16
  int v71; // [sp+7Ch] [bp-74h]@15
  int v72; // [sp+84h] [bp-6Ch]@79
  int v73; // [sp+8Ch] [bp-64h]@78
  int v74; // [sp+94h] [bp-5Ch]@85
  int v75; // [sp+9Ch] [bp-54h]@84
  int v76; // [sp+A4h] [bp-4Ch]@91
  int v77; // [sp+ACh] [bp-44h]@90
  int v78; // [sp+B4h] [bp-3Ch]@10
  int v79; // [sp+BCh] [bp-34h]@9
  int v80; // [sp+C4h] [bp-2Ch]@3
  int v81; // [sp+CCh] [bp-24h]@8
  int v82; // [sp+D4h] [bp-1Ch]@1

  v3 = a2;
  v4 = this;
  sub_21E94B4((void **)&v82, "Age");
  v5 = CompoundTag::getInt((int)v3, (const void **)&v82);
  v6 = (void *)(v82 - 12);
  if ( (int *)(v82 - 12) != &dword_28898C0 )
  {
    v23 = (unsigned int *)(v82 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
    }
    else
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  }
  if ( v5 > -1 )
    sub_21E94B4((void **)&v80, "adult");
    Entity::addDefinitionGroup((int)v4, (int **)&v80);
    v7 = (void *)(v80 - 12);
    if ( (int *)(v80 - 12) == &dword_28898C0 )
      goto LABEL_9;
    v8 = (unsigned int *)(v80 - 4);
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
      goto LABEL_117;
LABEL_116:
    v9 = (*v8)--;
    goto LABEL_117;
  sub_21E94B4((void **)&v81, "baby");
  Entity::addDefinitionGroup((int)v4, (int **)&v81);
  v7 = (void *)(v81 - 12);
  if ( (int *)(v81 - 12) == &dword_28898C0 )
    goto LABEL_9;
  v8 = (unsigned int *)(v81 - 4);
  if ( !&pthread_create )
    goto LABEL_116;
  __dmb();
  do
    v9 = __ldrex(v8);
  while ( __strex(v9 - 1, v8) );
LABEL_117:
  if ( v9 <= 0 )
    j_j_j_j__ZdlPv_9(v7);
LABEL_9:
  sub_21E94B4((void **)&v79, "Profession");
  v10 = CompoundTag::getInt((int)v3, (const void **)&v79);
  v11 = (void *)(v79 - 12);
  if ( (int *)(v79 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v79 - 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  sub_21E94B4((void **)&v78, "Career");
  v12 = CompoundTag::getInt((int)v3, (const void **)&v78);
  v13 = (void *)(v78 - 12);
  if ( (int *)(v78 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v78 - 4);
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  switch ( v10 )
    case 0:
      switch ( v12 )
      {
        case 2:
          sub_21E94B4((void **)&v75, "fisherman");
          Entity::addDefinitionGroup((int)v4, (int **)&v75);
          v32 = (void *)(v75 - 12);
          if ( (int *)(v75 - 12) != &dword_28898C0 )
          {
            v50 = (unsigned int *)(v75 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v51 = __ldrex(v50);
              while ( __strex(v51 - 1, v50) );
            }
            else
              v51 = (*v50)--;
            if ( v51 <= 0 )
              j_j_j_j__ZdlPv_9(v32);
          }
          sub_21E94B4((void **)&v74, "behavior_peasant");
          Entity::addDefinitionGroup((int)v4, (int **)&v74);
          v15 = (void *)(v74 - 12);
          if ( (int *)(v74 - 12) != &dword_28898C0 )
            v16 = (unsigned int *)(v74 - 4);
            if ( !&pthread_create )
              goto LABEL_108;
            __dmb();
            do
              v17 = __ldrex(v16);
            while ( __strex(v17 - 1, v16) );
            goto LABEL_109;
          break;
        case 3:
          sub_21E94B4((void **)&v73, "shepherd");
          Entity::addDefinitionGroup((int)v4, (int **)&v73);
          v31 = (void *)(v73 - 12);
          if ( (int *)(v73 - 12) != &dword_28898C0 )
            v48 = (unsigned int *)(v73 - 4);
                v49 = __ldrex(v48);
              while ( __strex(v49 - 1, v48) );
              v49 = (*v48)--;
            if ( v49 <= 0 )
              j_j_j_j__ZdlPv_9(v31);
          sub_21E94B4((void **)&v72, "behavior_peasant");
          Entity::addDefinitionGroup((int)v4, (int **)&v72);
          v15 = (void *)(v72 - 12);
          if ( (int *)(v72 - 12) != &dword_28898C0 )
            v16 = (unsigned int *)(v72 - 4);
        case 4:
          sub_21E94B4((void **)&v71, "fletcher");
          Entity::addDefinitionGroup((int)v4, (int **)&v71);
          v14 = (void *)(v71 - 12);
          if ( (int *)(v71 - 12) != &dword_28898C0 )
            v52 = (unsigned int *)(v71 - 4);
                v53 = __ldrex(v52);
              while ( __strex(v53 - 1, v52) );
              v53 = (*v52)--;
            if ( v53 <= 0 )
              j_j_j_j__ZdlPv_9(v14);
          sub_21E94B4((void **)&v70, "behavior_peasant");
          Entity::addDefinitionGroup((int)v4, (int **)&v70);
          v15 = (void *)(v70 - 12);
          if ( (int *)(v70 - 12) != &dword_28898C0 )
            v16 = (unsigned int *)(v70 - 4);
        default:
          sub_21E94B4((void **)&v77, "farmer");
          Entity::addDefinitionGroup((int)v4, (int **)&v77);
          v33 = (void *)(v77 - 12);
          if ( (int *)(v77 - 12) != &dword_28898C0 )
            v54 = (unsigned int *)(v77 - 4);
                v55 = __ldrex(v54);
              while ( __strex(v55 - 1, v54) );
              v55 = (*v54)--;
            if ( v55 <= 0 )
              j_j_j_j__ZdlPv_9(v33);
          sub_21E94B4((void **)&v76, "behavior_peasant");
          Entity::addDefinitionGroup((int)v4, (int **)&v76);
          v15 = (void *)(v76 - 12);
          if ( (int *)(v76 - 12) != &dword_28898C0 )
            v16 = (unsigned int *)(v76 - 4);
      }
      break;
    case 4:
      if ( v12 == 2 )
        sub_21E94B4((void **)&v57, "leatherworker");
        Entity::addDefinitionGroup((int)v4, (int **)&v57);
        v18 = (void *)(v57 - 12);
        if ( (int *)(v57 - 12) != &dword_28898C0 )
        {
          v38 = (unsigned int *)(v57 - 4);
          if ( &pthread_create )
              v39 = __ldrex(v38);
            while ( __strex(v39 - 1, v38) );
          else
            v39 = (*v38)--;
          if ( v39 <= 0 )
            j_j_j_j__ZdlPv_9(v18);
        }
        sub_21E94B4((void **)&v56, "behavior_non_peasant");
        Entity::addDefinitionGroup((int)v4, (int **)&v56);
        v15 = (void *)(v56 - 12);
        if ( (int *)(v56 - 12) != &dword_28898C0 )
          v16 = (unsigned int *)(v56 - 4);
          if ( !&pthread_create )
            goto LABEL_108;
          __dmb();
          do
            v17 = __ldrex(v16);
          while ( __strex(v17 - 1, v16) );
          goto LABEL_109;
      else
        sub_21E94B4((void **)&v59, "butcher");
        Entity::addDefinitionGroup((int)v4, (int **)&v59);
        v22 = (void *)(v59 - 12);
        if ( (int *)(v59 - 12) != &dword_28898C0 )
          v40 = (unsigned int *)(v59 - 4);
              v41 = __ldrex(v40);
            while ( __strex(v41 - 1, v40) );
            v41 = (*v40)--;
          if ( v41 <= 0 )
            j_j_j_j__ZdlPv_9(v22);
        sub_21E94B4((void **)&v58, "behavior_non_peasant");
        Entity::addDefinitionGroup((int)v4, (int **)&v58);
        v15 = (void *)(v58 - 12);
        if ( (int *)(v58 - 12) != &dword_28898C0 )
          v16 = (unsigned int *)(v58 - 4);
    case 2:
      sub_21E94B4((void **)&v67, "cleric");
      Entity::addDefinitionGroup((int)v4, (int **)&v67);
      v19 = (void *)(v67 - 12);
      if ( (int *)(v67 - 12) != &dword_28898C0 )
        v34 = (unsigned int *)(v67 - 4);
        if ( &pthread_create )
            v35 = __ldrex(v34);
          while ( __strex(v35 - 1, v34) );
        else
          v35 = (*v34)--;
        if ( v35 <= 0 )
          j_j_j_j__ZdlPv_9(v19);
      sub_21E94B4((void **)&v66, "behavior_non_peasant");
      Entity::addDefinitionGroup((int)v4, (int **)&v66);
      v15 = (void *)(v66 - 12);
      if ( (int *)(v66 - 12) != &dword_28898C0 )
        v16 = (unsigned int *)(v66 - 4);
        if ( !&pthread_create )
          goto LABEL_108;
        __dmb();
        do
          v17 = __ldrex(v16);
        while ( __strex(v17 - 1, v16) );
        goto LABEL_109;
    case 3:
        sub_21E94B4((void **)&v63, "weaponsmith");
        Entity::addDefinitionGroup((int)v4, (int **)&v63);
        v29 = (void *)(v63 - 12);
        if ( (int *)(v63 - 12) != &dword_28898C0 )
          v44 = (unsigned int *)(v63 - 4);
              v45 = __ldrex(v44);
            while ( __strex(v45 - 1, v44) );
            v45 = (*v44)--;
          if ( v45 <= 0 )
            j_j_j_j__ZdlPv_9(v29);
        sub_21E94B4((void **)&v62, "behavior_non_peasant");
        Entity::addDefinitionGroup((int)v4, (int **)&v62);
        v15 = (void *)(v62 - 12);
        if ( (int *)(v62 - 12) != &dword_28898C0 )
          v16 = (unsigned int *)(v62 - 4);
      else if ( v12 == 3 )
        sub_21E94B4((void **)&v61, "toolsmith");
        Entity::addDefinitionGroup((int)v4, (int **)&v61);
        v20 = (void *)(v61 - 12);
        if ( (int *)(v61 - 12) != &dword_28898C0 )
          v42 = (unsigned int *)(v61 - 4);
              v43 = __ldrex(v42);
            while ( __strex(v43 - 1, v42) );
            v43 = (*v42)--;
          if ( v43 <= 0 )
            j_j_j_j__ZdlPv_9(v20);
        sub_21E94B4((void **)&v60, "behavior_non_peasant");
        Entity::addDefinitionGroup((int)v4, (int **)&v60);
        v15 = (void *)(v60 - 12);
        if ( (int *)(v60 - 12) != &dword_28898C0 )
          v16 = (unsigned int *)(v60 - 4);
        sub_21E94B4((void **)&v65, "armorer");
        Entity::addDefinitionGroup((int)v4, (int **)&v65);
        v30 = (void *)(v65 - 12);
        if ( (int *)(v65 - 12) != &dword_28898C0 )
          v46 = (unsigned int *)(v65 - 4);
              v47 = __ldrex(v46);
            while ( __strex(v47 - 1, v46) );
            v47 = (*v46)--;
          if ( v47 <= 0 )
            j_j_j_j__ZdlPv_9(v30);
        sub_21E94B4((void **)&v64, "behavior_non_peasant");
        Entity::addDefinitionGroup((int)v4, (int **)&v64);
        v15 = (void *)(v64 - 12);
        if ( (int *)(v64 - 12) != &dword_28898C0 )
          v16 = (unsigned int *)(v64 - 4);
    case 1:
      sub_21E94B4((void **)&v69, "librarian");
      Entity::addDefinitionGroup((int)v4, (int **)&v69);
      v21 = (void *)(v69 - 12);
      if ( (int *)(v69 - 12) != &dword_28898C0 )
        v36 = (unsigned int *)(v69 - 4);
            v37 = __ldrex(v36);
          while ( __strex(v37 - 1, v36) );
          v37 = (*v36)--;
        if ( v37 <= 0 )
          j_j_j_j__ZdlPv_9(v21);
      sub_21E94B4((void **)&v68, "behavior_non_peasant");
      Entity::addDefinitionGroup((int)v4, (int **)&v68);
      v15 = (void *)(v68 - 12);
      if ( (int *)(v68 - 12) != &dword_28898C0 )
        v16 = (unsigned int *)(v68 - 4);
LABEL_108:
          v17 = (*v16)--;
LABEL_109:
        if ( v17 <= 0 )
          j_j_j_j__ZdlPv_9(v15);
    default:
      return;
}


void __fastcall EntityLegacySaveConverter::convertCreeper(EntityLegacySaveConverter *this, Entity *a2, const CompoundTag *a3)
{
  Entity *v3; // r5@1
  EntityLegacySaveConverter *v4; // r6@1
  _BOOL4 v5; // r5@1
  void *v6; // r0@1
  void *v7; // r0@3
  unsigned int *v8; // r2@5
  signed int v9; // r1@7
  unsigned int *v10; // r2@13
  signed int v11; // r1@15
  int v12; // [sp+4h] [bp-2Ch]@3
  int v13; // [sp+Ch] [bp-24h]@1

  v3 = a2;
  v4 = this;
  sub_21E94B4((void **)&v13, "IsPowered");
  v5 = CompoundTag::getBoolean((int)v3, (const void **)&v13);
  v6 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
  {
    v8 = (unsigned int *)(v13 - 4);
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
  if ( v5 == 1 )
    sub_21E94B4((void **)&v12, "minecraft:charged_creeper");
    Entity::addDefinitionGroup((int)v4, (int **)&v12);
    v7 = (void *)(v12 - 12);
    if ( (int *)(v12 - 12) != &dword_28898C0 )
      v10 = (unsigned int *)(v12 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v11 = __ldrex(v10);
        while ( __strex(v11 - 1, v10) );
      }
      else
        v11 = (*v10)--;
      if ( v11 <= 0 )
        j_j_j_j__ZdlPv_9(v7);
}


void __fastcall EntityLegacySaveConverter::convertSnowgolem(EntityLegacySaveConverter *this, Entity *a2, const CompoundTag *a3)
{
  Entity *v3; // r5@1
  EntityLegacySaveConverter *v4; // r6@1
  _BOOL4 v5; // r5@1
  void *v6; // r0@1
  void *v7; // r0@3
  unsigned int *v8; // r2@5
  signed int v9; // r1@7
  unsigned int *v10; // r2@13
  signed int v11; // r1@15
  int v12; // [sp+4h] [bp-2Ch]@3
  int v13; // [sp+Ch] [bp-24h]@1

  v3 = a2;
  v4 = this;
  sub_21E94B4((void **)&v13, "PumpkinID");
  v5 = CompoundTag::getBoolean((int)v3, (const void **)&v13);
  v6 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
  {
    v8 = (unsigned int *)(v13 - 4);
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
  if ( v5 == 1 )
    sub_21E94B4((void **)&v12, "minecraft:snowman_sheared");
    Entity::addDefinitionGroup((int)v4, (int **)&v12);
    v7 = (void *)(v12 - 12);
    if ( (int *)(v12 - 12) != &dword_28898C0 )
      v10 = (unsigned int *)(v12 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v11 = __ldrex(v10);
        while ( __strex(v11 - 1, v10) );
      }
      else
        v11 = (*v10)--;
      if ( v11 <= 0 )
        j_j_j_j__ZdlPv_9(v7);
}


void __fastcall EntityLegacySaveConverter::convertZombieVillager(EntityLegacySaveConverter *this, Entity *a2, const CompoundTag *a3)
{
  Entity *v3; // r5@1
  EntityLegacySaveConverter *v4; // r7@1
  int v5; // r6@1
  void *v6; // r0@1
  void *v7; // r0@3
  unsigned int *v8; // r2@4
  signed int v9; // r1@6
  int v10; // r5@9
  void *v11; // r0@9
  void *v12; // r0@11
  unsigned int *v13; // r2@12
  signed int v14; // r1@14
  unsigned int *v15; // r2@36
  signed int v16; // r1@38
  unsigned int *v17; // r2@40
  signed int v18; // r1@42
  int v19; // [sp+4h] [bp-5Ch]@21
  int v20; // [sp+Ch] [bp-54h]@16
  int v21; // [sp+14h] [bp-4Ch]@26
  int v22; // [sp+1Ch] [bp-44h]@11
  int v23; // [sp+24h] [bp-3Ch]@31
  int v24; // [sp+2Ch] [bp-34h]@9
  int v25; // [sp+34h] [bp-2Ch]@3
  int v26; // [sp+3Ch] [bp-24h]@8
  int v27; // [sp+44h] [bp-1Ch]@1

  v3 = a2;
  v4 = this;
  sub_21E94B4((void **)&v27, "Age");
  v5 = CompoundTag::getInt((int)v3, (const void **)&v27);
  v6 = (void *)(v27 - 12);
  if ( (int *)(v27 - 12) != &dword_28898C0 )
  {
    v15 = (unsigned int *)(v27 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
    }
    else
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  }
  if ( v5 > -1 )
    sub_21E94B4((void **)&v25, "adult");
    Entity::addDefinitionGroup((int)v4, (int **)&v25);
    v7 = (void *)(v25 - 12);
    if ( (int *)(v25 - 12) == &dword_28898C0 )
      goto LABEL_9;
    v8 = (unsigned int *)(v25 - 4);
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
      goto LABEL_61;
LABEL_60:
    v9 = (*v8)--;
    goto LABEL_61;
  sub_21E94B4((void **)&v26, "baby");
  Entity::addDefinitionGroup((int)v4, (int **)&v26);
  v7 = (void *)(v26 - 12);
  if ( (int *)(v26 - 12) == &dword_28898C0 )
    goto LABEL_9;
  v8 = (unsigned int *)(v26 - 4);
  if ( !&pthread_create )
    goto LABEL_60;
  __dmb();
  do
    v9 = __ldrex(v8);
  while ( __strex(v9 - 1, v8) );
LABEL_61:
  if ( v9 <= 0 )
    j_j_j_j__ZdlPv_9(v7);
LABEL_9:
  sub_21E94B4((void **)&v24, "Profession");
  v10 = CompoundTag::getInt((int)v3, (const void **)&v24);
  v11 = (void *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v24 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  switch ( v10 )
    case 1:
      sub_21E94B4((void **)&v22, "librarian");
      Entity::addDefinitionGroup((int)v4, (int **)&v22);
      v12 = (void *)(v22 - 12);
      if ( (int *)(v22 - 12) != &dword_28898C0 )
      {
        v13 = (unsigned int *)(v22 - 4);
        if ( !&pthread_create )
          goto LABEL_52;
        __dmb();
        do
          v14 = __ldrex(v13);
        while ( __strex(v14 - 1, v13) );
        goto LABEL_53;
      }
      break;
    case 3:
      sub_21E94B4((void **)&v20, "weaponsmith");
      Entity::addDefinitionGroup((int)v4, (int **)&v20);
      v12 = (void *)(v20 - 12);
      if ( (int *)(v20 - 12) != &dword_28898C0 )
        v13 = (unsigned int *)(v20 - 4);
    case 4:
      sub_21E94B4((void **)&v19, "butcher");
      Entity::addDefinitionGroup((int)v4, (int **)&v19);
      v12 = (void *)(v19 - 12);
      if ( (int *)(v19 - 12) != &dword_28898C0 )
        v13 = (unsigned int *)(v19 - 4);
    case 2:
      sub_21E94B4((void **)&v21, "cleric");
      Entity::addDefinitionGroup((int)v4, (int **)&v21);
      v12 = (void *)(v21 - 12);
      if ( (int *)(v21 - 12) != &dword_28898C0 )
        v13 = (unsigned int *)(v21 - 4);
    default:
      sub_21E94B4((void **)&v23, "farmer");
      Entity::addDefinitionGroup((int)v4, (int **)&v23);
      v12 = (void *)(v23 - 12);
      if ( (int *)(v23 - 12) != &dword_28898C0 )
        v13 = (unsigned int *)(v23 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v14 = __ldrex(v13);
          while ( __strex(v14 - 1, v13) );
        }
        else
LABEL_52:
          v14 = (*v13)--;
LABEL_53:
        if ( v14 <= 0 )
          j_j_j_j__ZdlPv_9(v12);
}


void __fastcall EntityLegacySaveConverter::convertWolf(EntityLegacySaveConverter *this, Entity *a2, const CompoundTag *a3)
{
  Entity *v3; // r5@1
  EntityLegacySaveConverter *v4; // r7@1
  int v5; // r6@1
  void *v6; // r0@1
  void *v7; // r0@3
  unsigned int *v8; // r2@4
  signed int v9; // r1@6
  void *v10; // r0@10
  unsigned int *v11; // r2@11
  signed int v12; // r1@13
  signed int v13; // r6@16
  void *v14; // r0@16
  Palette *v15; // r0@18
  unsigned __int8 v16; // r1@18
  int v17; // r0@18
  void *v18; // r0@18
  _BOOL4 v19; // r5@19
  void *v20; // r0@19
  void *v21; // r0@21
  unsigned int *v22; // r2@23
  signed int v23; // r1@25
  unsigned int *v24; // r2@27
  signed int v25; // r1@29
  unsigned int *v26; // r2@31
  signed int v27; // r1@33
  unsigned int *v28; // r2@43
  signed int v29; // r1@45
  unsigned int *v30; // r2@51
  signed int v31; // r1@53
  int v32; // [sp+4h] [bp-64h]@21
  int v33; // [sp+Ch] [bp-5Ch]@19
  int v34; // [sp+14h] [bp-54h]@18
  int v35; // [sp+1Ch] [bp-4Ch]@16
  int v36; // [sp+24h] [bp-44h]@15
  int v37; // [sp+2Ch] [bp-3Ch]@10
  int v38; // [sp+30h] [bp-38h]@9
  int v39; // [sp+34h] [bp-34h]@9
  int v40; // [sp+3Ch] [bp-2Ch]@3
  int v41; // [sp+44h] [bp-24h]@8
  int v42; // [sp+4Ch] [bp-1Ch]@1

  v3 = a2;
  v4 = this;
  sub_21E94B4((void **)&v42, "Age");
  v5 = CompoundTag::getInt((int)v3, (const void **)&v42);
  v6 = (void *)(v42 - 12);
  if ( (int *)(v42 - 12) != &dword_28898C0 )
  {
    v22 = (unsigned int *)(v42 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
    }
    else
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  }
  if ( v5 > -1 )
    sub_21E94B4((void **)&v40, "minecraft:wolf_adult");
    Entity::addDefinitionGroup((int)v4, (int **)&v40);
    v7 = (void *)(v40 - 12);
    if ( (int *)(v40 - 12) == &dword_28898C0 )
      goto LABEL_9;
    v8 = (unsigned int *)(v40 - 4);
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
      goto LABEL_60;
LABEL_59:
    v9 = (*v8)--;
    goto LABEL_60;
  sub_21E94B4((void **)&v41, "minecraft:wolf_baby");
  Entity::addDefinitionGroup((int)v4, (int **)&v41);
  v7 = (void *)(v41 - 12);
  if ( (int *)(v41 - 12) == &dword_28898C0 )
    goto LABEL_9;
  v8 = (unsigned int *)(v41 - 4);
  if ( !&pthread_create )
    goto LABEL_59;
  __dmb();
  do
    v9 = __ldrex(v8);
  while ( __strex(v9 - 1, v8) );
LABEL_60:
  if ( v9 <= 0 )
    j_j_j_j__ZdlPv_9(v7);
LABEL_9:
  Entity::getOwnerId((Entity *)&v38, (int)v4);
  if ( (v38 & v39) != -1 )
    sub_21E94B4((void **)&v37, "minecraft:wolf_tame");
    Entity::addDefinitionGroup((int)v4, (int **)&v37);
    v10 = (void *)(v37 - 12);
    if ( (int *)(v37 - 12) == &dword_28898C0 )
      goto LABEL_16;
    v11 = (unsigned int *)(v37 - 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      goto LABEL_68;
LABEL_67:
    v12 = (*v11)--;
    goto LABEL_68;
  sub_21E94B4((void **)&v36, "minecraft:wolf_wild");
  Entity::addDefinitionGroup((int)v4, (int **)&v36);
  v10 = (void *)(v36 - 12);
  if ( (int *)(v36 - 12) == &dword_28898C0 )
    goto LABEL_16;
  v11 = (unsigned int *)(v36 - 4);
    goto LABEL_67;
    v12 = __ldrex(v11);
  while ( __strex(v12 - 1, v11) );
LABEL_68:
  if ( v12 <= 0 )
    j_j_j_j__ZdlPv_9(v10);
LABEL_16:
  sub_21E94B4((void **)&v35, "CollarColor");
  v13 = CompoundTag::contains((int)v3, (const void **)&v35);
  v14 = (void *)(v35 - 12);
  if ( (int *)(v35 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v35 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  if ( v13 == 1 )
    sub_21E94B4((void **)&v34, "CollarColor");
    v15 = (Palette *)CompoundTag::getByte((int)v3, (const void **)&v34);
    v17 = Palette::fromByte(v15, v16);
    Entity::setColor((int)v4, v17);
    v18 = (void *)(v34 - 12);
    if ( (int *)(v34 - 12) != &dword_28898C0 )
      v28 = (unsigned int *)(v34 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v29 = __ldrex(v28);
        while ( __strex(v29 - 1, v28) );
      }
      else
        v29 = (*v28)--;
      if ( v29 <= 0 )
        j_j_j_j__ZdlPv_9(v18);
  sub_21E94B4((void **)&v33, "Angry");
  v19 = CompoundTag::getBoolean((int)v3, (const void **)&v33);
  v20 = (void *)(v33 - 12);
  if ( (int *)(v33 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v33 - 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j__ZdlPv_9(v20);
  if ( v19 == 1 )
    sub_21E94B4((void **)&v32, "minecraft:wolf_angry");
    Entity::addDefinitionGroup((int)v4, (int **)&v32);
    v21 = (void *)(v32 - 12);
    if ( (int *)(v32 - 12) != &dword_28898C0 )
      v30 = (unsigned int *)(v32 - 4);
          v31 = __ldrex(v30);
        while ( __strex(v31 - 1, v30) );
        v31 = (*v30)--;
      if ( v31 <= 0 )
        j_j_j_j__ZdlPv_9(v21);
}


void __fastcall EntityLegacySaveConverter::convertSkeleton(EntityLegacySaveConverter *this, Entity *a2, const CompoundTag *a3)
{
  Entity *v3; // r5@1
  Entity *v4; // r6@1
  int v5; // r5@1
  void *v6; // r0@1
  void *v7; // r0@5
  unsigned int *v8; // r2@6
  signed int v9; // r1@8
  unsigned int *v10; // r2@17
  signed int v11; // r1@19
  int v12; // [sp+0h] [bp-28h]@10
  int v13; // [sp+4h] [bp-24h]@5
  int v14; // [sp+8h] [bp-20h]@15
  int v15; // [sp+10h] [bp-18h]@1

  v3 = a2;
  v4 = this;
  sub_21E94B4((void **)&v15, "SkeletonType");
  v5 = CompoundTag::getByte((int)v3, (const void **)&v15);
  v6 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
  {
    v10 = (unsigned int *)(v15 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
    }
    else
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  }
  Entity::setVariant(v4, v5);
  if ( !v5 )
    EntityTypeToString((void **)&v14, 0x110B22u, 1);
    Entity::setBaseDefinition((int)v4, (int **)&v14, 1, 0);
    v7 = (void *)(v14 - 12);
    if ( (int *)(v14 - 12) == &dword_28898C0 )
      return;
    v8 = (unsigned int *)(v14 - 4);
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
      goto LABEL_30;
    goto LABEL_29;
  if ( v5 == 1 )
    EntityTypeToString((void **)&v12, 0x110B30u, 1);
    Entity::setBaseDefinition((int)v4, (int **)&v12, 1, 0);
    v7 = (void *)(v12 - 12);
    if ( (int *)(v12 - 12) == &dword_28898C0 )
    v8 = (unsigned int *)(v12 - 4);
  if ( v5 == 2 )
    EntityTypeToString((void **)&v13, 0x110B2Eu, 1);
    Entity::setBaseDefinition((int)v4, (int **)&v13, 1, 0);
    v7 = (void *)(v13 - 12);
    if ( (int *)(v13 - 12) != &dword_28898C0 )
      v8 = (unsigned int *)(v13 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v9 = __ldrex(v8);
        while ( __strex(v9 - 1, v8) );
        goto LABEL_30;
      }
LABEL_29:
      v9 = (*v8)--;
LABEL_30:
      if ( v9 <= 0 )
        j_j_j_j__ZdlPv_9(v7);
}


void __fastcall EntityLegacySaveConverter::convertSlime(EntityLegacySaveConverter *this, Entity *a2, const CompoundTag *a3)
{
  Entity *v3; // r5@1
  EntityLegacySaveConverter *v4; // r6@1
  int v5; // r5@1
  void *v6; // r0@1
  void *v7; // r0@4
  unsigned int *v8; // r2@5
  signed int v9; // r1@7
  unsigned int *v10; // r2@16
  signed int v11; // r1@18
  int v12; // [sp+8h] [bp-30h]@14
  int v13; // [sp+10h] [bp-28h]@9
  int v14; // [sp+18h] [bp-20h]@4
  int v15; // [sp+20h] [bp-18h]@1

  v3 = a2;
  v4 = this;
  sub_21E94B4((void **)&v15, "Size");
  v5 = CompoundTag::getByte((int)v3, (const void **)&v15);
  v6 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
  {
    v10 = (unsigned int *)(v15 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
    }
    else
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  }
  if ( v5 == 2 )
    sub_21E94B4((void **)&v13, "minecraft:slime_medium");
    Entity::addDefinitionGroup((int)v4, (int **)&v13);
    v7 = (void *)(v13 - 12);
    if ( (int *)(v13 - 12) == &dword_28898C0 )
      return;
    v8 = (unsigned int *)(v13 - 4);
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
      goto LABEL_29;
  else if ( v5 == 4 )
    sub_21E94B4((void **)&v14, "minecraft:slime_large");
    Entity::addDefinitionGroup((int)v4, (int **)&v14);
    v7 = (void *)(v14 - 12);
    if ( (int *)(v14 - 12) == &dword_28898C0 )
    v8 = (unsigned int *)(v14 - 4);
  else
    sub_21E94B4((void **)&v12, "minecraft:slime_small");
    Entity::addDefinitionGroup((int)v4, (int **)&v12);
    v7 = (void *)(v12 - 12);
    if ( (int *)(v12 - 12) == &dword_28898C0 )
    v8 = (unsigned int *)(v12 - 4);
  v9 = (*v8)--;
LABEL_29:
  if ( v9 <= 0 )
    j_j_j_j__ZdlPv_9(v7);
}


void __fastcall EntityLegacySaveConverter::convertSpider(EntityLegacySaveConverter *this, Entity *a2, const CompoundTag *a3)
{
  Entity *v3; // r5@1
  EntityLegacySaveConverter *v4; // r6@1
  signed int v5; // r5@1
  void *v6; // r0@1
  void *v7; // r0@3
  unsigned int *v8; // r2@4
  signed int v9; // r1@6
  unsigned int *v10; // r2@10
  signed int v11; // r1@12
  int v12; // [sp+8h] [bp-28h]@3
  int v13; // [sp+10h] [bp-20h]@8
  int v14; // [sp+18h] [bp-18h]@1

  v3 = a2;
  v4 = this;
  sub_21E94B4((void **)&v14, "LinksTag");
  v5 = CompoundTag::contains((int)v3, (const void **)&v14);
  v6 = (void *)(v14 - 12);
  if ( (int *)(v14 - 12) != &dword_28898C0 )
  {
    v10 = (unsigned int *)(v14 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
    }
    else
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  }
  if ( v5 )
    sub_21E94B4((void **)&v12, "minecraft:spider_jockey");
    Entity::addDefinitionGroup((int)v4, (int **)&v12);
    v7 = (void *)(v12 - 12);
    if ( (int *)(v12 - 12) == &dword_28898C0 )
      return;
    v8 = (unsigned int *)(v12 - 4);
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
      goto LABEL_23;
  else
    sub_21E94B4((void **)&v13, "minecraft:spider_neutral");
    Entity::addDefinitionGroup((int)v4, (int **)&v13);
    v7 = (void *)(v13 - 12);
    if ( (int *)(v13 - 12) == &dword_28898C0 )
    v8 = (unsigned int *)(v13 - 4);
  v9 = (*v8)--;
LABEL_23:
  if ( v9 <= 0 )
    j_j_j_j__ZdlPv_9(v7);
}


void __fastcall EntityLegacySaveConverter::convertPig(EntityLegacySaveConverter *this, Entity *a2, const CompoundTag *a3)
{
  Entity *v3; // r5@1
  Entity *v4; // r4@1
  int v5; // r6@1
  void *v6; // r0@1
  void *v7; // r0@3
  unsigned int *v8; // r2@4
  signed int v9; // r1@6
  void *v10; // r0@10
  unsigned int *v11; // r2@11
  signed int v12; // r1@13
  unsigned int *v13; // r2@18
  signed int v14; // r1@20
  int v15; // [sp+8h] [bp-38h]@16
  int v16; // [sp+10h] [bp-30h]@10
  int v17; // [sp+18h] [bp-28h]@3
  int v18; // [sp+20h] [bp-20h]@8
  int v19; // [sp+28h] [bp-18h]@1

  v3 = a2;
  v4 = this;
  sub_21E94B4((void **)&v19, "Age");
  v5 = CompoundTag::getInt((int)v3, (const void **)&v19);
  v6 = (void *)(v19 - 12);
  if ( (int *)(v19 - 12) != &dword_28898C0 )
  {
    v13 = (unsigned int *)(v19 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
    }
    else
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  }
  if ( v5 > -1 )
    sub_21E94B4((void **)&v17, "minecraft:pig_adult");
    Entity::addDefinitionGroup((int)v4, (int **)&v17);
    v7 = (void *)(v17 - 12);
    if ( (int *)(v17 - 12) == &dword_28898C0 )
      goto LABEL_9;
    v8 = (unsigned int *)(v17 - 4);
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
      goto LABEL_31;
LABEL_30:
    v9 = (*v8)--;
    goto LABEL_31;
  sub_21E94B4((void **)&v18, "minecraft:pig_baby");
  Entity::addDefinitionGroup((int)v4, (int **)&v18);
  v7 = (void *)(v18 - 12);
  if ( (int *)(v18 - 12) == &dword_28898C0 )
    goto LABEL_9;
  v8 = (unsigned int *)(v18 - 4);
  if ( !&pthread_create )
    goto LABEL_30;
  __dmb();
  do
    v9 = __ldrex(v8);
  while ( __strex(v9 - 1, v8) );
LABEL_31:
  if ( v9 <= 0 )
    j_j_j_j__ZdlPv_9(v7);
LABEL_9:
  if ( Entity::hasSaddle(v4) == 1 )
    sub_21E94B4((void **)&v16, "minecraft:pig_saddled");
    Entity::addDefinitionGroup((int)v4, (int **)&v16);
    v10 = (void *)(v16 - 12);
    if ( (int *)(v16 - 12) == &dword_28898C0 )
      return;
    v11 = (unsigned int *)(v16 - 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      goto LABEL_39;
LABEL_38:
    v12 = (*v11)--;
LABEL_39:
    if ( v12 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
    return;
  if ( v5 >= 0 )
    sub_21E94B4((void **)&v15, "minecraft:pig_unsaddled");
    Entity::addDefinitionGroup((int)v4, (int **)&v15);
    v10 = (void *)(v15 - 12);
    if ( (int *)(v15 - 12) != &dword_28898C0 )
      v11 = (unsigned int *)(v15 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v12 = __ldrex(v11);
        while ( __strex(v12 - 1, v11) );
        goto LABEL_39;
      }
      goto LABEL_38;
}


void __fastcall EntityLegacySaveConverter::genericConvert(EntityLegacySaveConverter *this, Entity *a2, const CompoundTag *a3)
{
  Entity *v3; // r5@1
  EntityLegacySaveConverter *v4; // r7@1
  __int64 v5; // kr00_8@1
  void *v6; // r0@1
  int *v7; // r0@3
  void *v8; // r0@5
  unsigned int *v9; // r2@7
  signed int v10; // r1@9
  unsigned int *v11; // r2@11
  signed int v12; // r1@13
  int v13; // [sp+4h] [bp-34h]@3
  int v14; // [sp+Ch] [bp-2Ch]@1

  v3 = a2;
  v4 = this;
  sub_21E94B4((void **)&v14, "LeasherID");
  v5 = CompoundTag::getInt64((int)v3, (const void **)&v14);
  v6 = (void *)(v14 - 12);
  if ( (int *)(v14 - 12) != &dword_28898C0 )
  {
    v9 = (unsigned int *)(v14 - 4);
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
      j_j_j_j__ZdlPv_9(v6);
  }
  if ( v5 )
    v7 = sub_21E8AF4(&v13, (int *)(*((_DWORD *)v4 + 12) + 32));
    sub_21E7408((const void **)v7, "_leashed", 8u);
    if ( !Entity::hasDefinitionGroup((int)v4, (int **)&v13) )
      Entity::addDefinitionGroup((int)v4, (int **)&v13);
    v8 = (void *)(v13 - 12);
    if ( (int *)(v13 - 12) != &dword_28898C0 )
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
        j_j_j_j__ZdlPv_9(v8);
}


void __fastcall EntityLegacySaveConverter::convertIronGolem(EntityLegacySaveConverter *this, Entity *a2, const CompoundTag *a3)
{
  Entity *v3; // r5@1
  EntityLegacySaveConverter *v4; // r6@1
  _BOOL4 v5; // r5@1
  void *v6; // r0@1
  void *v7; // r0@3
  unsigned int *v8; // r2@4
  signed int v9; // r1@6
  unsigned int *v10; // r2@10
  signed int v11; // r1@12
  int v12; // [sp+8h] [bp-28h]@8
  int v13; // [sp+10h] [bp-20h]@3
  int v14; // [sp+18h] [bp-18h]@1

  v3 = a2;
  v4 = this;
  sub_21E94B4((void **)&v14, "PlayerCreated");
  v5 = CompoundTag::getBoolean((int)v3, (const void **)&v14);
  v6 = (void *)(v14 - 12);
  if ( (int *)(v14 - 12) != &dword_28898C0 )
  {
    v10 = (unsigned int *)(v14 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
    }
    else
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  }
  if ( v5 == 1 )
    sub_21E94B4((void **)&v13, "minecraft:player_created");
    Entity::addDefinitionGroup((int)v4, (int **)&v13);
    v7 = (void *)(v13 - 12);
    if ( (int *)(v13 - 12) == &dword_28898C0 )
      return;
    v8 = (unsigned int *)(v13 - 4);
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
      goto LABEL_23;
  else
    sub_21E94B4((void **)&v12, "minecraft:village_created");
    Entity::addDefinitionGroup((int)v4, (int **)&v12);
    v7 = (void *)(v12 - 12);
    if ( (int *)(v12 - 12) == &dword_28898C0 )
    v8 = (unsigned int *)(v12 - 4);
  v9 = (*v8)--;
LABEL_23:
  if ( v9 <= 0 )
    j_j_j_j__ZdlPv_9(v7);
}


void __fastcall EntityLegacySaveConverter::convertMinecartTNT(EntityLegacySaveConverter *this, Entity *a2, const CompoundTag *a3)
{
  EntityLegacySaveConverter *v3; // r4@1
  void *v4; // r0@1
  unsigned int *v5; // r2@3
  signed int v6; // r1@5
  int v7; // [sp+4h] [bp-1Ch]@1

  v3 = this;
  sub_21E94B4((void **)&v7, "minecraft:inactive");
  Entity::addDefinitionGroup((int)v3, (int **)&v7);
  v4 = (void *)(v7 - 12);
  if ( (int *)(v7 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v7 - 4);
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
      j_j_j_j__ZdlPv_9(v4);
  }
}


void __fastcall EntityLegacySaveConverter::convertMinecartHopper(EntityLegacySaveConverter *this, Entity *a2, const CompoundTag *a3)
{
  EntityLegacySaveConverter *v3; // r4@1
  void *v4; // r0@1
  unsigned int *v5; // r2@3
  signed int v6; // r1@5
  int v7; // [sp+4h] [bp-1Ch]@1

  v3 = this;
  sub_21E94B4((void **)&v7, "minecraft:hopper_active");
  Entity::addDefinitionGroup((int)v3, (int **)&v7);
  v4 = (void *)(v7 - 12);
  if ( (int *)(v7 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v7 - 4);
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
      j_j_j_j__ZdlPv_9(v4);
  }
}


void __fastcall EntityLegacySaveConverter::convertSheep(EntityLegacySaveConverter *this, Entity *a2, const CompoundTag *a3)
{
  Entity *v3; // r5@1
  EntityLegacySaveConverter *v4; // r6@1
  int v5; // r5@1
  void *v6; // r0@1
  void *v7; // r0@3
  unsigned int *v8; // r2@4
  signed int v9; // r1@6
  void *v10; // r0@9
  void *v11; // r0@11
  unsigned int *v12; // r2@13
  signed int v13; // r1@15
  unsigned int *v14; // r2@17
  signed int v15; // r1@19
  unsigned int *v16; // r2@29
  signed int v17; // r1@31
  int v18; // [sp+8h] [bp-38h]@11
  int v19; // [sp+10h] [bp-30h]@9
  int v20; // [sp+18h] [bp-28h]@3
  int v21; // [sp+20h] [bp-20h]@8
  int v22; // [sp+28h] [bp-18h]@1

  v3 = a2;
  v4 = this;
  sub_21E94B4((void **)&v22, "Age");
  v5 = CompoundTag::getInt((int)v3, (const void **)&v22);
  v6 = (void *)(v22 - 12);
  if ( (int *)(v22 - 12) != &dword_28898C0 )
  {
    v12 = (unsigned int *)(v22 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
    }
    else
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  }
  if ( v5 > -1 )
    sub_21E94B4((void **)&v20, "minecraft:sheep_adult");
    Entity::addDefinitionGroup((int)v4, (int **)&v20);
    v7 = (void *)(v20 - 12);
    if ( (int *)(v20 - 12) == &dword_28898C0 )
      goto LABEL_9;
    v8 = (unsigned int *)(v20 - 4);
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
      goto LABEL_38;
LABEL_37:
    v9 = (*v8)--;
    goto LABEL_38;
  sub_21E94B4((void **)&v21, "minecraft:sheep_baby");
  Entity::addDefinitionGroup((int)v4, (int **)&v21);
  v7 = (void *)(v21 - 12);
  if ( (int *)(v21 - 12) == &dword_28898C0 )
    goto LABEL_9;
  v8 = (unsigned int *)(v21 - 4);
  if ( !&pthread_create )
    goto LABEL_37;
  __dmb();
  do
    v9 = __ldrex(v8);
  while ( __strex(v9 - 1, v8) );
LABEL_38:
  if ( v9 <= 0 )
    j_j_j_j__ZdlPv_9(v7);
LABEL_9:
  sub_21E94B4((void **)&v19, "minecraft:sheep_dyeable");
  Entity::addDefinitionGroup((int)v4, (int **)&v19);
  v10 = (void *)(v19 - 12);
  if ( (int *)(v19 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v19 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  if ( Entity::getStatusFlag((int)v4, 29) == 1 )
    sub_21E94B4((void **)&v18, "minecraft:sheep_sheared");
    Entity::addDefinitionGroup((int)v4, (int **)&v18);
    v11 = (void *)(v18 - 12);
    if ( (int *)(v18 - 12) != &dword_28898C0 )
      v16 = (unsigned int *)(v18 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v17 = __ldrex(v16);
        while ( __strex(v17 - 1, v16) );
      }
      else
        v17 = (*v16)--;
      if ( v17 <= 0 )
        j_j_j_j__ZdlPv_9(v11);
}


int __fastcall EntityLegacySaveConverter::convertHorse(EntityLegacySaveConverter *this, Entity *a2, const CompoundTag *a3)
{
  Entity *v3; // r7@1
  EntityLegacySaveConverter *v4; // r8@1
  unsigned int v5; // r10@1
  void *v6; // r0@1
  int v7; // r9@2
  void *v8; // r0@2
  unsigned __int16 v9; // r11@3
  void *v10; // r0@3
  _BOOL4 v11; // r6@4
  void *v12; // r0@4
  unsigned int v13; // r5@5
  void *v14; // r0@5
  int v15; // r4@6
  void *v16; // r0@6
  int v17; // r7@7
  void *v18; // r0@7
  unsigned int v19; // r10@8
  AttributeInstance *v20; // r0@8
  void *v21; // r0@9
  void *v22; // r0@11
  unsigned int *v23; // r2@12
  signed int v24; // r1@14
  void *v25; // r0@16
  void *v26; // r0@18
  unsigned int *v27; // r2@19
  signed int v28; // r1@21
  void *v29; // r0@23
  unsigned int *v30; // r2@24
  signed int v31; // r1@26
  void *v32; // r0@28
  void *v33; // r0@34
  void *v34; // r0@36
  unsigned int *v35; // r2@37
  signed int v36; // r1@39
  void *v37; // r0@43
  unsigned int *v38; // r2@44
  signed int v39; // r1@46
  void *v40; // r0@50
  unsigned int *v41; // r2@51
  signed int v42; // r1@53
  unsigned int *v43; // r2@80
  signed int v44; // r1@82
  unsigned int *v45; // r2@84
  signed int v46; // r1@86
  unsigned int *v47; // r2@88
  signed int v48; // r1@90
  unsigned int *v49; // r2@92
  signed int v50; // r1@94
  unsigned int *v51; // r2@96
  signed int v52; // r1@98
  unsigned int *v53; // r2@100
  signed int v54; // r1@102
  unsigned int *v55; // r2@104
  signed int v56; // r1@106
  unsigned int *v57; // r2@136
  signed int v58; // r1@138
  unsigned int *v59; // r2@140
  signed int v60; // r1@142
  unsigned int *v61; // r2@144
  signed int v62; // r1@146
  unsigned int *v63; // r2@148
  signed int v64; // r1@150
  unsigned int v65; // r4@199
  signed int v66; // r7@199
  void *v67; // r5@203
  int v68; // r0@203
  unsigned int v69; // r7@203
  signed int v70; // r5@206
  void *v71; // r0@206
  ListTag *v72; // r7@208
  void *v73; // r0@208
  void **v74; // r6@210
  signed int v75; // r10@210
  unsigned int *v76; // r2@211
  signed int v77; // r1@213
  const CompoundTag *v78; // r11@219
  int v79; // r9@219
  void *v80; // r0@219
  int v81; // r8@222
  void (__fastcall *v82)(int, int, char *); // ST18_4@222
  signed int v83; // r0@230
  signed int v84; // r3@230
  int v85; // r4@232
  void *v86; // r0@232
  const CompoundTag *v87; // r0@234
  void *v88; // r0@234
  bool v89; // zf@235
  signed int v90; // r0@248
  signed int v91; // r3@248
  int v92; // r4@250
  void *v93; // r0@250
  const CompoundTag *v94; // r0@252
  void *v95; // r0@252
  bool v96; // zf@253
  signed int v97; // r0@258
  void *v98; // r0@270
  unsigned int *v100; // r2@272
  signed int v101; // r1@274
  unsigned int *v102; // r2@276
  signed int v103; // r1@278
  unsigned int *v104; // r2@280
  signed int v105; // r1@282
  unsigned int *v106; // r2@288
  signed int v107; // r1@290
  unsigned int *v108; // r2@296
  signed int v109; // r1@298
  unsigned int *v110; // r2@300
  signed int v111; // r1@302
  unsigned int *v112; // r2@308
  signed int v113; // r1@310
  signed int v114; // [sp+10h] [bp-250h]@205
  EntityLegacySaveConverter *v115; // [sp+14h] [bp-24Ch]@1
  int v116; // [sp+20h] [bp-240h]@7
  int v117; // [sp+24h] [bp-23Ch]@203
  int v118; // [sp+2Ch] [bp-234h]@270
  int v119; // [sp+34h] [bp-22Ch]@252
  int v120; // [sp+38h] [bp-228h]@252
  int v121; // [sp+40h] [bp-220h]@267
  char v122; // [sp+46h] [bp-21Ah]@257
  char v123; // [sp+47h] [bp-219h]@253
  void *v124; // [sp+5Ch] [bp-204h]@265
  void *v125; // [sp+6Ch] [bp-1F4h]@263
  int v126; // [sp+84h] [bp-1DCh]@248
  int v127; // [sp+8Ch] [bp-1D4h]@234
  int v128; // [sp+90h] [bp-1D0h]@234
  int v129; // [sp+98h] [bp-1C8h]@246
  char v130; // [sp+9Eh] [bp-1C2h]@239
  char v131; // [sp+9Fh] [bp-1C1h]@235
  void *v132; // [sp+B4h] [bp-1ACh]@244
  void *v133; // [sp+C4h] [bp-19Ch]@242
  int v134; // [sp+DCh] [bp-184h]@230
  char v135; // [sp+E0h] [bp-180h]@222
  int v136; // [sp+E8h] [bp-178h]@226
  void *v137; // [sp+104h] [bp-15Ch]@224
  void *ptr; // [sp+114h] [bp-14Ch]@222
  int v139; // [sp+12Ch] [bp-134h]@210
  int v140; // [sp+134h] [bp-12Ch]@208
  int v141; // [sp+13Ch] [bp-124h]@206
  int v142; // [sp+144h] [bp-11Ch]@29
  int v143; // [sp+148h] [bp-118h]@28
  int v144; // [sp+14Ch] [bp-114h]@23
  int v145; // [sp+154h] [bp-10Ch]@191
  int v146; // [sp+15Ch] [bp-104h]@186
  int v147; // [sp+164h] [bp-FCh]@69
  int v148; // [sp+16Ch] [bp-F4h]@50
  int v149; // [sp+170h] [bp-F0h]@49
  int v150; // [sp+174h] [bp-ECh]@49
  int v151; // [sp+180h] [bp-E0h]@48
  int v152; // [sp+188h] [bp-D8h]@18
  int v153; // [sp+18Ch] [bp-D4h]@16
  int v154; // [sp+194h] [bp-CCh]@177
  int v155; // [sp+19Ch] [bp-C4h]@172
  int v156; // [sp+1A4h] [bp-BCh]@63
  int v157; // [sp+1ACh] [bp-B4h]@43
  int v158; // [sp+1B0h] [bp-B0h]@42
  int v159; // [sp+1B4h] [bp-ACh]@42
  int v160; // [sp+1C0h] [bp-A0h]@41
  int v161; // [sp+1C8h] [bp-98h]@11
  int v162; // [sp+1CCh] [bp-94h]@9
  int v163; // [sp+1D4h] [bp-8Ch]@75
  int v164; // [sp+1DCh] [bp-84h]@57
  int v165; // [sp+1E0h] [bp-80h]@56
  int v166; // [sp+1E4h] [bp-7Ch]@56
  int v167; // [sp+1F0h] [bp-70h]@55
  int v168; // [sp+1F8h] [bp-68h]@36
  int v169; // [sp+1FCh] [bp-64h]@34
  int v170; // [sp+204h] [bp-5Ch]@7
  int v171; // [sp+20Ch] [bp-54h]@6
  int v172; // [sp+214h] [bp-4Ch]@5
  int v173; // [sp+21Ch] [bp-44h]@4
  int v174; // [sp+224h] [bp-3Ch]@3
  int v175; // [sp+22Ch] [bp-34h]@2
  int v176; // [sp+234h] [bp-2Ch]@1

  v3 = a2;
  v4 = this;
  v115 = this;
  sub_21E94B4((void **)&v176, "Age");
  v5 = CompoundTag::getInt((int)v3, (const void **)&v176);
  v6 = (void *)(v176 - 12);
  if ( (int *)(v176 - 12) != &dword_28898C0 )
  {
    v43 = (unsigned int *)(v176 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v44 = __ldrex(v43);
      while ( __strex(v44 - 1, v43) );
    }
    else
      v44 = (*v43)--;
    if ( v44 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  }
  sub_21E94B4((void **)&v175, "Type");
  v7 = CompoundTag::getInt((int)v3, (const void **)&v175);
  v8 = (void *)(v175 - 12);
  if ( (int *)(v175 - 12) != &dword_28898C0 )
    v45 = (unsigned int *)(v175 - 4);
        v46 = __ldrex(v45);
      while ( __strex(v46 - 1, v45) );
      v46 = (*v45)--;
    if ( v46 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  sub_21E94B4((void **)&v174, "Variant");
  v9 = CompoundTag::getInt((int)v3, (const void **)&v174);
  v10 = (void *)(v174 - 12);
  if ( (int *)(v174 - 12) != &dword_28898C0 )
    v47 = (unsigned int *)(v174 - 4);
        v48 = __ldrex(v47);
      while ( __strex(v48 - 1, v47) );
      v48 = (*v47)--;
    if ( v48 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  sub_21E94B4((void **)&v173, "ChestedHorse");
  v11 = CompoundTag::getBoolean((int)v3, (const void **)&v173);
  v12 = (void *)(v173 - 12);
  if ( (int *)(v173 - 12) != &dword_28898C0 )
    v49 = (unsigned int *)(v173 - 4);
        v50 = __ldrex(v49);
      while ( __strex(v50 - 1, v49) );
      v50 = (*v49)--;
    if ( v50 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  sub_21E94B4((void **)&v172, "CurrentHealth");
  v13 = CompoundTag::getFloat((int)v3, (const void **)&v172);
  v14 = (void *)(v172 - 12);
  if ( (int *)(v172 - 12) != &dword_28898C0 )
    v51 = (unsigned int *)(v172 - 4);
        v52 = __ldrex(v51);
      while ( __strex(v52 - 1, v51) );
      v52 = (*v51)--;
    if ( v52 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  sub_21E94B4((void **)&v171, "MaxHealth");
  v15 = CompoundTag::getFloat((int)v3, (const void **)&v171);
  v16 = (void *)(v171 - 12);
  if ( (int *)(v171 - 12) != &dword_28898C0 )
    v53 = (unsigned int *)(v171 - 4);
        v54 = __ldrex(v53);
      while ( __strex(v54 - 1, v53) );
      v54 = (*v53)--;
    if ( v54 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  sub_21E94B4((void **)&v170, "Saddled");
  v116 = (int)v3;
  v17 = CompoundTag::getBoolean((int)v3, (const void **)&v170);
  v18 = (void *)(v170 - 12);
  if ( (int *)(v170 - 12) != &dword_28898C0 )
    v55 = (unsigned int *)(v170 - 4);
        v56 = __ldrex(v55);
      while ( __strex(v56 - 1, v55) );
      v56 = (*v55)--;
    if ( v56 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  v19 = v5 >> 31;
  Entity::setSaddle(v4, v17);
  v20 = (AttributeInstance *)(*(int (__fastcall **)(EntityLegacySaveConverter *, void *))(*(_DWORD *)v4 + 1000))(
                               v4,
                               &SharedAttributes::HEALTH);
  AttributeInstance::setRange(v20, 0.0, *(float *)&v13, *(float *)&v15);
  Entity::setMarkVariant(v4, v9 >> 8);
  (*(void (__fastcall **)(EntityLegacySaveConverter *, int))(*(_DWORD *)v4 + 1196))(v4, v7);
  switch ( v7 )
    case 1:
      EntityTypeToString((void **)&v162, 0x205318u, 1);
      Entity::setBaseDefinition((int)v4, (int **)&v162, 1, 0);
      v21 = (void *)(v162 - 12);
      if ( (int *)(v162 - 12) != &dword_28898C0 )
      {
        v57 = (unsigned int *)(v162 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v58 = __ldrex(v57);
          while ( __strex(v58 - 1, v57) );
        }
        else
          v58 = (*v57)--;
        if ( v58 <= 0 )
          j_j_j_j__ZdlPv_9(v21);
      }
      if ( v19 )
        sub_21E94B4((void **)&v161, "minecraft:donkey_baby");
        Entity::addDefinitionGroup((int)v4, (int **)&v161);
        v22 = (void *)(v161 - 12);
        if ( (int *)(v161 - 12) == &dword_28898C0 )
          goto LABEL_42;
        v23 = (unsigned int *)(v161 - 4);
            v24 = __ldrex(v23);
          while ( __strex(v24 - 1, v23) );
          goto LABEL_332;
      else
        sub_21E94B4((void **)&v160, "minecraft:donkey_adult");
        Entity::addDefinitionGroup((int)v4, (int **)&v160);
        v22 = (void *)(v160 - 12);
        if ( (int *)(v160 - 12) == &dword_28898C0 )
        v23 = (unsigned int *)(v160 - 4);
LABEL_332:
          if ( v24 <= 0 )
            j_j_j_j__ZdlPv_9(v22);
LABEL_42:
          Entity::getOwnerId((Entity *)&v158, (int)v4);
          if ( (v158 & v159) == -1 )
          {
            if ( v19 )
              goto LABEL_171;
            sub_21E94B4((void **)&v156, "minecraft:donkey_wild");
            Entity::addDefinitionGroup((int)v4, (int **)&v156);
            v37 = (void *)(v156 - 12);
            if ( (int *)(v156 - 12) == &dword_28898C0 )
            v38 = (unsigned int *)(v156 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v39 = __ldrex(v38);
              while ( __strex(v39 - 1, v38) );
LABEL_169:
              if ( v39 <= 0 )
                j_j_j_j__ZdlPv_9(v37);
LABEL_171:
              if ( v11 == 1 )
              {
                sub_21E94B4((void **)&v155, "minecraft:donkey_chested");
                Entity::addDefinitionGroup((int)v4, (int **)&v155);
                v29 = (void *)(v155 - 12);
                if ( (int *)(v155 - 12) != &dword_28898C0 )
                {
                  v30 = (unsigned int *)(v155 - 4);
                  if ( !&pthread_create )
                    goto LABEL_196;
                  __dmb();
                  do
                    v31 = __ldrex(v30);
                  while ( __strex(v31 - 1, v30) );
                  goto LABEL_197;
                }
              }
              else
                sub_21E94B4((void **)&v154, "minecraft:donkey_unchested");
                Entity::addDefinitionGroup((int)v4, (int **)&v154);
                v29 = (void *)(v154 - 12);
                if ( (int *)(v154 - 12) != &dword_28898C0 )
                  v30 = (unsigned int *)(v154 - 4);
              goto LABEL_199;
            }
          }
          else
            sub_21E94B4((void **)&v157, "minecraft:donkey_tamed");
            Entity::addDefinitionGroup((int)v4, (int **)&v157);
            v37 = (void *)(v157 - 12);
            if ( (int *)(v157 - 12) == &dword_28898C0 )
            v38 = (unsigned int *)(v157 - 4);
              goto LABEL_169;
          v39 = (*v38)--;
          goto LABEL_169;
      v24 = (*v23)--;
      goto LABEL_332;
    case 2:
      EntityTypeToString((void **)&v153, 0x205319u, 1);
      Entity::setBaseDefinition((int)v4, (int **)&v153, 1, 0);
      v25 = (void *)(v153 - 12);
      if ( (int *)(v153 - 12) != &dword_28898C0 )
        v59 = (unsigned int *)(v153 - 4);
            v60 = __ldrex(v59);
          while ( __strex(v60 - 1, v59) );
          v60 = (*v59)--;
        if ( v60 <= 0 )
          j_j_j_j__ZdlPv_9(v25);
        sub_21E94B4((void **)&v152, "minecraft:mule_baby");
        Entity::addDefinitionGroup((int)v4, (int **)&v152);
        v26 = (void *)(v152 - 12);
        if ( (int *)(v152 - 12) == &dword_28898C0 )
          goto LABEL_49;
        v27 = (unsigned int *)(v152 - 4);
            v28 = __ldrex(v27);
          while ( __strex(v28 - 1, v27) );
          goto LABEL_340;
LABEL_339:
        v28 = (*v27)--;
        goto LABEL_340;
      sub_21E94B4((void **)&v151, "minecraft:mule_adult");
      Entity::addDefinitionGroup((int)v4, (int **)&v151);
      v26 = (void *)(v151 - 12);
      if ( (int *)(v151 - 12) == &dword_28898C0 )
        goto LABEL_49;
      v27 = (unsigned int *)(v151 - 4);
      if ( !&pthread_create )
        goto LABEL_339;
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
LABEL_340:
      if ( v28 <= 0 )
        j_j_j_j__ZdlPv_9(v26);
LABEL_49:
      Entity::getOwnerId((Entity *)&v149, (int)v4);
      if ( (v149 & v150) != -1 )
        sub_21E94B4((void **)&v148, "minecraft:mule_tamed");
        Entity::addDefinitionGroup((int)v4, (int **)&v148);
        v40 = (void *)(v148 - 12);
        if ( (int *)(v148 - 12) == &dword_28898C0 )
          goto LABEL_185;
        v41 = (unsigned int *)(v148 - 4);
            v42 = __ldrex(v41);
          while ( __strex(v42 - 1, v41) );
          goto LABEL_183;
LABEL_182:
        v42 = (*v41)--;
        goto LABEL_183;
        goto LABEL_185;
      sub_21E94B4((void **)&v147, "minecraft:mule_wild");
      Entity::addDefinitionGroup((int)v4, (int **)&v147);
      v40 = (void *)(v147 - 12);
      if ( (int *)(v147 - 12) == &dword_28898C0 )
      v41 = (unsigned int *)(v147 - 4);
        goto LABEL_182;
        v42 = __ldrex(v41);
      while ( __strex(v42 - 1, v41) );
LABEL_183:
      if ( v42 <= 0 )
        j_j_j_j__ZdlPv_9(v40);
LABEL_185:
      if ( v11 == 1 )
        sub_21E94B4((void **)&v146, "minecraft:mule_chested");
        Entity::addDefinitionGroup((int)v4, (int **)&v146);
        v29 = (void *)(v146 - 12);
        if ( (int *)(v146 - 12) != &dword_28898C0 )
          v30 = (unsigned int *)(v146 - 4);
          if ( !&pthread_create )
            goto LABEL_196;
            v31 = __ldrex(v30);
          while ( __strex(v31 - 1, v30) );
          goto LABEL_197;
        sub_21E94B4((void **)&v145, "minecraft:mule_unchested");
        Entity::addDefinitionGroup((int)v4, (int **)&v145);
        v29 = (void *)(v145 - 12);
        if ( (int *)(v145 - 12) != &dword_28898C0 )
          v30 = (unsigned int *)(v145 - 4);
LABEL_199:
      v65 = 1;
      v66 = 15;
      if ( v13 >= 2 )
        v66 = 0;
      if ( !v7 )
        v65 = 2;
      v67 = operator new(0x18u);
      ContainerComponent::ContainerComponent((int)v67, (int)v4);
      v68 = *((_DWORD *)v4 + 782);
      v117 = v66;
      v69 = v66 + v65;
      *((_DWORD *)v4 + 782) = v67;
      if ( v68 )
        (*(void (**)(void))(*(_DWORD *)v68 + 8))();
        v67 = (void *)*((_DWORD *)v4 + 782);
      v114 = v69;
      ContainerComponent::rebuildContainer((int)v67, 12, v69, 0, 0);
        sub_21E94B4((void **)&v141, "ChestItems");
        v70 = CompoundTag::contains(v116, (const void **)&v141);
        v71 = (void *)(v141 - 12);
        if ( (int *)(v141 - 12) != &dword_28898C0 )
          v104 = (unsigned int *)(v141 - 4);
          if ( &pthread_create )
            __dmb();
            do
              v105 = __ldrex(v104);
            while ( __strex(v105 - 1, v104) );
            v105 = (*v104)--;
          if ( v105 <= 0 )
            j_j_j_j__ZdlPv_9(v71);
        if ( v70 == 1 )
          sub_21E94B4((void **)&v140, "ChestItems");
          v72 = (ListTag *)CompoundTag::getList(v116, (const void **)&v140);
          v73 = (void *)(v140 - 12);
          if ( (int *)(v140 - 12) != &dword_28898C0 )
            v112 = (unsigned int *)(v140 - 4);
                v113 = __ldrex(v112);
              while ( __strex(v113 - 1, v112) );
            else
              v113 = (*v112)--;
            if ( v113 <= 0 )
              j_j_j_j__ZdlPv_9(v73);
          if ( ListTag::size(v72) >= 1 )
            v74 = (void **)&v139;
            v75 = 0;
              v78 = (const CompoundTag *)ListTag::getCompound(v72, v75);
              sub_21E94B4(v74, "Slot");
              v79 = CompoundTag::getByte((int)v78, (const void **)v74);
              v80 = (void *)(v139 - 12);
              if ( (int *)(v139 - 12) != &dword_28898C0 )
                v76 = (unsigned int *)(v139 - 4);
                if ( &pthread_create )
                    v77 = __ldrex(v76);
                  while ( __strex(v77 - 1, v76) );
                else
                  v77 = (*v76)--;
                if ( v77 <= 0 )
                  j_j_j_j__ZdlPv_9(v80);
              if ( v79 > v65 && v79 < v117 )
                v81 = *(_DWORD *)(*((_DWORD *)v4 + 782) + 4);
                v82 = *(void (__fastcall **)(int, int, char *))(*(_DWORD *)v81 + 32);
                ItemInstance::fromTag((ItemInstance *)&v135, v78);
                v82(v81, v79, &v135);
                if ( ptr )
                  operator delete(ptr);
                v4 = v115;
                if ( v137 )
                  operator delete(v137);
                v74 = (void **)&v139;
                if ( v136 )
                  (*(void (**)(void))(*(_DWORD *)v136 + 4))();
                v136 = 0;
              ++v75;
            while ( v75 < ListTag::size(v72) );
      sub_21E94B4((void **)&v134, "SaddleItem");
      v83 = CompoundTag::contains(v116, (const void **)&v134);
      v84 = 0;
      if ( v114 > 0 )
        v84 = 1;
      v85 = v84 & v83;
      v86 = (void *)(v134 - 12);
      if ( (int *)(v134 - 12) != &dword_28898C0 )
        v100 = (unsigned int *)(v134 - 4);
            v101 = __ldrex(v100);
          while ( __strex(v101 - 1, v100) );
          v101 = (*v100)--;
        if ( v101 <= 0 )
          j_j_j_j__ZdlPv_9(v86);
      if ( v85 == 1 )
        sub_21E94B4((void **)&v127, "SaddleItem");
        v87 = (const CompoundTag *)CompoundTag::getCompound(v116, (const void **)&v127);
        ItemInstance::fromTag((ItemInstance *)&v128, v87);
        v88 = (void *)(v127 - 12);
        if ( (int *)(v127 - 12) != &dword_28898C0 )
          v106 = (unsigned int *)(v127 - 4);
              v107 = __ldrex(v106);
            while ( __strex(v107 - 1, v106) );
            v107 = (*v106)--;
          if ( v107 <= 0 )
            j_j_j_j__ZdlPv_9(v88);
        v89 = v131 == 0;
        if ( v131 )
          v89 = v128 == 0;
        if ( !v89
          && !ItemInstance::isNull((ItemInstance *)&v128)
          && v130
          && ItemInstance::getId((ItemInstance *)&v128) == *(_WORD *)(Item::mSaddle + 18) )
          (*(void (**)(void))(**(_DWORD **)(*((_DWORD *)v4 + 782) + 4) + 32))();
        if ( v133 )
          operator delete(v133);
        if ( v132 )
          operator delete(v132);
        if ( v129 )
          (*(void (**)(void))(*(_DWORD *)v129 + 4))();
      sub_21E94B4((void **)&v126, "ArmorItem");
      v90 = CompoundTag::contains(v116, (const void **)&v126);
      v91 = 0;
      if ( v114 > 1 )
        v91 = 1;
      v92 = v91 & v90;
      v93 = (void *)(v126 - 12);
      if ( (int *)(v126 - 12) != &dword_28898C0 )
        v102 = (unsigned int *)(v126 - 4);
            v103 = __ldrex(v102);
          while ( __strex(v103 - 1, v102) );
          v103 = (*v102)--;
        if ( v103 <= 0 )
          j_j_j_j__ZdlPv_9(v93);
      if ( v92 == 1 )
        sub_21E94B4((void **)&v119, "ArmorItem");
        v94 = (const CompoundTag *)CompoundTag::getCompound(v116, (const void **)&v119);
        ItemInstance::fromTag((ItemInstance *)&v120, v94);
        v95 = (void *)(v119 - 12);
        if ( (int *)(v119 - 12) != &dword_28898C0 )
          v108 = (unsigned int *)(v119 - 4);
              v109 = __ldrex(v108);
            while ( __strex(v109 - 1, v108) );
            v109 = (*v108)--;
          if ( v109 <= 0 )
            j_j_j_j__ZdlPv_9(v95);
        v96 = v123 == 0;
        if ( v123 )
          v96 = v120 == 0;
        if ( !v96 && !ItemInstance::isNull((ItemInstance *)&v120) )
          if ( v122 )
            v97 = ItemInstance::getId((ItemInstance *)&v120);
            if ( v97 == *(_WORD *)(Item::mIronHorseArmor + 18)
              || v97 == *(_WORD *)(Item::mGoldHorseArmor + 18)
              || v97 == *(_WORD *)(Item::mDiamondHorseArmor + 18)
              || v97 == *(_WORD *)(Item::mLeatherHorseArmor + 18) )
              (*(void (**)(void))(**(_DWORD **)(*((_DWORD *)v4 + 782) + 4) + 32))();
        if ( v125 )
          operator delete(v125);
        if ( v124 )
          operator delete(v124);
        if ( v121 )
          (*(void (**)(void))(*(_DWORD *)v121 + 4))();
      if ( Entity::hasSaddle(v4) == 1 )
        sub_21E94B4((void **)&v118, "minecraft:horse_saddled");
        Entity::addDefinitionGroup((int)v4, (int **)&v118);
        v98 = (void *)(v118 - 12);
        if ( (int *)(v118 - 12) != &dword_28898C0 )
          v110 = (unsigned int *)(v118 - 4);
              v111 = __ldrex(v110);
            while ( __strex(v111 - 1, v110) );
            v111 = (*v110)--;
          if ( v111 <= 0 )
            j_j_j_j__ZdlPv_9(v98);
      return (*(int (__fastcall **)(EntityLegacySaveConverter *))(*(_DWORD *)v4 + 1036))(v4);
    case 3:
      EntityTypeToString((void **)&v144, 0x215B1Bu, 1);
      Entity::setBaseDefinition((int)v4, (int **)&v144, 1, 0);
      v29 = (void *)(v144 - 12);
      if ( (int *)(v144 - 12) != &dword_28898C0 )
        v30 = (unsigned int *)(v144 - 4);
        if ( !&pthread_create )
          goto LABEL_196;
        __dmb();
        do
          v31 = __ldrex(v30);
        while ( __strex(v31 - 1, v30) );
        goto LABEL_197;
      goto LABEL_199;
    case 4:
      EntityTypeToString((void **)&v143, 0x215B1Au, 1);
      Entity::setBaseDefinition((int)v4, (int **)&v143, 1, 0);
      v32 = (void *)(v143 - 12);
      if ( (int *)(v143 - 12) != &dword_28898C0 )
        v61 = (unsigned int *)(v143 - 4);
            v62 = __ldrex(v61);
          while ( __strex(v62 - 1, v61) );
          v62 = (*v61)--;
        if ( v62 <= 0 )
          j_j_j_j__ZdlPv_9(v32);
      sub_21E94B4((void **)&v142, "minecraft:skeleton_horse_adult");
      Entity::addDefinitionGroup((int)v4, (int **)&v142);
      v29 = (void *)(v142 - 12);
      if ( (int *)(v142 - 12) != &dword_28898C0 )
        v30 = (unsigned int *)(v142 - 4);
    default:
      EntityTypeToString((void **)&v169, 0x205317u, 1);
      Entity::setBaseDefinition((int)v4, (int **)&v169, 1, 0);
      v33 = (void *)(v169 - 12);
      if ( (int *)(v169 - 12) != &dword_28898C0 )
        v63 = (unsigned int *)(v169 - 4);
            v64 = __ldrex(v63);
          while ( __strex(v64 - 1, v63) );
          v64 = (*v63)--;
        if ( v64 <= 0 )
          j_j_j_j__ZdlPv_9(v33);
        sub_21E94B4((void **)&v168, "minecraft:horse_baby");
        Entity::addDefinitionGroup((int)v4, (int **)&v168);
        v34 = (void *)(v168 - 12);
        if ( (int *)(v168 - 12) == &dword_28898C0 )
          goto LABEL_56;
        v35 = (unsigned int *)(v168 - 4);
            v36 = __ldrex(v35);
          while ( __strex(v36 - 1, v35) );
          goto LABEL_348;
        sub_21E94B4((void **)&v167, "minecraft:horse_adult");
        Entity::addDefinitionGroup((int)v4, (int **)&v167);
        v34 = (void *)(v167 - 12);
        if ( (int *)(v167 - 12) == &dword_28898C0 )
        v35 = (unsigned int *)(v167 - 4);
LABEL_348:
          if ( v36 <= 0 )
            j_j_j_j__ZdlPv_9(v34);
LABEL_56:
          Entity::getOwnerId((Entity *)&v165, (int)v4);
          if ( (v165 & v166) == -1 )
            sub_21E94B4((void **)&v163, "minecraft:horse_wild");
            Entity::addDefinitionGroup((int)v4, (int **)&v163);
            v29 = (void *)(v163 - 12);
            if ( (int *)(v163 - 12) == &dword_28898C0 )
            v30 = (unsigned int *)(v163 - 4);
                v31 = __ldrex(v30);
              while ( __strex(v31 - 1, v30) );
LABEL_197:
              if ( v31 <= 0 )
                j_j_j_j__ZdlPv_9(v29);
            sub_21E94B4((void **)&v164, "minecraft:horse_tamed");
            Entity::addDefinitionGroup((int)v4, (int **)&v164);
            v29 = (void *)(v164 - 12);
            if ( (int *)(v164 - 12) == &dword_28898C0 )
            v30 = (unsigned int *)(v164 - 4);
              goto LABEL_197;
LABEL_196:
          v31 = (*v30)--;
      v36 = (*v35)--;
      goto LABEL_348;
}


void __fastcall EntityLegacySaveConverter::convertEnderman(EntityLegacySaveConverter *this, Entity *a2, const CompoundTag *a3)
{
  EntityLegacySaveConverter *v3; // r4@1
  void *v4; // r0@2
  unsigned int *v5; // r2@3
  signed int v6; // r1@5
  int v7; // [sp+4h] [bp-2Ch]@2
  int v8; // [sp+Ch] [bp-24h]@7
  int v9; // [sp+10h] [bp-20h]@1
  int v10; // [sp+14h] [bp-1Ch]@1

  v3 = this;
  Entity::getTargetId((Entity *)&v9, (int)this);
  if ( (v9 & v10) == -1 )
  {
    sub_21E94B4((void **)&v8, "minecraft:enderman_calm");
    Entity::addDefinitionGroup((int)v3, (int **)&v8);
    v4 = (void *)(v8 - 12);
    if ( (int *)(v8 - 12) == &dword_28898C0 )
      return;
    v5 = (unsigned int *)(v8 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v6 = __ldrex(v5);
      while ( __strex(v6 - 1, v5) );
      goto LABEL_14;
    }
  }
  else
    sub_21E94B4((void **)&v7, "minecraft:enderman_angry");
    Entity::addDefinitionGroup((int)v3, (int **)&v7);
    v4 = (void *)(v7 - 12);
    if ( (int *)(v7 - 12) == &dword_28898C0 )
    v5 = (unsigned int *)(v7 - 4);
  v6 = (*v5)--;
LABEL_14:
  if ( v6 <= 0 )
    j_j_j_j__ZdlPv_9(v4);
}


void __fastcall EntityLegacySaveConverter::convertOcelot(EntityLegacySaveConverter *this, Entity *a2, const CompoundTag *a3)
{
  Entity *v3; // r6@1
  EntityLegacySaveConverter *v4; // r4@1
  int v5; // r7@1
  void *v6; // r0@1
  int v7; // r6@2
  void *v8; // r0@2
  void *v9; // r0@4
  unsigned int *v10; // r2@5
  signed int v11; // r1@7
  void *v12; // r0@11
  unsigned int *v13; // r2@12
  signed int v14; // r1@14
  void *v15; // r0@20
  unsigned int *v16; // r2@21
  signed int v17; // r1@23
  unsigned int *v18; // r2@32
  signed int v19; // r1@34
  unsigned int *v20; // r2@36
  signed int v21; // r1@38
  int v22; // [sp+4h] [bp-64h]@30
  int v23; // [sp+Ch] [bp-5Ch]@25
  int v24; // [sp+14h] [bp-54h]@20
  int v25; // [sp+1Ch] [bp-4Ch]@16
  int v26; // [sp+24h] [bp-44h]@11
  int v27; // [sp+28h] [bp-40h]@10
  int v28; // [sp+2Ch] [bp-3Ch]@10
  int v29; // [sp+34h] [bp-34h]@4
  int v30; // [sp+3Ch] [bp-2Ch]@9
  int v31; // [sp+44h] [bp-24h]@2
  int v32; // [sp+4Ch] [bp-1Ch]@1

  v3 = a2;
  v4 = this;
  sub_21E94B4((void **)&v32, "CatType");
  v5 = CompoundTag::getByte((int)v3, (const void **)&v32);
  v6 = (void *)(v32 - 12);
  if ( (int *)(v32 - 12) != &dword_28898C0 )
  {
    v18 = (unsigned int *)(v32 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
    }
    else
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  }
  sub_21E94B4((void **)&v31, "Age");
  v7 = CompoundTag::getInt((int)v3, (const void **)&v31);
  v8 = (void *)(v31 - 12);
  if ( (int *)(v31 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v31 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  if ( v7 > -1 )
    sub_21E94B4((void **)&v29, "minecraft:ocelot_adult");
    Entity::addDefinitionGroup((int)v4, (int **)&v29);
    v9 = (void *)(v29 - 12);
    if ( (int *)(v29 - 12) == &dword_28898C0 )
      goto LABEL_10;
    v10 = (unsigned int *)(v29 - 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      goto LABEL_53;
LABEL_52:
    v11 = (*v10)--;
    goto LABEL_53;
  sub_21E94B4((void **)&v30, "minecraft:ocelot_baby");
  Entity::addDefinitionGroup((int)v4, (int **)&v30);
  v9 = (void *)(v30 - 12);
  if ( (int *)(v30 - 12) == &dword_28898C0 )
    goto LABEL_10;
  v10 = (unsigned int *)(v30 - 4);
  if ( !&pthread_create )
    goto LABEL_52;
  __dmb();
  do
    v11 = __ldrex(v10);
  while ( __strex(v11 - 1, v10) );
LABEL_53:
  if ( v11 <= 0 )
    j_j_j_j__ZdlPv_9(v9);
LABEL_10:
  Entity::getOwnerId((Entity *)&v27, (int)v4);
  if ( (v27 & v28) != -1 )
    sub_21E94B4((void **)&v26, "minecraft:ocelot_tame");
    Entity::addDefinitionGroup((int)v4, (int **)&v26);
    v12 = (void *)(v26 - 12);
    if ( (int *)(v26 - 12) == &dword_28898C0 )
      goto LABEL_17;
    v13 = (unsigned int *)(v26 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      goto LABEL_61;
LABEL_60:
    v14 = (*v13)--;
    goto LABEL_61;
  sub_21E94B4((void **)&v25, "minecraft:ocelot_wild");
  Entity::addDefinitionGroup((int)v4, (int **)&v25);
  v12 = (void *)(v25 - 12);
  if ( (int *)(v25 - 12) == &dword_28898C0 )
    goto LABEL_17;
  v13 = (unsigned int *)(v25 - 4);
    goto LABEL_60;
    v14 = __ldrex(v13);
  while ( __strex(v14 - 1, v13) );
LABEL_61:
  if ( v14 <= 0 )
    j_j_j_j__ZdlPv_9(v12);
LABEL_17:
  if ( v5 == 3 )
    sub_21E94B4((void **)&v22, "minecraft:ocelot_siamese");
    Entity::addDefinitionGroup((int)v4, (int **)&v22);
    v15 = (void *)(v22 - 12);
    if ( (int *)(v22 - 12) == &dword_28898C0 )
      return;
    v16 = (unsigned int *)(v22 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      goto LABEL_69;
    goto LABEL_68;
  if ( v5 == 2 )
    sub_21E94B4((void **)&v23, "minecraft:ocelot_tabby");
    Entity::addDefinitionGroup((int)v4, (int **)&v23);
    v15 = (void *)(v23 - 12);
    if ( (int *)(v23 - 12) == &dword_28898C0 )
    v16 = (unsigned int *)(v23 - 4);
  if ( v5 == 1 )
    sub_21E94B4((void **)&v24, "minecraft:ocelot_tuxedo");
    Entity::addDefinitionGroup((int)v4, (int **)&v24);
    v15 = (void *)(v24 - 12);
    if ( (int *)(v24 - 12) != &dword_28898C0 )
      v16 = (unsigned int *)(v24 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v17 = __ldrex(v16);
        while ( __strex(v17 - 1, v16) );
        goto LABEL_69;
      }
LABEL_68:
      v17 = (*v16)--;
LABEL_69:
      if ( v17 <= 0 )
        j_j_j_j__ZdlPv_9(v15);
}
