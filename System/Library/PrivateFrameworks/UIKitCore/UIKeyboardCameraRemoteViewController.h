//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_UIRemoteViewController.h"

@class NSString;
@protocol UIKeyboardCameraRemoteViewControllerHost;

__attribute__((visibility("hidden")))
@interface UIKeyboardCameraRemoteViewController : _UIRemoteViewController
{
    id <UIKeyboardCameraRemoteViewControllerHost> _delegate;	// 8 = 0x8
}

+ (id)exportedInterface;	// IMP=0x0010000000b639e2
+ (id)serviceViewControllerInterface;	// IMP=0x0010000000b639c2
- (void).cxx_destruct;	// IMP=0x0000000000b63afc
@property(nonatomic) __weak id <UIKeyboardCameraRemoteViewControllerHost> delegate; // @synthesize delegate=_delegate;
- (_Bool)_canShowWhileLocked;	// IMP=0x0000000000b63ac7
- (void)keyboardCameraDidCancel;	// IMP=0x0000000000b63a93
- (void)keyboardCameraDidAccept;	// IMP=0x0000000000b63a5f
- (void)keyboardCameraDidUpdateString:(id)arg1;	// IMP=0x0000000000b63a02

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
