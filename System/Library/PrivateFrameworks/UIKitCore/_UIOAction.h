//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BaseBoard/BSAction.h>

@class _UIOActionOriginContext;

__attribute__((visibility("hidden")))
@interface _UIOAction : BSAction
{
    _UIOActionOriginContext *_originContext;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000124ffa3
- (_Bool)isPermitted;	// IMP=0x000000000124ff9b
- (void)performActionFromConnection:(id)arg1;	// IMP=0x000000000124fef1
@property(readonly, nonatomic) _UIOActionOriginContext *originContext;
- (id)initWithOriginContext:(id)arg1 info:(id)arg2 responder:(id)arg3;	// IMP=0x000000000124fb0d

@end

