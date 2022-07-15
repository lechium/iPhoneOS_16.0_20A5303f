//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AWAttentionAwarenessClient, AWAttentionAwarenessConfiguration, NSMutableDictionary, NSString;
@protocol BLSHUserIdleProvidingDelegate;

__attribute__((visibility("hidden")))
@interface BLSHUserIdleProvider : NSObject
{
    _Bool _shouldNotifyOfUnidle;	// 8 = 0x8
    _Bool _shouldNotifyOfUnidleChanged;	// 9 = 0x9
    id <BLSHUserIdleProvidingDelegate> _delegate;	// 16 = 0x10
    double _idleTimeout;	// 24 = 0x18
    AWAttentionAwarenessClient *_attentionAwarenessClient;	// 32 = 0x20
    AWAttentionAwarenessConfiguration *_attentionAwarenessConfiguration;	// 40 = 0x28
    NSMutableDictionary *_attentionLostTimeoutDictionary;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000501e4
@property(nonatomic) _Bool shouldNotifyOfUnidleChanged; // @synthesize shouldNotifyOfUnidleChanged=_shouldNotifyOfUnidleChanged;
@property(retain, nonatomic) NSMutableDictionary *attentionLostTimeoutDictionary; // @synthesize attentionLostTimeoutDictionary=_attentionLostTimeoutDictionary;
@property(retain, nonatomic) AWAttentionAwarenessConfiguration *attentionAwarenessConfiguration; // @synthesize attentionAwarenessConfiguration=_attentionAwarenessConfiguration;
@property(retain, nonatomic) AWAttentionAwarenessClient *attentionAwarenessClient; // @synthesize attentionAwarenessClient=_attentionAwarenessClient;
@property(readonly, nonatomic) double idleTimeout; // @synthesize idleTimeout=_idleTimeout;
@property(nonatomic) _Bool shouldNotifyOfUnidle; // @synthesize shouldNotifyOfUnidle=_shouldNotifyOfUnidle;
@property(nonatomic) __weak id <BLSHUserIdleProvidingDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_invalidate;	// IMP=0x000000000005008c
- (void)_reset;	// IMP=0x000000000004fffc
- (void)_resume;	// IMP=0x000000000004ff78
- (void)_pause;	// IMP=0x000000000004fef4
- (void)_setShouldNotifyOfUnidle:(_Bool)arg1;	// IMP=0x000000000004fe43
- (void)_setIdleTimeout:(double)arg1 shouldReset:(_Bool)arg2;	// IMP=0x000000000004fab6
- (void)invalidate;	// IMP=0x000000000004fa59
- (void)reset;	// IMP=0x000000000004f9fc
- (void)pause;	// IMP=0x000000000004f99f
- (void)resume;	// IMP=0x000000000004f942
- (void)setIdleTimeout:(double)arg1 shouldReset:(_Bool)arg2;	// IMP=0x000000000004f86a
- (id)init;	// IMP=0x000000000004f4b8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
