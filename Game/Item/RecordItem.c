

int __fastcall RecordItem::RecordItem(int a1, const void **a2, __int16 a3, int a4)
{
  int v4; // r4@1
  int result; // r0@1

  v4 = a4;
  result = Item::Item(a1, a2, a3);
  *(_DWORD *)result = &off_270325C;
  *(_BYTE *)(result + 113) = v4;
  *(_BYTE *)(result + 4) = 1;
  switch ( v4 )
  {
    case 91:
    case 93:
      *(_DWORD *)(result + 116) = 1127809024;
      break;
    case 90:
      *(_DWORD *)(result + 116) = 1127350272;
    case 92:
      *(_DWORD *)(result + 116) = 1135378432;
    case 94:
      *(_DWORD *)(result + 116) = 1127088128;
    case 95:
      *(_DWORD *)(result + 116) = 1128595456;
    case 96:
      *(_DWORD *)(result + 116) = 1119879168;
    case 97:
      *(_DWORD *)(result + 116) = 1125515264;
    case 98:
      *(_DWORD *)(result + 116) = 1128005632;
    case 99:
      *(_DWORD *)(result + 116) = 1132134400;
    case 100:
      *(_DWORD *)(result + 116) = 1116602368;
    case 101:
      *(_DWORD *)(result + 116) = 1131282432;
    default:
      *(_DWORD *)(result + 116) = 0;
  }
  return result;
}


void __fastcall RecordItem::~RecordItem(RecordItem *this)
{
  RecordItem::~RecordItem(this);
}


signed int __fastcall RecordItem::isMusicDisc(RecordItem *this, const Item *a2)
{
  signed int v2; // r1@1
  signed int result; // r0@1

  v2 = *((_WORD *)this + 9);
  result = 0;
  if ( v2 >= *(_WORD *)(Item::mRecord13 + 18) && v2 <= *(_WORD *)(Item::mRecordWait + 18) )
    result = 1;
  return result;
}


void __fastcall RecordItem::~RecordItem(RecordItem *this)
{
  Item *v1; // r0@1

  v1 = Item::~Item(this);
  j_j_j__ZdlPv_6((void *)v1);
}


void __fastcall RecordItem::buildDescriptionId(RecordItem *this, const ItemInstance *a2)
{
  RecordItem::buildDescriptionId(this, a2);
}


void __fastcall RecordItem::buildDescriptionId(RecordItem *this, const ItemInstance *a2)
{
  int *v2; // r4@1
  void *v3; // r0@1
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  int v6; // [sp+4h] [bp-1Ch]@1

  v2 = (int *)this;
  sub_21E94B4((void **)&v6, "item.record.name");
  I18n::get(v2, (int **)&v6);
  v3 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
  {
    v4 = (unsigned int *)(v6 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 - 1, v4) );
    }
    else
      v5 = (*v4)--;
    if ( v5 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
}
