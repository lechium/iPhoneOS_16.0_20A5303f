//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface UIStoryboardUnwindSegueTemplate
{
    NSString *_action;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000fb8a2e
@property(copy, nonatomic) NSString *action; // @synthesize action=_action;
- (id)_performWithDestinationViewController:(id)arg1 sender:(id)arg2;	// IMP=0x0000000000fb8883
- (id)_perform:(id)arg1;	// IMP=0x0000000000fb87fd
- (id)segueWithDestinationViewController:(id)arg1;	// IMP=0x0000000000fb849c
- (id)instantiateOrFindDestinationViewControllerWithSender:(id)arg1;	// IMP=0x0000000000fb83c2
- (id)_legacyUnwindExecutorForTarget:(id)arg1;	// IMP=0x0000000000fb82d7
- (CDUnknownBlockType)newDefaultPerformHandlerForSegue:(id)arg1;	// IMP=0x0000000000fb7fca
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000fb7df9
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000fb7d47

@end
