public static void Decrypt(Stream ifs, Stream ofs, string key) { }

void FileEncryptor__Decrypt(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  code **ppcVar6;
  ushort uVar7;
  
  if (cRam02a74f6a == '\0') {
    FUN_003d2672(0x3834);
    cRam02a74f6a = '\x01';
  }
  iVar4 = *(int *)(*(int *)(_FileEncryptor_TypeInfo + 0x5c) + 8);
  if (iVar4 == 0) {
    uVar1 = FileEncryptor__GenerateBytes(param_3,0x10);
    piVar2 = (int *)thunk_FUN_0040f686(
                                      _System_Security_Cryptography_AesCryptoServiceProvider_TypeInfo
                                      );
    System_Security_Cryptography_AesCryptoServiceProvider___ctor(piVar2,0);
    if (piVar2 == (int *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_0040041c(0);
    }
    (**(code **)(*piVar2 + 0xf8))(piVar2,0x80,*(undefined4 *)(*piVar2 + 0xfc));
    if (piVar2 == (int *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_0040041c(0);
    }
    (**(code **)(*piVar2 + 0x148))(piVar2,0x80,*(undefined4 *)(*piVar2 + 0x14c));
    (**(code **)(*piVar2 + 0x158))(piVar2,1,*(undefined4 *)(*piVar2 + 0x15c));
    if (piVar2 == (int *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_0040041c(0);
    }
    (**(code **)(*piVar2 + 0x168))(piVar2,2,*(undefined4 *)(*piVar2 + 0x16c));
    (**(code **)(*piVar2 + 0x128))(piVar2,uVar1,*(undefined4 *)(*piVar2 + 300));
    uVar1 = FUN_0041654a(_byte___TypeInfo,0x10);
    if (param_1 == (int *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_0040041c(0);
    }
    (**(code **)(*param_1 + 0x188))(param_1,uVar1,0,0x10,*(undefined4 *)(*param_1 + 0x18c));
    (**(code **)(*piVar2 + 0x118))(piVar2,uVar1,*(undefined4 *)(*piVar2 + 0x11c));
    piVar2 = (int *)(**(code **)(*piVar2 + 0x180))(piVar2,*(undefined4 *)(*piVar2 + 0x184));
                    // try { // try from 006b35a5 to 006b35b6 has its CatchHandler @ 006b366c
    piVar3 = (int *)thunk_FUN_0040f686(_System_Security_Cryptography_CryptoStream_TypeInfo);
                    // try { // try from 006b35b7 to 006b35cb has its CatchHandler @ 006b3667
    System_Security_Cryptography_CryptoStream___ctor(piVar3,param_2,piVar2,1,0);
    while( true ) {
                    // try { // try from 006b35d2 to 006b35e4 has its CatchHandler @ 006b3671
      iVar4 = FUN_0041654a(_byte___TypeInfo,0x400);
      if (iVar4 == 0) {
                    // try { // try from 006b35e9 to 006b361c has its CatchHandler @ 006b3675
                    // WARNING: Subroutine does not return
        FUN_0040041c(0);
      }
      iVar5 = (**(code **)(*param_1 + 0x188))
                        (param_1,iVar4,0,*(undefined4 *)(iVar4 + 0xc),
                         *(undefined4 *)(*param_1 + 0x18c));
      if (iVar5 < 1) break;
      if (piVar3 == (int *)0x0) {
                    // try { // try from 006b3625 to 006b364d has its CatchHandler @ 006b3673
                    // WARNING: Subroutine does not return
        FUN_0040041c(0);
      }
      (**(code **)(*piVar3 + 0x198))(piVar3,iVar4,0,iVar5,*(undefined4 *)(*piVar3 + 0x19c));
    }
    if (piVar3 != (int *)0x0) {
      iVar4 = *piVar3;
      if (*(ushort *)(iVar4 + 0xb6) != 0) {
        uVar7 = 0;
        do {
          if (*(int *)(*(int *)(iVar4 + 0x58) + (uint)uVar7 * 8) == _System_IDisposable_TypeInfo) {
            ppcVar6 = (code **)(iVar4 + 0xc0 +
                               *(int *)(*(int *)(iVar4 + 0x58) + 4 + (uint)uVar7 * 8) * 8);
            goto LAB_006b370d;
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < *(ushort *)(iVar4 + 0xb6));
      }
                    // try { // try from 006b36dd to 006b371b has its CatchHandler @ 006b3822
      ppcVar6 = (code **)FUN_003cacfc(piVar3,_System_IDisposable_TypeInfo,0);
LAB_006b370d:
      (**ppcVar6)(piVar3,ppcVar6[1]);
    }
    if (piVar2 != (int *)0x0) {
      iVar4 = *piVar2;
      if (*(ushort *)(iVar4 + 0xb6) != 0) {
        uVar7 = 0;
        do {
          if (*(int *)(*(int *)(iVar4 + 0x58) + (uint)uVar7 * 8) == _System_IDisposable_TypeInfo) {
            ppcVar6 = (code **)(iVar4 + 0xc0 +
                               *(int *)(*(int *)(iVar4 + 0x58) + 4 + (uint)uVar7 * 8) * 8);
            goto LAB_006b37dc;
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < *(ushort *)(iVar4 + 0xb6));
      }
      ppcVar6 = (code **)FUN_003cacfc(piVar2,_System_IDisposable_TypeInfo,0);
LAB_006b37dc:
      (**ppcVar6)(piVar2,ppcVar6[1]);
    }
  }
  else {
    XLua_DelegateBridge____Gen_Delegate_Imp26(iVar4,param_1,param_2,param_3,0);
  }
  return;
}