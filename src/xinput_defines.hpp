#pragma once

namespace X {
constexpr auto XInput_2_0 = 7;

constexpr auto XI_2_Major = 2;
constexpr auto XI_2_Minor = 4;

constexpr auto XIPropertyDeleted = 0;
constexpr auto XIPropertyCreated = 1;
constexpr auto XIPropertyModified = 2;

constexpr auto XIPropModeReplace = 0;
constexpr auto XIPropModePrepend = 1;
constexpr auto XIPropModeAppend = 2;

constexpr auto XIAnyPropertyType = 0L;

constexpr auto XINotifyNormal = 0;
constexpr auto XINotifyGrab = 1;
constexpr auto XINotifyUngrab = 2;
constexpr auto XINotifyWhileGrabbed = 3;
constexpr auto XINotifyPassiveGrab = 4;
constexpr auto XINotifyPassiveUngrab = 5;

constexpr auto XINotifyAncestor = 0;
constexpr auto XINotifyVirtual = 1;
constexpr auto XINotifyInferior = 2;
constexpr auto XINotifyNonlinear = 3;
constexpr auto XINotifyNonlinearVirtual = 4;
constexpr auto XINotifyPointer = 5;
constexpr auto XINotifyPointerRoot = 6;
constexpr auto XINotifyDetailNone = 7;

constexpr auto XIGrabModeSync = 0;
constexpr auto XIGrabModeAsync = 1;
constexpr auto XIGrabModeTouch = 2;

constexpr auto XIGrabSuccess = 0;
constexpr auto XIAlreadyGrabbed = 1;
constexpr auto XIGrabInvalidTime = 2;
constexpr auto XIGrabNotViewable = 3;
constexpr auto XIGrabFrozen = 4;

constexpr auto XIOwnerEvents = true;
constexpr auto XINoOwnerEvents = false;

constexpr auto XIGrabtypeButton = 0;
constexpr auto XIGrabtypeKeycode = 1;
constexpr auto XIGrabtypeEnter = 2;
constexpr auto XIGrabtypeFocusIn = 3;
constexpr auto XIGrabtypeTouchBegin = 4;
constexpr auto XIGrabtypeGesturePinchBegin = 5;
constexpr auto XIGrabtypeGestureSwipeBegin = 6;

constexpr auto XIAnyModifier = (1U << 31);
constexpr auto XIAnyButton = 0;
constexpr auto XIAnyKeycode = 0;

constexpr auto XIAsyncDevice = 0;
constexpr auto XISyncDevice = 1;
constexpr auto XIReplayDevice = 2;
constexpr auto XIAsyncPairedDevice = 3;
constexpr auto XIAsyncPair = 4;
constexpr auto XISyncPair = 5;
constexpr auto XIAcceptTouch = 6;
constexpr auto XIRejectTouch = 7;

constexpr auto XISlaveSwitch = 1;
constexpr auto XIDeviceChange = 2;

constexpr auto XIMasterAdded = (1 << 0);
constexpr auto XIMasterRemoved = (1 << 1);
constexpr auto XISlaveAdded = (1 << 2);
constexpr auto XISlaveRemoved = (1 << 3);
constexpr auto XISlaveAttached = (1 << 4);
constexpr auto XISlaveDetached = (1 << 5);
constexpr auto XIDeviceEnabled = (1 << 6);
constexpr auto XIDeviceDisabled = (1 << 7);

constexpr auto XIAddMaster = 1;
constexpr auto XIRemoveMaster = 2;
constexpr auto XIAttachSlave = 3;
constexpr auto XIDetachSlave = 4;

constexpr auto XIAttachToMaster = 1;
constexpr auto XIFloating = 2;

constexpr auto XIModeRelative = 0;
constexpr auto XIModeAbsolute = 1;

constexpr auto XIMasterPointer = 1;
constexpr auto XIMasterKeyboard = 2;
constexpr auto XISlavePointer = 3;
constexpr auto XISlaveKeyboard = 4;
constexpr auto XIFloatingSlave = 5;

constexpr auto XIKeyClass = 0;
constexpr auto XIButtonClass = 1;
constexpr auto XIValuatorClass = 2;
constexpr auto XIScrollClass = 3;
constexpr auto XITouchClass = 8;
constexpr auto XIGestureClass = 9;

constexpr auto XIScrollTypeVertical = 1;
constexpr auto XIScrollTypeHorizontal = 2;

constexpr auto XIScrollFlagNoEmulation = (1 << 0);
constexpr auto XIScrollFlagPreferred = (1 << 1);

constexpr auto XIKeyRepeat = (1 << 16);

constexpr auto XIPointerEmulated = (1 << 16);

constexpr auto XITouchPendingEnd = (1 << 16);
constexpr auto XITouchEmulatingPointer = (1 << 17);

constexpr auto XIBarrierPointerReleased = (1 << 0);
constexpr auto XIBarrierDeviceIsGrabbed = (1 << 1);

constexpr auto XIGesturePinchEventCancelled = (1 << 0);

constexpr auto XIGestureSwipeEventCancelled = (1 << 0);

constexpr auto XIDirectTouch = 1;
constexpr auto XIDependentTouch = 2;

constexpr auto XIAllDevices = 0;
constexpr auto XIAllMasterDevices = 1;

constexpr auto XI_DeviceChanged = 1;
constexpr auto XI_KeyPress = 2;
constexpr auto XI_KeyRelease = 3;
constexpr auto XI_ButtonPress = 4;
constexpr auto XI_ButtonRelease = 5;
constexpr auto XI_Motion = 6;
constexpr auto XI_Enter = 7;
constexpr auto XI_Leave = 8;
constexpr auto XI_FocusIn = 9;
constexpr auto XI_FocusOut = 10;
constexpr auto XI_HierarchyChanged = 11;
constexpr auto XI_PropertyEvent = 12;
constexpr auto XI_RawKeyPress = 13;
constexpr auto XI_RawKeyRelease = 14;
constexpr auto XI_RawButtonPress = 15;
constexpr auto XI_RawButtonRelease = 16;
constexpr auto XI_RawMotion = 17;
constexpr auto XI_TouchBegin = 18;
constexpr auto XI_TouchUpdate = 19;
constexpr auto XI_TouchEnd = 20;
constexpr auto XI_TouchOwnership = 21;
constexpr auto XI_RawTouchBegin = 22;
constexpr auto XI_RawTouchUpdate = 23;
constexpr auto XI_RawTouchEnd = 24;
constexpr auto XI_BarrierHit = 25;
constexpr auto XI_BarrierLeave = 26;
constexpr auto XI_GesturePinchBegin = 27;
constexpr auto XI_GesturePinchUpdate = 28;
constexpr auto XI_GesturePinchEnd = 29;
constexpr auto XI_GestureSwipeBegin = 30;
constexpr auto XI_GestureSwipeUpdate = 31;
constexpr auto XI_GestureSwipeEnd = 32;
constexpr auto XI_LASTEVENT = XI_GestureSwipeEnd;

constexpr auto XI_DeviceChangedMask = (1 << XI_DeviceChanged);
constexpr auto XI_KeyPressMask = (1 << XI_KeyPress);
constexpr auto XI_KeyReleaseMask = (1 << XI_KeyRelease);
constexpr auto XI_ButtonPressMask = (1 << XI_ButtonPress);
constexpr auto XI_ButtonReleaseMask = (1 << XI_ButtonRelease);
constexpr auto XI_MotionMask = (1 << XI_Motion);
constexpr auto XI_EnterMask = (1 << XI_Enter);
constexpr auto XI_LeaveMask = (1 << XI_Leave);
constexpr auto XI_FocusInMask = (1 << XI_FocusIn);
constexpr auto XI_FocusOutMask = (1 << XI_FocusOut);
constexpr auto XI_HierarchyChangedMask = (1 << XI_HierarchyChanged);
constexpr auto XI_PropertyEventMask = (1 << XI_PropertyEvent);
constexpr auto XI_RawKeyPressMask = (1 << XI_RawKeyPress);
constexpr auto XI_RawKeyReleaseMask = (1 << XI_RawKeyRelease);
constexpr auto XI_RawButtonPressMask = (1 << XI_RawButtonPress);
constexpr auto XI_RawButtonReleaseMask = (1 << XI_RawButtonRelease);
constexpr auto XI_RawMotionMask = (1 << XI_RawMotion);
constexpr auto XI_TouchBeginMask = (1 << XI_TouchBegin);
constexpr auto XI_TouchEndMask = (1 << XI_TouchEnd);
constexpr auto XI_TouchOwnershipChangedMask = (1 << XI_TouchOwnership);
constexpr auto XI_TouchUpdateMask = (1 << XI_TouchUpdate);
constexpr auto XI_RawTouchBeginMask = (1 << XI_RawTouchBegin);
constexpr auto XI_RawTouchEndMask = (1 << XI_RawTouchEnd);
constexpr auto XI_RawTouchUpdateMask = (1 << XI_RawTouchUpdate);
constexpr auto XI_BarrierHitMask = (1 << XI_BarrierHit);
constexpr auto XI_BarrierLeaveMask = (1 << XI_BarrierLeave);

} // namespace X
