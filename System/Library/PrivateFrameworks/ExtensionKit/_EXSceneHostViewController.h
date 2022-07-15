//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSString, NSUUID, _EXExtensionProcessHandle;

__attribute__((visibility("hidden")))
@interface _EXSceneHostViewController : UIViewController
{
    _EXExtensionProcessHandle *_extensionProcess;	// 8 = 0x8
    NSUUID *_sessionUUID;	// 16 = 0x10
    NSString *_role;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000001c0a
@property(retain) NSString *role; // @synthesize role=_role;
@property(retain) NSUUID *sessionUUID; // @synthesize sessionUUID=_sessionUUID;
@property(retain) _EXExtensionProcessHandle *extensionProcess; // @synthesize extensionProcess=_extensionProcess;
- (void)loadView;	// IMP=0x0000000000001ac5
- (id)initWithExtensionProcess:(id)arg1 sessionUUID:(id)arg2 role:(id)arg3;	// IMP=0x00000000000019ff

@end
