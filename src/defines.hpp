#pragma once

namespace X {

constexpr auto None = 0L;

constexpr auto ParentRelative = 1L;

constexpr auto CopyFromParent = 0L;

constexpr auto PointerWindow = 0L;
constexpr auto InputFocus = 1L;

constexpr auto PointerRoot = 1L;

constexpr auto AnyPropertyType = 0L;

constexpr auto AnyKey = 0L;

constexpr auto AnyButton = 0L;

constexpr auto AllTemporary = 0L;

constexpr auto CurrentTime = 0L;

constexpr auto NoSymbol = 0L;

constexpr unsigned int NoEventMask = 0L;
constexpr unsigned int KeyPressMask = (1L << 0);
constexpr unsigned int KeyReleaseMask = (1L << 1);
constexpr unsigned int ButtonPressMask = (1L << 2);
constexpr unsigned int ButtonReleaseMask = (1L << 3);
constexpr unsigned int EnterWindowMask = (1L << 4);
constexpr unsigned int LeaveWindowMask = (1L << 5);
constexpr unsigned int PointerMotionMask = (1L << 6);
constexpr unsigned int PointerMotionHintMask = (1L << 7);
constexpr unsigned int Button1MotionMask = (1L << 8);
constexpr unsigned int Button2MotionMask = (1L << 9);
constexpr unsigned int Button3MotionMask = (1L << 10);
constexpr unsigned int Button4MotionMask = (1L << 11);
constexpr unsigned int Button5MotionMask = (1L << 12);
constexpr unsigned int ButtonMotionMask = (1L << 13);
constexpr unsigned int KeymapStateMask = (1L << 14);
constexpr unsigned int ExposureMask = (1L << 15);
constexpr unsigned int VisibilityChangeMask = (1L << 16);
constexpr unsigned int StructureNotifyMask = (1L << 17);
constexpr unsigned int ResizeRedirectMask = (1L << 18);
constexpr unsigned int SubstructureNotifyMask = (1L << 19);
constexpr unsigned int SubstructureRedirectMask = (1L << 20);
constexpr unsigned int FocusChangeMask = (1L << 21);
constexpr unsigned int PropertyChangeMask = (1L << 22);
constexpr unsigned int ColormapChangeMask = (1L << 23);
constexpr unsigned int OwnerGrabButtonMask = (1L << 24);

constexpr auto KeyPress = 2;
constexpr auto KeyRelease = 3;
constexpr auto ButtonPress = 4;
constexpr auto ButtonRelease = 5;
constexpr auto MotionNotify = 6;
constexpr auto EnterNotify = 7;
constexpr auto LeaveNotify = 8;
constexpr auto FocusIn = 9;
constexpr auto FocusOut = 10;
constexpr auto KeymapNotify = 11;
constexpr auto Expose = 12;
constexpr auto GraphicsExpose = 13;
constexpr auto NoExpose = 14;
constexpr auto VisibilityNotify = 15;
constexpr auto CreateNotify = 16;
constexpr auto DestroyNotify = 17;
constexpr auto UnmapNotify = 18;
constexpr auto MapNotify = 19;
constexpr auto MapRequest = 20;
constexpr auto ReparentNotify = 21;
constexpr auto ConfigureNotify = 22;
constexpr auto ConfigureRequest = 23;
constexpr auto GravityNotify = 24;
constexpr auto ResizeRequest = 25;
constexpr auto CirculateNotify = 26;
constexpr auto CirculateRequest = 27;
constexpr auto PropertyNotify = 28;
constexpr auto SelectionClear = 29;
constexpr auto SelectionRequest = 30;
constexpr auto SelectionNotify = 31;
constexpr auto ColormapNotify = 32;
constexpr auto ClientMessage = 33;
constexpr auto MappingNotify = 34;
constexpr auto GenericEvent = 35;
constexpr auto LASTEvent = 36;

constexpr unsigned int ShiftMask = (1 << 0);
constexpr unsigned int LockMask = (1 << 1);
constexpr unsigned int ControlMask = (1 << 2);
constexpr unsigned int Mod1Mask = (1 << 3);
constexpr unsigned int Mod2Mask = (1 << 4);
constexpr unsigned int Mod3Mask = (1 << 5);
constexpr unsigned int Mod4Mask = (1 << 6);
constexpr unsigned int Mod5Mask = (1 << 7);

constexpr auto ShiftMapIndex = 0;
constexpr auto LockMapIndex = 1;
constexpr auto ControlMapIndex = 2;
constexpr auto Mod1MapIndex = 3;
constexpr auto Mod2MapIndex = 4;
constexpr auto Mod3MapIndex = 5;
constexpr auto Mod4MapIndex = 6;
constexpr auto Mod5MapIndex = 7;

constexpr unsigned int Button1Mask = (1 << 8);
constexpr unsigned int Button2Mask = (1 << 9);
constexpr unsigned int Button3Mask = (1 << 10);
constexpr unsigned int Button4Mask = (1 << 11);
constexpr unsigned int Button5Mask = (1 << 12);

constexpr unsigned int AnyModifier = (1 << 15);

constexpr auto Button1 = 1;
constexpr auto Button2 = 2;
constexpr auto Button3 = 3;
constexpr auto Button4 = 4;
constexpr auto Button5 = 5;

constexpr auto NotifyNormal = 0;
constexpr auto NotifyGrab = 1;
constexpr auto NotifyUngrab = 2;
constexpr auto NotifyWhileGrabbed = 3;

constexpr auto NotifyHint = 1;

constexpr auto NotifyAncestor = 0;
constexpr auto NotifyVirtual = 1;
constexpr auto NotifyInferior = 2;
constexpr auto NotifyNonlinear = 3;
constexpr auto NotifyNonlinearVirtual = 4;
constexpr auto NotifyPointer = 5;
constexpr auto NotifyPointerRoot = 6;
constexpr auto NotifyDetailNone = 7;

constexpr auto VisibilityUnobscured = 0;
constexpr auto VisibilityPartiallyObscured = 1;
constexpr auto VisibilityFullyObscured = 2;

constexpr auto PlaceOnTop = 0;
constexpr auto PlaceOnBottom = 1;

constexpr auto FamilyInternet = 0;
constexpr auto FamilyDECnet = 1;
constexpr auto FamilyChaos = 2;
constexpr auto FamilyInternet6 = 6;

constexpr auto FamilyServerInterpreted = 5;

constexpr auto PropertyNewValue = 0;
constexpr auto PropertyDelete = 1;

constexpr auto ColormapUninstalled = 0;
constexpr auto ColormapInstalled = 1;

constexpr auto GrabModeSync = 0;
constexpr auto GrabModeAsync = 1;

constexpr auto GrabSuccess = 0;
constexpr auto AlreadyGrabbed = 1;
constexpr auto GrabInvalidTime = 2;
constexpr auto GrabNotViewable = 3;
constexpr auto GrabFrozen = 4;

constexpr auto AsyncPointer = 0;
constexpr auto SyncPointer = 1;
constexpr auto ReplayPointer = 2;
constexpr auto AsyncKeyboard = 3;
constexpr auto SyncKeyboard = 4;
constexpr auto ReplayKeyboard = 5;
constexpr auto AsyncBoth = 6;
constexpr auto SyncBoth = 7;

constexpr auto RevertToNone = (int)0;
constexpr auto RevertToPointerRoot = (int)PointerRoot;
constexpr auto RevertToParent = 2;

constexpr auto Success = 0;
constexpr auto BadRequest = 1;
constexpr auto BadValue = 2;
constexpr auto BadWindow = 3;
constexpr auto BadPixmap = 4;
constexpr auto BadAtom = 5;
constexpr auto BadCursor = 6;
constexpr auto BadFont = 7;
constexpr auto BadMatch = 8;
constexpr auto BadDrawable = 9;
constexpr auto BadAccess = 10;
constexpr auto BadAlloc = 11;
constexpr auto BadColor = 12;
constexpr auto BadGC = 13;
constexpr auto BadIDChoice = 14;
constexpr auto BadName = 15;
constexpr auto BadLength = 16;
constexpr auto BadImplementation = 17;

constexpr auto FirstExtensionError = 128;
constexpr auto LastExtensionError = 255;

constexpr auto InputOutput = 1;
constexpr auto InputOnly = 2;

constexpr unsigned int CWBackPixmap = (1L << 0);
constexpr unsigned int CWBackPixel = (1L << 1);
constexpr unsigned int CWBorderPixmap = (1L << 2);
constexpr unsigned int CWBorderPixel = (1L << 3);
constexpr unsigned int CWBitGravity = (1L << 4);
constexpr unsigned int CWWinGravity = (1L << 5);
constexpr unsigned int CWBackingStore = (1L << 6);
constexpr unsigned int CWBackingPlanes = (1L << 7);
constexpr unsigned int CWBackingPixel = (1L << 8);
constexpr unsigned int CWOverrideRedirect = (1L << 9);
constexpr unsigned int CWSaveUnder = (1L << 10);
constexpr unsigned int CWEventMask = (1L << 11);
constexpr unsigned int CWDontPropagate = (1L << 12);
constexpr unsigned int CWColormap = (1L << 13);
constexpr unsigned int CWCursor = (1L << 14);

constexpr unsigned int CWX = (1 << 0);
constexpr unsigned int CWY = (1 << 1);
constexpr unsigned int CWWidth = (1 << 2);
constexpr unsigned int CWHeight = (1 << 3);
constexpr unsigned int CWBorderWidth = (1 << 4);
constexpr unsigned int CWSibling = (1 << 5);
constexpr unsigned int CWStackMode = (1 << 6);

constexpr auto ForgetGravity = 0;
constexpr auto NorthWestGravity = 1;
constexpr auto NorthGravity = 2;
constexpr auto NorthEastGravity = 3;
constexpr auto WestGravity = 4;
constexpr auto CenterGravity = 5;
constexpr auto EastGravity = 6;
constexpr auto SouthWestGravity = 7;
constexpr auto SouthGravity = 8;
constexpr auto SouthEastGravity = 9;
constexpr auto StaticGravity = 10;

constexpr auto UnmapGravity = 0;

constexpr auto NotUseful = 0;
constexpr auto WhenMapped = 1;
constexpr auto Always = 2;

constexpr auto IsUnmapped = 0;
constexpr auto IsUnviewable = 1;
constexpr auto IsViewable = 2;

constexpr auto SetModeInsert = 0;
constexpr auto SetModeDelete = 1;

constexpr auto DestroyAll = 0;
constexpr auto RetainPermanent = 1;
constexpr auto RetainTemporary = 2;

constexpr auto Above = 0;
constexpr auto Below = 1;
constexpr auto TopIf = 2;
constexpr auto BottomIf = 3;
constexpr auto Opposite = 4;

constexpr auto RaiseLowest = 0;
constexpr auto LowerHighest = 1;

constexpr auto PropModeReplace = 0;
constexpr auto PropModePrepend = 1;
constexpr auto PropModeAppend = 2;

constexpr auto GXclear = 0x0;
constexpr auto GXand = 0x1;
constexpr auto GXandReverse = 0x2;
constexpr auto GXcopy = 0x3;
constexpr auto GXandInverted = 0x4;
constexpr auto GXnoop = 0x5;
constexpr auto GXxor = 0x6;
constexpr auto GXor = 0x7;
constexpr auto GXnor = 0x8;
constexpr auto GXequiv = 0x9;
constexpr auto GXinvert = 0xa;
constexpr auto GXorReverse = 0xb;
constexpr auto GXcopyInverted = 0xc;
constexpr auto GXorInverted = 0xd;
constexpr auto GXnand = 0xe;
constexpr auto GXset = 0xf;

constexpr auto LineSolid = 0;
constexpr auto LineOnOffDash = 1;
constexpr auto LineDoubleDash = 2;

constexpr auto CapNotLast = 0;
constexpr auto CapButt = 1;
constexpr auto CapRound = 2;
constexpr auto CapProjecting = 3;

constexpr auto JoinMiter = 0;
constexpr auto JoinRound = 1;
constexpr auto JoinBevel = 2;

constexpr auto FillSolid = 0;
constexpr auto FillTiled = 1;
constexpr auto FillStippled = 2;
constexpr auto FillOpaqueStippled = 3;

constexpr auto EvenOddRule = 0;
constexpr auto WindingRule = 1;

constexpr auto ClipByChildren = 0;
constexpr auto IncludeInferiors = 1;

constexpr auto Unsorted = 0;
constexpr auto YSorted = 1;
constexpr auto YXSorted = 2;
constexpr auto YXBanded = 3;

constexpr auto CoordModeOrigin = 0;
constexpr auto CoordModePrevious = 1;

constexpr auto Complex = 0;
constexpr auto Nonconvex = 1;
constexpr auto Convex = 2;

constexpr auto ArcChord = 0;
constexpr auto ArcPieSlice = 1;

constexpr unsigned int GCFunction = (1L << 0);
constexpr unsigned int GCPlaneMask = (1L << 1);
constexpr unsigned int GCForeground = (1L << 2);
constexpr unsigned int GCBackground = (1L << 3);
constexpr unsigned int GCLineWidth = (1L << 4);
constexpr unsigned int GCLineStyle = (1L << 5);
constexpr unsigned int GCCapStyle = (1L << 6);
constexpr unsigned int GCJoinStyle = (1L << 7);
constexpr unsigned int GCFillStyle = (1L << 8);
constexpr unsigned int GCFillRule = (1L << 9);
constexpr unsigned int GCTile = (1L << 10);
constexpr unsigned int GCStipple = (1L << 11);
constexpr unsigned int GCTileStipXOrigin = (1L << 12);
constexpr unsigned int GCTileStipYOrigin = (1L << 13);
constexpr unsigned int GCFont = (1L << 14);
constexpr unsigned int GCSubwindowMode = (1L << 15);
constexpr unsigned int GCGraphicsExposures = (1L << 16);
constexpr unsigned int GCClipXOrigin = (1L << 17);
constexpr unsigned int GCClipYOrigin = (1L << 18);
constexpr unsigned int GCClipMask = (1L << 19);
constexpr unsigned int GCDashOffset = (1L << 20);
constexpr unsigned int GCDashList = (1L << 21);
constexpr unsigned int GCArcMode = (1L << 22);

constexpr auto GCLastBit = 22;

constexpr auto FontLeftToRight = 0;
constexpr auto FontRightToLeft = 1;

constexpr auto FontChange = 255;

constexpr auto AllPlanes = (unsigned long)~0L;

constexpr auto XYBitmap = 0;
constexpr auto XYPixmap = 1;
constexpr auto ZPixmap = 2;

constexpr auto AllocNone = 0;
constexpr auto AllocAll = 1;

constexpr unsigned int DoRed = (1 << 0);
constexpr unsigned int DoGreen = (1 << 1);
constexpr unsigned int DoBlue = (1 << 2);

constexpr auto CursorShape = 0;
constexpr auto TileShape = 1;
constexpr auto StippleShape = 2;

constexpr auto AutoRepeatModeOff = 0;
constexpr auto AutoRepeatModeOn = 1;
constexpr auto AutoRepeatModeDefault = 2;

constexpr auto LedModeOff = 0;
constexpr auto LedModeOn = 1;

constexpr unsigned int KBKeyClickPercent = (1L << 0);
constexpr unsigned int KBBellPercent = (1L << 1);
constexpr unsigned int KBBellPitch = (1L << 2);
constexpr unsigned int KBBellDuration = (1L << 3);
constexpr unsigned int KBLed = (1L << 4);
constexpr unsigned int KBLedMode = (1L << 5);
constexpr unsigned int KBKey = (1L << 6);
constexpr unsigned int KBAutoRepeatMode = (1L << 7);

constexpr auto MappingSuccess = 0;
constexpr auto MappingBusy = 1;
constexpr auto MappingFailed = 2;

constexpr auto MappingModifier = 0;
constexpr auto MappingKeyboard = 1;
constexpr auto MappingPointer = 2;

constexpr auto DontPreferBlanking = 0;
constexpr auto PreferBlanking = 1;
constexpr auto DefaultBlanking = 2;

constexpr auto DisableScreenSaver = 0;
constexpr auto DisableScreenInterval = 0;

constexpr auto DontAllowExposures = 0;
constexpr auto AllowExposures = 1;
constexpr auto DefaultExposures = 2;

constexpr auto ScreenSaverReset = 0;
constexpr auto ScreenSaverActive = 1;

constexpr auto HostInsert = 0;
constexpr auto HostDelete = 1;

constexpr auto EnableAccess = 1;
constexpr auto DisableAccess = 0;

constexpr auto StaticGray = 0;
constexpr auto GrayScale = 1;
constexpr auto StaticColor = 2;
constexpr auto PseudoColor = 3;
constexpr auto TrueColor = 4;
constexpr auto DirectColor = 5;

constexpr auto LSBFirst = 0;
constexpr auto MSBFirst = 1;

} // namespace X
