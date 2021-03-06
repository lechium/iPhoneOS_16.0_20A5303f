//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AccessibilityAudit/AXAuditService.h>

@interface XADAuditServer : AXAuditService
{
    _Bool __handelingScreenChanged;	// 8 = 0x8
    long long __screenChangeHandleAttempts;	// 16 = 0x10
}

+ (Class)deviceSettingsManagerClass;	// IMP=0x0020000000009bfc
@property(nonatomic) long long _screenChangeHandleAttempts; // @synthesize _screenChangeHandleAttempts=__screenChangeHandleAttempts;
@property(nonatomic) _Bool _handelingScreenChanged; // @synthesize _handelingScreenChanged=__handelingScreenChanged;
- (void)eventManager:(id)arg1 notificationReceived:(int)arg2 humanReadable:(id)arg3;	// IMP=0x001000000000cc14
- (void)didReceiveAccessibilityNotification:(int)arg1;	// IMP=0x001000000000cad7
- (void)_handleScreenChangedNotification;	// IMP=0x001000000000c8da
- (void)_handleLayoutChangedNotification;	// IMP=0x001000000000c80e
- (void)eventManager:(id)arg1 eventToHighlightPoint:(struct CGPoint)arg2;	// IMP=0x001000000000c6f1
- (void)eventManager:(id)arg1 stoppedSnarfingEvents:(_Bool)arg2;	// IMP=0x001000000000c5fa
- (void)deviceDidGetTargeted;	// IMP=0x001000000000c4e7
- (id)deviceFetchElementAtNormalizedDeviceCoordinate:(id)arg1;	// IMP=0x001000000000c2e7
- (id)deviceFetchResolvesElementsOnSimulator;	// IMP=0x001000000000c1a3
- (id)deviceFetchSpecialElement:(id)arg1;	// IMP=0x001000000000bfc1
- (void)eventManager:(id)arg1 systemFocusDidMoveToElement:(id)arg2;	// IMP=0x001000000000be9a
- (void)deviceElement:(id)arg1 setValue:(id)arg2 attribute:(id)arg3;	// IMP=0x001000000000be94
- (id)deviceElement:(id)arg1 valueForParameterizedAttribute:(id)arg2 withObject:(id)arg3;	// IMP=0x001000000000ba9d
- (id)deviceElement:(id)arg1 valueForAttribute:(id)arg2;	// IMP=0x001000000000b765
- (id)deviceElement:(id)arg1 performAction:(id)arg2 withValue:(id)arg3;	// IMP=0x001000000000b44a
- (void)inspectorManager:(id)arg1 inspectorFocusDidChange:(id)arg2;	// IMP=0x001000000000b313
- (void)inspectorManager:(id)arg1 inspectorElementPropertiesChanged:(id)arg2;	// IMP=0x001000000000b1dc
- (void)inspectorManager:(id)arg1 inspectorMonitoredEventTypeChanged:(unsigned long long)arg2;	// IMP=0x001000000000b121
- (id)deviceInspectorCanNavWhileMonitoringEvents;	// IMP=0x001000000000b114
- (id)deviceInspectorSupportedEventTypes;	// IMP=0x001000000000b107
- (void)deviceInspectorLockOnCurrentElement;	// IMP=0x001000000000b029
- (void)deviceInspectorShowVisuals:(id)arg1;	// IMP=0x001000000000ae7c
- (void)deviceInspectorSetMonitoredEventType:(id)arg1;	// IMP=0x001000000000ad76
- (void)deviceInspectorPreviewOnElement:(id)arg1;	// IMP=0x001000000000abf0
- (void)deviceInspectorMoveWithOptions:(id)arg1;	// IMP=0x001000000000a9e1
- (void)deviceInspectorFocusOnElement:(id)arg1;	// IMP=0x001000000000a85b
- (void)highlightElements:(id)arg1;	// IMP=0x001000000000a642
- (void)highlightElement:(id)arg1;	// IMP=0x001000000000a59c
- (void)auditCategorySetup;	// IMP=0x001000000000a596
- (id)_deviceCaptureScreenshot;	// IMP=0x001000000000a4f6
- (void)connectionInterrupted;	// IMP=0x001000000000a44a
- (id)deviceCaptureScreenshot;	// IMP=0x001000000000a34e
- (id)synchronousDeviceCaptureScreenshot;	// IMP=0x001000000000a33c
- (void)setApplicationStateNotificationsEnabled:(_Bool)arg1;	// IMP=0x001000000000a1c1
- (void)_appStateChanged:(id)arg1;	// IMP=0x0010000000009c8d
- (id)initWithTransport:(id)arg1;	// IMP=0x0010000000009c0d

@end

