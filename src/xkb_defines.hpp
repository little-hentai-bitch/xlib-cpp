#pragma once
#include "data_types.hpp"
#include "xinput_defines.hpp"

namespace X {

typedef XID KeySym;

constexpr auto X_kbUseExtension = 0;
constexpr auto X_kbSelectEvents = 1;
constexpr auto X_kbBell = 3;
constexpr auto X_kbGetState = 4;
constexpr auto X_kbLatchLockState = 5;
constexpr auto X_kbGetControls = 6;
constexpr auto X_kbSetControls = 7;
constexpr auto X_kbGetMap = 8;
constexpr auto X_kbSetMap = 9;
constexpr auto X_kbGetCompatMap = 10;
constexpr auto X_kbSetCompatMap = 11;
constexpr auto X_kbGetIndicatorState = 12;
constexpr auto X_kbGetIndicatorMap = 13;
constexpr auto X_kbSetIndicatorMap = 14;
constexpr auto X_kbGetNamedIndicator = 15;
constexpr auto X_kbSetNamedIndicator = 16;
constexpr auto X_kbGetNames = 17;
constexpr auto X_kbSetNames = 18;
constexpr auto X_kbGetGeometry = 19;
constexpr auto X_kbSetGeometry = 20;
constexpr auto X_kbPerClientFlags = 21;
constexpr auto X_kbListComponents = 22;
constexpr auto X_kbGetKbdByName = 23;
constexpr auto X_kbGetDeviceInfo = 24;
constexpr auto X_kbSetDeviceInfo = 25;
constexpr auto X_kbSetDebuggingFlags = 101;

constexpr auto XkbEventCode = 0;
constexpr auto XkbNumberEvents = (XkbEventCode + 1);

constexpr auto XkbNewKeyboardNotify = 0;
constexpr auto XkbMapNotify = 1;
constexpr auto XkbStateNotify = 2;
constexpr auto XkbControlsNotify = 3;
constexpr auto XkbIndicatorStateNotify = 4;
constexpr auto XkbIndicatorMapNotify = 5;
constexpr auto XkbNamesNotify = 6;
constexpr auto XkbCompatMapNotify = 7;
constexpr auto XkbBellNotify = 8;
constexpr auto XkbActionMessage = 9;
constexpr auto XkbAccessXNotify = 10;
constexpr auto XkbExtensionDeviceNotify = 11;

constexpr auto XkbNewKeyboardNotifyMask = (1L << 0);
constexpr auto XkbMapNotifyMask = (1L << 1);
constexpr auto XkbStateNotifyMask = (1L << 2);
constexpr auto XkbControlsNotifyMask = (1L << 3);
constexpr auto XkbIndicatorStateNotifyMask = (1L << 4);
constexpr auto XkbIndicatorMapNotifyMask = (1L << 5);
constexpr auto XkbNamesNotifyMask = (1L << 6);
constexpr auto XkbCompatMapNotifyMask = (1L << 7);
constexpr auto XkbBellNotifyMask = (1L << 8);
constexpr auto XkbActionMessageMask = (1L << 9);
constexpr auto XkbAccessXNotifyMask = (1L << 10);
constexpr auto XkbExtensionDeviceNotifyMask = (1L << 11);
constexpr auto XkbAllEventsMask = (0xFFF);

constexpr auto XkbNKN_KeycodesMask = (1L << 0);
constexpr auto XkbNKN_GeometryMask = (1L << 1);
constexpr auto XkbNKN_DeviceIDMask = (1L << 2);
constexpr auto XkbAllNewKeyboardEventsMask = (0x7);

constexpr auto XkbAXN_SKPress = 0;
constexpr auto XkbAXN_SKAccept = 1;
constexpr auto XkbAXN_SKReject = 2;
constexpr auto XkbAXN_SKRelease = 3;
constexpr auto XkbAXN_BKAccept = 4;
constexpr auto XkbAXN_BKReject = 5;
constexpr auto XkbAXN_AXKWarning = 6;

constexpr auto XkbAXN_SKPressMask = (1L << 0);
constexpr auto XkbAXN_SKAcceptMask = (1L << 1);
constexpr auto XkbAXN_SKRejectMask = (1L << 2);
constexpr auto XkbAXN_SKReleaseMask = (1L << 3);
constexpr auto XkbAXN_BKAcceptMask = (1L << 4);
constexpr auto XkbAXN_BKRejectMask = (1L << 5);
constexpr auto XkbAXN_AXKWarningMask = (1L << 6);
constexpr auto XkbAllAccessXEventsMask = (0x7f);

constexpr auto XkbKeyboard = 0;
constexpr auto XkbNumberErrors = 1;

constexpr auto XkbErr_BadDevice = 0xff;
constexpr auto XkbErr_BadClass = 0xfe;
constexpr auto XkbErr_BadId = 0xfd;

constexpr auto XkbClientMapMask = (1L << 0);
constexpr auto XkbServerMapMask = (1L << 1);
constexpr auto XkbCompatMapMask = (1L << 2);
constexpr auto XkbIndicatorMapMask = (1L << 3);
constexpr auto XkbNamesMask = (1L << 4);
constexpr auto XkbGeometryMask = (1L << 5);
constexpr auto XkbControlsMask = (1L << 6);
constexpr auto XkbAllComponentsMask = (0x7f);

constexpr auto XkbModifierStateMask = (1L << 0);
constexpr auto XkbModifierBaseMask = (1L << 1);
constexpr auto XkbModifierLatchMask = (1L << 2);
constexpr auto XkbModifierLockMask = (1L << 3);
constexpr auto XkbGroupStateMask = (1L << 4);
constexpr auto XkbGroupBaseMask = (1L << 5);
constexpr auto XkbGroupLatchMask = (1L << 6);
constexpr auto XkbGroupLockMask = (1L << 7);
constexpr auto XkbCompatStateMask = (1L << 8);
constexpr auto XkbGrabModsMask = (1L << 9);
constexpr auto XkbCompatGrabModsMask = (1L << 10);
constexpr auto XkbLookupModsMask = (1L << 11);
constexpr auto XkbCompatLookupModsMask = (1L << 12);
constexpr auto XkbPointerButtonMask = (1L << 13);
constexpr auto XkbAllStateComponentsMask = (0x3fff);

constexpr auto XkbRepeatKeysMask = (1L << 0);
constexpr auto XkbSlowKeysMask = (1L << 1);
constexpr auto XkbBounceKeysMask = (1L << 2);
constexpr auto XkbStickyKeysMask = (1L << 3);
constexpr auto XkbMouseKeysMask = (1L << 4);
constexpr auto XkbMouseKeysAccelMask = (1L << 5);
constexpr auto XkbAccessXKeysMask = (1L << 6);
constexpr auto XkbAccessXTimeoutMask = (1L << 7);
constexpr auto XkbAccessXFeedbackMask = (1L << 8);
constexpr auto XkbAudibleBellMask = (1L << 9);
constexpr auto XkbOverlay1Mask = (1L << 10);
constexpr auto XkbOverlay2Mask = (1L << 11);
constexpr auto XkbIgnoreGroupLockMask = (1L << 12);
constexpr auto XkbGroupsWrapMask = (1L << 27);
constexpr auto XkbInternalModsMask = (1L << 28);
constexpr auto XkbIgnoreLockModsMask = (1L << 29);
constexpr auto XkbPerKeyRepeatMask = (1L << 30);
constexpr auto XkbControlsEnabledMask = (1L << 31);

constexpr auto XkbAccessXOptionsMask =
    (XkbStickyKeysMask | XkbAccessXFeedbackMask);

constexpr auto XkbAllBooleanCtrlsMask = (0x00001FFF);
constexpr auto XkbAllControlsMask = (0xF8001FFF);

constexpr auto XkbAX_SKPressFBMask = (1L << 0);
constexpr auto XkbAX_SKAcceptFBMask = (1L << 1);
constexpr auto XkbAX_FeatureFBMask = (1L << 2);
constexpr auto XkbAX_SlowWarnFBMask = (1L << 3);
constexpr auto XkbAX_IndicatorFBMask = (1L << 4);
constexpr auto XkbAX_StickyKeysFBMask = (1L << 5);
constexpr auto XkbAX_TwoKeysMask = (1L << 6);
constexpr auto XkbAX_LatchToLockMask = (1L << 7);
constexpr auto XkbAX_SKReleaseFBMask = (1L << 8);
constexpr auto XkbAX_SKRejectFBMask = (1L << 9);
constexpr auto XkbAX_BKRejectFBMask = (1L << 10);
constexpr auto XkbAX_DumbBellFBMask = (1L << 11);
constexpr auto XkbAX_FBOptionsMask = (0xF3F);
constexpr auto XkbAX_SKOptionsMask = (0x0C0);
constexpr auto XkbAX_AllOptionsMask = (0xFFF);

constexpr auto XkbUseCoreKbd = 0x0100;
constexpr auto XkbUseCorePtr = 0x0200;
constexpr auto XkbDfltXIClass = 0x0300;
constexpr auto XkbDfltXIId = 0x0400;
constexpr auto XkbAllXIClasses = 0x0500;
constexpr auto XkbAllXIIds = 0x0600;
constexpr auto XkbXINone = 0xff00;

constexpr auto XkbNoModifier = 0xff;
constexpr auto XkbNoShiftLevel = 0xff;
constexpr auto XkbNoShape = 0xff;
constexpr auto XkbNoIndicator = 0xff;

constexpr auto XkbNoModifierMask = 0;
constexpr auto XkbAllModifiersMask = 0xff;
constexpr auto XkbAllVirtualModsMask = 0xffff;

constexpr auto XkbNumKbdGroups = 4;
constexpr auto XkbMaxKbdGroup = (XkbNumKbdGroups - 1);

constexpr auto XkbMaxMouseKeysBtn = 4;

constexpr auto XkbGroup1Index = 0;
constexpr auto XkbGroup2Index = 1;
constexpr auto XkbGroup3Index = 2;
constexpr auto XkbGroup4Index = 3;
constexpr auto XkbAnyGroup = 254;
constexpr auto XkbAllGroups = 255;

constexpr auto XkbGroup1Mask = (1 << 0);
constexpr auto XkbGroup2Mask = (1 << 1);
constexpr auto XkbGroup3Mask = (1 << 2);
constexpr auto XkbGroup4Mask = (1 << 3);
constexpr auto XkbAnyGroupMask = (1 << 7);
constexpr auto XkbAllGroupsMask = (0xf);

constexpr auto XkbWrapIntoRange = (0x00);
constexpr auto XkbClampIntoRange = (0x40);
constexpr auto XkbRedirectIntoRange = (0x80);

constexpr auto XkbSA_ClearLocks = (1L << 0);
constexpr auto XkbSA_LatchToLock = (1L << 1);

constexpr auto XkbSA_LockNoLock = (1L << 0);
constexpr auto XkbSA_LockNoUnlock = (1L << 1);

constexpr auto XkbSA_UseModMapMods = (1L << 2);

constexpr auto XkbSA_GroupAbsolute = (1L << 2);
constexpr auto XkbSA_UseDfltButton = 0;

constexpr auto XkbSA_NoAcceleration = (1L << 0);
constexpr auto XkbSA_MoveAbsoluteX = (1L << 1);
constexpr auto XkbSA_MoveAbsoluteY = (1L << 2);

constexpr auto XkbSA_ISODfltIsGroup = (1L << 7);
constexpr auto XkbSA_ISONoAffectMods = (1L << 6);
constexpr auto XkbSA_ISONoAffectGroup = (1L << 5);
constexpr auto XkbSA_ISONoAffectPtr = (1L << 4);
constexpr auto XkbSA_ISONoAffectCtrls = (1L << 3);
constexpr auto XkbSA_ISOAffectMask = (0x78);

constexpr auto XkbSA_MessageOnPress = (1L << 0);
constexpr auto XkbSA_MessageOnRelease = (1L << 1);
constexpr auto XkbSA_MessageGenKeyEvent = (1L << 2);

constexpr auto XkbSA_AffectDfltBtn = 1;
constexpr auto XkbSA_DfltBtnAbsolute = (1L << 2);

constexpr auto XkbSA_SwitchApplication = (1L << 0);
constexpr auto XkbSA_SwitchAbsolute = (1L << 2);

constexpr auto XkbSA_IgnoreVal = (0x00);
constexpr auto XkbSA_SetValMin = (0x10);
constexpr auto XkbSA_SetValCenter = (0x20);
constexpr auto XkbSA_SetValMax = (0x30);
constexpr auto XkbSA_SetValRelative = (0x40);
constexpr auto XkbSA_SetValAbsolute = (0x50);
constexpr auto XkbSA_ValOpMask = (0x70);
constexpr auto XkbSA_ValScaleMask = (0x07);

constexpr auto XkbSA_NoAction = 0x00;
constexpr auto XkbSA_SetMods = 0x01;
constexpr auto XkbSA_LatchMods = 0x02;
constexpr auto XkbSA_LockMods = 0x03;
constexpr auto XkbSA_SetGroup = 0x04;
constexpr auto XkbSA_LatchGroup = 0x05;
constexpr auto XkbSA_LockGroup = 0x06;
constexpr auto XkbSA_MovePtr = 0x07;
constexpr auto XkbSA_PtrBtn = 0x08;
constexpr auto XkbSA_LockPtrBtn = 0x09;
constexpr auto XkbSA_SetPtrDflt = 0x0a;
constexpr auto XkbSA_ISOLock = 0x0b;
constexpr auto XkbSA_Terminate = 0x0c;
constexpr auto XkbSA_SwitchScreen = 0x0d;
constexpr auto XkbSA_SetControls = 0x0e;
constexpr auto XkbSA_LockControls = 0x0f;
constexpr auto XkbSA_ActionMessage = 0x10;
constexpr auto XkbSA_RedirectKey = 0x11;
constexpr auto XkbSA_DeviceBtn = 0x12;
constexpr auto XkbSA_LockDeviceBtn = 0x13;
constexpr auto XkbSA_DeviceValuator = 0x14;
constexpr auto XkbSA_LastAction = XkbSA_DeviceValuator;
constexpr auto XkbSA_NumActions = (XkbSA_LastAction + 1);

constexpr auto XkbSA_XFree86Private = 0x86;

constexpr auto XkbSA_BreakLatch =
    ((1 << XkbSA_NoAction) | (1 << XkbSA_PtrBtn) | (1 << XkbSA_LockPtrBtn) |
     (1 << XkbSA_Terminate) | (1 << XkbSA_SwitchScreen) |
     (1 << XkbSA_SetControls) | (1 << XkbSA_LockControls) |
     (1 << XkbSA_ActionMessage) | (1 << XkbSA_RedirectKey) |
     (1 << XkbSA_DeviceBtn) | (1 << XkbSA_LockDeviceBtn));

constexpr auto XkbKB_Permanent = 0x80;
constexpr auto XkbKB_OpMask = 0x7f;

constexpr auto XkbKB_Default = 0x00;
constexpr auto XkbKB_Lock = 0x01;
constexpr auto XkbKB_RadioGroup = 0x02;
constexpr auto XkbKB_Overlay1 = 0x03;
constexpr auto XkbKB_Overlay2 = 0x04;

constexpr auto XkbKB_RGAllowNone = 0x80;

constexpr auto XkbMinLegalKeyCode = 8;
constexpr auto XkbMaxLegalKeyCode = 255;
constexpr auto XkbMaxKeyCount = (XkbMaxLegalKeyCode - XkbMinLegalKeyCode + 1);
constexpr auto XkbPerKeyBitArraySize = ((XkbMaxLegalKeyCode + 1) / 8);

constexpr auto XkbNumModifiers = 8;
constexpr auto XkbNumVirtualMods = 16;
constexpr auto XkbNumIndicators = 32;
constexpr auto XkbAllIndicatorsMask = (0xffffffff);
constexpr auto XkbMaxRadioGroups = 32;
constexpr auto XkbAllRadioGroupsMask = (0xffffffff);
constexpr auto XkbMaxShiftLevel = 63;
constexpr auto XkbMaxSymsPerKey = (XkbMaxShiftLevel * XkbNumKbdGroups);
constexpr auto XkbRGMaxMembers = 12;
constexpr auto XkbActionMessageLength = 6;
constexpr auto XkbKeyNameLength = 4;
constexpr auto XkbMaxRedirectCount = 8;

constexpr auto XkbGeomPtsPerMM = 10;
constexpr auto XkbGeomMaxColors = 32;
constexpr auto XkbGeomMaxLabelColors = 3;
constexpr auto XkbGeomMaxPriority = 255;

constexpr auto XkbOneLevelIndex = 0;
constexpr auto XkbTwoLevelIndex = 1;
constexpr auto XkbAlphabeticIndex = 2;
constexpr auto XkbKeypadIndex = 3;
constexpr auto XkbLastRequiredType = XkbKeypadIndex;
constexpr auto XkbNumRequiredTypes = (XkbLastRequiredType + 1);
constexpr auto XkbMaxKeyTypes = 255;

constexpr auto XkbOneLevelMask = (1 << 0);
constexpr auto XkbTwoLevelMask = (1 << 1);
constexpr auto XkbAlphabeticMask = (1 << 2);
constexpr auto XkbKeypadMask = (1 << 3);
constexpr auto XkbAllRequiredTypes = (0xf);

constexpr auto XkbName = "XKEYBOARD";
constexpr auto XkbMajorVersion = 1;
constexpr auto XkbMinorVersion = 0;

constexpr auto XkbExplicitKeyTypesMask = (0x0f);
constexpr auto XkbExplicitKeyType1Mask = (1 << 0);
constexpr auto XkbExplicitKeyType2Mask = (1 << 1);
constexpr auto XkbExplicitKeyType3Mask = (1 << 2);
constexpr auto XkbExplicitKeyType4Mask = (1 << 3);
constexpr auto XkbExplicitInterpretMask = (1 << 4);
constexpr auto XkbExplicitAutoRepeatMask = (1 << 5);
constexpr auto XkbExplicitBehaviorMask = (1 << 6);
constexpr auto XkbExplicitVModMapMask = (1 << 7);
constexpr auto XkbAllExplicitMask = (0xff);

constexpr auto XkbKeyTypesMask = (1 << 0);
constexpr auto XkbKeySymsMask = (1 << 1);
constexpr auto XkbModifierMapMask = (1 << 2);
constexpr auto XkbExplicitComponentsMask = (1 << 3);
constexpr auto XkbKeyActionsMask = (1 << 4);
constexpr auto XkbKeyBehaviorsMask = (1 << 5);
constexpr auto XkbVirtualModsMask = (1 << 6);
constexpr auto XkbVirtualModMapMask = (1 << 7);

constexpr auto XkbAllClientInfoMask =
    (XkbKeyTypesMask | XkbKeySymsMask | XkbModifierMapMask);
constexpr auto XkbAllServerInfoMask =
    (XkbExplicitComponentsMask | XkbKeyActionsMask | XkbKeyBehaviorsMask |
     XkbVirtualModsMask | XkbVirtualModMapMask);
constexpr auto XkbAllMapComponentsMask =
    (XkbAllClientInfoMask | XkbAllServerInfoMask);

constexpr auto XkbSI_AutoRepeat = (1 << 0);
constexpr auto XkbSI_LockingKey = (1 << 1);

constexpr auto XkbSI_LevelOneOnly = (0x80);
constexpr auto XkbSI_OpMask = (0x7f);
constexpr auto XkbSI_NoneOf = (0);
constexpr auto XkbSI_AnyOfOrNone = (1);
constexpr auto XkbSI_AnyOf = (2);
constexpr auto XkbSI_AllOf = (3);
constexpr auto XkbSI_Exactly = (4);

constexpr auto XkbIM_NoExplicit = (1L << 7);
constexpr auto XkbIM_NoAutomatic = (1L << 6);
constexpr auto XkbIM_LEDDrivesKB = (1L << 5);

constexpr auto XkbIM_UseBase = (1L << 0);
constexpr auto XkbIM_UseLatched = (1L << 1);
constexpr auto XkbIM_UseLocked = (1L << 2);
constexpr auto XkbIM_UseEffective = (1L << 3);
constexpr auto XkbIM_UseCompat = (1L << 4);

constexpr auto XkbIM_UseNone = 0;
constexpr auto XkbIM_UseAnyGroup =
    (XkbIM_UseBase | XkbIM_UseLatched | XkbIM_UseLocked | XkbIM_UseEffective);
constexpr auto XkbIM_UseAnyMods = (XkbIM_UseAnyGroup | XkbIM_UseCompat);

constexpr auto XkbSymInterpMask = (1 << 0);
constexpr auto XkbGroupCompatMask = (1 << 1);
constexpr auto XkbAllCompatMask = (0x3);

constexpr auto XkbKeycodesNameMask = (1 << 0);
constexpr auto XkbGeometryNameMask = (1 << 1);
constexpr auto XkbSymbolsNameMask = (1 << 2);
constexpr auto XkbPhysSymbolsNameMask = (1 << 3);
constexpr auto XkbTypesNameMask = (1 << 4);
constexpr auto XkbCompatNameMask = (1 << 5);
constexpr auto XkbKeyTypeNamesMask = (1 << 6);
constexpr auto XkbKTLevelNamesMask = (1 << 7);
constexpr auto XkbIndicatorNamesMask = (1 << 8);
constexpr auto XkbKeyNamesMask = (1 << 9);
constexpr auto XkbKeyAliasesMask = (1 << 10);
constexpr auto XkbVirtualModNamesMask = (1 << 11);
constexpr auto XkbGroupNamesMask = (1 << 12);
constexpr auto XkbRGNamesMask = (1 << 13);
constexpr auto XkbComponentNamesMask = (0x3f);
constexpr auto XkbAllNamesMask = (0x3fff);

constexpr auto XkbGBN_TypesMask = (1L << 0);
constexpr auto XkbGBN_CompatMapMask = (1L << 1);
constexpr auto XkbGBN_ClientSymbolsMask = (1L << 2);
constexpr auto XkbGBN_ServerSymbolsMask = (1L << 3);
constexpr auto XkbGBN_SymbolsMask =
    (XkbGBN_ClientSymbolsMask | XkbGBN_ServerSymbolsMask);
constexpr auto XkbGBN_IndicatorMapMask = (1L << 4);
constexpr auto XkbGBN_KeyNamesMask = (1L << 5);
constexpr auto XkbGBN_GeometryMask = (1L << 6);
constexpr auto XkbGBN_OtherNamesMask = (1L << 7);
constexpr auto XkbGBN_AllComponentsMask = (0xff);

constexpr auto XkbLC_Hidden = (1L << 0);
constexpr auto XkbLC_Default = (1L << 1);
constexpr auto XkbLC_Partial = (1L << 2);

constexpr auto XkbLC_AlphanumericKeys = (1L << 8);
constexpr auto XkbLC_ModifierKeys = (1L << 9);
constexpr auto XkbLC_KeypadKeys = (1L << 10);
constexpr auto XkbLC_FunctionKeys = (1L << 11);
constexpr auto XkbLC_AlternateGroup = (1L << 12);

constexpr auto XkbXI_KeyboardsMask = (1L << 0);
constexpr auto XkbXI_ButtonActionsMask = (1L << 1);
constexpr auto XkbXI_IndicatorNamesMask = (1L << 2);
constexpr auto XkbXI_IndicatorMapsMask = (1L << 3);
constexpr auto XkbXI_IndicatorStateMask = (1L << 4);
constexpr auto XkbXI_UnsupportedFeatureMask = (1L << 15);
constexpr auto XkbXI_AllFeaturesMask = (0x001f);
constexpr auto XkbXI_AllDeviceFeaturesMask = (0x001e);

constexpr auto XkbXI_IndicatorsMask = (0x001c);
constexpr auto XkbAllExtensionDeviceEventsMask = (0x801f);

constexpr auto XkbPCF_DetectableAutoRepeatMask = (1L << 0);
constexpr auto XkbPCF_GrabsUseXKBStateMask = (1L << 1);
constexpr auto XkbPCF_AutoResetControlsMask = (1L << 2);
constexpr auto XkbPCF_LookupStateWhenGrabbed = (1L << 3);
constexpr auto XkbPCF_SendEventUsesXKBState = (1L << 4);
constexpr auto XkbPCF_AllFlagsMask = (0x1F);

constexpr auto XkbAllStateEventsMask = XkbAllStateComponentsMask;
constexpr auto XkbAllMapEventsMask = XkbAllMapComponentsMask;
constexpr auto XkbAllControlEventsMask = XkbAllControlsMask;
constexpr auto XkbAllIndicatorEventsMask = XkbAllIndicatorsMask;
constexpr auto XkbAllNameEventsMask = XkbAllNamesMask;
constexpr auto XkbAllCompatMapEventsMask = XkbAllCompatMask;
constexpr auto XkbAllBellEventsMask = (1L << 0);
constexpr auto XkbAllActionMessagesMask = (1L << 0);

constexpr auto XkbDF_DisableLocks = (1 << 0);

} // namespace X
