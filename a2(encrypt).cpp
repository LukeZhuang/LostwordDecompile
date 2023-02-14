public static void Encrypt(Stream ifs, Stream ofs, string key, string iv) { }

void FileEncryptor__Encrypt(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  code **ppcVar7;
  ushort uVar8;
  
  if (cRam02a74f69 == '\0') {
    FUN_003d2672(0x3835);
    cRam02a74f69 = '\x01';
  }
  iVar5 = *(int *)(*(int *)(_FileEncryptor_TypeInfo + 0x5c) + 4);
  if (iVar5 == 0) {
    uVar1 = FileEncryptor__GenerateBytes(param_3,0x10);
    uVar2 = FileEncryptor__GenerateBytes(param_4,0x10);
    piVar3 = (int *)thunk_FUN_0040f686(
                                      _System_Security_Cryptography_AesCryptoServiceProvider_TypeInfo
                                      );
    System_Security_Cryptography_AesCryptoServiceProvider___ctor(piVar3,0);
    if (piVar3 == (int *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_0040041c(0);
    }
    (**(code **)(*piVar3 + 0xf8))(piVar3,0x80,*(undefined4 *)(*piVar3 + 0xfc));
    if (piVar3 == (int *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_0040041c(0);
    }
    (**(code **)(*piVar3 + 0x148))(piVar3,0x80,*(undefined4 *)(*piVar3 + 0x14c));
    (**(code **)(*piVar3 + 0x158))(piVar3,1,*(undefined4 *)(*piVar3 + 0x15c));
    if (piVar3 == (int *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_0040041c(0);
    }
    (**(code **)(*piVar3 + 0x168))(piVar3,2,*(undefined4 *)(*piVar3 + 0x16c));
    (**(code **)(*piVar3 + 0x128))(piVar3,uVar1,*(undefined4 *)(*piVar3 + 300));
    if (piVar3 == (int *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_0040041c(0);
    }
    (**(code **)(*piVar3 + 0x118))(piVar3,uVar2,*(undefined4 *)(*piVar3 + 0x11c));
    if (param_2 == (int *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_0040041c(0);
    }
    (**(code **)(*param_2 + 0x198))(param_2,uVar2,0,0x10,*(undefined4 *)(*param_2 + 0x19c));
    piVar3 = (int *)(**(code **)(*piVar3 + 0x170))(piVar3,*(undefined4 *)(*piVar3 + 0x174));
                    // try { // try from 006b30e6 to 006b30f7 has its CatchHandler @ 006b31c8
    piVar4 = (int *)thunk_FUN_0040f686(_System_Security_Cryptography_CryptoStream_TypeInfo);
                    // try { // try from 006b30f8 to 006b3109 has its CatchHandler @ 006b31c3
    System_Security_Cryptography_CryptoStream___ctor(piVar4,param_2,piVar3,1,0);
    while( true ) {
                    // try { // try from 006b311a to 006b312c has its CatchHandler @ 006b31cd
      iVar5 = FUN_0041654a(_byte___TypeInfo,0x400);
      if (iVar5 == 0) {
                    // try { // try from 006b3131 to 006b3178 has its CatchHandler @ 006b31d1
                    // WARNING: Subroutine does not return
        FUN_0040041c(0);
      }
      if (param_1 == (int *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_0040041c(0);
      }
      iVar6 = (**(code **)(*param_1 + 0x188))
                        (param_1,iVar5,0,*(undefined4 *)(iVar5 + 0xc),
                         *(undefined4 *)(*param_1 + 0x18c));
      if (iVar6 < 1) break;
      if (piVar4 == (int *)0x0) {
                    // try { // try from 006b3181 to 006b31a9 has its CatchHandler @ 006b31cf
                    // WARNING: Subroutine does not return
        FUN_0040041c(0);
      }
      (**(code **)(*piVar4 + 0x198))(piVar4,iVar5,0,iVar6,*(undefined4 *)(*piVar4 + 0x19c));
    }
    if (piVar4 != (int *)0x0) {
      iVar5 = *piVar4;
      if (*(ushort *)(iVar5 + 0xb6) != 0) {
        uVar8 = 0;
        do {
          if (*(int *)(*(int *)(iVar5 + 0x58) + (uint)uVar8 * 8) == _System_IDisposable_TypeInfo) {
            ppcVar7 = (code **)(iVar5 + 0xc0 +
                               *(int *)(*(int *)(iVar5 + 0x58) + 4 + (uint)uVar8 * 8) * 8);
            goto LAB_006b3269;
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < *(ushort *)(iVar5 + 0xb6));
      }
                    // try { // try from 006b3239 to 006b3277 has its CatchHandler @ 006b337c
      ppcVar7 = (code **)FUN_003cacfc(piVar4,_System_IDisposable_TypeInfo,0);
LAB_006b3269:
      (**ppcVar7)(piVar4,ppcVar7[1]);
    }
    if (piVar3 != (int *)0x0) {
      iVar5 = *piVar3;
      if (*(ushort *)(iVar5 + 0xb6) != 0) {
        uVar8 = 0;
        do {
          if (*(int *)(*(int *)(iVar5 + 0x58) + (uint)uVar8 * 8) == _System_IDisposable_TypeInfo) {
            ppcVar7 = (code **)(iVar5 + 0xc0 +
                               *(int *)(*(int *)(iVar5 + 0x58) + 4 + (uint)uVar8 * 8) * 8);
            goto LAB_006b3336;
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < *(ushort *)(iVar5 + 0xb6));
      }
      ppcVar7 = (code **)FUN_003cacfc(piVar3,_System_IDisposable_TypeInfo,0);
LAB_006b3336:
      (**ppcVar7)(piVar3,ppcVar7[1]);
    }
  }
  else {
    XLua_DelegateBridge____Gen_Delegate_Imp99(iVar5,param_1,param_2,param_3,param_4,0);
  }
  return;
}