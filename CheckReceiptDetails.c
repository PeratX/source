

void __fastcall CheckReceiptDetails::~CheckReceiptDetails(CheckReceiptDetails *this)
{
  CheckReceiptDetails::~CheckReceiptDetails(this);
}


void __fastcall CheckReceiptDetails::~CheckReceiptDetails(CheckReceiptDetails *this)
{
  CheckReceiptDetails *v1; // r4@1
  ReceiptFulfillment::ReceiptData *v2; // r0@1
  ReceiptFulfillment::ReceiptData *v3; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26E721C;
  v3 = (ReceiptFulfillment::ReceiptData *)(*((_QWORD *)this + 1) >> 32);
  v2 = (ReceiptFulfillment::ReceiptData *)*((_QWORD *)this + 1);
  if ( v2 != v3 )
  {
    do
      v2 = (ReceiptFulfillment::ReceiptData *)((char *)ReceiptFulfillment::ReceiptData::~ReceiptData(v2) + 32);
    while ( v3 != v2 );
    v2 = (ReceiptFulfillment::ReceiptData *)*((_DWORD *)v1 + 2);
  }
  if ( v2 )
    operator delete((void *)v2);
  j_j_j__ZdlPv_5((void *)v1);
}


CheckReceiptDetails *__fastcall CheckReceiptDetails::~CheckReceiptDetails(CheckReceiptDetails *this)
{
  CheckReceiptDetails *v1; // r4@1
  ReceiptFulfillment::ReceiptData *v2; // r0@1
  ReceiptFulfillment::ReceiptData *v3; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26E721C;
  v3 = (ReceiptFulfillment::ReceiptData *)(*((_QWORD *)this + 1) >> 32);
  v2 = (ReceiptFulfillment::ReceiptData *)*((_QWORD *)this + 1);
  if ( v2 != v3 )
  {
    do
      v2 = (ReceiptFulfillment::ReceiptData *)((char *)ReceiptFulfillment::ReceiptData::~ReceiptData(v2) + 32);
    while ( v3 != v2 );
    v2 = (ReceiptFulfillment::ReceiptData *)*((_DWORD *)v1 + 2);
  }
  if ( v2 )
    operator delete((void *)v2);
  return v1;
}
