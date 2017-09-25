

EntityDefinition *__fastcall EntityDefinition::getAttributesDoc(EntityDefinition *this, DocumentationSystem *a2)
{
  EntityDefinition *v2; // r4@1
  double v3; // r0@1
  void *v4; // r0@1
  unsigned int *v6; // r2@3
  signed int v7; // r1@5
  int v8; // [sp+4h] [bp-CB4h]@1
  char v9; // [sp+8h] [bp-CB0h]@1
  int v10; // [sp+230h] [bp-A88h]@2
  int v11; // [sp+244h] [bp-A74h]@2
  int v12; // [sp+5D0h] [bp-6E8h]@2

  v2 = this;
  sub_21E94B4((void **)&v8, (const char *)&unk_257BC67);
  HIDWORD(v3) = &v8;
  LODWORD(v3) = &v9;
  EntityDefinition::EntityDefinition(v3);
  v4 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v8 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v7 = __ldrex(v6);
      while ( __strex(v7 - 1, v6) );
    }
    else
      v7 = (*v6)--;
    if ( v7 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  Description::registerDescription((Description *)&v10, v2);
  Description::registerDescription((Description *)&v11, v2);
  Description::registerDescription((Description *)&v12, v2);
  return EntityDefinition::~EntityDefinition((EntityDefinition *)&v9);
}


int __fastcall EntityDefinition::EntityDefinition(double a1)
{
  double v1; // r4@1
  double v2; // r0@1
  unsigned int v3; // r0@1
  int v4; // r6@3
  int v5; // r0@4
  int v6; // r0@4

  v1 = a1;
  EntityDefinitionDescriptor::EntityDefinitionDescriptor(a1);
  *(_DWORD *)(LODWORD(v1) + 492) = &off_271ED2C;
  sub_21E8AF4((int *)(LODWORD(v1) + 496), (int *)HIDWORD(v1));
  *(_DWORD *)(LODWORD(v1) + 532) = 0;
  *(_DWORD *)(LODWORD(v1) + 536) = 0;
  *(_DWORD *)(LODWORD(v1) + 516) = 0;
  *(_DWORD *)(LODWORD(v1) + 520) = 0;
  *(_DWORD *)(LODWORD(v1) + 508) = 0;
  *(_DWORD *)(LODWORD(v1) + 512) = 0;
  *(_DWORD *)(LODWORD(v1) + 500) = 0;
  *(_DWORD *)(LODWORD(v1) + 504) = 0;
  *(_DWORD *)(LODWORD(v1) + 540) = 1065353216;
  *(_DWORD *)(LODWORD(v1) + 544) = 0;
  LODWORD(v2) = LODWORD(v1) + 540;
  v3 = sub_21E6254(v2);
  *(_DWORD *)(LODWORD(v1) + 528) = v3;
  if ( v3 == 1 )
  {
    HIDWORD(v1) = LODWORD(v1) + 548;
    *(_DWORD *)(LODWORD(v1) + 548) = 0;
  }
  else
    if ( v3 >= 0x40000000 )
      sub_21E57F4();
    v4 = 4 * v3;
    HIDWORD(v1) = operator new(4 * v3);
    _aeabi_memclr4(HIDWORD(v1), v4);
  *(_DWORD *)(LODWORD(v1) + 524) = HIDWORD(v1);
  *(_DWORD *)(LODWORD(v1) + 552) = &off_271E720;
  v5 = LODWORD(v1) + 564;
  *(_DWORD *)(LODWORD(v1) + 556) = 0;
  *(_DWORD *)(LODWORD(v1) + 560) = 0;
  *(_DWORD *)v5 = &unk_28898CC;
  *(_DWORD *)(v5 + 4) = 0;
  *(_DWORD *)(v5 + 8) = &off_271E744;
  *(_DWORD *)(LODWORD(v1) + 592) = 0;
  *(_DWORD *)(LODWORD(v1) + 596) = 0;
  *(_DWORD *)(LODWORD(v1) + 584) = 0;
  *(_DWORD *)(LODWORD(v1) + 588) = 0;
  *(_DWORD *)(LODWORD(v1) + 576) = 0;
  *(_DWORD *)(LODWORD(v1) + 580) = 0;
  *(_DWORD *)(LODWORD(v1) + 600) = &off_271ED54;
  *(_DWORD *)(LODWORD(v1) + 612) = &off_271ED78;
  *(_DWORD *)(LODWORD(v1) + 616) = &off_271ED9C;
  *(_DWORD *)(LODWORD(v1) + 620) = &off_271EDC0;
  *(_DWORD *)(LODWORD(v1) + 624) = &off_271EDE4;
  *(_DWORD *)(LODWORD(v1) + 628) = &off_271EE08;
  *(_DWORD *)(LODWORD(v1) + 632) = 0;
  *(_DWORD *)(LODWORD(v1) + 636) = 0;
  *(_DWORD *)(LODWORD(v1) + 640) = &off_271EE2C;
  *(_DWORD *)(LODWORD(v1) + 648) = &off_271EE50;
  *(_DWORD *)(LODWORD(v1) + 656) = &off_271EE74;
  *(_DWORD *)(LODWORD(v1) + 660) = &unk_28898CC;
  *(_DWORD *)(LODWORD(v1) + 664) = &off_271EE98;
  *(_DWORD *)(LODWORD(v1) + 668) = &unk_28898CC;
  *(_DWORD *)(LODWORD(v1) + 672) = &off_271EEBC;
  *(_DWORD *)(LODWORD(v1) + 676) = &off_271EEE0;
  *(_DWORD *)(LODWORD(v1) + 684) = 0;
  *(_DWORD *)(LODWORD(v1) + 688) = 0;
  *(_DWORD *)(LODWORD(v1) + 692) = 0;
  *(_DWORD *)(LODWORD(v1) + 696) = 0;
  *(_DWORD *)(LODWORD(v1) + 700) = 0;
  *(_DWORD *)(LODWORD(v1) + 692) = LODWORD(v1) + 684;
  *(_DWORD *)(LODWORD(v1) + 696) = LODWORD(v1) + 684;
  *(_DWORD *)(LODWORD(v1) + 704) = &off_271EF04;
  *(_DWORD *)(LODWORD(v1) + 708) = &off_271EF28;
  *(_DWORD *)(LODWORD(v1) + 716) = &off_271EF4C;
  *(_DWORD *)(LODWORD(v1) + 724) = &off_271EF70;
  *(_DWORD *)(LODWORD(v1) + 732) = &off_271EF94;
  *(_DWORD *)(LODWORD(v1) + 736) = &off_271EFB8;
  *(_DWORD *)(LODWORD(v1) + 744) = &off_271EFDC;
  *(_DWORD *)(LODWORD(v1) + 748) = &off_271F000;
  *(_DWORD *)(LODWORD(v1) + 752) = &off_271F024;
  *(_DWORD *)(LODWORD(v1) + 756) = &off_271F048;
  *(_DWORD *)(LODWORD(v1) + 760) = &off_271F06C;
  *(_DWORD *)(LODWORD(v1) + 764) = &off_271F090;
  *(_DWORD *)(LODWORD(v1) + 768) = &off_271F0B4;
  *(_DWORD *)(LODWORD(v1) + 772) = &off_271F0D8;
  *(_DWORD *)(LODWORD(v1) + 776) = &off_271F0FC;
  *(_DWORD *)(LODWORD(v1) + 780) = &off_271F120;
  *(_DWORD *)(LODWORD(v1) + 788) = 0;
  *(_DWORD *)(LODWORD(v1) + 792) = 0;
  *(_DWORD *)(LODWORD(v1) + 796) = 0;
  *(_DWORD *)(LODWORD(v1) + 800) = 0;
  *(_DWORD *)(LODWORD(v1) + 804) = 0;
  *(_DWORD *)(LODWORD(v1) + 796) = LODWORD(v1) + 788;
  *(_DWORD *)(LODWORD(v1) + 800) = LODWORD(v1) + 788;
  *(_DWORD *)(LODWORD(v1) + 808) = &off_271F144;
  *(_DWORD *)(LODWORD(v1) + 812) = &unk_28898CC;
  *(_DWORD *)(LODWORD(v1) + 816) = &off_271F168;
  *(_DWORD *)(LODWORD(v1) + 824) = &off_271F18C;
  *(_DWORD *)(LODWORD(v1) + 832) = &off_271F1B0;
  *(_DWORD *)(LODWORD(v1) + 840) = &off_271F21C;
  *(_DWORD *)(LODWORD(v1) + 848) = &off_271F240;
  *(_DWORD *)(LODWORD(v1) + 852) = &off_271F264;
  *(_DWORD *)(LODWORD(v1) + 896) = 0;
  *(_DWORD *)(LODWORD(v1) + 888) = 0;
  *(_DWORD *)(LODWORD(v1) + 892) = 0;
  *(_DWORD *)(LODWORD(v1) + 880) = 0;
  *(_DWORD *)(LODWORD(v1) + 884) = 0;
  *(_DWORD *)(LODWORD(v1) + 872) = 0;
  *(_DWORD *)(LODWORD(v1) + 876) = 0;
  *(_DWORD *)(LODWORD(v1) + 864) = &unk_28898CC;
  *(_DWORD *)(LODWORD(v1) + 868) = &off_26F1930;
  *(_DWORD *)(LODWORD(v1) + 856) = &off_271F4A4;
  *(_DWORD *)(LODWORD(v1) + 860) = &unk_28898CC;
  *(_DWORD *)(LODWORD(v1) + 940) = 0;
  *(_DWORD *)(LODWORD(v1) + 932) = 0;
  *(_DWORD *)(LODWORD(v1) + 936) = 0;
  *(_DWORD *)(LODWORD(v1) + 924) = 0;
  *(_DWORD *)(LODWORD(v1) + 928) = 0;
  *(_DWORD *)(LODWORD(v1) + 916) = 0;
  *(_DWORD *)(LODWORD(v1) + 920) = 0;
  *(_DWORD *)(LODWORD(v1) + 908) = &unk_28898CC;
  *(_DWORD *)(LODWORD(v1) + 912) = &off_26F1930;
  *(_DWORD *)(LODWORD(v1) + 900) = &off_271F4C8;
  *(_DWORD *)(LODWORD(v1) + 904) = &unk_28898CC;
  *(_DWORD *)(LODWORD(v1) + 984) = 0;
  *(_DWORD *)(LODWORD(v1) + 976) = 0;
  *(_DWORD *)(LODWORD(v1) + 980) = 0;
  *(_DWORD *)(LODWORD(v1) + 968) = 0;
  *(_DWORD *)(LODWORD(v1) + 972) = 0;
  *(_DWORD *)(LODWORD(v1) + 960) = 0;
  *(_DWORD *)(LODWORD(v1) + 964) = 0;
  *(_DWORD *)(LODWORD(v1) + 952) = &unk_28898CC;
  *(_DWORD *)(LODWORD(v1) + 956) = &off_26F1930;
  *(_DWORD *)(LODWORD(v1) + 944) = &off_271F4EC;
  *(_DWORD *)(LODWORD(v1) + 948) = &unk_28898CC;
  *(_DWORD *)(LODWORD(v1) + 1028) = 0;
  *(_DWORD *)(LODWORD(v1) + 1020) = 0;
  *(_DWORD *)(LODWORD(v1) + 1024) = 0;
  *(_DWORD *)(LODWORD(v1) + 1012) = 0;
  *(_DWORD *)(LODWORD(v1) + 1016) = 0;
  *(_DWORD *)(LODWORD(v1) + 1004) = 0;
  *(_DWORD *)(LODWORD(v1) + 1008) = 0;
  *(_DWORD *)(LODWORD(v1) + 996) = &unk_28898CC;
  *(_DWORD *)(LODWORD(v1) + 1000) = &off_26F1930;
  *(_DWORD *)(LODWORD(v1) + 988) = &off_271F510;
  *(_DWORD *)(LODWORD(v1) + 992) = &unk_28898CC;
  *(_DWORD *)(LODWORD(v1) + 1036) = &unk_28898CC;
  *(_DWORD *)(LODWORD(v1) + 1040) = &unk_28898CC;
  *(_DWORD *)(LODWORD(v1) + 1072) = 0;
  *(_DWORD *)(LODWORD(v1) + 1068) = 0;
  *(_DWORD *)(LODWORD(v1) + 1064) = 0;
  *(_DWORD *)(LODWORD(v1) + 1060) = 0;
  *(_DWORD *)(LODWORD(v1) + 1056) = 0;
  *(_DWORD *)(LODWORD(v1) + 1052) = 0;
  *(_DWORD *)(LODWORD(v1) + 1048) = 0;
  *(_DWORD *)(LODWORD(v1) + 1044) = &off_26F1930;
  *(_DWORD *)(LODWORD(v1) + 1032) = &off_271F534;
  *(_DWORD *)(LODWORD(v1) + 1080) = &unk_28898CC;
  *(_DWORD *)(LODWORD(v1) + 1084) = &unk_28898CC;
  *(_DWORD *)(LODWORD(v1) + 1116) = 0;
  *(_DWORD *)(LODWORD(v1) + 1112) = 0;
  *(_DWORD *)(LODWORD(v1) + 1108) = 0;
  *(_DWORD *)(LODWORD(v1) + 1104) = 0;
  *(_DWORD *)(LODWORD(v1) + 1100) = 0;
  *(_DWORD *)(LODWORD(v1) + 1096) = 0;
  *(_DWORD *)(LODWORD(v1) + 1092) = 0;
  *(_DWORD *)(LODWORD(v1) + 1088) = &off_26F1930;
  *(_DWORD *)(LODWORD(v1) + 1076) = &off_271F558;
  *(_DWORD *)(LODWORD(v1) + 1124) = &unk_28898CC;
  *(_DWORD *)(LODWORD(v1) + 1128) = &unk_28898CC;
  *(_DWORD *)(LODWORD(v1) + 1160) = 0;
  *(_DWORD *)(LODWORD(v1) + 1156) = 0;
  *(_DWORD *)(LODWORD(v1) + 1152) = 0;
  *(_DWORD *)(LODWORD(v1) + 1148) = 0;
  *(_DWORD *)(LODWORD(v1) + 1144) = 0;
  *(_DWORD *)(LODWORD(v1) + 1140) = 0;
  *(_DWORD *)(LODWORD(v1) + 1136) = 0;
  *(_DWORD *)(LODWORD(v1) + 1132) = &off_26F1930;
  *(_DWORD *)(LODWORD(v1) + 1120) = &off_271F57C;
  *(_DWORD *)(LODWORD(v1) + 1168) = &unk_28898CC;
  *(_DWORD *)(LODWORD(v1) + 1172) = &unk_28898CC;
  *(_DWORD *)(LODWORD(v1) + 1204) = 0;
  *(_DWORD *)(LODWORD(v1) + 1200) = 0;
  *(_DWORD *)(LODWORD(v1) + 1196) = 0;
  *(_DWORD *)(LODWORD(v1) + 1192) = 0;
  *(_DWORD *)(LODWORD(v1) + 1188) = 0;
  *(_DWORD *)(LODWORD(v1) + 1184) = 0;
  *(_DWORD *)(LODWORD(v1) + 1180) = 0;
  *(_DWORD *)(LODWORD(v1) + 1176) = &off_26F1930;
  *(_DWORD *)(LODWORD(v1) + 1164) = &off_271F5A0;
  *(_DWORD *)(LODWORD(v1) + 1212) = &unk_28898CC;
  *(_DWORD *)(LODWORD(v1) + 1216) = &unk_28898CC;
  *(_DWORD *)(LODWORD(v1) + 1248) = 0;
  *(_DWORD *)(LODWORD(v1) + 1244) = 0;
  *(_DWORD *)(LODWORD(v1) + 1240) = 0;
  *(_DWORD *)(LODWORD(v1) + 1236) = 0;
  *(_DWORD *)(LODWORD(v1) + 1232) = 0;
  *(_DWORD *)(LODWORD(v1) + 1228) = 0;
  *(_DWORD *)(LODWORD(v1) + 1224) = 0;
  *(_DWORD *)(LODWORD(v1) + 1220) = &off_26F1930;
  *(_DWORD *)(LODWORD(v1) + 1208) = &off_271F5C4;
  *(_DWORD *)(LODWORD(v1) + 1252) = &off_271E6D8;
  EntityDefinitionIdentifier::EntityDefinitionIdentifier((void **)(LODWORD(v1) + 1256), 256);
  *(_DWORD *)(LODWORD(v1) + 1268) = &off_271E6FC;
  *(_DWORD *)(LODWORD(v1) + 1272) = 1150681088;
  *(_DWORD *)(LODWORD(v1) + 1276) = 0;
  *(_DWORD *)(LODWORD(v1) + 1280) = 0;
  *(_DWORD *)(LODWORD(v1) + 1284) = 0;
  *(_DWORD *)(LODWORD(v1) + 1288) = &unk_28898CC;
  *(_DWORD *)(LODWORD(v1) + 1292) = &unk_28898CC;
  *(_DWORD *)(LODWORD(v1) + 1324) = 0;
  *(_DWORD *)(LODWORD(v1) + 1320) = 0;
  *(_DWORD *)(LODWORD(v1) + 1316) = 0;
  *(_DWORD *)(LODWORD(v1) + 1312) = 0;
  *(_DWORD *)(LODWORD(v1) + 1308) = 0;
  *(_DWORD *)(LODWORD(v1) + 1304) = 0;
  *(_DWORD *)(LODWORD(v1) + 1300) = 0;
  *(_DWORD *)(LODWORD(v1) + 1296) = &off_26F1930;
  *(_DWORD *)(LODWORD(v1) + 1328) = &off_26F0DF8;
  *(_DWORD *)(LODWORD(v1) + 1332) = 25;
  *(_BYTE *)(LODWORD(v1) + 1336) = 0;
  *(_DWORD *)(LODWORD(v1) + 1340) = 20;
  *(_DWORD *)(LODWORD(v1) + 1344) = &unk_28898CC;
  *(_DWORD *)(LODWORD(v1) + 1348) = &unk_28898CC;
  *(_DWORD *)(LODWORD(v1) + 1380) = 0;
  *(_DWORD *)(LODWORD(v1) + 1376) = 0;
  *(_DWORD *)(LODWORD(v1) + 1372) = 0;
  *(_DWORD *)(LODWORD(v1) + 1368) = 0;
  *(_DWORD *)(LODWORD(v1) + 1364) = 0;
  *(_DWORD *)(LODWORD(v1) + 1360) = 0;
  *(_DWORD *)(LODWORD(v1) + 1356) = 0;
  *(_DWORD *)(LODWORD(v1) + 1352) = &off_26F1930;
  *(_DWORD *)(LODWORD(v1) + 1384) = &off_26F0E1C;
  *(_DWORD *)(LODWORD(v1) + 1388) = 0;
  *(_DWORD *)(LODWORD(v1) + 1392) = 0;
  *(_DWORD *)(LODWORD(v1) + 1396) = 0;
  *(_DWORD *)(LODWORD(v1) + 1400) = 1077936128;
  *(_DWORD *)(LODWORD(v1) + 1404) = 1065353216;
  *(_DWORD *)(LODWORD(v1) + 1408) = 1067030938;
  *(_DWORD *)(LODWORD(v1) + 1412) = &off_271E7B0;
  *(_DWORD *)(LODWORD(v1) + 1416) = 300;
  *(_DWORD *)(LODWORD(v1) + 1420) = -20;
  *(_DWORD *)(LODWORD(v1) + 1424) = 1;
  *(_BYTE *)(LODWORD(v1) + 1428) = 1;
  *(_DWORD *)(LODWORD(v1) + 1436) = 0;
  *(_DWORD *)(LODWORD(v1) + 1440) = 0;
  *(_DWORD *)(LODWORD(v1) + 1444) = 0;
  *(_DWORD *)(LODWORD(v1) + 1448) = 0;
  *(_DWORD *)(LODWORD(v1) + 1452) = 0;
  *(_DWORD *)(LODWORD(v1) + 1444) = LODWORD(v1) + 1436;
  *(_DWORD *)(LODWORD(v1) + 1448) = LODWORD(v1) + 1436;
  *(_DWORD *)(LODWORD(v1) + 1460) = 0;
  *(_DWORD *)(LODWORD(v1) + 1464) = 0;
  *(_DWORD *)(LODWORD(v1) + 1468) = 0;
  *(_DWORD *)(LODWORD(v1) + 1472) = 0;
  *(_DWORD *)(LODWORD(v1) + 1476) = 0;
  *(_DWORD *)(LODWORD(v1) + 1468) = LODWORD(v1) + 1460;
  *(_DWORD *)(LODWORD(v1) + 1472) = LODWORD(v1) + 1460;
  *(_DWORD *)(LODWORD(v1) + 1480) = &off_271E768;
  *(_BYTE *)(LODWORD(v1) + 1484) = 0;
  *(_DWORD *)(LODWORD(v1) + 1488) = 1;
  *(_DWORD *)(LODWORD(v1) + 1492) = 5;
  *(_DWORD *)(LODWORD(v1) + 1496) = &off_271E7D4;
  *(_BYTE *)(LODWORD(v1) + 1500) = 1;
  *(_DWORD *)(LODWORD(v1) + 1504) = 0;
  *(_DWORD *)(LODWORD(v1) + 1508) = 1114636288;
  *(_WORD *)(LODWORD(v1) + 1512) = 1;
  *(_DWORD *)(LODWORD(v1) + 1520) = 0;
  *(_DWORD *)(LODWORD(v1) + 1524) = 0;
  *(_DWORD *)(LODWORD(v1) + 1528) = 0;
  *(_DWORD *)(LODWORD(v1) + 1532) = 0;
  *(_DWORD *)(LODWORD(v1) + 1536) = 0;
  *(_DWORD *)(LODWORD(v1) + 1528) = LODWORD(v1) + 1520;
  *(_DWORD *)(LODWORD(v1) + 1532) = LODWORD(v1) + 1520;
  *(_DWORD *)(LODWORD(v1) + 1560) = 0;
  *(_DWORD *)(LODWORD(v1) + 1556) = 0;
  *(_DWORD *)(LODWORD(v1) + 1552) = 0;
  *(_DWORD *)(LODWORD(v1) + 1548) = 0;
  *(_DWORD *)(LODWORD(v1) + 1544) = 0;
  *(_DWORD *)(LODWORD(v1) + 1540) = 0;
  *(_DWORD *)(LODWORD(v1) + 1564) = &off_26F0E40;
  *(_DWORD *)(LODWORD(v1) + 1568) = 0;
  *(_DWORD *)(LODWORD(v1) + 1572) = 1;
  *(_BYTE *)(LODWORD(v1) + 1576) = 0;
  *(_DWORD *)(LODWORD(v1) + 1580) = &off_26F0E78;
  *(_DWORD *)(LODWORD(v1) + 1584) = 5;
  *(_DWORD *)(LODWORD(v1) + 1596) = 0;
  *(_BYTE *)(LODWORD(v1) + 1594) = 0;
  *(_WORD *)(LODWORD(v1) + 1592) = 0;
  *(_DWORD *)(LODWORD(v1) + 1588) = 0;
  *(_BYTE *)(LODWORD(v1) + 1600) = -9;
  *(_DWORD *)(LODWORD(v1) + 1604) = &off_271E7F8;
  *(_DWORD *)(LODWORD(v1) + 1608) = 0;
  *(_DWORD *)(LODWORD(v1) + 1612) = 0;
  *(_DWORD *)(LODWORD(v1) + 1616) = 0;
  *(_DWORD *)(LODWORD(v1) + 1620) = &off_271E81C;
  *(_DWORD *)(LODWORD(v1) + 1624) = 0;
  *(_DWORD *)(LODWORD(v1) + 1628) = 0;
  *(_DWORD *)(LODWORD(v1) + 1632) = 0;
  *(_DWORD *)(LODWORD(v1) + 1636) = &off_26F0F18;
  *(_DWORD *)(LODWORD(v1) + 1640) = 0;
  *(_DWORD *)(LODWORD(v1) + 1644) = 0;
  *(_DWORD *)(LODWORD(v1) + 1648) = 0;
  *(_DWORD *)(LODWORD(v1) + 1652) = &off_271E840;
  *(_DWORD *)(LODWORD(v1) + 1664) = 1077936128;
  *(_DWORD *)(LODWORD(v1) + 1668) = 2139095039;
  *(_BYTE *)(LODWORD(v1) + 1672) = 0;
  *(_BYTE *)(LODWORD(v1) + 1673) = 0;
  *(_BYTE *)(LODWORD(v1) + 1674) = 1;
  *(_BYTE *)(LODWORD(v1) + 1675) = 0;
  *(_BYTE *)(LODWORD(v1) + 1676) = 0;
  *(_DWORD *)(LODWORD(v1) + 1660) = -1082130432;
  *(_DWORD *)(LODWORD(v1) + 1656) = -1082130432;
  *(_DWORD *)(LODWORD(v1) + 1680) = &off_271EAEC;
  sub_21E94B4((void **)(LODWORD(v1) + 1684), "pathfinder");
  *(_WORD *)(LODWORD(v1) + 1688) = 256;
  *(_BYTE *)(LODWORD(v1) + 1694) = 0;
  *(_DWORD *)(LODWORD(v1) + 1690) = 0;
  *(_DWORD *)(LODWORD(v1) + 1680) = &off_271EA5C;
  *(_DWORD *)(LODWORD(v1) + 1696) = &off_271E864;
  *(_DWORD *)(LODWORD(v1) + 1700) = 0;
  *(_DWORD *)(LODWORD(v1) + 1704) = 0;
  *(_DWORD *)(LODWORD(v1) + 1708) = 0;
  *(_DWORD *)(LODWORD(v1) + 1744) = 0;
  *(_DWORD *)(LODWORD(v1) + 1740) = 0;
  *(_DWORD *)(LODWORD(v1) + 1736) = 0;
  *(_DWORD *)(LODWORD(v1) + 1732) = 0;
  *(_DWORD *)(LODWORD(v1) + 1728) = 0;
  *(_DWORD *)(LODWORD(v1) + 1724) = 0;
  *(_DWORD *)(LODWORD(v1) + 1720) = 0;
  *(_DWORD *)(LODWORD(v1) + 1716) = &off_26F1930;
  *(_DWORD *)(LODWORD(v1) + 1748) = &off_271E8AC;
  *(_DWORD *)(LODWORD(v1) + 1752) = 0;
  *(_DWORD *)(LODWORD(v1) + 1756) = 0;
  *(_DWORD *)(LODWORD(v1) + 1760) = 0;
  *(_DWORD *)(LODWORD(v1) + 1764) = &off_271E8D0;
  *(_DWORD *)(LODWORD(v1) + 1768) = 1082130432;
  *(_DWORD *)(LODWORD(v1) + 1772) = 1086324736;
  *(_DWORD *)(LODWORD(v1) + 1776) = 1092616192;
  *(_DWORD *)(LODWORD(v1) + 1780) = &unk_28898CC;
  *(_DWORD *)(LODWORD(v1) + 1784) = &unk_28898CC;
  *(_DWORD *)(LODWORD(v1) + 1816) = 0;
  *(_DWORD *)(LODWORD(v1) + 1812) = 0;
  *(_DWORD *)(LODWORD(v1) + 1808) = 0;
  *(_DWORD *)(LODWORD(v1) + 1804) = 0;
  *(_DWORD *)(LODWORD(v1) + 1800) = 0;
  *(_DWORD *)(LODWORD(v1) + 1796) = 0;
  *(_DWORD *)(LODWORD(v1) + 1792) = 0;
  *(_DWORD *)(LODWORD(v1) + 1788) = &off_26F1930;
  *(_DWORD *)(LODWORD(v1) + 1820) = &unk_28898CC;
  *(_DWORD *)(LODWORD(v1) + 1824) = &unk_28898CC;
  *(_DWORD *)(LODWORD(v1) + 1856) = 0;
  *(_DWORD *)(LODWORD(v1) + 1852) = 0;
  *(_DWORD *)(LODWORD(v1) + 1848) = 0;
  *(_DWORD *)(LODWORD(v1) + 1844) = 0;
  *(_DWORD *)(LODWORD(v1) + 1840) = 0;
  *(_DWORD *)(LODWORD(v1) + 1836) = 0;
  *(_DWORD *)(LODWORD(v1) + 1832) = 0;
  *(_DWORD *)(LODWORD(v1) + 1828) = &off_26F1930;
  *(_DWORD *)(LODWORD(v1) + 1860) = &off_271E8F4;
  *(_BYTE *)(LODWORD(v1) + 1864) = 1;
  *(_DWORD *)(LODWORD(v1) + 1868) = 1092616192;
  *(_BYTE *)(LODWORD(v1) + 1872) = 0;
  *(_DWORD *)(LODWORD(v1) + 1876) = 0;
  *(_DWORD *)(LODWORD(v1) + 1880) = 0;
  *(_DWORD *)(LODWORD(v1) + 1912) = 0;
  *(_DWORD *)(LODWORD(v1) + 1908) = 0;
  *(_DWORD *)(LODWORD(v1) + 1904) = 0;
  *(_DWORD *)(LODWORD(v1) + 1900) = 0;
  *(_DWORD *)(LODWORD(v1) + 1896) = 0;
  *(_DWORD *)(LODWORD(v1) + 1892) = 0;
  *(_DWORD *)(LODWORD(v1) + 1888) = 0;
  *(_DWORD *)(LODWORD(v1) + 1884) = &off_26F1930;
  *(_DWORD *)(LODWORD(v1) + 1916) = &unk_28898CC;
  *(_DWORD *)(LODWORD(v1) + 1920) = &unk_28898CC;
  *(_DWORD *)(LODWORD(v1) + 1952) = 0;
  *(_DWORD *)(LODWORD(v1) + 1948) = 0;
  *(_DWORD *)(LODWORD(v1) + 1944) = 0;
  *(_DWORD *)(LODWORD(v1) + 1940) = 0;
  *(_DWORD *)(LODWORD(v1) + 1936) = 0;
  *(_DWORD *)(LODWORD(v1) + 1932) = 0;
  *(_DWORD *)(LODWORD(v1) + 1928) = 0;
  *(_DWORD *)(LODWORD(v1) + 1924) = &off_26F1930;
  *(_DWORD *)(LODWORD(v1) + 1956) = &off_271E918;
  *(_DWORD *)(LODWORD(v1) + 1960) = 0;
  *(_DWORD *)(LODWORD(v1) + 1964) = 100;
  *(_DWORD *)(LODWORD(v1) + 1968) = 5;
  *(_DWORD *)(LODWORD(v1) + 1992) = 0;
  *(_DWORD *)(LODWORD(v1) + 1988) = 0;
  *(_DWORD *)(LODWORD(v1) + 1984) = 0;
  *(_DWORD *)(LODWORD(v1) + 1980) = 0;
  *(_DWORD *)(LODWORD(v1) + 1976) = 0;
  *(_DWORD *)(LODWORD(v1) + 1972) = 0;
  *(_DWORD *)(LODWORD(v1) + 1996) = &unk_28898CC;
  *(_DWORD *)(LODWORD(v1) + 2000) = &unk_28898CC;
  *(_DWORD *)(LODWORD(v1) + 2004) = &unk_28898CC;
  *(_DWORD *)(LODWORD(v1) + 2008) = &unk_28898CC;
  *(_DWORD *)(LODWORD(v1) + 2040) = 0;
  *(_DWORD *)(LODWORD(v1) + 2036) = 0;
  *(_DWORD *)(LODWORD(v1) + 2032) = 0;
  *(_DWORD *)(LODWORD(v1) + 2028) = 0;
  *(_DWORD *)(LODWORD(v1) + 2024) = 0;
  *(_DWORD *)(LODWORD(v1) + 2020) = 0;
  *(_DWORD *)(LODWORD(v1) + 2016) = 0;
  *(_DWORD *)(LODWORD(v1) + 2012) = &off_26F1930;
  *(_DWORD *)(LODWORD(v1) + 2048) = 1106247680;
  *(_DWORD *)(LODWORD(v1) + 2044) = &off_271E984;
  *(_DWORD *)(LODWORD(v1) + 2056) = 1106247680;
  *(_DWORD *)(LODWORD(v1) + 2052) = &off_271E9A8;
  *(_DWORD *)(LODWORD(v1) + 2060) = &off_271EA14;
  *(_DWORD *)(LODWORD(v1) + 2064) = 0;
  *(_DWORD *)(LODWORD(v1) + 2068) = 0;
  *(_DWORD *)(LODWORD(v1) + 2072) = 0;
  *(_DWORD *)(LODWORD(v1) + 2076) = &unk_28898CC;
  *(_DWORD *)(LODWORD(v1) + 2080) = &unk_28898CC;
  *(_DWORD *)(LODWORD(v1) + 2112) = 0;
  *(_DWORD *)(LODWORD(v1) + 2108) = 0;
  *(_DWORD *)(LODWORD(v1) + 2104) = 0;
  *(_DWORD *)(LODWORD(v1) + 2100) = 0;
  *(_DWORD *)(LODWORD(v1) + 2096) = 0;
  *(_DWORD *)(LODWORD(v1) + 2092) = 0;
  *(_DWORD *)(LODWORD(v1) + 2088) = 0;
  *(_DWORD *)(LODWORD(v1) + 2084) = &off_26F1930;
  *(_WORD *)(LODWORD(v1) + 2116) = 256;
  *(_DWORD *)(LODWORD(v1) + 2120) = &off_271EAEC;
  sub_21E94B4((void **)(LODWORD(v1) + 2124), "pathfinder");
  *(_WORD *)(LODWORD(v1) + 2128) = 256;
  *(_BYTE *)(LODWORD(v1) + 2134) = 0;
  *(_DWORD *)(LODWORD(v1) + 2130) = 0;
  *(_DWORD *)(LODWORD(v1) + 2120) = &off_271EA38;
  *(_DWORD *)(LODWORD(v1) + 2136) = &off_271EB10;
  *(_DWORD *)(LODWORD(v1) + 2140) = &unk_28898CC;
  *(_DWORD *)(LODWORD(v1) + 2144) = &unk_28898CC;
  *(_DWORD *)(LODWORD(v1) + 2176) = 0;
  *(_DWORD *)(LODWORD(v1) + 2172) = 0;
  *(_DWORD *)(LODWORD(v1) + 2168) = 0;
  *(_DWORD *)(LODWORD(v1) + 2164) = 0;
  *(_DWORD *)(LODWORD(v1) + 2160) = 0;
  *(_DWORD *)(LODWORD(v1) + 2156) = 0;
  *(_DWORD *)(LODWORD(v1) + 2152) = 0;
  *(_DWORD *)(LODWORD(v1) + 2148) = &off_26F1930;
  *(_DWORD *)(LODWORD(v1) + 2180) = &unk_28898CC;
  *(_DWORD *)(LODWORD(v1) + 2184) = &unk_28898CC;
  *(_DWORD *)(LODWORD(v1) + 2216) = 0;
  *(_DWORD *)(LODWORD(v1) + 2212) = 0;
  *(_DWORD *)(LODWORD(v1) + 2208) = 0;
  *(_DWORD *)(LODWORD(v1) + 2204) = 0;
  *(_DWORD *)(LODWORD(v1) + 2200) = 0;
  *(_DWORD *)(LODWORD(v1) + 2196) = 0;
  *(_DWORD *)(LODWORD(v1) + 2192) = 0;
  *(_DWORD *)(LODWORD(v1) + 2188) = &off_26F1930;
  *(_DWORD *)(LODWORD(v1) + 2220) = &unk_28898CC;
  *(_DWORD *)(LODWORD(v1) + 2224) = &unk_28898CC;
  *(_DWORD *)(LODWORD(v1) + 2232) = 0;
  *(_DWORD *)(LODWORD(v1) + 2236) = 0;
  *(_DWORD *)(LODWORD(v1) + 2240) = 0;
  *(_DWORD *)(LODWORD(v1) + 2244) = 0;
  *(_DWORD *)(LODWORD(v1) + 2248) = 0;
  *(_DWORD *)(LODWORD(v1) + 2252) = 0;
  *(_DWORD *)(LODWORD(v1) + 2256) = 0;
  *(_DWORD *)(LODWORD(v1) + 2228) = &off_26F1930;
  ProjectileDescription::ProjectileDescription((ProjectileDescription *)(LODWORD(v1) + 2260));
  *(_DWORD *)(LODWORD(v1) + 2408) = &off_271F288;
  *(_DWORD *)(LODWORD(v1) + 2412) = &unk_28898CC;
  *(_DWORD *)(LODWORD(v1) + 2416) = &unk_28898CC;
  *(_DWORD *)(LODWORD(v1) + 2448) = 0;
  *(_DWORD *)(LODWORD(v1) + 2444) = 0;
  *(_DWORD *)(LODWORD(v1) + 2440) = 0;
  *(_DWORD *)(LODWORD(v1) + 2436) = 0;
  *(_DWORD *)(LODWORD(v1) + 2432) = 0;
  *(_DWORD *)(LODWORD(v1) + 2428) = 0;
  *(_DWORD *)(LODWORD(v1) + 2424) = 0;
  *(_DWORD *)(LODWORD(v1) + 2420) = &off_26F1930;
  *(_DWORD *)(LODWORD(v1) + 2452) = &unk_28898CC;
  *(_DWORD *)(LODWORD(v1) + 2456) = &unk_28898CC;
  *(_DWORD *)(LODWORD(v1) + 2488) = 0;
  *(_DWORD *)(LODWORD(v1) + 2484) = 0;
  *(_DWORD *)(LODWORD(v1) + 2480) = 0;
  *(_DWORD *)(LODWORD(v1) + 2476) = 0;
  *(_DWORD *)(LODWORD(v1) + 2472) = 0;
  *(_DWORD *)(LODWORD(v1) + 2468) = 0;
  *(_DWORD *)(LODWORD(v1) + 2464) = 0;
  *(_DWORD *)(LODWORD(v1) + 2460) = &off_26F1930;
  *(_BYTE *)(LODWORD(v1) + 2492) = 0;
  *(_BYTE *)(LODWORD(v1) + 2493) = 1;
  *(_BYTE *)(LODWORD(v1) + 2494) = 0;
  *(_BYTE *)(LODWORD(v1) + 2495) = 1;
  *(_BYTE *)(LODWORD(v1) + 2496) = 0;
  *(_DWORD *)(LODWORD(v1) + 2500) = &off_271F2AC;
  *(_DWORD *)(LODWORD(v1) + 2504) = 1053609165;
  *(_DWORD *)(LODWORD(v1) + 2508) = &off_271F2D0;
  *(_DWORD *)(LODWORD(v1) + 2512) = 1;
  *(_DWORD *)(LODWORD(v1) + 2516) = 0;
  *(_BYTE *)(LODWORD(v1) + 2520) = 1;
  *(_DWORD *)(LODWORD(v1) + 2524) = 0;
  *(_DWORD *)(LODWORD(v1) + 2528) = 0;
  *(_DWORD *)(LODWORD(v1) + 2532) = 0;
  *(_DWORD *)(LODWORD(v1) + 2540) = 0;
  *(_DWORD *)(LODWORD(v1) + 2544) = 0;
  *(_DWORD *)(LODWORD(v1) + 2548) = 0;
  *(_DWORD *)(LODWORD(v1) + 2552) = 0;
  *(_DWORD *)(LODWORD(v1) + 2556) = 0;
  *(_DWORD *)(LODWORD(v1) + 2548) = LODWORD(v1) + 2540;
  *(_DWORD *)(LODWORD(v1) + 2552) = LODWORD(v1) + 2540;
  *(_DWORD *)(LODWORD(v1) + 2560) = &unk_28898CC;
  *(_BYTE *)(LODWORD(v1) + 2564) = 0;
  *(_DWORD *)(LODWORD(v1) + 2568) = &off_271F2F4;
  *(_DWORD *)(LODWORD(v1) + 2572) = 1065353216;
  *(_DWORD *)(LODWORD(v1) + 2576) = 1065353216;
  *(_DWORD *)(LODWORD(v1) + 2580) = &off_271F360;
  *(_DWORD *)(LODWORD(v1) + 2584) = &unk_28898CC;
  *(_DWORD *)(LODWORD(v1) + 2588) = &unk_28898CC;
  *(_DWORD *)(LODWORD(v1) + 2620) = 0;
  *(_DWORD *)(LODWORD(v1) + 2616) = 0;
  *(_DWORD *)(LODWORD(v1) + 2612) = 0;
  *(_DWORD *)(LODWORD(v1) + 2608) = 0;
  *(_DWORD *)(LODWORD(v1) + 2604) = 0;
  *(_DWORD *)(LODWORD(v1) + 2600) = 0;
  *(_DWORD *)(LODWORD(v1) + 2596) = 0;
  *(_DWORD *)(LODWORD(v1) + 2592) = &off_26F1930;
  *(_DWORD *)(LODWORD(v1) + 2624) = &unk_28898CC;
  *(_DWORD *)(LODWORD(v1) + 2628) = &unk_28898CC;
  *(_DWORD *)(LODWORD(v1) + 2660) = 0;
  *(_DWORD *)(LODWORD(v1) + 2656) = 0;
  *(_DWORD *)(LODWORD(v1) + 2652) = 0;
  *(_DWORD *)(LODWORD(v1) + 2648) = 0;
  *(_DWORD *)(LODWORD(v1) + 2644) = 0;
  *(_DWORD *)(LODWORD(v1) + 2640) = 0;
  *(_DWORD *)(LODWORD(v1) + 2636) = 0;
  *(_DWORD *)(LODWORD(v1) + 2632) = &off_26F1930;
  *(_DWORD *)(LODWORD(v1) + 2668) = 1106247680;
  *(_DWORD *)(LODWORD(v1) + 2664) = &off_271E9CC;
  *(_DWORD *)(LODWORD(v1) + 2672) = 0;
  *(_DWORD *)(LODWORD(v1) + 2676) = 0;
  *(_DWORD *)(LODWORD(v1) + 2684) = 1106247680;
  *(_DWORD *)(LODWORD(v1) + 2680) = &off_271E960;
  *(_DWORD *)(LODWORD(v1) + 2688) = &off_271F384;
  *(_DWORD *)(LODWORD(v1) + 2708) = &unk_28898CC;
  *(_DWORD *)(LODWORD(v1) + 2716) = &unk_28898CC;
  *(_DWORD *)(LODWORD(v1) + 2720) = &unk_28898CC;
  *(_DWORD *)(LODWORD(v1) + 2724) = &off_271F318;
  *(_DWORD *)(LODWORD(v1) + 2728) = 0;
  *(_DWORD *)(LODWORD(v1) + 2732) = 0;
  *(_DWORD *)(LODWORD(v1) + 2736) = 0;
  *(_DWORD *)(LODWORD(v1) + 2740) = &off_271F33C;
  *(_DWORD *)(LODWORD(v1) + 2744) = &unk_28898CC;
  *(_DWORD *)(LODWORD(v1) + 2748) = -1;
  *(_DWORD *)(LODWORD(v1) + 2752) = &off_271F3A8;
  *(_DWORD *)(LODWORD(v1) + 2756) = 1065353216;
  *(_DWORD *)(LODWORD(v1) + 2764) = 0;
  *(_DWORD *)(LODWORD(v1) + 2768) = 0;
  *(_DWORD *)(LODWORD(v1) + 2772) = 0;
  *(_DWORD *)(LODWORD(v1) + 2776) = 0;
  *(_DWORD *)(LODWORD(v1) + 2780) = 0;
  *(_DWORD *)(LODWORD(v1) + 2772) = LODWORD(v1) + 2764;
  *(_DWORD *)(LODWORD(v1) + 2776) = LODWORD(v1) + 2764;
  *(_DWORD *)(LODWORD(v1) + 2784) = &unk_28898CC;
  *(_DWORD *)(LODWORD(v1) + 2788) = &unk_28898CC;
  *(_DWORD *)(LODWORD(v1) + 2820) = 0;
  *(_DWORD *)(LODWORD(v1) + 2816) = 0;
  *(_DWORD *)(LODWORD(v1) + 2812) = 0;
  *(_DWORD *)(LODWORD(v1) + 2808) = 0;
  *(_DWORD *)(LODWORD(v1) + 2804) = 0;
  *(_DWORD *)(LODWORD(v1) + 2800) = 0;
  *(_DWORD *)(LODWORD(v1) + 2796) = 0;
  *(_DWORD *)(LODWORD(v1) + 2792) = &off_26F1930;
  *(_DWORD *)(LODWORD(v1) + 2824) = &off_271F3CC;
  v6 = LODWORD(v1) + 2880;
  *(_DWORD *)(LODWORD(v1) + 2836) = &unk_28898CC;
  *(_DWORD *)(LODWORD(v1) + 2840) = &unk_28898CC;
  *(_DWORD *)(LODWORD(v1) + 2872) = 0;
  *(_DWORD *)(LODWORD(v1) + 2868) = 0;
  *(_DWORD *)(LODWORD(v1) + 2864) = 0;
  *(_DWORD *)(LODWORD(v1) + 2860) = 0;
  *(_DWORD *)(LODWORD(v1) + 2856) = 0;
  *(_DWORD *)(LODWORD(v1) + 2852) = 0;
  *(_DWORD *)(LODWORD(v1) + 2848) = 0;
  *(_DWORD *)(LODWORD(v1) + 2844) = &off_26F1930;
  *(_DWORD *)(LODWORD(v1) + 2876) = &unk_28898CC;
  *(_DWORD *)(LODWORD(v1) + 2912) = 0;
  *(_DWORD *)(LODWORD(v1) + 2908) = 0;
  *(_DWORD *)(LODWORD(v1) + 2904) = 0;
  *(_DWORD *)(LODWORD(v1) + 2900) = 0;
  *(_DWORD *)(LODWORD(v1) + 2896) = 0;
  *(_DWORD *)(LODWORD(v1) + 2892) = 0;
  *(_DWORD *)v6 = &unk_28898CC;
  *(_DWORD *)(v6 + 4) = &off_26F1930;
  *(_DWORD *)(v6 + 8) = 0;
  *(_DWORD *)(LODWORD(v1) + 2916) = &off_271F3F0;
  *(_BYTE *)(LODWORD(v1) + 2920) = 1;
  *(_DWORD *)(LODWORD(v1) + 2924) = 0;
  *(_DWORD *)(LODWORD(v1) + 2928) = 1101004800;
  *(_DWORD *)(LODWORD(v1) + 2932) = 1107296256;
  *(_DWORD *)(LODWORD(v1) + 2936) = 1098907648;
  *(_DWORD *)(LODWORD(v1) + 2940) = 1107296256;
  *(_DWORD *)(LODWORD(v1) + 2944) = 1098907648;
  *(_DWORD *)(LODWORD(v1) + 2948) = 1065353216;
  *(_DWORD *)(LODWORD(v1) + 2952) = 1008981770;
  *(_DWORD *)(LODWORD(v1) + 2956) = 0;
  *(_DWORD *)(LODWORD(v1) + 2960) = &off_271F414;
  *(_DWORD *)(LODWORD(v1) + 2964) = 2;
  *(_DWORD *)(LODWORD(v1) + 2968) = 1124073472;
  *(_BYTE *)(LODWORD(v1) + 2972) = 1;
  *(_DWORD *)(LODWORD(v1) + 2976) = &off_271F438;
  *(_BYTE *)(LODWORD(v1) + 2980) = 1;
  *(_BYTE *)(LODWORD(v1) + 2981) = 1;
  *(_DWORD *)(LODWORD(v1) + 2984) = 0;
  *(_DWORD *)(LODWORD(v1) + 2988) = 0;
  *(_DWORD *)(LODWORD(v1) + 2992) = &unk_28898CC;
  *(_DWORD *)(LODWORD(v1) + 2996) = &unk_28898CC;
  *(_DWORD *)(LODWORD(v1) + 3028) = 0;
  *(_DWORD *)(LODWORD(v1) + 3024) = 0;
  *(_DWORD *)(LODWORD(v1) + 3020) = 0;
  *(_DWORD *)(LODWORD(v1) + 3016) = 0;
  *(_DWORD *)(LODWORD(v1) + 3012) = 0;
  *(_DWORD *)(LODWORD(v1) + 3008) = 0;
  *(_DWORD *)(LODWORD(v1) + 3004) = 0;
  *(_DWORD *)(LODWORD(v1) + 3000) = &off_26F1930;
  *(_DWORD *)(LODWORD(v1) + 3032) = &off_26F0FC0;
  *(_DWORD *)(LODWORD(v1) + 3036) = &unk_28898CC;
  *(_DWORD *)(LODWORD(v1) + 3040) = &unk_28898CC;
  *(_DWORD *)(LODWORD(v1) + 3044) = &off_271F45C;
  *(_DWORD *)(LODWORD(v1) + 3048) = &unk_28898CC;
  _aeabi_memclr4(LODWORD(v1) + 3052, 68);
  *(_DWORD *)(LODWORD(v1) + 3120) = &off_271F1D4;
  *(_DWORD *)(LODWORD(v1) + 3124) = 0;
  *(_DWORD *)(LODWORD(v1) + 3128) = &off_271F1F8;
  *(_DWORD *)(LODWORD(v1) + 3132) = 0;
  *(_DWORD *)(LODWORD(v1) + 3136) = &off_271EAEC;
  sub_21E94B4((void **)(LODWORD(v1) + 3140), "pathfinder");
  *(_WORD *)(LODWORD(v1) + 3144) = 256;
  *(_BYTE *)(LODWORD(v1) + 3150) = 0;
  *(_DWORD *)(LODWORD(v1) + 3146) = 0;
  *(_DWORD *)(LODWORD(v1) + 3136) = &off_271EA80;
  *(_DWORD *)(LODWORD(v1) + 3152) = &off_271EAEC;
  sub_21E94B4((void **)(LODWORD(v1) + 3156), "pathfinder");
  *(_WORD *)(LODWORD(v1) + 3160) = 256;
  *(_BYTE *)(LODWORD(v1) + 3166) = 0;
  *(_DWORD *)(LODWORD(v1) + 3162) = 0;
  *(_DWORD *)(LODWORD(v1) + 3152) = &off_271EAA4;
  *(_DWORD *)(LODWORD(v1) + 3168) = &off_271E78C;
  *(_DWORD *)(LODWORD(v1) + 3172) = &unk_28898CC;
  *(_DWORD *)(LODWORD(v1) + 3176) = &off_271EB34;
  *(_WORD *)(LODWORD(v1) + 3180) = 257;
  *(_DWORD *)(LODWORD(v1) + 3184) = &off_271EAEC;
  sub_21E94B4((void **)(LODWORD(v1) + 3188), "pathfinder");
  *(_WORD *)(LODWORD(v1) + 3192) = 256;
  *(_BYTE *)(LODWORD(v1) + 3198) = 0;
  *(_DWORD *)(LODWORD(v1) + 3194) = 0;
  *(_DWORD *)(LODWORD(v1) + 3184) = &off_271EAC8;
  *(_DWORD *)(LODWORD(v1) + 3200) = &off_271E9F0;
  *(_DWORD *)(LODWORD(v1) + 3204) = 1106247680;
  *(_DWORD *)(LODWORD(v1) + 3208) = &off_271A4D4;
  *(_DWORD *)(LODWORD(v1) + 3212) = &off_271E888;
  *(_DWORD *)(LODWORD(v1) + 3216) = &off_271A560;
  *(_DWORD *)(LODWORD(v1) + 3220) = &off_26F0F84;
  *(_DWORD *)(LODWORD(v1) + 3224) = &off_271F5E8;
  return LODWORD(v1);
}


void __fastcall EntityDefinition::parseAttributes(EntityDefinition *this, Json::Value *a2, EntityDefinitionDescriptor *a3)
{
  EntityDefinition::parseAttributes(this, a2, a3);
}


EntityDefinition *__fastcall EntityDefinition::getPropertiesDoc(EntityDefinition *this, DocumentationSystem *a2)
{
  EntityDefinition *v2; // r4@1
  double v3; // r0@1
  void *v4; // r0@1
  unsigned int *v6; // r2@3
  signed int v7; // r1@5
  int v8; // [sp+4h] [bp-CB4h]@1
  char v9; // [sp+8h] [bp-CB0h]@1
  int v10; // [sp+260h] [bp-A58h]@2
  int v11; // [sp+26Ch] [bp-A4Ch]@2
  int v12; // [sp+270h] [bp-A48h]@2
  int v13; // [sp+274h] [bp-A44h]@2
  int v14; // [sp+278h] [bp-A40h]@2
  int v15; // [sp+27Ch] [bp-A3Ch]@2
  int v16; // [sp+288h] [bp-A30h]@2
  int v17; // [sp+290h] [bp-A28h]@2
  int v18; // [sp+298h] [bp-A20h]@2
  int v19; // [sp+2A0h] [bp-A18h]@2
  int v20; // [sp+2A8h] [bp-A10h]@2
  int v21; // [sp+2ACh] [bp-A0Ch]@2
  int v22; // [sp+2C8h] [bp-9F0h]@2
  int v23; // [sp+2CCh] [bp-9ECh]@2
  int v24; // [sp+2D4h] [bp-9E4h]@2
  int v25; // [sp+2DCh] [bp-9DCh]@2
  int v26; // [sp+2E4h] [bp-9D4h]@2
  int v27; // [sp+2E8h] [bp-9D0h]@2
  int v28; // [sp+2F0h] [bp-9C8h]@2
  int v29; // [sp+2F4h] [bp-9C4h]@2
  int v30; // [sp+2F8h] [bp-9C0h]@2
  int v31; // [sp+2FCh] [bp-9BCh]@2
  int v32; // [sp+300h] [bp-9B8h]@2
  int v33; // [sp+304h] [bp-9B4h]@2
  int v34; // [sp+308h] [bp-9B0h]@2
  int v35; // [sp+30Ch] [bp-9ACh]@2
  int v36; // [sp+310h] [bp-9A8h]@2
  int v37; // [sp+314h] [bp-9A4h]@2
  int v38; // [sp+330h] [bp-988h]@2
  int v39; // [sp+338h] [bp-980h]@2
  int v40; // [sp+340h] [bp-978h]@2
  int v41; // [sp+348h] [bp-970h]@2
  int v42; // [sp+350h] [bp-968h]@2
  int v43; // [sp+358h] [bp-960h]@2
  int v44; // [sp+35Ch] [bp-95Ch]@2
  int v45; // [sp+C38h] [bp-80h]@2
  int v46; // [sp+C40h] [bp-78h]@2

  v2 = this;
  sub_21E94B4((void **)&v8, (const char *)&unk_257BC67);
  HIDWORD(v3) = &v8;
  LODWORD(v3) = &v9;
  EntityDefinition::EntityDefinition(v3);
  v4 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v8 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v7 = __ldrex(v6);
      while ( __strex(v7 - 1, v6) );
    }
    else
      v7 = (*v6)--;
    if ( v7 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  Description::registerDescription((Description *)&v10, v2);
  Description::registerDescription((Description *)&v11, v2);
  Description::registerDescription((Description *)&v12, v2);
  Description::registerDescription((Description *)&v13, v2);
  Description::registerDescription((Description *)&v14, v2);
  Description::registerDescription((Description *)&v15, v2);
  Description::registerDescription((Description *)&v16, v2);
  Description::registerDescription((Description *)&v17, v2);
  Description::registerDescription((Description *)&v18, v2);
  Description::registerDescription((Description *)&v19, v2);
  Description::registerDescription((Description *)&v20, v2);
  Description::registerDescription((Description *)&v21, v2);
  Description::registerDescription((Description *)&v22, v2);
  Description::registerDescription((Description *)&v23, v2);
  Description::registerDescription((Description *)&v24, v2);
  Description::registerDescription((Description *)&v25, v2);
  Description::registerDescription((Description *)&v26, v2);
  Description::registerDescription((Description *)&v27, v2);
  Description::registerDescription((Description *)&v28, v2);
  Description::registerDescription((Description *)&v29, v2);
  Description::registerDescription((Description *)&v30, v2);
  Description::registerDescription((Description *)&v31, v2);
  Description::registerDescription((Description *)&v32, v2);
  Description::registerDescription((Description *)&v33, v2);
  Description::registerDescription((Description *)&v34, v2);
  Description::registerDescription((Description *)&v35, v2);
  Description::registerDescription((Description *)&v36, v2);
  Description::registerDescription((Description *)&v37, v2);
  Description::registerDescription((Description *)&v38, v2);
  Description::registerDescription((Description *)&v39, v2);
  Description::registerDescription((Description *)&v40, v2);
  Description::registerDescription((Description *)&v41, v2);
  Description::registerDescription((Description *)&v45, v2);
  Description::registerDescription((Description *)&v46, v2);
  Description::registerDescription((Description *)&v42, v2);
  Description::registerDescription((Description *)&v43, v2);
  Description::registerDescription((Description *)&v44, v2);
  return EntityDefinition::~EntityDefinition((EntityDefinition *)&v9);
}


void __fastcall EntityDefinition::parseAttributes(EntityDefinition *this, Json::Value *a2, EntityDefinitionDescriptor *a3)
{
  Json::Value *v3; // r5@1
  EntityDefinition *v4; // r8@1
  EntityDefinitionDescriptor *v5; // r11@1
  int *v6; // r10@3
  unsigned int *v7; // r2@5
  signed int v8; // r1@7
  const char **v9; // r9@15
  Json::Value *v10; // r6@18
  Json::Value *v11; // r0@19
  Json::Value *v17; // r0@19
  const Json::Value *v19; // r0@19
  signed int v20; // r6@19
  __int64 v21; // r0@25
  int *v22; // r0@26
  float v23; // r2@26
  float v24; // r3@26
  int v25; // r6@26
  __int64 v26; // r0@28
  int *v27; // r0@29
  float v28; // r2@29
  float v29; // r3@29
  int v30; // r6@29
  char *v31; // r0@31
  int *v32; // r0@35
  unsigned int *v33; // r2@37
  signed int v34; // r1@39
  const char **v35; // r7@45
  int v36; // r1@45
  int *v37; // r0@45
  char v38; // [sp+28h] [bp-78h]@33
  const char **v39; // [sp+3Ch] [bp-64h]@3
  int *v40; // [sp+40h] [bp-60h]@3
  int *v41; // [sp+44h] [bp-5Ch]@3
  char v42; // [sp+4Ch] [bp-54h]@14
  char v43; // [sp+50h] [bp-50h]@19
  char *v44; // [sp+64h] [bp-3Ch]@5
  int v45; // [sp+68h] [bp-38h]@18
  float v46; // [sp+6Ch] [bp-34h]@18
  float v47; // [sp+70h] [bp-30h]@18
  int v48; // [sp+74h] [bp-2Ch]@18

  v3 = a2;
  v4 = this;
  v5 = a3;
  if ( !Json::Value::isNull(a2) && Json::Value::isObject(v3) == 1 )
  {
    Json::Value::getMemberNames((Json::Value *)&v40, (int)v3);
    v6 = v41;
    v39 = (const char **)v40;
    if ( v40 != v41 )
    {
      v6 = v40;
      do
      {
        if ( AttributeCollection::hasAttribute((AttributeCollection *)v6) )
        {
          JsonUtil::ScopeMarker::ScopeMarker(&v42, v6);
          if ( Json::Value::isNull(v3) )
          {
            v9 = (const char **)v6;
          }
          else if ( Json::Value::isMember((int)v3, (const char **)v6) == 1 )
            v10 = (Json::Value *)Json::Value::operator[](v3, (const char **)v6);
            v44 = (char *)&unk_28898CC;
            v45 = 0x800000;
            v48 = 2139095039;
            v46 = 3.4028e38;
            v47 = 3.4028e38;
            EntityInteraction::setInteractText((int *)&v44, v6);
            if ( Json::Value::isObject(v10) == 1 )
            {
              v11 = (Json::Value *)Json::Value::operator[]((int)v10, "min");
              _R0 = Json::Value::asFloat(v11, 1.1755e-38);
              __asm
              {
                VMOV            S0, R0
                VSTR            S0, [SP,#0xA0+var_38]
              }
              v17 = (Json::Value *)Json::Value::operator[]((int)v10, "max");
              _R0 = Json::Value::asFloat(v17, 3.4028e38);
                VSTR            S0, [SP,#0xA0+var_34]
              v19 = (const Json::Value *)Json::Value::operator[]((int)v10, "value");
              Json::Value::Value((Json::Value *)&v43, v19);
              v20 = FloatRange::parseJson((int)&v47, (Json::Value *)&v43);
              Json::Value::~Value((Json::Value *)&v43);
              __asm { VLDR            S0, [SP,#0xA0+var_34] }
              if ( v20 )
                __asm
                {
                  VLDR            S2, [SP,#0xA0+var_2C]
                  VCMPE.F32       S0, S2
                  VMRS            APSR_nzcv, FPSCR
                }
                if ( _NF ^ _VF )
                  __asm { VSTRLT          S2, [SP,#0xA0+var_34] }
              else
                  VSTR            S0, [SP,#0xA0+var_2C]
                  VSTR            S0, [SP,#0xA0+var_30]
            }
            v21 = *(_QWORD *)((char *)v4 + 516);
            if ( (_DWORD)v21 == HIDWORD(v21) )
              std::vector<EntityDefinitionAttribute,std::allocator<EntityDefinitionAttribute>>::_M_emplace_back_aux<EntityDefinitionAttribute const&>(
                (unsigned __int64 *)v4 + 64,
                (int)&v44);
            else
              v22 = sub_21E8AF4((int *)v21, (int *)&v44) + 1;
              v23 = v46;
              v24 = v47;
              v25 = v48;
              *v22 = v45;
              *((float *)v22 + 1) = v23;
              *((float *)v22 + 2) = v24;
              v22[3] = v25;
              *((_DWORD *)v4 + 129) += 20;
            v26 = *(_QWORD *)((char *)v5 + 52);
            if ( (_DWORD)v26 == HIDWORD(v26) )
                (unsigned __int64 *)v5 + 6,
              v27 = sub_21E8AF4((int *)v26, (int *)&v44) + 1;
              v28 = v46;
              v29 = v47;
              v30 = v48;
              *v27 = v45;
              *((float *)v27 + 1) = v28;
              *((float *)v27 + 2) = v29;
              v27[3] = v30;
              *((_DWORD *)v5 + 13) += 20;
            v31 = v44 - 12;
            if ( (int *)(v44 - 12) != &dword_28898C0 )
              v7 = (unsigned int *)(v44 - 4);
              if ( &pthread_create )
                __dmb();
                do
                  v8 = __ldrex(v7);
                while ( __strex(v8 - 1, v7) );
                v8 = (*v7)--;
              if ( v8 <= 0 )
                j_j_j_j__ZdlPv_9(v31);
            v9 = v39;
          else
          JsonUtil::ScopeMarker::~ScopeMarker((JsonUtil::ScopeMarker *)&v42);
          Json::Value::removeMember((Json::Value *)&v38, (const char *)v3, v9);
          Json::Value::~Value((Json::Value *)&v38);
        }
        else
          v9 = (const char **)v6;
        v6 = (int *)(v9 + 1);
        v39 = v9 + 1;
      }
      while ( (int *)(v9 + 1) != v41 );
      v32 = v40;
      if ( v40 == v6 )
LABEL_49:
        operator delete(v6);
        return;
        v35 = (const char **)v32;
        v36 = *v32;
        v37 = (int *)(*v32 - 12);
        if ( v37 != &dword_28898C0 )
          v33 = (unsigned int *)(v36 - 4);
          if ( &pthread_create )
            __dmb();
            do
              v34 = __ldrex(v33);
            while ( __strex(v34 - 1, v33) );
            v34 = (*v33)--;
          if ( v34 <= 0 )
            j_j_j_j__ZdlPv_9(v37);
        v32 = (int *)(v35 + 1);
      while ( v35 != v9 );
    }
    if ( !v6 )
      return;
    goto LABEL_49;
  }
}


EntityDefinition *__fastcall EntityDefinition::getTriggersDoc(EntityDefinition *this, DocumentationSystem *a2)
{
  EntityDefinition *v2; // r4@1
  double v3; // r0@1
  void *v4; // r0@1
  unsigned int *v6; // r2@3
  signed int v7; // r1@5
  int v8; // [sp+4h] [bp-CB4h]@1
  char v9; // [sp+8h] [bp-CB0h]@1
  int v10; // [sp+360h] [bp-958h]@2
  int v11; // [sp+38Ch] [bp-92Ch]@2
  int v12; // [sp+3B8h] [bp-900h]@2
  int v13; // [sp+3E4h] [bp-8D4h]@2
  int v14; // [sp+410h] [bp-8A8h]@2
  int v15; // [sp+43Ch] [bp-87Ch]@2
  int v16; // [sp+468h] [bp-850h]@2
  int v17; // [sp+494h] [bp-824h]@2
  int v18; // [sp+4C0h] [bp-7F8h]@2

  v2 = this;
  sub_21E94B4((void **)&v8, (const char *)&unk_257BC67);
  HIDWORD(v3) = &v8;
  LODWORD(v3) = &v9;
  EntityDefinition::EntityDefinition(v3);
  v4 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v8 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v7 = __ldrex(v6);
      while ( __strex(v7 - 1, v6) );
    }
    else
      v7 = (*v6)--;
    if ( v7 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  Description::registerDescription((Description *)&v10, v2);
  Description::registerDescription((Description *)&v11, v2);
  Description::registerDescription((Description *)&v12, v2);
  Description::registerDescription((Description *)&v13, v2);
  Description::registerDescription((Description *)&v14, v2);
  Description::registerDescription((Description *)&v15, v2);
  Description::registerDescription((Description *)&v16, v2);
  Description::registerDescription((Description *)&v17, v2);
  Description::registerDescription((Description *)&v18, v2);
  return EntityDefinition::~EntityDefinition((EntityDefinition *)&v9);
}


EntityDefinition *__fastcall EntityDefinition::~EntityDefinition(EntityDefinition *this)
{
  EntityDefinition *v1; // r10@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  int v6; // r1@3
  void *v7; // r0@3
  int v8; // r1@4
  void *v9; // r0@4
  int v10; // r1@5
  void *v11; // r0@5
  int v12; // r1@6
  void *v13; // r0@6
  int v14; // r1@7
  void *v15; // r0@7
  int v16; // r1@8
  void *v17; // r0@8
  int v18; // r1@9
  void *v19; // r0@9
  int v20; // r1@10
  void *v21; // r0@10
  int v22; // r1@11
  void *v23; // r0@11
  void *v24; // r0@12
  int v25; // r1@14
  void *v26; // r0@14
  int v27; // r1@15
  void *v28; // r0@15
  int v29; // r1@16
  void *v30; // r0@16
  int v31; // r1@17
  void *v32; // r0@17
  void *v33; // r0@18
  int v34; // r1@20
  void *v35; // r0@20
  int v36; // r1@21
  void *v37; // r0@21
  int v38; // r1@22
  void *v39; // r0@22
  Interaction *v40; // r0@23
  Interaction *v41; // r5@23
  int v42; // r5@28
  int v43; // r6@28
  void *v44; // r0@29
  int v45; // r1@35
  void *v46; // r0@35
  SlotDescriptor *v47; // r0@36
  SlotDescriptor *v48; // r5@36
  int v49; // r5@41
  int v50; // r7@41
  unsigned int *v51; // r2@43
  signed int v52; // r1@45
  unsigned int *v53; // r2@47
  signed int v54; // r1@49
  int v55; // r1@59
  void *v56; // r0@59
  int *v57; // r0@60
  int v58; // r5@65
  int v59; // r7@65
  unsigned int *v60; // r2@67
  signed int v61; // r1@69
  unsigned int *v62; // r2@71
  signed int v63; // r1@73
  int v64; // r1@83
  void *v65; // r0@83
  int *v66; // r0@84
  BreedableType *v67; // r0@89
  BreedableType *v68; // r5@89
  void *v69; // r0@94
  int v70; // r1@96
  void *v71; // r0@96
  int v72; // r1@97
  void *v73; // r0@97
  int v74; // r1@98
  void *v75; // r0@98
  int v76; // r1@99
  void *v77; // r0@99
  void *v78; // r0@100
  int v79; // r1@102
  void *v80; // r0@102
  int v81; // r1@103
  void *v82; // r0@103
  int v83; // r1@104
  void *v84; // r0@104
  int v85; // r1@105
  void *v86; // r0@105
  int v87; // r1@106
  void *v88; // r0@106
  int v89; // r1@107
  void *v90; // r0@107
  int v91; // r1@108
  void *v92; // r0@108
  int v93; // r1@109
  void *v94; // r0@109
  int v95; // r1@110
  void *v96; // r0@110
  int v97; // r1@111
  void *v98; // r0@111
  int v99; // r1@112
  void *v100; // r0@112
  int v101; // r1@113
  void *v102; // r0@113
  int v103; // r1@114
  void *v104; // r0@114
  int v105; // r1@115
  void *v106; // r0@115
  int v107; // r1@116
  void *v108; // r0@116
  int v109; // r1@117
  void *v110; // r0@117
  int v111; // r1@118
  void *v112; // r0@118
  int v113; // r1@119
  void *v114; // r0@119
  int v115; // r1@120
  void *v116; // r0@120
  int v117; // r1@121
  void *v118; // r0@121
  int v119; // r1@122
  void *v120; // r0@122
  int v121; // r1@123
  void *v122; // r0@123
  int v123; // r1@124
  void *v124; // r0@124
  int v125; // r1@125
  void *v126; // r0@125
  void *v127; // r5@126
  void *v128; // r7@126
  unsigned int *v129; // r2@128
  signed int v130; // r1@130
  int *v131; // r0@136
  void *v132; // r0@141
  int v133; // r1@143
  void *v134; // r0@143
  _DWORD *v135; // r7@144
  unsigned int *v136; // r2@146
  signed int v137; // r1@148
  _DWORD *v138; // r6@154
  DefinitionEvent *v139; // r0@154
  int v140; // r1@154
  void *v141; // r0@154
  char *v142; // r0@156
  void *v143; // r5@159
  void *v144; // r7@159
  unsigned int *v145; // r2@161
  signed int v146; // r1@163
  int *v147; // r0@169
  GoalDefinition *v148; // r0@174
  GoalDefinition *v149; // r5@174
  int v150; // r1@179
  void *v151; // r0@179
  unsigned int *v153; // r2@181
  signed int v154; // r1@183
  unsigned int *v155; // r2@185
  signed int v156; // r1@187
  unsigned int *v157; // r2@189
  signed int v158; // r1@191
  unsigned int *v159; // r2@193
  signed int v160; // r1@195
  unsigned int *v161; // r2@197
  signed int v162; // r1@199
  unsigned int *v163; // r2@201
  signed int v164; // r1@203
  unsigned int *v165; // r2@205
  signed int v166; // r1@207
  unsigned int *v167; // r2@209
  signed int v168; // r1@211
  unsigned int *v169; // r2@213
  signed int v170; // r1@215
  unsigned int *v171; // r2@217
  signed int v172; // r1@219
  unsigned int *v173; // r2@221
  signed int v174; // r1@223
  unsigned int *v175; // r2@225
  signed int v176; // r1@227
  unsigned int *v177; // r2@229
  signed int v178; // r1@231
  unsigned int *v179; // r2@233
  signed int v180; // r1@235
  unsigned int *v181; // r2@237
  signed int v182; // r1@239
  unsigned int *v183; // r2@241
  signed int v184; // r1@243
  unsigned int *v185; // r2@245
  signed int v186; // r1@247
  unsigned int *v187; // r2@249
  signed int v188; // r1@251
  unsigned int *v189; // r2@253
  signed int v190; // r1@255
  unsigned int *v191; // r2@257
  signed int v192; // r1@259
  unsigned int *v193; // r2@261
  signed int v194; // r1@263
  unsigned int *v195; // r2@265
  signed int v196; // r1@267
  unsigned int *v197; // r2@269
  signed int v198; // r1@271
  unsigned int *v199; // r2@273
  signed int v200; // r1@275
  unsigned int *v201; // r2@277
  signed int v202; // r1@279
  unsigned int *v203; // r2@281
  signed int v204; // r1@283
  unsigned int *v205; // r2@285
  signed int v206; // r1@287
  unsigned int *v207; // r2@289
  signed int v208; // r1@291
  unsigned int *v209; // r2@293
  signed int v210; // r1@295
  unsigned int *v211; // r2@297
  signed int v212; // r1@299
  unsigned int *v213; // r2@301
  signed int v214; // r1@303
  unsigned int *v215; // r2@305
  signed int v216; // r1@307
  unsigned int *v217; // r2@309
  signed int v218; // r1@311
  unsigned int *v219; // r2@313
  signed int v220; // r1@315
  unsigned int *v221; // r2@317
  signed int v222; // r1@319
  unsigned int *v223; // r2@321
  signed int v224; // r1@323
  unsigned int *v225; // r2@325
  signed int v226; // r1@327
  unsigned int *v227; // r2@329
  signed int v228; // r1@331
  unsigned int *v229; // r2@333
  signed int v230; // r1@335
  unsigned int *v231; // r2@337
  signed int v232; // r1@339
  unsigned int *v233; // r2@341
  signed int v234; // r1@343
  unsigned int *v235; // r2@345
  signed int v236; // r1@347
  unsigned int *v237; // r2@349
  signed int v238; // r1@351
  unsigned int *v239; // r2@353
  signed int v240; // r1@355
  unsigned int *v241; // r2@357
  signed int v242; // r1@359
  unsigned int *v243; // r2@361
  signed int v244; // r1@363
  unsigned int *v245; // r2@365
  signed int v246; // r1@367
  unsigned int *v247; // r2@369
  signed int v248; // r1@371
  unsigned int *v249; // r2@373
  signed int v250; // r1@375

  v1 = this;
  *((_DWORD *)this + 796) = &off_271EAEC;
  v2 = *((_DWORD *)this + 797);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v153 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v154 = __ldrex(v153);
      while ( __strex(v154 - 1, v153) );
    }
    else
      v154 = (*v153)--;
    if ( v154 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  *((_DWORD *)v1 + 792) = &off_271E78C;
  v4 = *((_DWORD *)v1 + 793);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v155 = (unsigned int *)(v4 - 4);
        v156 = __ldrex(v155);
      while ( __strex(v156 - 1, v155) );
      v156 = (*v155)--;
    if ( v156 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  *((_DWORD *)v1 + 788) = &off_271EAEC;
  v6 = *((_DWORD *)v1 + 789);
  v7 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
    v157 = (unsigned int *)(v6 - 4);
        v158 = __ldrex(v157);
      while ( __strex(v158 - 1, v157) );
      v158 = (*v157)--;
    if ( v158 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  *((_DWORD *)v1 + 784) = &off_271EAEC;
  v8 = *((_DWORD *)v1 + 785);
  v9 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
    v159 = (unsigned int *)(v8 - 4);
        v160 = __ldrex(v159);
      while ( __strex(v160 - 1, v159) );
      v160 = (*v159)--;
    if ( v160 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  TransformationDescription::~TransformationDescription((EntityDefinition *)((char *)v1 + 3044));
  *((_DWORD *)v1 + 758) = &off_26F0FC0;
  v10 = *((_DWORD *)v1 + 760);
  v11 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
    v161 = (unsigned int *)(v10 - 4);
        v162 = __ldrex(v161);
      while ( __strex(v162 - 1, v161) );
      v162 = (*v161)--;
    if ( v162 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  v12 = *((_DWORD *)v1 + 759);
  v13 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
    v163 = (unsigned int *)(v12 - 4);
        v164 = __ldrex(v163);
      while ( __strex(v164 - 1, v163) );
      v164 = (*v163)--;
    if ( v164 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  *((_DWORD *)v1 + 744) = &off_271F438;
  FilterGroup::~FilterGroup((EntityDefinition *)((char *)v1 + 3000));
  v14 = *((_DWORD *)v1 + 749);
  v15 = (void *)(v14 - 12);
  if ( (int *)(v14 - 12) != &dword_28898C0 )
    v165 = (unsigned int *)(v14 - 4);
        v166 = __ldrex(v165);
      while ( __strex(v166 - 1, v165) );
      v166 = (*v165)--;
    if ( v166 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  v16 = *((_DWORD *)v1 + 748);
  v17 = (void *)(v16 - 12);
  if ( (int *)(v16 - 12) != &dword_28898C0 )
    v167 = (unsigned int *)(v16 - 4);
        v168 = __ldrex(v167);
      while ( __strex(v168 - 1, v167) );
      v168 = (*v167)--;
    if ( v168 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  TargetNearbyDescription::~TargetNearbyDescription((EntityDefinition *)((char *)v1 + 2824));
  *((_DWORD *)v1 + 688) = &off_271F3A8;
  FilterGroup::~FilterGroup((EntityDefinition *)((char *)v1 + 2792));
  v18 = *((_DWORD *)v1 + 697);
  v19 = (void *)(v18 - 12);
  if ( (int *)(v18 - 12) != &dword_28898C0 )
    v169 = (unsigned int *)(v18 - 4);
        v170 = __ldrex(v169);
      while ( __strex(v170 - 1, v169) );
      v170 = (*v169)--;
    if ( v170 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
  v20 = *((_DWORD *)v1 + 696);
  v21 = (void *)(v20 - 12);
  if ( (int *)(v20 - 12) != &dword_28898C0 )
    v171 = (unsigned int *)(v20 - 4);
        v172 = __ldrex(v171);
      while ( __strex(v172 - 1, v171) );
      v172 = (*v171)--;
    if ( v172 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  std::_Rb_tree<Item const*,Item const*,std::_Identity<Item const*>,std::less<Item const*>,std::allocator<Item const*>>::_M_erase(
    (int)v1 + 2760,
    *((_DWORD *)v1 + 692));
  *((_DWORD *)v1 + 685) = &off_271F33C;
  v22 = *((_DWORD *)v1 + 686);
  v23 = (void *)(v22 - 12);
  if ( (int *)(v22 - 12) != &dword_28898C0 )
    v173 = (unsigned int *)(v22 - 4);
        v174 = __ldrex(v173);
      while ( __strex(v174 - 1, v173) );
      v174 = (*v173)--;
    if ( v174 <= 0 )
      j_j_j_j__ZdlPv_9(v23);
  *((_DWORD *)v1 + 681) = &off_271F318;
  v24 = (void *)*((_DWORD *)v1 + 682);
  if ( v24 )
    operator delete(v24);
  *((_DWORD *)v1 + 672) = &off_271F384;
  v25 = *((_DWORD *)v1 + 680);
  v26 = (void *)(v25 - 12);
  if ( (int *)(v25 - 12) != &dword_28898C0 )
    v175 = (unsigned int *)(v25 - 4);
        v176 = __ldrex(v175);
      while ( __strex(v176 - 1, v175) );
      v176 = (*v175)--;
    if ( v176 <= 0 )
      j_j_j_j__ZdlPv_9(v26);
  v27 = *((_DWORD *)v1 + 679);
  v28 = (void *)(v27 - 12);
  if ( (int *)(v27 - 12) != &dword_28898C0 )
    v177 = (unsigned int *)(v27 - 4);
        v178 = __ldrex(v177);
      while ( __strex(v178 - 1, v177) );
      v178 = (*v177)--;
    if ( v178 <= 0 )
      j_j_j_j__ZdlPv_9(v28);
  v29 = *((_DWORD *)v1 + 677);
  v30 = (void *)(v29 - 12);
  if ( (int *)(v29 - 12) != &dword_28898C0 )
    v179 = (unsigned int *)(v29 - 4);
        v180 = __ldrex(v179);
      while ( __strex(v180 - 1, v179) );
      v180 = (*v179)--;
    if ( v180 <= 0 )
      j_j_j_j__ZdlPv_9(v30);
  SittableDescription::~SittableDescription((EntityDefinition *)((char *)v1 + 2580));
  *((_DWORD *)v1 + 627) = &off_271F2D0;
  v31 = *((_DWORD *)v1 + 640);
  v32 = (void *)(v31 - 12);
  if ( (int *)(v31 - 12) != &dword_28898C0 )
    v181 = (unsigned int *)(v31 - 4);
        v182 = __ldrex(v181);
      while ( __strex(v182 - 1, v181) );
      v182 = (*v181)--;
    if ( v182 <= 0 )
      j_j_j_j__ZdlPv_9(v32);
  std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_erase(
    (int)v1 + 2536,
    *((_DWORD *)v1 + 636));
  v33 = (void *)*((_DWORD *)v1 + 631);
  if ( v33 )
    operator delete(v33);
  RailActivatorDescription::~RailActivatorDescription((EntityDefinition *)((char *)v1 + 2408));
  ProjectileDescription::~ProjectileDescription((EntityDefinition *)((char *)v1 + 2260));
  PeekDescription::~PeekDescription((EntityDefinition *)((char *)v1 + 2136));
  *((_DWORD *)v1 + 530) = &off_271EAEC;
  v34 = *((_DWORD *)v1 + 531);
  v35 = (void *)(v34 - 12);
  if ( (int *)(v34 - 12) != &dword_28898C0 )
    v183 = (unsigned int *)(v34 - 4);
        v184 = __ldrex(v183);
      while ( __strex(v184 - 1, v183) );
      v184 = (*v183)--;
    if ( v184 <= 0 )
      j_j_j_j__ZdlPv_9(v35);
  NameableDescription::~NameableDescription((EntityDefinition *)((char *)v1 + 2060));
  MountTameableDescription::~MountTameableDescription((EntityDefinition *)((char *)v1 + 1956));
  *((_DWORD *)v1 + 465) = &off_271E8F4;
  FilterGroup::~FilterGroup((EntityDefinition *)((char *)v1 + 1924));
  v36 = *((_DWORD *)v1 + 480);
  v37 = (void *)(v36 - 12);
  if ( (int *)(v36 - 12) != &dword_28898C0 )
    v185 = (unsigned int *)(v36 - 4);
        v186 = __ldrex(v185);
      while ( __strex(v186 - 1, v185) );
      v186 = (*v185)--;
    if ( v186 <= 0 )
      j_j_j_j__ZdlPv_9(v37);
  v38 = *((_DWORD *)v1 + 479);
  v39 = (void *)(v38 - 12);
  if ( (int *)(v38 - 12) != &dword_28898C0 )
    v187 = (unsigned int *)(v38 - 4);
        v188 = __ldrex(v187);
      while ( __strex(v188 - 1, v187) );
      v188 = (*v187)--;
    if ( v188 <= 0 )
      j_j_j_j__ZdlPv_9(v39);
  FilterGroup::~FilterGroup((EntityDefinition *)((char *)v1 + 1884));
  LeashableDescription::~LeashableDescription((EntityDefinition *)((char *)v1 + 1764));
  *((_DWORD *)v1 + 437) = &off_271E8AC;
  v40 = (Interaction *)*((_DWORD *)v1 + 438);
  v41 = (Interaction *)*((_DWORD *)v1 + 439);
  if ( v40 != v41 )
    do
      v40 = (Interaction *)((char *)Interaction::~Interaction(v40) + 96);
    while ( v41 != v40 );
    v40 = (Interaction *)*((_DWORD *)v1 + 438);
  if ( v40 )
    operator delete((void *)v40);
  *((_DWORD *)v1 + 424) = &off_271E864;
  FilterGroup::~FilterGroup((EntityDefinition *)((char *)v1 + 1716));
  v42 = *((_DWORD *)v1 + 425);
  v43 = *((_DWORD *)v1 + 426);
  if ( v42 != v43 )
      v44 = *(void **)(v42 + 8);
      if ( v44 )
        operator delete(v44);
      v42 += 20;
    while ( v43 != v42 );
    v42 = *((_DWORD *)v1 + 425);
  if ( v42 )
    operator delete((void *)v42);
  *((_DWORD *)v1 + 420) = &off_271EAEC;
  v45 = *((_DWORD *)v1 + 421);
  v46 = (void *)(v45 - 12);
  if ( (int *)(v45 - 12) != &dword_28898C0 )
    v189 = (unsigned int *)(v45 - 4);
        v190 = __ldrex(v189);
      while ( __strex(v190 - 1, v189) );
      v190 = (*v189)--;
    if ( v190 <= 0 )
      j_j_j_j__ZdlPv_9(v46);
  *((_DWORD *)v1 + 409) = &off_26F0F18;
  v47 = (SlotDescriptor *)*((_DWORD *)v1 + 410);
  v48 = (SlotDescriptor *)*((_DWORD *)v1 + 411);
  if ( v47 != v48 )
      v47 = (SlotDescriptor *)((char *)SlotDescriptor::~SlotDescriptor(v47) + 104);
    while ( v48 != v47 );
    v47 = (SlotDescriptor *)*((_DWORD *)v1 + 410);
  if ( v47 )
    operator delete((void *)v47);
  *((_DWORD *)v1 + 405) = &off_271E81C;
  v49 = *((_DWORD *)v1 + 406);
  v50 = *((_DWORD *)v1 + 407);
  if ( v49 != v50 )
      FilterGroup::~FilterGroup((FilterGroup *)(v49 + 8));
      v55 = *(_DWORD *)(v49 + 4);
      v56 = (void *)(v55 - 12);
      if ( (int *)(v55 - 12) != &dword_28898C0 )
      {
        v51 = (unsigned int *)(v55 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v52 = __ldrex(v51);
          while ( __strex(v52 - 1, v51) );
        }
        else
          v52 = (*v51)--;
        if ( v52 <= 0 )
          j_j_j_j__ZdlPv_9(v56);
      }
      v57 = (int *)(*(_DWORD *)v49 - 12);
      if ( v57 != &dword_28898C0 )
        v53 = (unsigned int *)(*(_DWORD *)v49 - 4);
            v54 = __ldrex(v53);
          while ( __strex(v54 - 1, v53) );
          v54 = (*v53)--;
        if ( v54 <= 0 )
          j_j_j_j__ZdlPv_9(v57);
      v49 += 40;
    while ( v49 != v50 );
    v49 = *((_DWORD *)v1 + 406);
  if ( v49 )
    operator delete((void *)v49);
  *((_DWORD *)v1 + 401) = &off_271E7F8;
  v58 = *((_DWORD *)v1 + 402);
  v59 = *((_DWORD *)v1 + 403);
  if ( v58 != v59 )
      FilterGroup::~FilterGroup((FilterGroup *)(v58 + 8));
      v64 = *(_DWORD *)(v58 + 4);
      v65 = (void *)(v64 - 12);
      if ( (int *)(v64 - 12) != &dword_28898C0 )
        v60 = (unsigned int *)(v64 - 4);
            v61 = __ldrex(v60);
          while ( __strex(v61 - 1, v60) );
          v61 = (*v60)--;
        if ( v61 <= 0 )
          j_j_j_j__ZdlPv_9(v65);
      v66 = (int *)(*(_DWORD *)v58 - 12);
      if ( v66 != &dword_28898C0 )
        v62 = (unsigned int *)(*(_DWORD *)v58 - 4);
            v63 = __ldrex(v62);
          while ( __strex(v63 - 1, v62) );
          v63 = (*v62)--;
        if ( v63 <= 0 )
          j_j_j_j__ZdlPv_9(v66);
      v58 += 48;
    while ( v58 != v59 );
    v58 = *((_DWORD *)v1 + 402);
  if ( v58 )
    operator delete((void *)v58);
  *((_DWORD *)v1 + 374) = &off_271E7D4;
  v67 = (BreedableType *)*((_DWORD *)v1 + 385);
  v68 = (BreedableType *)*((_DWORD *)v1 + 386);
  if ( v67 != v68 )
      v67 = (BreedableType *)((char *)BreedableType::~BreedableType(v67) + 48);
    while ( v68 != v67 );
    v67 = (BreedableType *)*((_DWORD *)v1 + 385);
  if ( v67 )
    operator delete((void *)v67);
    (int)v1 + 1516,
    *((_DWORD *)v1 + 381));
  *((_DWORD *)v1 + 353) = &off_271E7B0;
  std::_Rb_tree<Block const*,Block const*,std::_Identity<Block const*>,std::less<Block const*>,std::allocator<Block const*>>::_M_erase(
    (int)v1 + 1456,
    *((_DWORD *)v1 + 366));
    (int)v1 + 1432,
    *((_DWORD *)v1 + 360));
  *((_DWORD *)v1 + 346) = &off_26F0E1C;
  v69 = (void *)*((_DWORD *)v1 + 347);
  if ( v69 )
    operator delete(v69);
  *((_DWORD *)v1 + 332) = &off_26F0DF8;
  FilterGroup::~FilterGroup((EntityDefinition *)((char *)v1 + 1352));
  v70 = *((_DWORD *)v1 + 337);
  v71 = (void *)(v70 - 12);
  if ( (int *)(v70 - 12) != &dword_28898C0 )
    v191 = (unsigned int *)(v70 - 4);
        v192 = __ldrex(v191);
      while ( __strex(v192 - 1, v191) );
      v192 = (*v191)--;
    if ( v192 <= 0 )
      j_j_j_j__ZdlPv_9(v71);
  v72 = *((_DWORD *)v1 + 336);
  v73 = (void *)(v72 - 12);
  if ( (int *)(v72 - 12) != &dword_28898C0 )
    v193 = (unsigned int *)(v72 - 4);
        v194 = __ldrex(v193);
      while ( __strex(v194 - 1, v193) );
      v194 = (*v193)--;
    if ( v194 <= 0 )
      j_j_j_j__ZdlPv_9(v73);
  *((_DWORD *)v1 + 317) = &off_271E6FC;
  FilterGroup::~FilterGroup((EntityDefinition *)((char *)v1 + 1296));
  v74 = *((_DWORD *)v1 + 323);
  v75 = (void *)(v74 - 12);
  if ( (int *)(v74 - 12) != &dword_28898C0 )
    v195 = (unsigned int *)(v74 - 4);
        v196 = __ldrex(v195);
      while ( __strex(v196 - 1, v195) );
      v196 = (*v195)--;
    if ( v196 <= 0 )
      j_j_j_j__ZdlPv_9(v75);
  v76 = *((_DWORD *)v1 + 322);
  v77 = (void *)(v76 - 12);
  if ( (int *)(v76 - 12) != &dword_28898C0 )
    v197 = (unsigned int *)(v76 - 4);
        v198 = __ldrex(v197);
      while ( __strex(v198 - 1, v197) );
      v198 = (*v197)--;
    if ( v198 <= 0 )
      j_j_j_j__ZdlPv_9(v77);
  v78 = (void *)*((_DWORD *)v1 + 319);
  if ( v78 )
    operator delete(v78);
  *((_DWORD *)v1 + 313) = &off_271E6D8;
  v79 = *((_DWORD *)v1 + 316);
  v80 = (void *)(v79 - 12);
  if ( (int *)(v79 - 12) != &dword_28898C0 )
    v199 = (unsigned int *)(v79 - 4);
        v200 = __ldrex(v199);
      while ( __strex(v200 - 1, v199) );
      v200 = (*v199)--;
    if ( v200 <= 0 )
      j_j_j_j__ZdlPv_9(v80);
  v81 = *((_DWORD *)v1 + 315);
  v82 = (void *)(v81 - 12);
  if ( (int *)(v81 - 12) != &dword_28898C0 )
    v201 = (unsigned int *)(v81 - 4);
        v202 = __ldrex(v201);
      while ( __strex(v202 - 1, v201) );
      v202 = (*v201)--;
    if ( v202 <= 0 )
      j_j_j_j__ZdlPv_9(v82);
  v83 = *((_DWORD *)v1 + 314);
  v84 = (void *)(v83 - 12);
  if ( (int *)(v83 - 12) != &dword_28898C0 )
    v203 = (unsigned int *)(v83 - 4);
        v204 = __ldrex(v203);
      while ( __strex(v204 - 1, v203) );
      v204 = (*v203)--;
    if ( v204 <= 0 )
      j_j_j_j__ZdlPv_9(v84);
  *((_DWORD *)v1 + 302) = &off_271F480;
  FilterGroup::~FilterGroup((EntityDefinition *)((char *)v1 + 1220));
  v85 = *((_DWORD *)v1 + 304);
  v86 = (void *)(v85 - 12);
  if ( (int *)(v85 - 12) != &dword_28898C0 )
    v205 = (unsigned int *)(v85 - 4);
        v206 = __ldrex(v205);
      while ( __strex(v206 - 1, v205) );
      v206 = (*v205)--;
    if ( v206 <= 0 )
      j_j_j_j__ZdlPv_9(v86);
  v87 = *((_DWORD *)v1 + 303);
  v88 = (void *)(v87 - 12);
  if ( (int *)(v87 - 12) != &dword_28898C0 )
    v207 = (unsigned int *)(v87 - 4);
        v208 = __ldrex(v207);
      while ( __strex(v208 - 1, v207) );
      v208 = (*v207)--;
    if ( v208 <= 0 )
      j_j_j_j__ZdlPv_9(v88);
  *((_DWORD *)v1 + 291) = &off_271F480;
  FilterGroup::~FilterGroup((EntityDefinition *)((char *)v1 + 1176));
  v89 = *((_DWORD *)v1 + 293);
  v90 = (void *)(v89 - 12);
  if ( (int *)(v89 - 12) != &dword_28898C0 )
    v209 = (unsigned int *)(v89 - 4);
        v210 = __ldrex(v209);
      while ( __strex(v210 - 1, v209) );
      v210 = (*v209)--;
    if ( v210 <= 0 )
      j_j_j_j__ZdlPv_9(v90);
  v91 = *((_DWORD *)v1 + 292);
  v92 = (void *)(v91 - 12);
  if ( (int *)(v91 - 12) != &dword_28898C0 )
    v211 = (unsigned int *)(v91 - 4);
        v212 = __ldrex(v211);
      while ( __strex(v212 - 1, v211) );
      v212 = (*v211)--;
    if ( v212 <= 0 )
      j_j_j_j__ZdlPv_9(v92);
  *((_DWORD *)v1 + 280) = &off_271F480;
  FilterGroup::~FilterGroup((EntityDefinition *)((char *)v1 + 1132));
  v93 = *((_DWORD *)v1 + 282);
  v94 = (void *)(v93 - 12);
  if ( (int *)(v93 - 12) != &dword_28898C0 )
    v213 = (unsigned int *)(v93 - 4);
        v214 = __ldrex(v213);
      while ( __strex(v214 - 1, v213) );
      v214 = (*v213)--;
    if ( v214 <= 0 )
      j_j_j_j__ZdlPv_9(v94);
  v95 = *((_DWORD *)v1 + 281);
  v96 = (void *)(v95 - 12);
  if ( (int *)(v95 - 12) != &dword_28898C0 )
    v215 = (unsigned int *)(v95 - 4);
        v216 = __ldrex(v215);
      while ( __strex(v216 - 1, v215) );
      v216 = (*v215)--;
    if ( v216 <= 0 )
      j_j_j_j__ZdlPv_9(v96);
  *((_DWORD *)v1 + 269) = &off_271F480;
  FilterGroup::~FilterGroup((EntityDefinition *)((char *)v1 + 1088));
  v97 = *((_DWORD *)v1 + 271);
  v98 = (void *)(v97 - 12);
  if ( (int *)(v97 - 12) != &dword_28898C0 )
    v217 = (unsigned int *)(v97 - 4);
        v218 = __ldrex(v217);
      while ( __strex(v218 - 1, v217) );
      v218 = (*v217)--;
    if ( v218 <= 0 )
      j_j_j_j__ZdlPv_9(v98);
  v99 = *((_DWORD *)v1 + 270);
  v100 = (void *)(v99 - 12);
  if ( (int *)(v99 - 12) != &dword_28898C0 )
    v219 = (unsigned int *)(v99 - 4);
        v220 = __ldrex(v219);
      while ( __strex(v220 - 1, v219) );
      v220 = (*v219)--;
    if ( v220 <= 0 )
      j_j_j_j__ZdlPv_9(v100);
  *((_DWORD *)v1 + 258) = &off_271F480;
  FilterGroup::~FilterGroup((EntityDefinition *)((char *)v1 + 1044));
  v101 = *((_DWORD *)v1 + 260);
  v102 = (void *)(v101 - 12);
  if ( (int *)(v101 - 12) != &dword_28898C0 )
    v221 = (unsigned int *)(v101 - 4);
        v222 = __ldrex(v221);
      while ( __strex(v222 - 1, v221) );
      v222 = (*v221)--;
    if ( v222 <= 0 )
      j_j_j_j__ZdlPv_9(v102);
  v103 = *((_DWORD *)v1 + 259);
  v104 = (void *)(v103 - 12);
  if ( (int *)(v103 - 12) != &dword_28898C0 )
    v223 = (unsigned int *)(v103 - 4);
        v224 = __ldrex(v223);
      while ( __strex(v224 - 1, v223) );
      v224 = (*v223)--;
    if ( v224 <= 0 )
      j_j_j_j__ZdlPv_9(v104);
  *((_DWORD *)v1 + 247) = &off_271F480;
  FilterGroup::~FilterGroup((EntityDefinition *)((char *)v1 + 1000));
  v105 = *((_DWORD *)v1 + 249);
  v106 = (void *)(v105 - 12);
  if ( (int *)(v105 - 12) != &dword_28898C0 )
    v225 = (unsigned int *)(v105 - 4);
        v226 = __ldrex(v225);
      while ( __strex(v226 - 1, v225) );
      v226 = (*v225)--;
    if ( v226 <= 0 )
      j_j_j_j__ZdlPv_9(v106);
  v107 = *((_DWORD *)v1 + 248);
  v108 = (void *)(v107 - 12);
  if ( (int *)(v107 - 12) != &dword_28898C0 )
    v227 = (unsigned int *)(v107 - 4);
        v228 = __ldrex(v227);
      while ( __strex(v228 - 1, v227) );
      v228 = (*v227)--;
    if ( v228 <= 0 )
      j_j_j_j__ZdlPv_9(v108);
  *((_DWORD *)v1 + 236) = &off_271F480;
  FilterGroup::~FilterGroup((EntityDefinition *)((char *)v1 + 956));
  v109 = *((_DWORD *)v1 + 238);
  v110 = (void *)(v109 - 12);
  if ( (int *)(v109 - 12) != &dword_28898C0 )
    v229 = (unsigned int *)(v109 - 4);
        v230 = __ldrex(v229);
      while ( __strex(v230 - 1, v229) );
      v230 = (*v229)--;
    if ( v230 <= 0 )
      j_j_j_j__ZdlPv_9(v110);
  v111 = *((_DWORD *)v1 + 237);
  v112 = (void *)(v111 - 12);
  if ( (int *)(v111 - 12) != &dword_28898C0 )
    v231 = (unsigned int *)(v111 - 4);
        v232 = __ldrex(v231);
      while ( __strex(v232 - 1, v231) );
      v232 = (*v231)--;
    if ( v232 <= 0 )
      j_j_j_j__ZdlPv_9(v112);
  *((_DWORD *)v1 + 225) = &off_271F480;
  FilterGroup::~FilterGroup((EntityDefinition *)((char *)v1 + 912));
  v113 = *((_DWORD *)v1 + 227);
  v114 = (void *)(v113 - 12);
  if ( (int *)(v113 - 12) != &dword_28898C0 )
    v233 = (unsigned int *)(v113 - 4);
        v234 = __ldrex(v233);
      while ( __strex(v234 - 1, v233) );
      v234 = (*v233)--;
    if ( v234 <= 0 )
      j_j_j_j__ZdlPv_9(v114);
  v115 = *((_DWORD *)v1 + 226);
  v116 = (void *)(v115 - 12);
  if ( (int *)(v115 - 12) != &dword_28898C0 )
    v235 = (unsigned int *)(v115 - 4);
        v236 = __ldrex(v235);
      while ( __strex(v236 - 1, v235) );
      v236 = (*v235)--;
    if ( v236 <= 0 )
      j_j_j_j__ZdlPv_9(v116);
  *((_DWORD *)v1 + 214) = &off_271F480;
  FilterGroup::~FilterGroup((EntityDefinition *)((char *)v1 + 868));
  v117 = *((_DWORD *)v1 + 216);
  v118 = (void *)(v117 - 12);
  if ( (int *)(v117 - 12) != &dword_28898C0 )
    v237 = (unsigned int *)(v117 - 4);
        v238 = __ldrex(v237);
      while ( __strex(v238 - 1, v237) );
      v238 = (*v237)--;
    if ( v238 <= 0 )
      j_j_j_j__ZdlPv_9(v118);
  v119 = *((_DWORD *)v1 + 215);
  v120 = (void *)(v119 - 12);
  if ( (int *)(v119 - 12) != &dword_28898C0 )
    v239 = (unsigned int *)(v119 - 4);
        v240 = __ldrex(v239);
      while ( __strex(v240 - 1, v239) );
      v240 = (*v239)--;
    if ( v240 <= 0 )
      j_j_j_j__ZdlPv_9(v120);
  *((_DWORD *)v1 + 202) = &off_271F144;
  v121 = *((_DWORD *)v1 + 203);
  v122 = (void *)(v121 - 12);
  if ( (int *)(v121 - 12) != &dword_28898C0 )
    v241 = (unsigned int *)(v121 - 4);
        v242 = __ldrex(v241);
      while ( __strex(v242 - 1, v241) );
      v242 = (*v241)--;
    if ( v242 <= 0 )
      j_j_j_j__ZdlPv_9(v122);
  *((_DWORD *)v1 + 195) = &off_271F120;
    (int)v1 + 784,
    *((_DWORD *)v1 + 198));
  *((_DWORD *)v1 + 169) = &off_271EEE0;
    (int)v1 + 680,
    *((_DWORD *)v1 + 172));
  *((_DWORD *)v1 + 166) = &off_271EE98;
  v123 = *((_DWORD *)v1 + 167);
  v124 = (void *)(v123 - 12);
  if ( (int *)(v123 - 12) != &dword_28898C0 )
    v243 = (unsigned int *)(v123 - 4);
        v244 = __ldrex(v243);
      while ( __strex(v244 - 1, v243) );
      v244 = (*v243)--;
    if ( v244 <= 0 )
      j_j_j_j__ZdlPv_9(v124);
  *((_DWORD *)v1 + 164) = &off_271EE74;
  v125 = *((_DWORD *)v1 + 165);
  v126 = (void *)(v125 - 12);
  if ( (int *)(v125 - 12) != &dword_28898C0 )
    v245 = (unsigned int *)(v125 - 4);
        v246 = __ldrex(v245);
      while ( __strex(v246 - 1, v245) );
      v246 = (*v245)--;
    if ( v246 <= 0 )
      j_j_j_j__ZdlPv_9(v126);
  *((_DWORD *)v1 + 143) = &off_271E744;
  v128 = (void *)(*(_QWORD *)((char *)v1 + 588) >> 32);
  v127 = (void *)*(_QWORD *)((char *)v1 + 588);
  if ( v127 != v128 )
      v131 = (int *)(*(_DWORD *)v127 - 12);
      if ( v131 != &dword_28898C0 )
        v129 = (unsigned int *)(*(_DWORD *)v127 - 4);
            v130 = __ldrex(v129);
          while ( __strex(v130 - 1, v129) );
          v130 = (*v129)--;
        if ( v130 <= 0 )
          j_j_j_j__ZdlPv_9(v131);
      v127 = (char *)v127 + 4;
    while ( v127 != v128 );
    v127 = (void *)*((_DWORD *)v1 + 147);
  if ( v127 )
    operator delete(v127);
  v132 = (void *)*((_DWORD *)v1 + 144);
  if ( v132 )
    operator delete(v132);
  *((_DWORD *)v1 + 138) = &off_271E720;
  v133 = *((_DWORD *)v1 + 141);
  v134 = (void *)(v133 - 12);
  if ( (int *)(v133 - 12) != &dword_28898C0 )
    v247 = (unsigned int *)(v133 - 4);
        v248 = __ldrex(v247);
      while ( __strex(v248 - 1, v247) );
      v248 = (*v247)--;
    if ( v248 <= 0 )
      j_j_j_j__ZdlPv_9(v134);
  v135 = (_DWORD *)*((_DWORD *)v1 + 133);
  while ( v135 )
    v138 = v135;
    v139 = (DefinitionEvent *)(v135 + 2);
    v135 = (_DWORD *)*v135;
    DefinitionEvent::~DefinitionEvent(v139);
    v140 = v138[1];
    v141 = (void *)(v140 - 12);
    if ( (int *)(v140 - 12) != &dword_28898C0 )
      v136 = (unsigned int *)(v140 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v137 = __ldrex(v136);
        while ( __strex(v137 - 1, v136) );
      else
        v137 = (*v136)--;
      if ( v137 <= 0 )
        j_j_j_j__ZdlPv_9(v141);
    operator delete(v138);
  _aeabi_memclr4(*(_QWORD *)((char *)v1 + 524), 4 * (*(_QWORD *)((char *)v1 + 524) >> 32));
  *((_DWORD *)v1 + 133) = 0;
  *((_DWORD *)v1 + 134) = 0;
  v142 = (char *)*((_DWORD *)v1 + 131);
  if ( v142 && (char *)v1 + 548 != v142 )
    operator delete(v142);
  v144 = (void *)(*((_QWORD *)v1 + 64) >> 32);
  v143 = (void *)*((_QWORD *)v1 + 64);
  if ( v143 != v144 )
      v147 = (int *)(*(_DWORD *)v143 - 12);
      if ( v147 != &dword_28898C0 )
        v145 = (unsigned int *)(*(_DWORD *)v143 - 4);
            v146 = __ldrex(v145);
          while ( __strex(v146 - 1, v145) );
          v146 = (*v145)--;
        if ( v146 <= 0 )
          j_j_j_j__ZdlPv_9(v147);
      v143 = (char *)v143 + 20;
    while ( v143 != v144 );
    v143 = (void *)*((_DWORD *)v1 + 128);
  if ( v143 )
    operator delete(v143);
  v149 = (GoalDefinition *)(*(_QWORD *)((char *)v1 + 500) >> 32);
  v148 = (GoalDefinition *)*(_QWORD *)((char *)v1 + 500);
  if ( v148 != v149 )
      v148 = (GoalDefinition *)((char *)GoalDefinition::~GoalDefinition(v148) + 364);
    while ( v149 != v148 );
    v148 = (GoalDefinition *)*((_DWORD *)v1 + 125);
  if ( v148 )
    operator delete((void *)v148);
  *((_DWORD *)v1 + 123) = &off_271ED2C;
  v150 = *((_DWORD *)v1 + 124);
  v151 = (void *)(v150 - 12);
  if ( (int *)(v150 - 12) != &dword_28898C0 )
    v249 = (unsigned int *)(v150 - 4);
        v250 = __ldrex(v249);
      while ( __strex(v250 - 1, v249) );
      v250 = (*v249)--;
    if ( v250 <= 0 )
      j_j_j_j__ZdlPv_9(v151);
  EntityDefinitionDescriptor::~EntityDefinitionDescriptor(v1);
  return v1;
}


void __fastcall EntityDefinition::parse(int a1, int a2, int a3)
{
  EntityDefinition::parse(a1, a2, a3);
}


int __fastcall EntityDefinition::initEntityDefinitions(EntityDefinition *this)
{
  Description *v1; // r0@1
  Description *v2; // r0@1
  Description *v3; // r0@1

  Description::registerAttributes(this);
  Description::registerProperties(v1);
  Description::registerTriggers(v2);
  Description::registerComponents(v3);
  DocumentationSystem::registerDocumentation();
  return j_j_j__ZN19DocumentationSystem21registerDocumentationERKSsPFvRS_E_0();
}


void __fastcall EntityDefinition::parse(int a1, int a2, int a3)
{
  int v3; // r11@1
  int v4; // r9@1
  Json::Value *v5; // r8@1
  const void **i; // r4@1
  int v7; // r6@1
  const void **j; // r5@5
  int v9; // r7@5
  unsigned int *v10; // r2@7
  signed int v11; // r1@9
  unsigned int *v12; // r2@11
  signed int v13; // r1@13
  const void **v14; // r0@24
  char *v15; // r0@24
  char *v16; // r0@25
  Description *v17; // r0@27
  __int64 v18; // r0@27
  _DWORD *v19; // r9@27 OVERLAPPED
  _DWORD *v20; // r10@27 OVERLAPPED
  int v21; // r1@27
  int *v22; // r1@28
  _DWORD *v23; // r4@28
  int (**v24)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r12@28
  unsigned int *v25; // r2@29
  signed int v26; // r7@31
  int *v27; // r6@35
  int (**v28)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r7@35
  int *v29; // r0@36
  const void **v30; // r4@40
  int v31; // r7@40
  unsigned int *v32; // r2@42
  signed int v33; // r1@44
  int *v34; // r0@50
  int v35; // r4@55
  unsigned int *v36; // r5@55
  unsigned int *v37; // r2@57
  signed int v38; // r1@59
  Json::Value *v39; // r0@70
  __int64 v40; // r0@70
  void *v41; // r0@72
  __int64 v42; // r0@83
  __int64 v43; // kr20_8@90
  int v44; // r1@90
  _DWORD *v45; // r4@91
  unsigned int *v46; // r2@92
  signed int v47; // r1@94
  int *v48; // r0@100
  const void **v49; // r4@104
  int v50; // r6@104
  int *v51; // r10@104
  unsigned int *v52; // r2@106
  signed int v53; // r1@108
  int *v54; // r0@114
  const void **k; // r5@120
  int v56; // r10@120
  unsigned int *v57; // r2@122
  signed int v58; // r1@124
  unsigned int *v59; // r2@126
  signed int v60; // r1@128
  unsigned int *v61; // r2@130
  signed int v62; // r1@132
  const void **v63; // r0@146
  const void **v64; // r0@146
  char *v65; // r0@146
  char *v66; // r0@147
  void *v67; // r0@148
  void *v68; // r0@150
  const void **v69; // r4@151
  int v70; // r6@151
  unsigned int *v71; // r2@153
  signed int v72; // r1@155
  int *v73; // r0@161
  unsigned int *v74; // r2@167
  signed int v75; // r1@169
  int *v76; // [sp+20h] [bp-220h]@27
  int v77; // [sp+28h] [bp-218h]@5
  int v78; // [sp+2Ch] [bp-214h]@130
  char *v79; // [sp+30h] [bp-210h]@126
  char *v80; // [sp+34h] [bp-20Ch]@122
  int v81; // [sp+38h] [bp-208h]@120
  const void **v82; // [sp+3Ch] [bp-204h]@90
  const void **v83; // [sp+40h] [bp-200h]@90
  int v84; // [sp+44h] [bp-1FCh]@90
  char v85; // [sp+48h] [bp-1F8h]@87
  int v86; // [sp+58h] [bp-1E8h]@57
  const void **v87; // [sp+5Ch] [bp-1E4h]@27
  const void **v88; // [sp+60h] [bp-1E0h]@27
  int v89; // [sp+64h] [bp-1DCh]@27
  char *v90; // [sp+68h] [bp-1D8h]@11
  char *v91; // [sp+6Ch] [bp-1D4h]@7
  const void **v92; // [sp+70h] [bp-1D0h]@1
  const void **v93; // [sp+74h] [bp-1CCh]@1
  int v94; // [sp+78h] [bp-1C8h]@27
  char v95; // [sp+7Ch] [bp-1C4h]@2
  int v96; // [sp+80h] [bp-1C0h]@1
  int v97; // [sp+84h] [bp-1BCh]@1
  int *v98; // [sp+88h] [bp-1B8h]@1
  int *v99; // [sp+8Ch] [bp-1B4h]@1
  int v100; // [sp+90h] [bp-1B0h]@1
  int v101; // [sp+94h] [bp-1ACh]@2
  int v102; // [sp+98h] [bp-1A8h]@2
  char v103; // [sp+9Ch] [bp-1A4h]@68
  void *v104[3]; // [sp+A0h] [bp-1A0h]@70
  int v105; // [sp+ACh] [bp-194h]@70
  int v106; // [sp+C0h] [bp-180h]@70
  int v107; // [sp+C8h] [bp-178h]@70
  int v108; // [sp+CCh] [bp-174h]@70
  int v109; // [sp+D0h] [bp-170h]@70
  int v110; // [sp+ECh] [bp-154h]@70
  void **v111; // [sp+F0h] [bp-150h]@70
  int v112; // [sp+F4h] [bp-14Ch]@70
  int v113; // [sp+F8h] [bp-148h]@70
  int v114; // [sp+FCh] [bp-144h]@70
  int v115; // [sp+100h] [bp-140h]@70
  int v116; // [sp+104h] [bp-13Ch]@70
  int v117; // [sp+108h] [bp-138h]@70
  int v118; // [sp+10Ch] [bp-134h]@70
  int v119; // [sp+110h] [bp-130h]@70
  int v120; // [sp+114h] [bp-12Ch]@70
  signed int v121; // [sp+118h] [bp-128h]@70
  signed int v122; // [sp+11Ch] [bp-124h]@70
  int v123; // [sp+120h] [bp-120h]@70
  void *v124; // [sp+12Ch] [bp-114h]@70
  void *v125; // [sp+130h] [bp-110h]@70
  void **v126; // [sp+134h] [bp-10Ch]@70
  int v127; // [sp+138h] [bp-108h]@70
  int v128; // [sp+13Ch] [bp-104h]@70
  int v129; // [sp+140h] [bp-100h]@70
  int v130; // [sp+144h] [bp-FCh]@70
  int v131; // [sp+148h] [bp-F8h]@70
  int v132; // [sp+14Ch] [bp-F4h]@70
  int v133; // [sp+150h] [bp-F0h]@70
  int v134; // [sp+160h] [bp-E0h]@70
  int v135; // [sp+16Ch] [bp-D4h]@70
  int v136; // [sp+170h] [bp-D0h]@70
  signed int v137; // [sp+174h] [bp-CCh]@70
  int v138; // [sp+178h] [bp-C8h]@70
  char v139; // [sp+19Eh] [bp-A2h]@70
  signed int v140; // [sp+1A0h] [bp-A0h]@70
  int v141; // [sp+1A4h] [bp-9Ch]@70
  int v142; // [sp+1A8h] [bp-98h]@70
  int v143; // [sp+1ACh] [bp-94h]@70
  signed int v144; // [sp+1B0h] [bp-90h]@70
  signed int v145; // [sp+1B4h] [bp-8Ch]@70
  int v146; // [sp+1B8h] [bp-88h]@70
  int v147; // [sp+1C0h] [bp-80h]@70
  int v148; // [sp+1C4h] [bp-7Ch]@70
  int *v149; // [sp+1C8h] [bp-78h]@70
  int *v150; // [sp+1CCh] [bp-74h]@70
  int v151; // [sp+1D0h] [bp-70h]@70
  int v152; // [sp+1D4h] [bp-6Ch]@70
  char v153; // [sp+1D8h] [bp-68h]@70
  int v154; // [sp+1DCh] [bp-64h]@70
  int v155; // [sp+1E0h] [bp-60h]@70
  int v156; // [sp+1E4h] [bp-5Ch]@70
  int v157; // [sp+1E8h] [bp-58h]@70
  int v158; // [sp+1ECh] [bp-54h]@70
  int v159; // [sp+1F0h] [bp-50h]@70
  int v160; // [sp+1F4h] [bp-4Ch]@70
  int v161; // [sp+1F8h] [bp-48h]@70
  int v162; // [sp+1FCh] [bp-44h]@70
  int v163; // [sp+200h] [bp-40h]@70
  char v164; // [sp+204h] [bp-3Ch]@70
  char v165; // [sp+205h] [bp-3Bh]@70
  int v166; // [sp+208h] [bp-38h]@70
  int v167; // [sp+210h] [bp-30h]@28
  int v168; // [sp+214h] [bp-2Ch]@149

  v3 = a1;
  v100 = 0;
  v4 = a3;
  v5 = (Json::Value *)a2;
  v96 = 0;
  v97 = 0;
  v98 = &v96;
  v99 = &v96;
  Json::Value::getMemberNames((Json::Value *)&v92, a2);
  v7 = (int)v93;
  for ( i = v92; (const void **)v7 != i; ++i )
  {
    std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_get_insert_hint_unique_pos(
      (int)&v101,
      (int)&v95,
      (int)&v96,
      i);
    if ( v102 )
      std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_insert_<std::string &>(
        (int)&v95,
        v101,
        v102,
        i);
  }
  v77 = v4;
  v9 = dword_27FE038;
  for ( j = (const void **)dword_27FE034; j != (const void **)v9; ++j )
    if ( Json::Value::isMember((int)v5, (const char **)j) == 1 )
    {
      v90 = (char *)&unk_28898CC;
      sub_21E6FCC((const void **)&v90, *((_DWORD *)*j - 3) + 10);
      sub_21E7408((const void **)&v90, "Component ", 0xAu);
      sub_21E72F0((const void **)&v90, j);
      v14 = sub_21E7408((const void **)&v90, " no longer exists.", 0x12u);
      v91 = (char *)*v14;
      *v14 = &unk_28898CC;
      JsonUtil::warningMessage((int *)&v91);
      v15 = v91 - 12;
      if ( (int *)(v91 - 12) != &dword_28898C0 )
      {
        v10 = (unsigned int *)(v91 - 4);
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
          j_j_j_j__ZdlPv_9(v15);
      }
      v16 = v90 - 12;
      if ( (int *)(v90 - 12) != &dword_28898C0 )
        v12 = (unsigned int *)(v90 - 4);
            v13 = __ldrex(v12);
          while ( __strex(v13 - 1, v12) );
          v13 = (*v12)--;
        if ( v13 <= 0 )
          j_j_j_j__ZdlPv_9(v16);
    }
  v17 = IdentifierDescription::parseIdentifier((IdentifierDescription *)(v3 + 492), v5);
  v76 = (int *)(v4 + 32);
  EntityInteraction::setInteractText((int *)(v4 + 32), (int *)v17 + 1);
  *(_DWORD *)(v4 + 104) = Description::parseDescription((Description *)(v3 + 616), v5);
  *(_DWORD *)(v4 + 108) = Description::parseDescription((Description *)(v3 + 620), v5);
  *(_DWORD *)(v4 + 112) = Description::parseDescription((Description *)(v3 + 624), v5);
  *(_DWORD *)(v4 + 116) = Description::parseDescription((Description *)(v3 + 628), v5);
  *(_DWORD *)(v4 + 120) = Description::parseDescription((Description *)(v3 + 640), v5);
  *(_DWORD *)(v4 + 128) = Description::parseDescription((Description *)(v3 + 656), v5);
  *(_DWORD *)(v4 + 132) = Description::parseDescription((Description *)(v3 + 664), v5);
  *(_DWORD *)(v4 + 152) = Description::parseDescription((Description *)(v3 + 716), v5);
  *(_DWORD *)(v4 + 196) = Description::parseDescription((Description *)(v3 + 772), v5);
  *(_DWORD *)(v4 + 204) = Description::parseDescription((Description *)(v3 + 780), v5);
  *(_DWORD *)(v4 + 208) = Description::parseDescription((Description *)(v3 + 808), v5);
  *(_DWORD *)(v4 + 212) = Description::parseDescription((Description *)(v3 + 816), v5);
  *(_DWORD *)(v4 + 216) = Description::parseDescription((Description *)(v3 + 824), v5);
  *(_DWORD *)(v4 + 220) = Description::parseDescription((Description *)(v3 + 832), v5);
  *(_DWORD *)(v4 + 164) = Description::parseDescription((Description *)(v3 + 736), v5);
  *(_DWORD *)(v4 + 440) = Description::parseDescription((Description *)(v3 + 3120), v5);
  *(_DWORD *)(v4 + 444) = Description::parseDescription((Description *)(v3 + 3128), v5);
  *(_DWORD *)(v4 + 232) = Description::parseDescription((Description *)(v3 + 852), v5);
  *(_DWORD *)(v4 + 96) = Description::parseDescription((Description *)(v3 + 600), v5);
  *(_DWORD *)(v4 + 100) = Description::parseDescription((Description *)(v3 + 612), v5);
  *(_DWORD *)(v4 + 124) = Description::parseDescription((Description *)(v3 + 648), v5);
  *(_DWORD *)(v4 + 140) = Description::parseDescription((Description *)(v3 + 676), v5);
  *(_DWORD *)(v4 + 136) = Description::parseDescription((Description *)(v3 + 672), v5);
  *(_DWORD *)(v4 + 144) = Description::parseDescription((Description *)(v3 + 704), v5);
  *(_DWORD *)(v4 + 148) = Description::parseDescription((Description *)(v3 + 708), v5);
  *(_DWORD *)(v4 + 156) = Description::parseDescription((Description *)(v3 + 724), v5);
  *(_DWORD *)(v4 + 160) = Description::parseDescription((Description *)(v3 + 732), v5);
  *(_DWORD *)(v4 + 168) = Description::parseDescription((Description *)(v3 + 744), v5);
  *(_DWORD *)(v4 + 172) = Description::parseDescription((Description *)(v3 + 748), v5);
  *(_DWORD *)(v4 + 176) = Description::parseDescription((Description *)(v3 + 752), v5);
  *(_DWORD *)(v4 + 180) = Description::parseDescription((Description *)(v3 + 756), v5);
  *(_DWORD *)(v4 + 184) = Description::parseDescription((Description *)(v3 + 760), v5);
  *(_DWORD *)(v4 + 188) = Description::parseDescription((Description *)(v3 + 764), v5);
  *(_DWORD *)(v4 + 192) = Description::parseDescription((Description *)(v3 + 768), v5);
  *(_DWORD *)(v4 + 200) = Description::parseDescription((Description *)(v3 + 776), v5);
  *(_DWORD *)(v4 + 224) = Description::parseDescription((Description *)(v3 + 840), v5);
  *(_DWORD *)(v4 + 228) = Description::parseDescription((Description *)(v3 + 848), v5);
  *(_DWORD *)(v4 + 88) = Description::parseDescription((Description *)(v3 + 552), v5);
  *(_DWORD *)(v4 + 92) = Description::parseDescription((Description *)(v3 + 572), v5);
  *(_DWORD *)(v4 + 292) = Description::parseDescription((Description *)(v3 + 1480), v5);
  *(_DWORD *)(v4 + 272) = Description::parseDescription((Description *)(v3 + 1252), v5);
  *(_DWORD *)(v4 + 276) = Description::parseDescription((Description *)(v3 + 1268), v5);
  *(_DWORD *)(v4 + 280) = Description::parseDescription((Description *)(v3 + 1328), v5);
  *(_DWORD *)(v4 + 284) = Description::parseDescription((Description *)(v3 + 1384), v5);
  *(_DWORD *)(v4 + 288) = Description::parseDescription((Description *)(v3 + 1412), v5);
  LODWORD(v18) = Description::parseDescription((Description *)(v3 + 1496), v5);
  HIDWORD(v18) = v3 + 1564;
  *(_QWORD *)(v4 + 296) = v18;
  *(_DWORD *)(v4 + 304) = Description::parseDescription((Description *)(v3 + 1580), v5);
  *(_DWORD *)(v4 + 308) = Description::parseDescription((Description *)(v3 + 1604), v5);
  *(_DWORD *)(v4 + 472) = Description::parseDescription((Description *)(v3 + 3208), v5);
  *(_DWORD *)(v4 + 312) = Description::parseDescription((Description *)(v3 + 1620), v5);
  *(_DWORD *)(v4 + 316) = Description::parseDescription((Description *)(v3 + 1636), v5);
  *(_DWORD *)(v4 + 320) = Description::parseDescription((Description *)(v3 + 1652), v5);
  *(_DWORD *)(v4 + 324) = Description::parseDescription((Description *)(v3 + 1680), v5);
  *(_DWORD *)(v4 + 328) = Description::parseDescription((Description *)(v3 + 1696), v5);
  *(_DWORD *)(v4 + 476) = Description::parseDescription((Description *)(v3 + 3212), v5);
  *(_DWORD *)(v4 + 332) = Description::parseDescription((Description *)(v3 + 1748), v5);
  *(_DWORD *)(v4 + 480) = Description::parseDescription((Description *)(v3 + 3216), v5);
  *(_DWORD *)(v4 + 336) = Description::parseDescription((Description *)(v3 + 1764), v5);
  *(_DWORD *)(v4 + 340) = Description::parseDescription((Description *)(v3 + 1860), v5);
  *(_DWORD *)(v4 + 344) = Description::parseDescription((Description *)(v3 + 1956), v5);
  *(_DWORD *)(v4 + 396) = Description::parseDescription((Description *)(v3 + 2680), v5);
  *(_DWORD *)(v4 + 348) = Description::parseDescription((Description *)(v3 + 2044), v5);
  *(_DWORD *)(v4 + 352) = Description::parseDescription((Description *)(v3 + 2052), v5);
  *(_DWORD *)(v4 + 468) = Description::parseDescription((Description *)(v3 + 3200), v5);
  *(_DWORD *)(v4 + 356) = Description::parseDescription((Description *)(v3 + 2060), v5);
  *(_DWORD *)(v4 + 360) = Description::parseDescription((Description *)(v3 + 2120), v5);
  *(_DWORD *)(v4 + 484) = Description::parseDescription((Description *)(v3 + 3220), v5);
  *(_DWORD *)(v4 + 364) = Description::parseDescription((Description *)(v3 + 2136), v5);
  *(_DWORD *)(v4 + 368) = Description::parseDescription((Description *)(v3 + 2260), v5);
  *(_DWORD *)(v4 + 372) = Description::parseDescription((Description *)(v3 + 2408), v5);
  *(_DWORD *)(v4 + 376) = Description::parseDescription((Description *)(v3 + 2500), v5);
  *(_DWORD *)(v4 + 380) = Description::parseDescription((Description *)(v3 + 2508), v5);
  *(_DWORD *)(v4 + 384) = Description::parseDescription((Description *)(v3 + 2568), v5);
  *(_DWORD *)(v4 + 408) = Description::parseDescription((Description *)(v3 + 2740), v5);
  *(_DWORD *)(v4 + 388) = Description::parseDescription((Description *)(v3 + 2580), v5);
  *(_DWORD *)(v4 + 392) = Description::parseDescription((Description *)(v3 + 2664), v5);
  *(_DWORD *)(v4 + 400) = Description::parseDescription((Description *)(v3 + 2688), v5);
  *(_DWORD *)(v4 + 412) = Description::parseDescription((Description *)(v3 + 2752), v5);
  *(_DWORD *)(v4 + 416) = Description::parseDescription((Description *)(v3 + 2824), v5);
  *(_DWORD *)(v4 + 420) = Description::parseDescription((Description *)(v3 + 2916), v5);
  *(_DWORD *)(v4 + 424) = Description::parseDescription((Description *)(v3 + 2960), v5);
  *(_DWORD *)(v4 + 428) = Description::parseDescription((Description *)(v3 + 2976), v5);
  *(_DWORD *)(v4 + 432) = Description::parseDescription((Description *)(v3 + 3032), v5);
  *(_DWORD *)(v4 + 436) = Description::parseDescription((Description *)(v3 + 3044), v5);
  *(_DWORD *)(v4 + 448) = Description::parseDescription((Description *)(v3 + 3136), v5);
  *(_DWORD *)(v4 + 452) = Description::parseDescription((Description *)(v3 + 3152), v5);
  *(_DWORD *)(v4 + 404) = Description::parseDescription((Description *)(v3 + 2724), v5);
  *(_DWORD *)(v4 + 460) = Description::parseDescription((Description *)(v3 + 3176), v5);
  *(_DWORD *)(v4 + 464) = Description::parseDescription((Description *)(v3 + 3184), v5);
  *(_DWORD *)(v4 + 236) = TriggerDescription::parseTrigger((TriggerDescription *)(v3 + 856), v5);
  *(_DWORD *)(v4 + 240) = TriggerDescription::parseTrigger((TriggerDescription *)(v3 + 900), v5);
  *(_DWORD *)(v4 + 244) = TriggerDescription::parseTrigger((TriggerDescription *)(v3 + 944), v5);
  *(_DWORD *)(v4 + 248) = TriggerDescription::parseTrigger((TriggerDescription *)(v3 + 988), v5);
  *(_DWORD *)(v4 + 252) = TriggerDescription::parseTrigger((TriggerDescription *)(v3 + 1032), v5);
  *(_DWORD *)(v4 + 256) = TriggerDescription::parseTrigger((TriggerDescription *)(v3 + 1076), v5);
  *(_DWORD *)(v4 + 260) = TriggerDescription::parseTrigger((TriggerDescription *)(v3 + 1120), v5);
  *(_DWORD *)(v4 + 264) = TriggerDescription::parseTrigger((TriggerDescription *)(v3 + 1164), v5);
  *(_DWORD *)(v4 + 268) = TriggerDescription::parseTrigger((TriggerDescription *)(v3 + 1208), v5);
  EntityDefinition::parseAttributes((EntityDefinition *)v3, v5, (EntityDefinitionDescriptor *)v4);
  Json::Value::getMemberNames((Json::Value *)&v87, (int)v5);
  *(_QWORD *)&v19 = *(_QWORD *)&v92;
  v92 = v87;
  v87 = 0;
  v21 = (int)v88;
  v88 = 0;
  v93 = (const void **)v21;
  v94 = v89;
  v89 = 0;
  if ( v19 != v20 )
    v22 = &v167;
    v23 = v19;
    v24 = &pthread_create;
    do
      v29 = (int *)(*v23 - 12);
      if ( v29 != &dword_28898C0 )
        v25 = (unsigned int *)(*v23 - 4);
        if ( v24 )
            v26 = __ldrex(v25);
          while ( __strex(v26 - 1, v25) );
          v26 = (*v25)--;
        if ( v26 <= 0 )
          v27 = v22;
          v28 = v24;
          j_j_j_j__ZdlPv_9(v29);
          v24 = v28;
          v22 = v27;
      ++v23;
    while ( v23 != v20 );
  if ( v19 )
    operator delete(v19);
  v31 = (int)v88;
  v30 = v87;
  if ( v87 != v88 )
      v34 = (int *)((char *)*v30 - 12);
      if ( v34 != &dword_28898C0 )
        v32 = (unsigned int *)((char *)*v30 - 4);
            v33 = __ldrex(v32);
          while ( __strex(v33 - 1, v32) );
          v33 = (*v32)--;
        if ( v33 <= 0 )
          j_j_j_j__ZdlPv_9(v34);
      ++v30;
    while ( v30 != (const void **)v31 );
    v30 = v87;
  if ( v30 )
    operator delete(v30);
  v35 = (int)v93;
  v36 = (unsigned int *)v92;
  if ( v92 != v93 )
      Util::toLower((void **)&v86, *(_DWORD *)(*v36 - 12), *v36);
      if ( sub_21E7D6C((const void **)&v86, "minecraft:behavior.vex_random_move") )
        if ( sub_21E7D6C((const void **)&v86, "minecraft:behavior.vex_copy_owner_target") )
          if ( GoalDefinition::GoalExists(v36) == 1 )
          {
            JsonUtil::ScopeMarker::ScopeMarker(&v103, (int *)v36);
            if ( !Json::Value::isNull(v5) && Json::Value::isMember((int)v5, (const char **)v36) == 1 )
            {
              Json::Value::operator[](v5, (const char **)v36);
              sub_21E94B4(v104, (const char *)&unk_257BC67);
              v105 = 1098907648;
              v106 = 1065353216;
              v107 = 0;
              v108 = 0;
              v109 = 0;
              v110 = 1017370378;
              v112 = 0;
              v113 = 0;
              v114 = 0;
              v115 = 0;
              v116 = 0;
              v117 = 0;
              v118 = 0;
              v111 = &off_26F1930;
              v119 = 2;
              v120 = 4;
              v121 = 1;
              v122 = 2;
              v123 = 0;
              v124 = &unk_28898CC;
              v125 = &unk_28898CC;
              v127 = 0;
              v128 = 0;
              v129 = 0;
              v130 = 0;
              v131 = 0;
              v132 = 0;
              v133 = 0;
              v126 = &off_26F1930;
              v134 = 1056964608;
              v135 = 0;
              v136 = 10;
              v137 = 7;
              v138 = 0;
              v139 = 0;
              v140 = 60;
              v141 = 0;
              v142 = 0;
              v143 = 0;
              v144 = 6;
              v145 = 2;
              v146 = 100;
              v147 = 0;
              v148 = 0;
              v151 = 0;
              v149 = &v147;
              v150 = &v147;
              v152 = 1056964608;
              v153 = 0;
              v154 = 0;
              v155 = 0;
              v156 = 1065353216;
              v164 = 0;
              v157 = 0;
              v158 = 0;
              v159 = 0;
              v160 = 0;
              v161 = 0;
              v162 = 0;
              v163 = 0;
              v165 = 1;
              v166 = -1082130432;
              EntityInteraction::setInteractText((int *)v104, (int *)v36);
              v39 = (Json::Value *)Json::Value::operator[](v5, (const char **)v36);
              GoalDefinition::parse((GoalDefinition *)v104, v39, 0);
              v40 = *(_QWORD *)(v3 + 504);
              if ( (_DWORD)v40 == HIDWORD(v40) )
              {
                std::vector<GoalDefinition,std::allocator<GoalDefinition>>::_M_emplace_back_aux<GoalDefinition const&>(
                  (unsigned __int64 *)(v3 + 500),
                  (int *)v104);
              }
              else
                GoalDefinition::GoalDefinition((int *)v40, (int *)v104);
                *(_DWORD *)(v3 + 504) += 364;
              v42 = *(_QWORD *)(v77 + 40);
              if ( (_DWORD)v42 == HIDWORD(v42) )
                  (unsigned __int64 *)(v77 + 36),
                GoalDefinition::GoalDefinition((int *)v42, (int *)v104);
                *(_DWORD *)(v77 + 40) += 364;
              GoalDefinition::~GoalDefinition((GoalDefinition *)v104);
            }
            JsonUtil::ScopeMarker::~ScopeMarker((JsonUtil::ScopeMarker *)&v103);
            Json::Value::removeMember((Json::Value *)&v85, (const char *)v5, (const char **)v36);
            Json::Value::~Value((Json::Value *)&v85);
          }
          v41 = (void *)(v86 - 12);
          if ( (int *)(v86 - 12) == &dword_28898C0 )
            goto LABEL_89;
          v37 = (unsigned int *)(v86 - 4);
          if ( &pthread_create )
            __dmb();
            do
              v38 = __ldrex(v37);
            while ( __strex(v38 - 1, v37) );
            goto LABEL_62;
          goto LABEL_61;
        v41 = (void *)(v86 - 12);
        if ( (int *)(v86 - 12) != &dword_28898C0 )
      else
LABEL_62:
            if ( v38 <= 0 )
              j_j_j_j__ZdlPv_9(v41);
LABEL_61:
          v38 = (*v37)--;
          goto LABEL_62;
LABEL_89:
      ++v36;
    while ( v36 != (unsigned int *)v35 );
  Json::Value::getMemberNames((Json::Value *)&v82, (int)v5);
  v43 = *(_QWORD *)&v92;
  v92 = v82;
  v82 = 0;
  v44 = (int)v83;
  v83 = 0;
  v93 = (const void **)v44;
  v94 = v84;
  v84 = 0;
  if ( (_DWORD)v43 != HIDWORD(v43) )
    v45 = (_DWORD *)v43;
      v48 = (int *)(*v45 - 12);
      if ( v48 != &dword_28898C0 )
        v46 = (unsigned int *)(*v45 - 4);
            v47 = __ldrex(v46);
          while ( __strex(v47 - 1, v46) );
          v47 = (*v46)--;
        if ( v47 <= 0 )
          j_j_j_j__ZdlPv_9(v48);
      ++v45;
    while ( v45 != (_DWORD *)HIDWORD(v43) );
  if ( (_DWORD)v43 )
    operator delete((void *)v43);
  v50 = (int)v83;
  v49 = v82;
  v51 = &v96;
  if ( v82 != v83 )
      v54 = (int *)((char *)*v49 - 12);
      if ( v54 != &dword_28898C0 )
        v52 = (unsigned int *)((char *)*v49 - 4);
            v53 = __ldrex(v52);
          while ( __strex(v53 - 1, v52) );
          v53 = (*v52)--;
        if ( v53 <= 0 )
          j_j_j_j__ZdlPv_9(v54);
      ++v49;
    while ( v49 != (const void **)v50 );
    v49 = v82;
  if ( v49 )
    operator delete(v49);
  if ( v93 != v92 )
    sub_21E8AF4(&v81, v76);
    v56 = (int)v93;
    for ( k = v92; k != (const void **)v56; ++k )
      sub_21E8AF4(&v78, &v81);
      sub_21E7408((const void **)&v78, "'s Component ", 0xDu);
      v63 = sub_21E72F0((const void **)&v78, k);
      v79 = (char *)*v63;
      *v63 = &unk_28898CC;
      v64 = sub_21E7408((const void **)&v79, " was not parsed.", 0x10u);
      v80 = (char *)*v64;
      *v64 = &unk_28898CC;
      JsonUtil::logMessage((int *)&v80);
      v65 = v80 - 12;
      if ( (int *)(v80 - 12) != &dword_28898C0 )
        v57 = (unsigned int *)(v80 - 4);
            v58 = __ldrex(v57);
          while ( __strex(v58 - 1, v57) );
          v58 = (*v57)--;
        if ( v58 <= 0 )
          j_j_j_j__ZdlPv_9(v65);
      v66 = v79 - 12;
      if ( (int *)(v79 - 12) != &dword_28898C0 )
        v59 = (unsigned int *)(v79 - 4);
            v60 = __ldrex(v59);
          while ( __strex(v60 - 1, v59) );
          v60 = (*v59)--;
        if ( v60 <= 0 )
          j_j_j_j__ZdlPv_9(v66);
      v67 = (void *)(v78 - 12);
      if ( (int *)(v78 - 12) != &dword_28898C0 )
        v61 = (unsigned int *)(v78 - 4);
            v62 = __ldrex(v61);
          while ( __strex(v62 - 1, v61) );
          v62 = (*v61)--;
        if ( v62 <= 0 )
          j_j_j_j__ZdlPv_9(v67);
      std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::equal_range(
        (int)&v167,
        k);
      std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_erase_aux(
        v167,
        v168);
    v51 = &v96;
    v68 = (void *)(v81 - 12);
    if ( (int *)(v81 - 12) != &dword_28898C0 )
      v74 = (unsigned int *)(v81 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v75 = __ldrex(v74);
        while ( __strex(v75 - 1, v74) );
        v75 = (*v74)--;
      if ( v75 <= 0 )
        j_j_j_j__ZdlPv_9(v68);
  std::__detail::_Insert_base<std::string,std::string,std::allocator<std::string>,std::__detail::_Identity,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::_M_insert_range<std::_Rb_tree_const_iterator<std::string>,std::__detail::_AllocNode<std::allocator<std::__detail::_Hash_node<std::string,true>>>>(
    v77,
    (int)v98,
    (int)v51);
  v70 = (int)v93;
  v69 = v92;
      v73 = (int *)((char *)*v69 - 12);
      if ( v73 != &dword_28898C0 )
        v71 = (unsigned int *)((char *)*v69 - 4);
            v72 = __ldrex(v71);
          while ( __strex(v72 - 1, v71) );
          v72 = (*v71)--;
        if ( v72 <= 0 )
          j_j_j_j__ZdlPv_9(v73);
      ++v69;
    while ( v69 != (const void **)v70 );
    v69 = v92;
  if ( v69 )
    operator delete(v69);
  std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_erase(
    (int)&v95,
    v97);
}


void __fastcall EntityDefinition::getNamesDoc(EntityDefinition *this, DocumentationSystem *a2)
{
  EntityDefinition *v2; // r4@1
  char *v3; // r10@1
  void *v4; // r0@1
  int i; // r7@2
  unsigned int *v6; // r2@4
  signed int v7; // r1@6
  void *v8; // r0@12
  unsigned int *v9; // r2@15
  signed int v10; // r1@17
  int v11; // [sp+4h] [bp-3Ch]@4
  int v12; // [sp+Ch] [bp-34h]@1

  v2 = this;
  sub_21E94B4((void **)&v12, "Names and IDs for Components, Attributes, Properties and Triggers");
  v3 = DocumentationSystem::getPage((int)v2, (const void **)&v12);
  v4 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
  {
    v9 = (unsigned int *)(v12 - 4);
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
      j_j_j_j__ZdlPv_9(v4);
  }
  v3[4] = 1;
  sub_21E8190((void **)v3 + 6, (char *)&unk_257BC67, 0);
  sub_21E8190((void **)v3 + 7, "Name", (_BYTE *)4);
  sub_21E8190((void **)v3 + 8, (char *)&unk_257BC67, 0);
  sub_21E8190((void **)v3 + 9, "ID", (_BYTE *)2);
  for ( i = *(_DWORD *)&algn_27FDBD4[4]; i; i = *(_DWORD *)i )
    Util::toString<int,(void *)0,(void *)0>((void **)&v11, *(_DWORD *)(i + 8));
    DocumentationSystem::Node::addNode((int)v3, (const void **)(i + 4), &v11);
    v8 = (void *)(v11 - 12);
    if ( (int *)(v11 - 12) != &dword_28898C0 )
      v6 = (unsigned int *)(v11 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v7 = __ldrex(v6);
        while ( __strex(v7 - 1, v6) );
      }
      else
        v7 = (*v6)--;
      if ( v7 <= 0 )
        j_j_j_j__ZdlPv_9(v8);
}


EntityDefinition *__fastcall EntityDefinition::getComponentsDoc(EntityDefinition *this, DocumentationSystem *a2)
{
  EntityDefinition *v2; // r4@1
  double v3; // r0@1
  void *v4; // r0@1
  char *v5; // r4@2
  void *v6; // r0@2
  void *v7; // r0@3
  void *v8; // r0@4
  void *v9; // r0@5
  unsigned int *v11; // r2@7
  signed int v12; // r1@9
  unsigned int *v13; // r2@11
  signed int v14; // r1@13
  unsigned int *v15; // r2@15
  signed int v16; // r1@17
  unsigned int *v17; // r2@19
  signed int v18; // r1@21
  unsigned int *v19; // r2@23
  signed int v20; // r1@25
  int v21; // [sp+4h] [bp-CD4h]@4
  int v22; // [sp+Ch] [bp-CCCh]@4
  int v23; // [sp+14h] [bp-CC4h]@2
  int v24; // [sp+1Ch] [bp-CBCh]@2
  int v25; // [sp+24h] [bp-CB4h]@1
  char v26; // [sp+28h] [bp-CB0h]@1
  int v27; // [sp+50Ch] [bp-7CCh]@2
  int v28; // [sp+51Ch] [bp-7BCh]@2
  int v29; // [sp+558h] [bp-780h]@2
  int v30; // [sp+590h] [bp-748h]@2
  int v31; // [sp+5ACh] [bp-72Ch]@2
  int v32; // [sp+5F0h] [bp-6E8h]@2
  int v33; // [sp+600h] [bp-6D8h]@2
  int v34; // [sp+644h] [bp-694h]@2
  int v35; // [sp+654h] [bp-684h]@2
  int v36; // [sp+66Ch] [bp-66Ch]@2
  int v37; // [sp+67Ch] [bp-65Ch]@2
  int v38; // [sp+68Ch] [bp-64Ch]@2
  int v39; // [sp+69Ch] [bp-63Ch]@2
  int v40; // [sp+6B8h] [bp-620h]@2
  int v41; // [sp+6C8h] [bp-610h]@2
  int v42; // [sp+6FCh] [bp-5DCh]@2
  int v43; // [sp+70Ch] [bp-5CCh]@2
  int v44; // [sp+76Ch] [bp-56Ch]@2
  int v45; // [sp+7CCh] [bp-50Ch]@2
  int v46; // [sp+824h] [bp-4B4h]@2
  int v47; // [sp+82Ch] [bp-4ACh]@2
  int v48; // [sp+834h] [bp-4A4h]@2
  int v49; // [sp+870h] [bp-468h]@2
  int v50; // [sp+880h] [bp-458h]@2
  int v51; // [sp+8FCh] [bp-3DCh]@2
  int v52; // [sp+990h] [bp-348h]@2
  int v53; // [sp+9ECh] [bp-2ECh]@2
  int v54; // [sp+9F4h] [bp-2E4h]@2
  int v55; // [sp+A30h] [bp-2A8h]@2
  int v56; // [sp+A3Ch] [bp-29Ch]@2
  int v57; // [sp+A90h] [bp-248h]@2
  int v58; // [sp+AA0h] [bp-238h]@2
  int v59; // [sp+AA8h] [bp-230h]@2
  int v60; // [sp+ACCh] [bp-20Ch]@2
  int v61; // [sp+ADCh] [bp-1FCh]@2
  int v62; // [sp+AE8h] [bp-1F0h]@2
  int v63; // [sp+B30h] [bp-1A8h]@2
  int v64; // [sp+B8Ch] [bp-14Ch]@2
  int v65; // [sp+BB8h] [bp-120h]@2
  int v66; // [sp+BC8h] [bp-110h]@2
  int v67; // [sp+C00h] [bp-D8h]@2
  int v68; // [sp+C0Ch] [bp-CCh]@2
  int v69; // [sp+C68h] [bp-70h]@2
  int v70; // [sp+C78h] [bp-60h]@2
  int v71; // [sp+C88h] [bp-50h]@2
  int v72; // [sp+C98h] [bp-40h]@2
  int v73; // [sp+CA8h] [bp-30h]@2
  int v74; // [sp+CB0h] [bp-28h]@2
  int v75; // [sp+CB4h] [bp-24h]@2
  int v76; // [sp+CB8h] [bp-20h]@2

  v2 = this;
  sub_21E94B4((void **)&v25, (const char *)&unk_257BC67);
  HIDWORD(v3) = &v25;
  LODWORD(v3) = &v26;
  EntityDefinition::EntityDefinition(v3);
  v4 = (void *)(v25 - 12);
  if ( (int *)(v25 - 12) != &dword_28898C0 )
  {
    v11 = (unsigned int *)(v25 - 4);
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
  Description::registerDescription((Description *)&v27, v2);
  Description::registerDescription((Description *)&v28, v2);
  Description::registerDescription((Description *)&v29, v2);
  Description::registerDescription((Description *)&v30, v2);
  Description::registerDescription((Description *)&v31, v2);
  Description::registerDescription((Description *)&v32, v2);
  Description::registerDescription((Description *)&v33, v2);
  Description::registerDescription((Description *)&v34, v2);
  Description::registerDescription((Description *)&v35, v2);
  Description::registerDescription((Description *)&v36, v2);
  Description::registerDescription((Description *)&v37, v2);
  Description::registerDescription((Description *)&v38, v2);
  Description::registerDescription((Description *)&v39, v2);
  Description::registerDescription((Description *)&v40, v2);
  Description::registerDescription((Description *)&v41, v2);
  Description::registerDescription((Description *)&v42, v2);
  Description::registerDescription((Description *)&v43, v2);
  Description::registerDescription((Description *)&v44, v2);
  Description::registerDescription((Description *)&v45, v2);
  Description::registerDescription((Description *)&v46, v2);
  Description::registerDescription((Description *)&v47, v2);
  Description::registerDescription((Description *)&v73, v2);
  Description::registerDescription((Description *)&v48, v2);
  Description::registerDescription((Description *)&v49, v2);
  Description::registerDescription((Description *)&v50, v2);
  Description::registerDescription((Description *)&v51, v2);
  Description::registerDescription((Description *)&v52, v2);
  Description::registerDescription((Description *)&v53, v2);
  Description::registerDescription((Description *)&v54, v2);
  Description::registerDescription((Description *)&v55, v2);
  Description::registerDescription((Description *)&v56, v2);
  Description::registerDescription((Description *)&v57, v2);
  Description::registerDescription((Description *)&v58, v2);
  Description::registerDescription((Description *)&v59, v2);
  Description::registerDescription((Description *)&v60, v2);
  Description::registerDescription((Description *)&v61, v2);
  Description::registerDescription((Description *)&v62, v2);
  Description::registerDescription((Description *)&v63, v2);
  Description::registerDescription((Description *)&v64, v2);
  Description::registerDescription((Description *)&v65, v2);
  Description::registerDescription((Description *)&v66, v2);
  Description::registerDescription((Description *)&v67, v2);
  Description::registerDescription((Description *)&v68, v2);
  Description::registerDescription((Description *)&v69, v2);
  Description::registerDescription((Description *)&v70, v2);
  Description::registerDescription((Description *)&v71, v2);
  Description::registerDescription((Description *)&v74, v2);
  Description::registerDescription((Description *)&v75, v2);
  Description::registerDescription((Description *)&v76, v2);
  Description::registerDescription((Description *)&v72, v2);
  v5 = DocumentationSystem::getPage((int)v2, (const void **)&DocumentationSystem::NODE_ENTITYDEFINITIONPROPERTIES);
  sub_21E94B4((void **)&v24, "do_not_upgrade");
  sub_21E94B4(
    (void **)&v23,
    "Disables all current and future backwards compatibility for this entity. If new components or properties are added o"
    "r changed to the vanilla version of this entity, they will not be applied.");
  DocumentationSystem::Node::addNode((int)v5, (const void **)&v24, &v23);
  v6 = (void *)(v23 - 12);
  if ( (int *)(v23 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v23 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  v7 = (void *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v24 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  sub_21E94B4((void **)&v22, "format_version");
    (void **)&v21,
    "Specifies the version of the game this entity was made in. If the version is lower than the current version, any cha"
    "nges made to the entity in the vanilla version will be applied to it.");
  DocumentationSystem::Node::addNode((int)v5, (const void **)&v22, &v21);
  v8 = (void *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v21 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  v9 = (void *)(v22 - 12);
  if ( (int *)(v22 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v22 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  return EntityDefinition::~EntityDefinition((EntityDefinition *)&v26);
}
