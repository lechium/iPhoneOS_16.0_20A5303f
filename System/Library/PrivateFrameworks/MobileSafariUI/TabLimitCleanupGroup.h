//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIAlertAction;

__attribute__((visibility("hidden")))
@interface TabLimitCleanupGroup : NSObject
{
    UIAlertAction *_action;	// 8 = 0x8
    NSString *_message;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001709b3
@property(readonly, copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(readonly, nonatomic) UIAlertAction *action; // @synthesize action=_action;
- (id)initWithAlertMesssage:(id)arg1 actionTitle:(id)arg2 tabs:(id)arg3 browserWindowController:(id)arg4 resultHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000001704a8

@end
